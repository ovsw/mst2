<div class="body-rte">
  
  <?=$page->render('modular_content'); ?>

  <?php if ($page->id == '1062' || ($page->parent->id == '1062' && $page->id != '1098')) : ?>
    <p class="performance-cta-btn"><a class="button" href="<?= $pages->get('1098')->url ?>">Apply Now <i class="fas fa-chevron-right"></i></a></p>      
  <?php endif; ?>

</div>
<!-- /.body-rte -->