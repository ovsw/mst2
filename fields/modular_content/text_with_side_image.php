<div class="body-rte__text-w-side-image">
  
  <?php $sideImage = $page->side_content_image; ?>
  <div class="body-rte__side-image-wrapper">
    <img width="150" class="body-rte__side-image body-rte__rounded-image" src="<?= $sideImage ? $sideImage->getCrop("crop")->url : "http://placehold.it/150x150" ?>" alt="<?= $sideImage->description ?>">
  </div>
  <!-- /.body-rte__side-image-wrapper -->
    <div class="body-rte__side-text">
    <h3><?= $page->title ?></h3>
    <?= $page->body ?>
  </div>
  <!-- /.body-rte__side-text -->
</div>
<!-- /.body-rte__text-w-side-image -->