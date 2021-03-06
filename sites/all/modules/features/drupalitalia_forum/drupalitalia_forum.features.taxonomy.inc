<?php
/**
 * @file
 * drupalitalia_forum.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function drupalitalia_forum_taxonomy_default_vocabularies() {
  return array(
    'forum_structure' => array(
      'name' => 'Forum',
      'machine_name' => 'forum_structure',
      'description' => 'Questo vocabolario è il contenitore per tutti i forum',
      'hierarchy' => '1',
      'module' => 'forum',
      'weight' => '-10',
    ),
    'vocabulary_14' => array(
      'name' => 'Versione Drupal',
      'machine_name' => 'vocabulary_14',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
