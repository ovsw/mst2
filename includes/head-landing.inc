<head>
    <?php require($config->paths->templates.'includes/head-common.inc'); ?>

    <?php if ($config->httpHost == "mst2.ovs") : ?>
    <link rel="stylesheet" href="<?php echo $config->urls->templates?>assets/styles/styles-landing.css" />
    <?php else : ?>
    <link rel="stylesheet" type="text/css" href="<?php echo AllInOneMinify::CSS('assets/styles/styles-landing.css'); ?>">
    <?php endif; ?>

    
  </head>