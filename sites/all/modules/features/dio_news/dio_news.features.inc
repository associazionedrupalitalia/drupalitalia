<?php
/**
 * @file
 * dio_news.features.inc
 */

/**
 * Implements hook_views_api().
 */
function dio_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dio_news_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Notizie'),
      'base' => 'node_content',
      'description' => t('Usa gli <em>articoli</em> per contenuti come notizie, comunicati stampa o post di un blog.'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
