<head>
    <?php require($config->paths->templates.'includes/head-common.inc'); ?>

    <?php if ($config->httpHost == "mst2.ovs") : ?>
      <link rel="stylesheet" href="<?= $config->urls->templates?>assets/styles/vendor/fa-svg-with-js.css" />
      <link rel="stylesheet" href="<?php echo $config->urls->templates?>assets/styles/styles-programming.css" />
    <?php else : ?>
      <link rel="stylesheet" href="<?php echo AllInOneMinify::CSS(array('assets/styles/vendor/fa-svg-with-js.css', 'assets/styles/styles-programming.css')); ?>">
    <?php endif; ?>
  </head>