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


<div  class="nav-icon"><span></span><span></span><span></span><span></span></div>
<div id="sideNav" class="sidenav">
  <a href="#">About Us</a>
  <a href="#">Staff</a>
  <a href="#">Families</a>
  <a href="#">Enroll Now</a>
  <a href="#">Contact Us</a>
</div>

<!-- Use any element to open the sidenav -->


<!-- Add all page content inside this div if you want the side nav to push page content to the right (not used if you only want the sidenav to sit on top of the page -->
<div class="mainWrapper">
  
  <?php require($config->paths->templates."includes/modules/topnav-programming.inc") ?>


    <section class="package-slide hero-section packageSlide0">
      <div class="package-slide__content-wrapper">
        <div class="package-slide__content">
              <span class="headerPrefix">meet the</span>
              <h1 class="mainTitle">  Mainstages Theater Program</h1>
              <p class="tagLine">for both Camp and After-School Services <br><!--  customized &#9679; supervized &#9679; full-featured --></p>
              <h2 class="mainSubtitle">the perfect answer to your Theater Program needs</h2>
        </div>
        <!-- /.content -->
        <a href="#" class="scrollBtn"><span></span>Down for More</a>
      </div>
      <!-- /.diagram-container -->
    </section>
    <!-- /.hero-section -->

    <?php $i = 0; foreach ($page->programming_hp_slides as $slide) : $i++;?>

    <section class="package-slide packageSlide<?= $i ?>">
      <div class="package-slide__content-wrapper">
        <div class="package-slide__content">
              <!-- <h2 class="slideTitle">A comprehensive package</h2> -->
              <h2 class="package-slide__title"><?= $slide->title ?></h2>
              <p class="package-slide__undertitle"><?= $slide->subtitle ?></p>
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