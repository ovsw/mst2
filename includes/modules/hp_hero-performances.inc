<section class="hero hero--performances">
  <?php require($config->paths->templates."includes/modules/hero-video-performances.inc");
    ?>
  <div class="hero__content">
    <h1 class="hero__heading"><?= $page->hero_title ?></h1>
    <p class="hero__hookline"><span><?= $page->blurb ?></span></p>
    <a class="button hero__cta" href="<?= $page->page_selector_any->url ?>"><?= $page->caption ?></a>
  </div>
  <!-- /.hero__content -->
  <img class="hero__left-curtain" src="/site/templates/assets/images/left-courtain.png">
  <img class="hero__right-curtain" src="/site/templates/assets/images/right-courtain.png">
</section>