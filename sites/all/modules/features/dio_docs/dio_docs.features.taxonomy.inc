<?php
/**
 * @file
 * dio_docs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dio_docs_taxonomy_default_vocabularies() {
  return array(
    'argomenti_documentazione' => array(
      'name' => 'Argomenti',
      'machine_name' => 'argomenti_documentazione',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
