<?php
/**
 * @file
 * dio_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dio_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'legal_display';
  $strongarm->value = '3';
  $export['legal_display'] = $strongarm;

  return $export;
}
