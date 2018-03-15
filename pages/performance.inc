<div class="body-rte">
  <?=$page->render('modular_content'); ?>

  <h3>Recommended audiences:</h3>
  <ul>
    <li>ages:
      <?php 
        $i = 1;
        foreach ($page->age_range as $age) { 
          echo $age->title;
          if ($i < count($page->age_range)) {
            echo ", ";
          }
          $i++;
        } ?>
    </li>

    <?php 
    $optionTotalString = '';
    foreach ($page->no_of_participants as $selectedOption) {
      $optionTotalString .= $selectedOption->value;

      $optionTotalString = str_replace("o", "", $optionTotalString); // remove all the o's from the string - they are needed to make valid class names for mixitup

      $minStr = substr($optionTotalString, 0, 3);
      $maxStr = substr($optionTotalString, -3);

      if ($optionTotalString == '250500') {
        $participants = 'over 250';
      }else if ($maxStr == 500) {
        $participants = 'from '.ltrim($minStr, '0').' to 250+';
      }else {
        $participants = 'from '.ltrim($minStr, '0').' to '.ltrim($maxStr, '0');
      }
    } ?>
    <li>size: <?= $participants ?></li>   
  </ul>

  <?= $pages->get("1058")->get("ct_".$page->performance_type->value); ?>

  <?= $pages->get("1058")->ct_all_performances ?>


  

</div>
<p class="performance-cta-btn"><a class="button" href="<?= $pages->get('1061')->url ?>">Get a Quote</a></p>
<!-- /.body-rte -->