<!doctype html>
<html class="no-js" lang="en">
  <head>
    <meta charset="utf-8">
    <meta http-equiv="x-ua-compatible" content="ie=edge">
    <title><?php echo $page->title; ?></title>
    <meta name="description" content="">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <link rel="manifest" href="site.webmanifest">
    <link rel="apple-touch-icon" href="icon.png">
    <!-- Place favicon.ico in the root directory -->

    <script src="https://ajax.googleapis.com/ajax/libs/webfont/1.6.26/webfont.js"></script>
    <script>
      // WebFont.load({
      //   google: {
      //     families: ['PT Sans', 'Open Sans', 'Josefin Sans']
      //   }
      // });

    WebFontConfig = {
      typekit: { id: 'bea5cur' }
    };

    (function(d) {
        var wf = d.createElement('script'), s = d.scripts[0];
        wf.src = 'https://ajax.googleapis.com/ajax/libs/webfont/1.6.26/webfont.js';
        wf.async = true;
        s.parentNode.insertBefore(wf, s);
     })(document);
    </script>

    <link rel="stylesheet" href="<?php echo $config->urls->templates?>assets/styles/styles-performances.css" />
  </head>
  <body>
    <!--[if lte IE 9]>
      <p class="browserupgrade">You are using an <strong>outdated</strong> browser. Please <a href="https://browsehappy.com/">upgrade your browser</a> to improve your experience and security.</p>
    <![endif]-->

<!--     <div class="controls">
      <button type="button" data-filter="all">All</button>
      <button type="button" data-filter=".interactive">Interactive</button>
      <button type="button" data-filter=".mystery">Mystery</button>
      <button type="button" data-filter=".judaism">Performing Judaism</button>
    </div>
 -->

    <form class="performance-wizard__controls">
      <fieldset data-filter-group class="performance-wizard__controls__fieldset small">
        <label for="performance_type">Performance Type</label>
        <select class="performance-wizard__controls__select" name="performance_type">
          <option value="" default>any</option>
          <?php 
          $field = $fields->get('performance_type');
          $fieldOptions = $field->type->getOptions($field);
          foreach ($fieldOptions as $type) : ?>
          <option value=".<?= $type->value ?>"><?= $type->title ?></option>
          <?php endforeach ?>
        </select>
      </fieldset>

      <fieldset data-filter-group class="performance-wizard__controls__fieldset small">
        <label for="no_of_participants"># of participants</label>
        <select class="performance-wizard__controls__select" name="no_of_participants">
          <option value="" default>any</option>
          <?php 
          $field = $fields->get('no_of_participants');
          $fieldOptions = $field->type->getOptions($field);
          foreach ($fieldOptions as $option) : ?>
          <option value=".<?= $option->value ?>"><?= $option->title ?></option>
          <?php endforeach ?>
        </select>
      </fieldset>

      <fieldset data-filter-group class="performance-wizard__controls__fieldset">
          Age range:
          <?php 
          $field = $fields->get('age_range');
          $fieldOptions = $field->type->getOptions($field);
          foreach ($fieldOptions as $option) : ?>
          <button class="performance-wizard__controls__button" type="button" data-toggle=".<?= $option->value ?>"><?= $option->title ?></button>
          <?php endforeach ?>
      </fieldset>

      <fieldset data-filter-group data-logic="or" class="performance-wizard__controls__fieldset">
          Theme:
          <?php 
          $field = $fields->get('themes');
          $fieldOptions = $field->type->getOptions($field);
          foreach ($fieldOptions as $option) : ?>
          <button class="performance-wizard__controls__button" type="button" data-toggle=".<?= $option->value ?>"><?= $option->title ?></button>
          <?php endforeach ?>
      </fieldset>

      <fieldset data-filter-group data-logic="or" class="performance-wizard__controls__fieldset">
          Holiday:
          <?php 
          $field = $fields->get('holidays');
          $fieldOptions = $field->type->getOptions($field);
          foreach ($fieldOptions as $option) : ?>
          <button class="performance-wizard__controls__button" type="button" data-toggle=".<?= $option->value ?>"><?= $option->title ?></button>
          <?php endforeach ?>
      </fieldset>

  </form>

    <div class="performance-wizard">
      
      <?php $performances = $pages->find("template=wizard-performance"); ?>
      <?php foreach ($performances as $performance) : 

      $performanceItemClass = 'performance mix';

      foreach ($performance->performance_type as $type) {$performanceItemClass .= ' '.$type->value;}
      foreach ($performance->age_range as $age) {$performanceItemClass .= ' '.$age->value;}
      foreach ($performance->no_of_participants as $noOfParticipants) {$performanceItemClass .= ' '.$noOfParticipants->value;}
      foreach ($performance->themes as $theme) {$performanceItemClass .= ' '.$theme->value;}
      foreach ($performance->holidays as $holliday) {$performanceItemClass .= ' '.$holliday->value;}
      ?>

      <div class="<?= $performanceItemClass ?>">
        <h3 class="performance__title"><?= $performance->title ?></h3>
        <p><?= $performance->short_description != "" ?  $performance->short-description : "Placeholder performance description goes here lorem ipsum dolor sit amet consequitur adipiscit elit." ?></p> 
        <div class="performance__details">
          <div class="performance__type"><strong>Type:</strong>
            <?php foreach ($performance->performance_type as $type) { 
                $string = substr($type->title, -1) == "s" ? substr($type->title, 0, -1)." " : $type->title." ";// remove trailing 's'
                echo $string;
            }?>    
          </div>
          <div class="performance__age-range"><strong>Age ranges:</strong>
            <?php foreach ($performance->age_range as $age) { echo $age->title." "; } ?>
          </div>
          <div class="performance__participants"><strong># of participants:</strong>
            <span class="performance__min-participants">from <?= $performance->min_participants->title ?></span>
            <span class="performance__max-participants">to <?= $performance->max_participants->title ?></span>
          </div>
          <!-- /.performance__participants -->
          
          
        </div>
        <!-- /.performance__details -->
      </div>
      <!-- /.performance --> 
      <?php endforeach ?>

      <p class="no-results-message">No results found!</p>
    </div>
    <!-- /.performance-wizard -->    
  
  <?php require($config->paths->templates . 'includes/foot-performances.inc');  ?>
  </body>
</html>