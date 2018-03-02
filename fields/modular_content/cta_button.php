
<?php if ($page->page_selector_any && $page->title != '') : ?>
<p class="performance-cta-btn"><a class="button" href="<?= $page->page_selector_any->url ?>"><?= $page->title ?> <i class="far fa-chevron-right"></i></a></p>  
<?php endif; ?>
