<?php
/**
 * @file
 * association_verbal.features.inc
 */

/**
 * Implements hook_node_info().
 */
function association_verbal_node_info() {
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
  return $items;
}
