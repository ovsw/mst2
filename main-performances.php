<!doctype html>
<html class="no-js" lang="en">
  <?php require($config->paths->templates . 'includes/head.inc');  ?>
  <body>
    <!--[if lte IE 9]>
      <p class="browserupgrade">You are using an <strong>outdated</strong> browser. Please <a href="https://browsehappy.com/">upgrade your browser</a> to improve your experience and security.</p>
    <![endif]-->


<div  class="nav-icon"><span></span><span></span><span></span><span></span></div>
<div id="sideNav" class="sidenav">
  <a href="#">About Us</a>
  <a href="#">Staff</a>
  <a href="#">Families</a>
  <a href="#">Enroll Now</a>
  <a href="#">Contact Us</a>
</div>

<!-- Use any element to open the sidenav -->


<!-- Add all page content inside this div if you want the side nav to push page content to the right (not used if you only want the sidenav to sit on top of the page -->
<div class="mainWrapper">
     <header class="mainHeader">
      
      <a href="/" class="main-logo"><img src="<?= $config->urls->templates ?>images/oasis-children-logo.svg" alt="Oasis Day Camp logo"></a>
      
      <nav role="navigation" class="mainNavWrapper">
        <ul class="mainNav">
          <li>
            <a href="#">About Us</a>
            <ul>
              <li><a href="#">1</a></li>
              <li><a href="#">2</a></li>
              <li><a href="#">3</a></li>
            </ul>
          </li>
          <li><a href="#">Staff</a></li>
          <li><a href="#">Families</a></li>
          <li><a href="#">Enroll Now</a></li>
          <li><a href="#">Contact Us</a></li>
        </ul>
      </nav>

     </header>

    <section>
      <div class="heroWrapper">

        <div class="heroContent">

          <div class="heroMainColumn">
            nothing
          </div>
          <!-- /.hpHeroMainColumn -->
          <div class="heroMainColumn bottomCards">
            <?php for ($i=0; $i < 10 ; $i++) : ?>
            <div class="heroCardWrapper">
              <div class="card">
                <div class="cardFront">
                  <h2 class="cardTitle">Link Title</h2>
                  <p class="cardSubtitle">646-698-1800 <br> Location info here</p>
                </div>
                <!-- /.cardFront -->
                <div class="cardBack">
                  <h2 class="cardTitle">Card Back</h2>
                  <p class="cardSubtitle">646-698-1800 <br> Location info here</p>
                </div>
                <!-- /.cardBack -->
              </div>
              <!-- /.card -->
            </div>
            <!-- /.heroCardBlock -->
            <?php endfor ?>
          </div>
          <!-- /.hpHeroMainColumn -->

        </div>
        <!-- /.heroContent -->
        
        <div class="heroVideoBg">
          <video src="http://<?= $config->httpHost ?><?= $config->urls->templates ?>video/oasis-children-all-camps-intro.mp4" autoplay loop mute>
          </video>
        </div>
        <!-- /.heroVideoBg -->
       
      </div>
      <!-- /.heroWrapper -->
    </section>
     
     <section>
       <h3>hp content</h3>
     </section>
</div>
  <?php require($config->paths->templates . 'includes/foot-performances.inc');  ?>
  </body>
</html>