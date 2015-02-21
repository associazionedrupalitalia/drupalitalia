<?php
/**
 * @file
 * Declares our migrations.
 */


/**
 * Implements hook_migrate_api().
 */
function drupalitalia_migrations_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'drupalitaliaprod' => array(
        'title' => t('DrupalItalia Prod'),
      ),
    ),
    'migrations' => array(
      'DrupalItaliaTaxonomyForum' => array(
        'class_name' => 'DrupalItaliaTaxonomyForumMigration',
        'group_name' => 'drupalitaliaprod',
      ),
    ),
  );
  return $api;
}
