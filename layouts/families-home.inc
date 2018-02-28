<?php 
$wizardPageid = '1343'; require($config->paths->templates.'includes/modules/hp_hero-perf-fam.inc'); ?>

    
    <section class="testimonial-slider">
      <!-- <h2 class="testimonial-slider__heading">Testimonials</h2> -->
      <ul id="light-slider">
        <?php $testimonialsPage = $pages->get('1472');?> 
        <?php require($config->paths->templates.'includes/modules/hp-testimonials.inc'); ?>
      </ul>

    </section>
    <!-- /.testimonial-slider -->

    <section class="hp-featured">
    <div class="hp-featured__wrapper">
      <?php if(count($page->featured_slider) > 0) :?>
        <?php foreach ($page->featured_slider as $i=>$item) : $i++; ?>
          
          <div class="hp-featured__item <?= $i % 2 == 0 ? 'even' : ''; ?>">
            
            <div class="hp-featured__image-wrapper">
              <?php $image = $item->featured_slider_image; ?>
                <picture>
                  <source media="(max-width: 764px)" srcset="<?= $image ? $image->getCrop("small-medium")->url : "http://placehold.it/500x500"; ?>" alt="<?=$image ? $image->description : '';?>">
                  <img class="hp-featured__image" src="<?= $image ? $image->getCrop("large")->url : "http://placehold.it/800x800"; ?>" alt="<?=$image ? $image->description : '';?>">
                </picture>
            </div>
            <!-- /.hp-featured__image-wrapper -->

            <div class="hp-featured__content-wrapper">
              <div class="hp-featured__content">
                <h2 class="hp-featured__title"><?= $item->title ?></h2>
                <div class="hp-featured__text">
                  <?= $item->featured_slider_content ?>
                </div>
                <!-- /.hp-featured__text -->
                <a class="button hp-featured__cta" href="<?= $item->cta_link ?>"><?= $item->caption ?></a>
              </div>
              <!-- /.hp-featured__content -->
            </div>
            <!-- /.hp-featured__content-wrapper -->

          </div>
          <!-- /.hp-featured__item -->
          
        <?php endforeach; ?>
      <?php endif; ?>
    </div>
    <!-- /.hp-featured__wrapper -->
    </section>
    <!-- /.hp-featured -->