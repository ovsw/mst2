<div class="body-rte">
  <?=$page->render('modular_content'); ?>

  <h3>Recommended audiences:</h3>
  <ul>
    <li>ages: <?php foreach ($page->age_range as $i => $age) { 
              echo $age->title; 
              echo ($i < count($page->age_range) ? ", " : "");
              $i++;
            } ?></li>
    <li>size: <?= $page->min_participants->title ?> to  <?= $page->max_participants->title ?></li>   
  </ul>

  <?= $pages->get("1058")->get("ct_".$page->performance_type->value); ?>

  <?= $pages->get("1058")->ct_all_performances ?>


  

</div>
<p class="performance-cta-btn"><a class="button" href="<?= $pages->get('1061')->url ?>">Get a Quote</a></p>
<!-- /.body-rte -->