<?php require($config->paths->templates.'includes/modules/hp_hero-perf-fam.inc'); ?>

    <section class="slidecards">
      
      <div class="slidecards__heading-wrapper">
        <h2><?= $page->hp_cards_heading ?></h2>
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
      <!-- <h2 class="testimonial-slider__heading">Testimonials</h2> -->
      <ul id="light-slider">
        <?php $testimonialsPage = $pages->get('1096');?>
        <?php require($config->paths->templates.'includes/modules/hp-testimonials.inc'); ?>
      </ul>

    </section>
    <!-- /.testimonial-slider -->