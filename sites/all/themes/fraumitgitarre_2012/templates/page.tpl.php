<?php 
/**
 * @file
 * Alpha's theme implementation to display a single Drupal page.
 */
?>

<div<?php print $attributes; ?>>
  <?php if (isset($page['header'])) : ?>
    <?php print render($page['header']); ?>
  <?php endif; ?>
  
  <?php if (isset($page['content'])) : ?>
    <?php print render($page['content']); ?>
  <?php endif; ?>  
  
  <?php if (isset($page['footer'])) : ?>
    <?php print render($page['footer']); ?>
  <?php endif; ?>
</div>

<div id="social-buttons">
  <a href="https://www.facebook.com/NadineMariaSchmidt" title="facebook" target="_blank" id="fb"></a>
  <a href="http://www.youtube.com/user/SchmidtscherKanal?feature=watch" title="youtube" target="_blank" id="youtube"></a>
   <a href="https://soundcloud.com/nadine-maria-schmidt" title="soundcloud" target="_blank" id="soundcloud"></a>
</div>