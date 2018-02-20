<div class="basic-page">

  <section class="basic-page__header">
    <?php require($config->paths->templates."includes/modules/hero-video-performances.inc");?>
    <div class="basic-page__header-content">
      <h1 class="basic-page__header-title"><?= $page->title ?></h1>
    </div>
  </section>

  <?php require($config->paths->templates."pages/".$page->template.".inc");?>

</div>