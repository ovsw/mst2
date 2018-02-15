<!doctype html>
<html class="no-js" lang="en">
  <?php require($config->paths->templates . 'includes/head-landing.inc');  ?>
  <body>
    <!--[if lte IE 9]>
      <p class="browserupgrade">You are using an <strong>outdated</strong> browser. Please <a href="https://browsehappy.com/">upgrade your browser</a> to improve your experience and security.</p>
    <![endif]-->

    <header class="header">
      <div class="header__wrapper">
        <a href="/" class="header__logo">
          <img src="<?= $config->urls->templates ?>assets/images/mainstages-logo-horizontal.png" alt="Mainstages Logo"> 
        </a>
      </div>
      <!-- /.header__wrapper -->
    </header>

    <section class="hero">

      <div class="hero__bg-wrapper">
        <h1 class="hero__heading"><span>An</span> educational theater <span class="second">company </span> for children</h1>
      </div>
      <!-- /.hero__bg-wrapper -->
      
      <div class="hero__cards-wrapper">
        <div class="hero__cards">
          

        
      <?php 
      $i = 0;
      foreach ($page->landing_cards as $card) : $i++; ?>      
        
            <div class="hero__card n-<?= $i ?>">
              <div class="hero__card-text n-<?= $i ?>">
              
                <h2 class="hero__card-title"><?= $card->title ?></h2>
                <div class="hero__card-icon" style="background-image: url('<?= $card->card_icon->url ?>')"></div>
                <div class="hero__card-description n-<?= $i ?>"><?= $card->card_short_desc ?></div>
                <a class="button hero__card-button n-<?= $i ?>" href="<?= $card->read_more_link ?>">Learn more</a>
              <a class="button hero__card-button n-<?= $i ?>" href="<?= $card->cta_link ?>">Book us</a>
              </div>
              <!-- /.hero__card-text -->

            </div>
            <!-- /.hero__card -->
       
      <?php endforeach; ?>
          </div>
          <!-- /.hero__cards-wrapper -->
        </div>
        <!-- /.hero__cards -->

      
      <div class="hero__left-curtain"></div>
      <div class="hero__right-curtain"></div>
    
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

    <?php if($page->editable()) echo "<p><a href='$page->editURL'>Edit</a></p>"; ?>

    <script src="<?= $config->urls->templates?>assets/scripts/common-bundle.js"></script>
    <script src="<?= $config->urls->templates?>assets/scripts/landing-bundle.js"></script>
  </body>
</html>