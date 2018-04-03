<!doctype html>
<html class="no-js" lang="en">
  <?php require($config->paths->templates . 'includes/head-landing.inc');  ?>
  <body>
    <!--[if lte IE 9]>
      <p class="browserupgrade">You are using an <strong>outdated</strong> browser. Please <a href="https://browsehappy.com/">upgrade your browser</a> to improve your experience and security.</p>
    <![endif]-->

    <div class="se-pre-con"></div>

    <header class="header">
      <div class="header__wrapper">
        <a href="/" class="header__logo">
          <img src="<?= $config->urls->templates ?>assets/images/mainstages-logo-horizontal.png" alt="Mainstages Logo"> 
        </a>
        <?php require($config->paths->templates."includes/modules/topnav-landing.inc"); ?>
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
        
            <a class="hero__card n-<?= $i ?>" href="<?= $card->read_more_link ?>">
              <div class="hero__card-text n-<?= $i ?>">
              
                <h2 class="hero__card-title"><?= $card->title ?></h2>
                <div class="hero__card-description n-<?= $i ?>"><?= $card->card_short_desc ?></div>
                <span class="button hero__card-button n-<?= $i ?>">Learn More</span>
              <!-- <a class="button hero__card-button n-<?= $i ?>" href="<?= $card->cta_link ?>">Book us</a> -->
              </div>
              <!-- /.hero__card-text -->

            </a>
            <!-- /.hero__card -->
       
      <?php endforeach; ?>
          </div>
          <!-- /.hero__cards-wrapper -->
        </div>
        <!-- /.hero__cards -->

      
      <!-- <div class="hero__left-curtain"></div>
      <div class="hero__right-curtain"></div> -->
    
    </section>

    <?php require($config->paths->templates."includes/footer.inc"); ?>

    <?php if($page->editable()) echo "<p><a href='$page->editURL'>Edit</a></p>"; ?>

<!-- google analytics code -->
<script>
(function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
(i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
})(window,document,'script','//www.google-analytics.com/analytics.js','ga');

ga('create', 'UA-22185905-1', 'mainstages.com');
ga('send', 'pageview');
</script>
<!-- end google analytics code -->

    <script src="<?= $config->urls->templates?>assets/scripts/common-bundle.js"></script>
    <script src="<?= $config->urls->templates?>assets/scripts/vendor/fa-brands.js"></script>    
    <script src="<?= $config->urls->templates?>assets/scripts/vendor/fontawesome.min.js"></script>
    <script src="<?= $config->urls->templates?>assets/scripts/landing-bundle.js"></script>

  </body>
</html>