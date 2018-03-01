<nav class="top-nav__header-menu">
  <div class="top-nav__main-menu-wrapper">
    <div class="top-nav__menus">
        <?php 
          $topMenu = $modules->get("MarkupSimpleNavigation");
          $topMenuRootPage = $pages->get('1051');
          $topMenuOptions = array(
            'parent_class' => 'top-nav__active-parent',
            'current_class' => 'top-nav__current',
            'has_children_class' => 'top-nav__has-children',
            'levels' => true,
            'levels_prefix' => 'top-nav__item-level-',
            'max_levels' => 2,
            'firstlast' => true,
            'collapsed' => false,
            'show_root' => true,
            'selector' => 'template!=blog-post',
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
          echo $topMenu->render($topMenuOptions, null, $topMenuRootPage); ?>
    </div>
    <!-- /.menus -->

    <div class="menu-cross-links">
      <span class="menu-cross-links__title">See also:</span>
      <a href="<?= $pages->get('1058')->url ?>" class="performances">Performances</a>
      <a href="<?= $pages->get('1336')->url ?>" class="families">Families</a>
    </div>
    <!-- /.menu-cross-links -->

  </div>
  <!-- /.main-menu-wrapper -->


  <!-- <div class="image-buttons-wrapper">
    <a href="#" class="image-button"><span>Performances</span></a>
    <a href="#" class="image-button"><span>Families</span></a>
    <a href="#" class="image-button"><span>Link 1</span></a>
  </div> -->

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
