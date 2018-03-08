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
  <?php if ($page->id == '1051') : ?>
    <div class="se-pre-con"></div>
  <?php endif; ?>
  

  <header class="header">
    <div id="overlay"></div>
    <div class="header__wrapper">
      <a href="/" class="header__logo">
        <img src="<?= $config->urls->templates ?>assets/images/mainstages-logo-horizontal.png" alt="Mainstages Logo"> 
      </a>
      <?php require($config->paths->templates."includes/modules/topnav-programming.inc"); ?>
    </div>
    <!-- /.header__wrapper -->
  </header>

<div id="page" class="mainWrapper">
  
 
<?php 
  switch ($page->template) {
    case "programming-home":
      $layout = "programming-home.inc";
      break;
    case "programming-basic-page":
      $layout = "programming-basic.inc";
      break;
    case "wizard":
      $layout = "programming-basic.inc";
      break;
    case "blog-home":
      $layout = "programming-basic.inc";
      break;
    case "blog-post":
      $layout = "programming-basic.inc";
      break;
    default:
    $layout = "programming-basic.inc";
  } 
  
  require ($config->paths->templates."layouts/".$layout);
?>
    
</div>
<!-- /.mainWrapper -->

  <?php require($config->paths->templates."includes/footer.inc"); ?> 

  <?php require($config->paths->templates."includes/foot-programming.inc"); ?>

  </body>
</html>