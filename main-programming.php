<!doctype html>
<html class="no-js" lang="en">
  <head>
    <meta charset="utf-8">
    <meta http-equiv="x-ua-compatible" content="ie=edge">
    <title><?php echo $page->title; ?></title>
    <meta name="description" content="">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <link rel="manifest" href="site.webmanifest">
    <link rel="apple-touch-icon" href="icon.png">
    <!-- Place favicon.ico in the root directory -->

    <script src="https://ajax.googleapis.com/ajax/libs/webfont/1.6.26/webfont.js"></script>
    <script>
      WebFont.load({
        google: {
          families: ['PT Sans', 'Open Sans', 'Josefin Sans']
        }
      });

    WebFontConfig = {
      typekit: { id: 'bea5cur' }
    };

    (function(d) {
        var wf = d.createElement('script'), s = d.scripts[0];
        wf.src = 'https://ajax.googleapis.com/ajax/libs/webfont/1.6.26/webfont.js';
        wf.async = true;
        s.parentNode.insertBefore(wf, s);
     })(document);
    </script>

    <link rel="stylesheet" href="<?php echo $config->urls->templates?>assets/styles/styles-programming.css" />
  </head>
  <body>
    <!--[if lte IE 9]>
      <p class="browserupgrade">You are using an <strong>outdated</strong> browser. Please <a href="https://browsehappy.com/">upgrade your browser</a> to improve your experience and security.</p>
    <![endif]-->

  <header class="header">
      <div class="header__wrapper">
        <a href="/" class="header__logo">
          <img src="<?= $config->urls->templates ?>assets/images/mainstages-logo-horizontal.png" alt="Mainstages Logo"> 
        </a>
        <?php require($config->paths->templates."includes/modules/topnav-programming.inc"); ?>
      </div>
      <!-- /.header__wrapper -->
    </header>

<div class="mainWrapper">
  
 


    <section class="package-slide hero packageSlide0">
      <div class="package-slide__content-wrapper ">
        <div class="package-slide__content">
              <span class="hero__headerPrefix">meet the</span>
              <h1 class="hero__mainTitle">  Mainstages Theater Program</h1>
              <p class="hero__tagLine">for both Camp and <br> After-School Services</p>
              <img class="package-slide__mobile-image" src="/site/templates/assets/images/programming/main-cover.png" alt="Mainstages Theater ina Box">
              <h2 class="hero__mainSubtitle">the perfect answer to your Theater Program needs</h2>
        </div>
        <!-- /.content -->
        <a href="#" class="scrollBtn"><span></span>Down for More</a>
      </div>
      <!-- /.diagram-container -->
    </section>
    <!-- /.hero-section -->

    <?php $i = 0; foreach ($page->programming_hp_slides as $slide) : $i++; 

      $imageArray = [
        "/site/templates/assets/images/programming/main-cover.png",
        "/site/templates/assets/images/programming/whole-adnotated.png",
        "/site/templates/assets/images/programming/base-adnotated.png",
        "/site/templates/assets/images/programming/back-adnotated.png",
        "/site/templates/assets/images/programming/left-adnotated.png",
        "/site/templates/assets/images/programming/right-adnotated.png",
        "/site/templates/assets/images/programming/front-adnotated.png"
      ];
    
    ?>

    <section class="package-slide packageSlide<?= $i ?>">
      <div class="package-slide__content-wrapper">
        <div class="package-slide__content">
              <!-- <h2 class="slideTitle">A comprehensive package</h2> -->
              <h2 class="package-slide__title"><?= $slide->title ?></h2>
              <p class="package-slide__undertitle"><?= $slide->subtitle ?></p>
              <img class="package-slide__mobile-image" src="<?= $imageArray[$i] ?>" alt="Mainstages Theater ina Box">
              <div class="package-slide__rte">
                <?= $slide->programming_slide_rte ?>
              </div>
              <!-- /.package-slide__rte -->
        </div>
        <!-- /.content -->
      </div>
      <!-- /.diagram-container -->
    </section>
    <!-- /.package-slide #packageSlide<?= $i ?> -->

    <?php endforeach; ?>
    
</div>
<!-- /.mainWrapper -->

  <?php require($config->paths->templates."includes/foot-programming.inc"); ?>

  </body>
</html>