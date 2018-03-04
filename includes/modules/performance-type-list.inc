<div class="performance-list performance-wizard">
    
    <?php foreach ($performances as $performance) : ?>
      <a class="performance-list__item performance mix" href="<?= $performance->url ?>">

        <h3 class="performance-list__title performance__title"><?= $performance->title ?></h3>
        <div class="performance__details">
          
          <div class="performance__age-range"><span class="icon"><i class="fas fa-child fa-fw" title="age ranges"></i></span>&nbsp;&nbsp;
            <?php foreach ($performance->age_range as $i => $age) { 
              echo $age->title; 
              echo ($i < count($performance->age_range) ? ", " : "");
              $i++;
            } ?>
          </div>

          <div class="performance__participants"><span class="icon"><i class="fas fa-users fa-fw" title="number of participants"></i></span> &nbsp;&nbsp;
            <span class="performance__min-participants"> <?= $performance->min_participants->title ?></span>
            <span class="performance__max-participants">- <?= $performance->max_participants->title ?></span>
          </div>

          <?php if ( count($performance->themes) > 0 ) : ?>
          <div class="performance__age-range" style="overflow:hidden;"><span class="icon" style="float:left;margin-top:3px;"><i class="fas fa-book fa-fw" title="age ranges"></i></span>
            <div style="float-left; padding-top:10px;margin-left:40px;">
              <?php $i=0; foreach ($performance->themes as $item) : $i++;?>
                <span><?= $item->title ?><?= $i < count($performance->themes) ? ", " : "" ?></span>
              <?php endforeach; ?>
            </div>
          </div>
          <?php endif; ?>

          <?php if ( count($performance->holidays) > 0 ) : ?>
          <div class="performance__age-range" style="clear:both;"><span class="icon"><i class="fas fa-star fa-fw" title="age ranges"></i></span>&nbsp;&nbsp;
            <?php $i=0; foreach ($performance->holidays as $item) : $i++;?>
              <span><?= $item->title ?><?= $i < count($performance->holidays) ? ", " : "" ?></span>
            <?php endforeach; ?>
          </div>
          <?php endif; ?>
        
        </div>
        <!-- /.performance__details -->
      </a>
      <!-- /.performance-list__item -->
      
    <?php endforeach; ?>
    <div class="gap"></div>
    <div class="gap"></div>
    <div class="gap"></div>
  </div>
  <!-- /.performance-list -->