<nav class="top-nav__header-menu">
  <div class="top-nav__main-menu-wrapper">
    <div class="top-nav__menus">
        <p class="top-nav__mobile-title">Performances</p>
        <?php 
          $topMenu = $modules->get("MarkupSimpleNavigation");
          $sectionRootPage = $pages->get('1058');
          $topMenuPages = $sectionRootPage->children();
          $topMenuPages->prepend($pages->get('1058'));
          $topMenuPages->prepend($pages->get('1'));

          $topMenuOptions = array(
            'parent_class' => 'top-nav__active-parent',
            'current_class' => 'top-nav__current',
            'has_children_class' => 'top-nav__has-children',
            'levels' => true,
            'levels_prefix' => 'top-nav__item-level-',
            'max_levels' => 3,
            'firstlast' => true,
            'collapsed' => false,
            'show_root' => false,
            'selector' => 'template!=performance',
            'selector_level2' => "parent!=1058,parent!=1015",
            'selector_field' => 'nav_selector',
            'outer_tpl' => '<ul class="top-nav__outer-list" id="menu-main-menu">||</ul>',
            'inner_tpl' => '<ul class="top-nav__inner-list">||</ul>',
            'list_tpl' => '<li%s>||</li>',
            'list_field_class' => 'menu-item p-{id}',
            'item_tpl' => '<a href="{link_url|url}">{menu_title|title}</i></a><span class="top-nav__submenu-button "><i class="fas fa-plus top-nav__ico-plus"></i><i class="fas fa-minus top-nav__ico-minus"></i></span>',
            'item_current_tpl' => '<a href="{link_url|url}">{menu_title|title}</i></a><span class="top-nav__submenu-button"><i class="fas fa-plus top-nav__ico-plus"></i><i class="fas fa-minus top-nav__ico-minus"></i></span>',
            'code_formatting' => true,
            'debug' => false
        );
          //<i class="fas fa-plus top-nav__ico-plus"></i><i class="fas fa-minus top-nav__ico-minus"></i>
          echo $topMenu->render($topMenuOptions, null, $topMenuPages);?>
    </div>
    <!-- /.menus -->

    <div class="menu-cross-links">
      <span class="menu-cross-links__title"><a href="tel:1-347-878-2431"><i class="fas fa-phone"></i> 347-878-2431</a> </span>
      <!-- <a class="crosslink programming" href="<?= $pages->get('1051')->url ?>">mainstages Programming</a>
      <a class="crosslink families" href="<?= $pages->get('1336')->url ?>">mainstages for Families</a> -->
    </div>
    <!-- /.menu-cross-links -->

  </div>
  <!-- /.main-menu-wrapper -->

  <div class="top-nav__image-buttons-wrapper">

    <?php foreach ($pages->get('1058')->menu_quick_links_repeater as $item) : ?>
    
    <a href="<?= $item->page_selector_any->url ?>" 
    class="image-button" style="background-image: url('<?= $item->menu_quick_link_image->getCrop('crop_size')->url ?>');">
    <span><?= $item->title ?></span></a>
    <?php endforeach; ?>
    
  </div>
  <!-- /.image-buttons-wrapper -->

</nav>
<!-- /.top-nav -->

<a class="header__menu-trigger">
  <span class="label">Menu</span>
  <div class="header__menu-icon"> 
    <div class="header__menu-icon__middle"></div>
  </div>
  <!-- /.header__menu-icon -->
</a> <!-- /.header__menu-menu-trigger -->
