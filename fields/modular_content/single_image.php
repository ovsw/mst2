<?php $singleImage = $page->matrix_content_image; $caption = $page->caption?>
<?php if ($caption) echo "<figure>"; ?>
<?php if ($page->image_type->value == 'cropped') : ?>

  <picture>
    <source srcset="<?= $singleImage ? $singleImage->getCrop("small")->url : "http://placehold.it/400x300" ?>" media="(max-width: 767px)">
    <source srcset="<?= $singleImage ? $singleImage->getCrop("medium")->url : "http://placehold.it/1024x400" ?>" media="(max-width: 1200px)">
    <img class="body-rte__singe-image" src="<?= $singleImage ? $singleImage->getCrop("large")->url : "http://placehold.it/1920x580" ?>" alt="<?= $singleImage->description ?>">
  </picture>

<?php else : ?>

  <picture>
    <source srcset="<?= $singleImage ? $singleImage->width(700)->url : "http://placehold.it/400x300" ?>" media="(max-width: 767px)">
    <source srcset="<?= $singleImage ? $singleImage->width(1200)->url : "http://placehold.it/1024x400" ?>" media="(max-width: 1200px)">
    <img class="body-rte__singe-image" src="<?= $singleImage ? $singleImage->width(960)->url : "http://placehold.it/1920x580" ?>" alt="<?= $singleImage->description ?>">
  </picture>

<?php endif; ?>

<?php if ($caption) echo "<figcaption>$caption</figcaption></figure>"; ?>
      
    