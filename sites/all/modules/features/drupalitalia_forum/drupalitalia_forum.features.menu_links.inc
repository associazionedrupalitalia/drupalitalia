<?php
/**
 * @file
 * drupalitalia_forum.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function drupalitalia_forum_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:forum
  $menu_links['main-menu:forum'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forum',
    'options' => array(
      'attributes' => array(
        'title' => 'il forum di Drupal Italia',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Forum');


  return $menu_links;
}
