
<!-- google analytics code -->
<script>
(function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
(i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
})(window,document,'script','//www.google-analytics.com/analytics.js','ga');

ga('create', 'UA-22185905-1', 'mainstages.com');
ga('send', 'pageview');
</script>
<!-- end google analytics code -->

    <?php if($user->isLoggedin()) echo "<a href='$page->editURL' class='adminEditLink'>Edit</a>"; ?>    

    <script src="<?= $config->urls->templates?>assets/scripts/common-bundle.js?v=2"></script>
    <script src="<?= $config->urls->templates?>assets/scripts/vendor/fa-brands.js"></script>        
    <script src="<?= $config->urls->templates?>assets/scripts/vendor/fa-solid.js"></script>
    <script src="<?= $config->urls->templates?>assets/scripts/vendor/fontawesome.min.js"></script>
    <script src="<?= $config->urls->templates?>assets/scripts/performances-bundle.js?v=2"></script>