<?php
/**
 * @file
 * drupalitalia_forum.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function drupalitalia_forum_user_default_roles() {
  $roles = array();

  // Exported role: moderatore.
  $roles['moderatore'] = array(
    'name' => 'moderatore',
    'weight' => '0',
  );

  return $roles;
}
