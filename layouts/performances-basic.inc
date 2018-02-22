<div class="basic-page">

  <section class="basic-page__hero">
    <div class="basic-page__hero-bg-image-source">
      <?php $heroImage = $page->basic_hero_image ?>
      <picture>
        <source srcset="<?= $heroImage ? $heroImage->getCrop("small")->url : "http://placehold.it/400x300" ?>" media="(max-width: 767px)">
        <source srcset="<?= $heroImage ? $heroImage->getCrop("medium")->url : "http://placehold.it/1024x400" ?>" media="(max-width: 1200px)">
        <img class="basic-page__hero-bg-image" src="<?= $heroImage ? $heroImage->getCrop("large")->url : "http://placehold.it/1920x580" ?>" alt="<?= $page->title ?>">
      </picture>
    </div>
    <!-- /.basic-page__hero-bg-image-source -->
    
    <div class="basic-page__hero-overlay"></div>
    <div class="basic-page__hero-content">
      <h1 class="basic-page__hero-title"><?= $page->title ?></h1>
    </div>
  </section>

  <section class="basic-page__content">
    <div class="basic-page__content-wrapper">
      <?php require($config->paths->templates."pages/".$page->template.".inc");?>
    </div>
    <!-- /.basic-page__content-wrapper -->
    
  </section>
  

</div>