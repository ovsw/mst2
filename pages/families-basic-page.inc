<div class="body-rte">

  <?php if ($page->page_content_selector) {
    $contenPage = $page->page_content_selector;
  }else{
    $contenPage = $page;
  }
  ?>

  <?=$contenPage->render('modular_content'); ?>

</div>
<!-- /.body-rte -->