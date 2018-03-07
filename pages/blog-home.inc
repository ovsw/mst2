
<div class="body-rte">

  <?php foreach ($page->children as $post) : ?>

    <div class="body-rte__text-w-side-image blog-posts__wrapper">
      
      <?php $sideImage = $post->basic_hero_image; ?>
      <a class="blog-posts__img-wrapper" href="<?= $post->url ?>">
        <img class="body-rte__side-image body-rte__rounded-image" src="<?= $sideImage ? $sideImage->getCrop("blog-thumbnail")->url : "http://placehold.it/150x150" ?>" alt="<?= $sideImage->description ?>">
      </a>
      <div class="body-rte__side-text">
      <h2 class="blog-posts__title"><a href="<?= $post->url ?>"><?= $post->title ?></a></h2>
      <h3 class="blog-posts__date"><?= $post->blog_post_date ?></h3>
        <p class="blog-posts__short-desc"><?= $post->blog_post_short_desc ?><br><a href="<?= $post->url ?>">read full post</a></p> 
      </div>
    </div>
    <!-- /.body-rte__text-w-side-image -->

  <?php endforeach; ?>

</div>
<!-- /.body-rte -->