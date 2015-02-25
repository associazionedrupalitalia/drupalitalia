<?php
/**
 * @file
 * dio_membership.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function dio_membership_commerce_product_default_types() {
  $items = array(
    'iscrizione_associazione' => array(
      'type' => 'iscrizione_associazione',
      'name' => 'Iscrizione all\'associazione',
      'description' => '',
      'help' => '',
      'revision' => 0,
    ),
  );
  return $items;
}
