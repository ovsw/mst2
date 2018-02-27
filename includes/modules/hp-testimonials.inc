<?php  foreach ($testimonialsPage->modular_content as $i => $block) :
            if($block->type == "testimonials_list") : ?>
              <?php foreach ($block->testimonials_repeater as $testimonial) : ?>
                <li>
                  <div class="testimonial-slider__content">
                    <p class="testimonial-slider__text"><span>“ </span><?= $testimonial->testimonial_content ?><span class="endquote">”</span></p>
                    <p class="testimonial-slider__author">- <?= $testimonial->title ?>, <span class="testimonial-slider__company"><?= $testimonial->company ?></span></p>
                  </div>
                  <!-- /.testimonial-slider__contnet -->
                </li>
              <?php endforeach; ?>
            <?php endif; ?>
          <?php endforeach; ?>