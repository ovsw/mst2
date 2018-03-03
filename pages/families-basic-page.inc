<div class="body-rte">

  <?php if ($page->page_content_selector) {
    $contenPage = $page->page_content_selector;
  }else{
    $contenPage = $page;
  }
  ?>

  <?=$contenPage->render('modular_content'); ?>

  <?php if ($page->id == '1491') : ?>
    <p class="performance-cta-btn"><a class="button" href="<?= $pages->get('1493')->url ?>"><?= $pages->get('1493')->title ?> <i class="far fa-chevron-right"></i></a></p>      
  <?php endif; ?>

</div>
<!-- /.body-rte -->