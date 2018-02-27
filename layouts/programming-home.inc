<section class="package-slide hero packageSlide0">
      <div class="package-slide__content-wrapper ">
        <div class="package-slide__content">
              <span class="hero__headerPrefix">meet the</span>
              <h1 class="hero__mainTitle">  Mainstages Theater Program</h1>
              <p class="hero__tagLine">for Summer Camps and <br> After-Schools</p>
              <img class="package-slide__mobile-image" src="/site/templates/assets/images/programming/main-cover.png" alt="Mainstages Theater ina Box">
              <h2 class="hero__mainSubtitle">the perfect answer to your Theater Program needs</h2>
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

      $linksArray = $pages->get('1081')->children();
    
    ?>

    <section class="package-slide packageSlide<?= $i ?>">
      <div class="package-slide__content-wrapper">
        <div class="package-slide__content">
              <!-- <h2 class="slideTitle">A comprehensive package</h2> -->
              <h2 class="package-slide__title"><?= $slide->title ?></h2>
              <p class="package-slide__undertitle"><?= $slide->subtitle ?></p>
              <img class="package-slide__mobile-image" src="<?= $imageArray[$i] ?>" alt="Mainstages Theater ina Box">
              <div class="body-rte">
                <?= $slide->programming_slide_rte ?>
                <?php if ( $i > 1 ) : ?>
                <a class="button package-slide__button" href="<?= $linksArray[($i-2)]->url?>">Click for Details</a>
                <?php endif; ?>
              </div>
              <!-- /.package-slide__rte -->
        </div>
        <!-- /.content -->
      </div>
      <!-- /.diagram-container -->
    </section>
    <!-- /.package-slide #packageSlide<?= $i ?> -->

    <?php endforeach; ?>

    <section class="testimonial-slider">
      <h2 class="testimonial-slider__heading">Testimonials</h2>
      <ul id="light-slider">
        <?php $testimonialsPage = $pages->get('1150');?> 
        <?php require($config->paths->templates.'includes/modules/hp-testimonials.inc'); ?>
      </ul>

    </section>
    <!-- /.testimonial-slider -->