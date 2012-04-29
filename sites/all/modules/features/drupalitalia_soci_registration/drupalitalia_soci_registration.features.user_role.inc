<?php
/**
 * @file
 * drupalitalia_soci_registration.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function drupalitalia_soci_registration_user_default_roles() {
  $roles = array();

  // Exported role: socio effettivo.
  $roles['socio effettivo'] = array(
    'name' => 'socio effettivo',
    'weight' => '2',
  );

  // Exported role: socio fondatore.
  $roles['socio fondatore'] = array(
    'name' => 'socio fondatore',
    'weight' => '3',
  );

  // Exported role: socio onorario.
  $roles['socio onorario'] = array(
    'name' => 'socio onorario',
    'weight' => '1',
  );

  // Exported role: socio sostenitore.
  $roles['socio sostenitore'] = array(
    'name' => 'socio sostenitore',
    'weight' => '4',
  );

  return $roles;
}
