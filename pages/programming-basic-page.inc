<div class="body-rte">
  <?=$page->render('modular_content'); ?>

  <?php if ($page->parent->id == '1081') : ?>
    <?= $pages->get('1051')->ct_camp_program ?>
  <?php endif; ?>
  <?php if ($page->parent->id == '1610') : ?>
    <?= $pages->get('1051')->ct_afterschool_program ?>
  <?php endif; ?>
  
  <?php if ($page->parent->id == '1081' || $page->parent->id == '1610') : ?>
    <p class="performance-cta-btn"><a class="button" href="<?= $pages->get('1090')->url ?>"><?= $pages->get('1090')->title ?> <i class="far fa-chevron-right"></i></a></p>
  <?php endif; ?>
</div>
<!-- /.body-rte -->