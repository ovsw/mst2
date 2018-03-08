<!doctype html>
<html class="no-js" lang="en">
  <?php require($config->paths->templates . 'includes/head-programming.inc');  ?>
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