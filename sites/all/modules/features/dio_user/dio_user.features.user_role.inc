<?php
/**
 * @file
 * dio_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dio_user_user_default_roles() {
  $roles = array();

  // Exported role: amministratore.
  $roles['amministratore'] = array(
    'name' => 'amministratore',
    'weight' => 0,
  );

  // Exported role: redattore.
  $roles['redattore'] = array(
    'name' => 'redattore',
    'weight' => 0,
  );

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 5,
  );

  return $roles;
}
