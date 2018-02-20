<!doctype html>
<html class="no-js" lang="en">
  <?php require($config->paths->templates . 'includes/head-performances.inc');  ?>
  <body>
    <!--[if lte IE 9]>
      <p class="browserupgrade">You are using an <strong>outdated</strong> browser. Please <a href="https://browsehappy.com/">upgrade your browser</a> to improve your experience and security.</p>
    <![endif]-->

    <header class="header">
      <div class="header__wrapper">
        <a href="/" class="header__logo">
          <img src="<?= $config->urls->templates ?>assets/images/mainstages-logo-horizontal.png" alt="Mainstages Logo"> 
        </a>
        <?php require($config->paths->templates."includes/modules/topnav-performances.inc"); ?>
      </div>
      <!-- /.header__wrapper -->
    </header>


    <section class="hero">
      <video class="hero__video-bg" playsinline autoplay muted loop poster="http://odcv-ac97.kxcdn.com/oasis-intro-video-cover.jpg">
        <source src="<?= $config->urls->templates ?>assets/video/mainstages-intro-montage.mp4" type="video/mp4">
        <!-- http://odcv-ac97.kxcdn.com/oasis-intro-short-hq.mp4 -->
        <!-- <source src="http://odcv-ac97.kxcdn.com/oasis-intro-short-hq.ogv" type="video/ogg">
        <source src="http://odcv-ac97.kxcdn.com/oasis-intro-short-hq.webm" type="video/webm"> -->
      </video> 
      <!-- /.large_hero__video-bg -->
      <div class="hero__content">
        <h1 class="hero__heading">Our Performances</h1>
        <p class="hero__hookline"><span>Thre are over 30 shows for you to choose from.<br> Use the performance wizard to find the right one for your needs.</span></p>
        <a class="button hero__cta" href="#">find your performance -></a>
      </div>
      <!-- /.hero__content -->
    </section>

    <section class="slidecards">
      
      <div class="slidecards__heading-wrapper">
        <h2>Explore Performances</h2>
      </div>

      <div class="slidecards__cards-wrapper">
        <?php 
        $cards = $page->cards_repeater;
        $i = 0;
        foreach ($cards as $card) : $i++;?>
        <div class="slidecards__card<?= $i==1 ? ' open' : '' ?>" style="background-image: url('<?= $card->card_background_image->getCrop("card-small")->url ?>');">
          <div class="slidecards__card-wrapper n-<?= $i ?>">
            <h3 class="slidecards__card-title n-<?= $i ?>"><span><?= $card->title ?></span></h3>
            <h4 class="slidecards__card-subtitle"><?= $card->subtitle ?></h4>
            <p class="slidecards__card-description"><?= $card->short_description ?></p>
            <a href="<?= $card->cta_link ?>" class="button slidecards__card-button n-<?= $i ?>">learn more</a>
          </div>
          <!-- /.slidecards__card-wrapper -->    
          </div>
        <!-- /.slidecards__card -->
        <?php endforeach; ?>
      </div>
      <!-- /.slidecards__cardswrapper -->
      
    </section>
    <!-- /.slidecards -->


    <?php require($config->paths->templates."includes/footer-performances.inc") ?>

  <?php require($config->paths->templates . 'includes/foot-performances.inc');  ?>
  </body>
</html>