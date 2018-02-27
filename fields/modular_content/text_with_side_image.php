<div class="body-rte__text-w-side-image">
  <h3><?= $page->title ?></h3>
  <?php $sideImage = $page->side_content_image; ?>
  <img class="body-rte__side-image body-rte__rounded-image" src="<?= $sideImage ? $sideImage->getCrop("crop")->url : "http://placehold.it/150x150" ?>" alt="<?= $sideImage->description ?>">
  <div class="body-rte__side-text">
    <?= $page->body ?>
  </div>
  <!-- /.body-rte__side-text -->
</div>
<!-- /.body-rte__text-w-side-image -->