<div class="body-rte">
  
  <?=$page->render('modular_content'); ?>

  <?php if ($page->id == '1491') : ?>
    <p class="performance-cta-btn"><a class="button" href="<?= $pages->get('1493')->url ?>"><?= $pages->get('1493')->title ?> <i class="fas fa-chevron-right"></i></a></p>      
  <?php endif; ?>

</div>
<!-- /.body-rte -->

<?php 
  $performancesParent = $pages->get('1015');
  $performancesHomePage = $pages->get('1058');

  $performances = $performancesParent->children('performance_type=1'); ?>
  <div id="interactive-experiences" class="content-anchor"></div>
  <?= $performancesHomePage->ct_interactive ?>
  <?php require($config->paths->templates."includes/modules/performance-type-list.inc"); ?>

  <div id="game-shows" class="content-anchor"></div>
  <?php $performances = $performancesParent->children('performance_type=2'); ?>
  <?= $performancesHomePage->ct_game ?>
  <?php require($config->paths->templates."includes/modules/performance-type-list.inc"); ?>

  <div id="perform-judaism" class="content-anchor"></div>
  <?php $performances = $performancesParent->children('performance_type=5'); ?>
  <?= $performancesHomePage->ct_judaism ?>
  <?php require($config->paths->templates."includes/modules/performance-type-list.inc"); ?>
  
  <div id="mystery-shows" class="content-anchor"></div>
  <?php $performances = $performancesParent->children('performance_type=3'); ?>
  <?= $performancesHomePage->ct_mystery ?>
  <?php require($config->paths->templates."includes/modules/performance-type-list.inc"); ?>

  <div id="custom-experiences" class="content-anchor"></div>
  <?php $performances = $performancesParent->children('performance_type=4'); ?>
  <?= $performancesHomePage->ct_custom ?>
  <?php require($config->paths->templates."includes/modules/performance-type-list.inc"); ?>

  