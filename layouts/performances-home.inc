<section class="hero">
      <?php require($config->paths->templates."includes/modules/hero-video-performances.inc");
       ?>
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

    <section class="testimonial-slider">
      <h2 class="testimonial-slider__heading">Testimonials</h2>
      <ul id="light-slider">
        
        <?php foreach ($page->testimonials_repeater as $testimonial) : ?>
        <li>
          <div class="testimonial-slider__content">
            <p class="testimonial-slider__text"><span>“ </span><?= $testimonial->testimonial_content ?><span class="endquote">”</span></p>
            <p class="testimonial-slider__author">- <?= $testimonial->title ?>, <span class="testimonial-slider__company"><?= $testimonial->company ?></span></p>
          </div>
          <!-- /.testimonial-slider__contnet -->
        </li>
        <?php endforeach; ?>
      </ul>

    </section>
    <!-- /.testimonial-slider -->