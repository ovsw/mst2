<div class="performance-list performance-wizard">
    
    <?php foreach ($performances as $performance) : ?>
      <a class="performance-list__item performance mix" href="<?= $performance->url ?>">
      <div class="performance__wrapper">
        <h3 class="performance-list__title performance__title"><?= $performance->title ?></h3>
        <div class="performance__details">
          
          <div class="performance__details-row">
            <span class="icon"><i class="fas fa-child fa-fw" title="age ranges"></i></span>
            <div class="performance__detail-text">
              <?php foreach ($performance->age_range as $i => $age) { 
                echo $age->title; 
                echo ($i < count($performance->age_range) ? ", " : "");
                $i++;
              } ?>
            </div>
          </div>

          <?php 
            $optionTotalString = '';
            foreach ($performance->no_of_participants as $selectedOption) {
              
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
            }
          ?>

          <div class="performance__details-row">
            <span class="icon"><i class="fas fa-users fa-fw" title="number of participants"></i></span>
            <div class="performance__detail-text">
              <span><?= $participants ?></span>
            </div>
          </div>

          <?php if ( count($performance->themes) > 0 ) : ?>
          <div class="performance__details-row">
            <span class="icon" ><i class="fas fa-book fa-fw" title="age ranges"></i></span>
            <div class="performance__detail-text">
              <?php $i=0; foreach ($performance->themes as $item) : $i++;?>
                <span><?= $item->title ?><?= $i < count($performance->themes) ? ", " : "" ?></span>
              <?php endforeach; ?>
            </div>
          </div>
          <?php endif; ?>

          <?php if ( count($performance->holidays) > 0 ) : ?>
          <div class="performance__details-row">
            <span class="icon"><i class="fas fa-star fa-fw" title="age ranges"></i></span>
            <div class="performance__detail-text">
            <?php $i=0; foreach ($performance->holidays as $item) : $i++;?>
              <span><?= $item->title ?><?= $i < count($performance->holidays) ? ", " : "" ?></span>
            <?php endforeach; ?>
            </div>
          </div>
          <?php endif; ?>
        
        </div>
        <!-- /.performance__details -->
      </div>
      <!-- /.performance__wrapper -->
      </a>
      <!-- /.performance-list__item -->
      
    <?php endforeach; ?>
    <div class="gap"></div>
    <div class="gap"></div>
    <div class="gap"></div>
  </div>
  <!-- /.performance-list -->