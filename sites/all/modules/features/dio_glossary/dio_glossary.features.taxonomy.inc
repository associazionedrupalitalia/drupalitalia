<?php
/**
 * @file
 * dio_glossary.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dio_glossary_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_13' => array(
      'name' => 'Glossario',
      'machine_name' => 'vocabulary_13',
      'description' => 'Termini del glossario per la gestione della traduzione',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
