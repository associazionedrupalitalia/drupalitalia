<?php
/**
 * @file
 * notizie_eventi.features.inc
 */

/**
 * Implements hook_views_api().
 */
function notizie_eventi_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function notizie_eventi_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Notizie'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
  );
  return $items;
}
