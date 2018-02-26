<?php foreach ($page->faqs_repeater as $faq) : ?>
  <div class="faqs">
    <div class="faqs__question">
      <h4 class="faqs__question-text"><?= $faq->title ?></h4>
    </div>
    
    <div class="faqs__answer">
      <?= $faq->faq_answer ?>
    </div>
  </div>
  <!-- /.faqs__faq-wrapper -->
<?php endforeach; ?>