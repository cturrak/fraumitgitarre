<?php
/**
 * @file
 * konzerte.features.inc
 */

/**
 * Implements hook_views_api().
 */
function konzerte_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function konzerte_node_info() {
  $items = array(
    'konzerte' => array(
      'name' => t('Konzerte'),
      'base' => 'node_content',
      'description' => t('Adolar - Konzerte'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
