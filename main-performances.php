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
      <h1 class="hero__heading">Our Performances</h1>
      <p class="hero__hookline">Hi, I'm Miles! Thre are over 30 shows for you to choose from. Use the performance wizard to find the right one for your needs.</p>
      <a class="button hero__cta" href="#">find your performance -></a>
    </section>


    <div class="footer__wrapper">
    <footer class="footer">
      <div class="footer__inner-wrapper">
        
        <div class="footer__logos">
          <a href="#" class="footer__logo-link"><img src="<?= $config->urls->templates ?>assets/images/nystea-logo.png" alt="Mainstages Logo"></a>
          <a href="#" class="footer__logo-link"><img src="<?= $config->urls->templates ?>assets/images/mainstages-logo.png" alt="Mainstages Logo"></a>
        </div>

        <div class="footer__row">

          <div class="footer__column footer__column--1">
            <div class="adr">
              <div class="street-address">21-33 29th. Avenue - Suite 2</div>
              <div>
                <span class="locality">Astoria</span>, <span class="region" title="New York">NY</span>
                <span class="postal-code">11102</span>
              </div>
              <div class="country-name">USA</div>
            </div>
          </div>
          
          <div class="footer__column footer__column--2">
            <div>Phone: <a class="tel" href="tel:+1-347-878-2431">347-878-2431</a></span></div>
            <div>Email: <a href="mailto:support@mainstages.com" class="email">support@mainstages.com</a></div>
            <div class="tel"><span class="type">Fax</span>:
            <span class="value">+1-111-111-111</span></div>
          </div>
        </div>

        <p class="footer__copyright">Copyright &copy;<?= date("Y") ?> Mainstages. All Rights Reserved | Website by <a href="http://ovswebsites.com/">OVS Websites</a></p>
      </div>
      <!-- /.footer__inner-wrapper -->
    </footer>
    </div>
    <!-- /.footer__wrapper -->

  <?php require($config->paths->templates . 'includes/foot-performances.inc');  ?>
  </body>
</html>