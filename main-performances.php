<!doctype html>
<html class="no-js" lang="en">
  <?php require($config->paths->templates . 'includes/head-performances.inc');  ?>
  <body>
    <!--[if lte IE 9]>
      <p class="browserupgrade">You are using an <strong>outdated</strong> browser. Please <a href="https://browsehappy.com/">upgrade your browser</a> to improve your experience and security.</p>
    <![endif]-->

    <?php if ($page->id == '1058') : ?>
    <div class="se-pre-con"></div>
  <?php endif; ?>

    <header class="header">
    <div id="overlay"></div>
      <div class="header__wrapper">
        <a href="/" class="header__logo">
          <img src="<?= $config->urls->templates ?>assets/images/mainstages-logo-horizontal.png" alt="Mainstages Logo"> 
        </a>
        <?php require($config->paths->templates."includes/modules/topnav-performances.inc"); ?>
      </div>
      <!-- /.header__wrapper -->
    </header>

    <?php 
      switch ($page->template) {
        case "performances-home":
          $layout = "performances-home.inc";
          break;
        case "performances-basic-page":
          $layout = "performances-basic.inc";
          break;
        case "wizard":
          $layout = "performances-basic.inc";
          break;
        case "performances-list":
            $layout = "performances-basic.inc";
            break;
        case "performance":
          $layout = "performances-basic.inc";
          break;
        default:
          echo "<h1>No Template File Found!</h1>";
      } 
      
      require ($config->paths->templates."layouts/".$layout);
      ?>


    <?php require($config->paths->templates."includes/footer.inc"); ?>

  <?php require($config->paths->templates . 'includes/foot-performances.inc');  ?>
  </body>
</html>