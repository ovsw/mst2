<div class="testimonials-rte__wrapper">
  <?php foreach ($page->testimonials_repeater as $testimonial) : ?>
    
      <div class="testimonials-rte__testimonial <?= count($page->testimonials_repeater) == 1 ? 'single' : '' ?>">
        <p class="testimonials-rte__text">“<?= $testimonial->testimonial_content ?>”</p>
        <p class="testimonials-rte__author">- <?= $testimonial->title ?>, <span class="testimonial-slider__company"><?= $testimonial->company ?></span></p>
      </div>
      <!-- /.testimonial-slider__contnet -->
    
  <?php endforeach; ?>
</div>
<!-- /.testimonials-rte__wrapper -->