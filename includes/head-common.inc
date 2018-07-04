<meta charset="utf-8">
    <meta http-equiv="x-ua-compatible" content="ie=edge">
    <title><?= $page->seo->title ?></title>
    
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <meta name="description" content="<?= $page->seo->title ?>" />
    <meta name="image" content="http://www.mainstages.com/site/templates/assets/images/hero/group-outside.jpg" />
    <meta name="robots" content="index, follow" />
    <link rel="canonical" href="<?= $config->https ? 'https://'.$config->httpHost.$page->url : 'http://'.$config->httpHost.$page->url ?>" />
    <meta name="generator" content="ProcessWire 3.0.98" />
    <meta property="og:site_name" content="mainstages" />
    <meta property="og:title" content="<?= $page->seo->title ?>" />
    <meta property="og:url" content="<?= $config->https ? 'https//:'.$config->httpHost.$page->url : 'http//:'.$config->httpHost.$page->url ?>" />
    <meta property="og:description" content="<?= $page->seo->title ?>" />
    <meta property="og:type" content="website" />
    <?php if ($page->basic_hero_image) : ?>
<meta property="og:image" content="<?= $config->https ? 'https//' : 'http://' ?><?= $config->httpHost.$page->basic_hero_image->getCrop("small")->url ?>" />
    <?php else : ?>
<meta property="og:image" content="<?= $page->seo->image ?>" />
    <?php endif; ?>
<meta name="twitter:card" content="summary" />
    <meta name="twitter:site" content="@mainstages" />
    <meta name="twitter:title" content="<?= $page->seo->title ?>" />
    <meta name="twitter:url" content="<?= $config->https ? 'https//:'.$config->httpHost.$page->url : 'http//:'.$config->httpHost.$page->url ?>" />
    <meta name="twitter:description" content="<?= $page->seo->title ?>" />
    <?php if ($page->basic_hero_image) : ?>
<meta name="twitter:image" content="<?= $config->https ? 'https//' : 'http://' ?><?= $config->httpHost.$page->basic_hero_image->getCrop("small")->url ?>" />
    <?php else : ?>
<meta property="og:image" content="<?= $page->seo->image ?>" />
    <?php endif; ?>
    
    <link rel="manifest" href="site.webmanifest">
    <link rel="apple-touch-icon" href="icon.png">
    <!-- Place favicon.ico in the root directory -->

    <script src="https://ajax.googleapis.com/ajax/libs/webfont/1.6.26/webfont.js"></script>
    <script>
    WebFontConfig = {
      typekit: { id: 'bea5cur' }
    };

    (function(d) {
        var wf = d.createElement('script'), s = d.scripts[0];
        wf.src = 'https://ajax.googleapis.com/ajax/libs/webfont/1.6.26/webfont.js';
        wf.async = true;
        s.parentNode.insertBefore(wf, s);
     })(document);
    </script>