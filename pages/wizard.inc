<?= $page->body ?>

<p class="mobileWarning">If you want to search by theme or holiday, please access the website on a tablet or desktop.</p>

<form class="performance-wizard__controls">
      <fieldset data-filter-group class="performance-wizard__controls__fieldset small">
        <label for="performance_type" style="display:block">Performance Type</label>
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
        <label for="no_of_participants" style="display:block">Est. # of participants</label>
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

      <fieldset data-filter-group class="performance-wizard__controls__fieldset" data-logic="and" style="clear:both">
          Age range:
          <?php 
          $field = $fields->get('age_range');
          $fieldOptions = $field->type->getOptions($field);
          foreach ($fieldOptions as $option) : ?>
          <button class="performance-wizard__controls__button" type="button" data-toggle=".<?= $option->value ?>" data-label="<?= $option->title ?>"><?= $option->title ?></button>
          <?php endforeach ?>
      </fieldset>

      <div class="pretty p-switch p-fill themeFilterToggle">
        <input type="checkbox" />
        <div class="state p-success">
            <label>Filter by Theme</label>
        </div>
      </div>
      
      <fieldset data-filter-group data-logic="or" class="performance-wizard__controls__fieldset themeFieldset">       
          <div class="performance-wizard__ThemeFilters">
          <?php 
          $field = $fields->get('themes');
          $fieldOptions = $field->type->getOptions($field);
          foreach ($fieldOptions as $option) : ?>
          <button class="performance-wizard__controls__button" type="button" data-toggle=".<?= $option->value ?>" data-label="<?= $option->title ?>"><?= $option->title ?></button>
          <?php endforeach ?>
          </div>
          <!-- /.performance-wizard__ThemeFilters -->
      </fieldset>

      <div class="pretty p-switch p-fill holidayFilterToggle">
        <input type="checkbox" />
        <div class="state p-success">
            <label>Filter by Holiday</label>
        </div>
      </div>

      <fieldset data-filter-group data-logic="or" class="performance-wizard__controls__fieldset holidayFieldset">
          <div class="performance-wizard__holidayFilters">
          <?php 
          $field = $fields->get('holidays');
          $fieldOptions = $field->type->getOptions($field);
          foreach ($fieldOptions as $option) : ?>
          <button class="performance-wizard__controls__button" type="button" data-toggle=".<?= $option->value ?>"><?= $option->title ?></button>
          <?php endforeach ?>
          </div>
          <!-- /.performance-wizard__holidayFilters -->
      </fieldset>

  </form>
    <?php $performances = $pages->find("template=performance,sort=title"); ?>

    <p class="wizard-status-message">Currently showing <span class="itemCount"><?= count($performances) ?></span> out of <strong><?= count($performances) ?></strong> performances:</p>
    
    <div class="active-filters">
      
    </div>
    <!-- /.active-filters -->

    <div class="performance-wizard">
      
      
      <?php foreach ($performances as $performance) : 

      $performanceItemClass = 'performance mix';

      foreach ($performance->performance_type as $type) {$performanceItemClass .= ' '.$type->value;}
      foreach ($performance->age_range as $age) {$performanceItemClass .= ' '.$age->value;}
      foreach ($performance->no_of_participants as $noOfParticipants) {$performanceItemClass .= ' '.$noOfParticipants->value;}
      foreach ($performance->themes as $theme) {$performanceItemClass .= ' '.$theme->value;}
      foreach ($performance->holidays as $holliday) {$performanceItemClass .= ' '.$holliday->value;}
      ?>

      <a href="<?= $performance->url ?>" class="<?= $performanceItemClass ?>">
        <div class="performance__wrapper">
        <h3 class="performance__title"><?= $performance->title ?></h3>
        <!-- <p class="performance__description"><?= $performance->short_description != "" ?  $performance->short-description : "Placeholder performance description goes here lorem ipsum dolor sit amet consequitur adipiscit elit." ?></p>  -->
        
        <div class="performance__details">

          <div class="performance__details-row">
            <span class="icon"><i class="fas fa-folder fa-fw"></i></span>
            <div class="performance__detail-text">
              <?php foreach ($performance->performance_type as $i => $type) { 
                  $string = substr($type->title, -1) == "s" ? rtrim($type->title,"s") : " ".$type->title;// remove trailing 's'
                  echo $string; 
                  echo ($i < count($performance->performance_type) ? ", " : "");
                  $i++;
              }?>
            </div>
          </div>
          <!-- /.performance__details-row -->

          <?php 
            $optionTotalString = '';
            foreach ($performance->no_of_participants as $selectedOption) {
              $optionTotalString .= $selectedOption->value;

              $optionTotalString = str_replace("o", "", $optionTotalString); // remove all the o's from the string - they are needed to make valid class names for mixitup

              $minStr = substr($optionTotalString, 0, 3);
              $maxStr = substr($optionTotalString, -3);

              if ($optionTotalString == '250500') {
                $participants = 'over 250';
              }else if ($maxStr == 500) {
                $participants = 'from '.ltrim($minStr, '0').' to 250+';
              }else {
                $participants = 'from '.ltrim($minStr, '0').' to '.ltrim($maxStr, '0');
              }
            }
          ?>

          <div class="performance__details-row">
            <span class="icon"><i class="fas fa-users fa-fw" title="number of participants"></i></span>
            <div class="performance__detail-text">
              <span><?= $participants ?></span>
            </div>
          </div>
          <!-- .performance__details-row -->

          <div class="performance__details-row"><span class="icon">
            <i class="fas fa-child fa-fw" title="age ranges"></i></span>
            <div class="performance__detail-text">
              <?php $i=0; foreach ($performance->age_range as $age) {
                $i++;
                echo $age->title; 
                echo ($i < count($performance->age_range) ? ", " : "");
              } ?>
            </div>
          </div>
          <!-- /.performance__details-row -->
          
          
        </div>
        <!-- /.performance__details -->
      </div>
      <!-- /.performance__wrapper -->
      </a>
      <!-- /.performance --> 
      <?php endforeach ?>

      <div class="gap"></div>
            <div class="gap"></div>
            <div class="gap"></div>

      <p class="no-results-message">Sorry, no results found! <span>That doesn't mean we can't make something amazing for you. <a href="#">Contact us to</a> discuss your custom experience.</span></p>
    </div>
    <!-- /.performance-wizard -->  