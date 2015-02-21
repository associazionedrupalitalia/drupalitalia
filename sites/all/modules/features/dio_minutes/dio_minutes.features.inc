<?php
/**
 * @file
 * dio_minutes.features.inc
 */

/**
 * Implements hook_views_api().
 */
function dio_minutes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dio_minutes_node_info() {
  $items = array(
    'verbali' => array(
      'name' => t('Verbali'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
