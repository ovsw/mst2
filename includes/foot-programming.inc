

    <?php if($user->isLoggedin()) echo "<a href='$page->editURL' class='adminEditLink'>Edit</a>"; ?>

    <script src="<?= $config->urls->templates?>assets/scripts/common-bundle.js"></script>
    <script src="<?= $config->urls->templates?>assets/scripts/vendor/fontawesome-all.js"></script>
    <script src="<?= $config->urls->templates?>assets/scripts/programming-bundle.js"></script>