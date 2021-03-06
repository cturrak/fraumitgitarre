<?php

/**
 * @file likebox.inc
 * 
 * Main (ctools) plugin file for "likebox" plugin type
 */

$plugin = array(
    'title' => t('Like box'), 
    'description' => t('Facebook likebox plugin'), 
    'html tag name' => 'like-box',
    'css' => 'styles.css', 
    
    // hooks 
    'hook_preprocess_fb_social_plugin' => '_fb_social_likebox_preprocess_fb_social_plugin' 
);

function likebox_defaults() {
  return array(
      'href' => '', 
      'width' => 300, 
      'height' => '', 
      'colorscheme' => 'light', 
      'show_faces' => 1, 
      'border_color' => '', 
      'stream' => 1, 
      'header' => 1,
      'force_wall' => 0, 
  );
}

function likebox_fb_settings($options) {
  
  $form = array();
  $form['href'] = array(
      '#type' => 'textfield', 
      '#title' => t('Facebook Page URL'), 
      '#description' => t('The URL of the Facebook Page for this Like box.'),
  );
  
  $form['width'] = array(
      '#type' => 'textfield', 
      '#title' => t('Width'), 
      '#description' => t('The width of the wiget in pixel') 
  );
  
  $form['height'] = array(
      '#type' => 'textfield', 
      '#title' => t('Height'), 
      '#description' => t('The height of the wiget in pixel') 
  );
  
  $form['colorscheme'] = array(
      '#type' => 'select', 
      '#title' => t('Color'), 
      '#description' => t('The color scheme of the plugin'), 
      '#options' => array(
          'dark' => t('dark'), 
          'light' => t('light') 
      ) 
  );
  
  $form['show_faces'] = array(
      '#type' => 'checkbox', 
      '#title' => 'Show faces', 
      '#description' => t('Specifies whether or not to display profile photos in the plugin') 
  );
  
  $form['border_color'] = array(
      '#type' => 'textfield', 
      '#title' => t('Border color'), 
      '#description' => t('The border color of the plugin') 
  );
  
  $form['stream'] = array(
      '#type' => 'checkbox', 
      '#title' => 'Show stream', 
      '#description' => t('Show the profile stream for the public profile') 
  );
  
  $form['header'] = array(
      '#type' => 'checkbox', 
      '#title' => t('Show header'), 
      '#description' => t('Show the "find us on facebook" bar at the top. Only shown when either stream or connections are present') 
  );
  
  $form['force_wall'] = array(
    '#type' => 'checkbox', 
    '#title' => t('Force wall'), 
    '#description' => t('For Places, specifies whether the stream contains posts from the Place\'s wall or just checkins from friends') 
  );
  
  $defaults = likebox_defaults();
  
  foreach ( $form as $id => $f ) {
    $form[$id]['#default_value'] = isset($options[$id]) ? $options[$id] : $defaults[$id];
  }
  
  return $form;
}

function likebox_drupal_settings($options) {
  return array();
}

function _fb_social_likebox_preprocess_fb_social_plugin(&$variables) {
  $options = &$variables['options'];
  $options['show_faces'] = $options['show_faces'] ? "true" : "false";
  $options['stream'] = $options['stream'] ? "true" : "false";
  $options['header'] = $options['header'] ? "true" : "false";
  $options['force_wall'] = $options['force_wall'] ? "true" : "false";
}
