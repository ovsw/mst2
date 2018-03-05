<section class="package-slide hero packageSlide0">
      <div class="package-slide__content-wrapper ">
        <div class="package-slide__content">
              <span class="hero__headerPrefix"><?= $page->caption ?></span>
              <h1 class="hero__mainTitle">  <?= $page->hero_title ?></h1>
              <p class="hero__tagLine"><?= $page->subtitle ?></p>
              <img class="package-slide__mobile-image" src="/site/templates/assets/images/programming/main-cover.png" alt="Mainstages Theater ina Box">
              <h2 class="hero__mainSubtitle"><?= $page->blurb ?></h2>
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

              <h2 class="package-slide__title"><?= $slide->title ?></h2>
              <p class="package-slide__undertitle"><?= $slide->subtitle ?></p>
              <img class="package-slide__mobile-image" src="<?= $imageArray[$i] ?>" alt="Mainstages Theater ina Box">
              <div class="body-rte">
                <?= $slide->programming_slide_rte ?>
                <?php if ( $slide->programming_hp_slides_camp_link != false && $slide->programming_hp_slides_afterschool_link->url !=false ) : ?>
                <p>See details about <?= $slide->title ?>:</p>
                <?php endif; ?>
                <div class="package-slide__button-wrapper">
                  <?php if ($slide->programming_hp_slides_camp_link) : ?>
                    <a class="button package-slide__button" href="<?= $slide->programming_hp_slides_camp_link->url ?>">Camp <?= $slide->title ?> <i class="fas fa-chevron-right"></i></a><br>
                  <?php endif; ?>
                  <?php if ($slide->programming_hp_slides_camp_link) : ?>
                    <a class="button package-slide__button" href="<?= $slide->programming_hp_slides_afterschool_link->url ?>">Afterschool <?= $slide->title ?> <i class="fas fa-chevron-right"></i></a> 
                  <?php endif; ?>
                </div>
                <!-- /.package-slide__button-wrapper -->
                
              </div>
              <!-- /.body-rte -->

        </div>
        <!-- /.package-slide__content -->
      </div>
      <!-- /.package-slide__content-wrapper -->

    </section>
    <!-- /.package-slide #packageSlide<?= $i ?> -->

    <?php endforeach; ?>

    <section class="testimonial-slider">
      
      <ul id="light-slider">
        <?php $testimonialsPage = $pages->get('1150');?> 
        <?php require($config->paths->templates.'includes/modules/hp-testimonials.inc'); ?>
      </ul>

    </section>
    <!-- /.testimonial-slider -->