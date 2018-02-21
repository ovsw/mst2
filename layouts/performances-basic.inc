<div class="basic-page">

  <section class="basic-page__header">
    <?php //require($config->paths->templates."includes/modules/hero-video-performances.inc");?>
    <div class="basic-page__header-content">
      <h1 class="basic-page__header-title"><?= $page->title ?></h1>
    </div>
  </section>

  <section class="basic-page__content">
    <div class="basic-page__content-wrapper">
      <?php require($config->paths->templates."pages/".$page->template.".inc");?>
    </div>
    <!-- /.basic-page__content-wrapper -->
    
  </section>
  

</div>