<div class="body-rte">
  <?=$page->render('modular_content'); ?>

  <?php if ($page->parent->id == '1081') :$programmingHome = $pages->get('1051'); ?>
    <?= $programmingHome->ct_program_partner.$programmingHome->ct_the_one ?>
  <?php endif; ?>
</div>
<!-- /.body-rte -->