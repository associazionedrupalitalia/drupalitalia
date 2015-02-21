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
      'DrupalItaliaTaxonomyDoc' => array(
        'class_name' => 'DrupalItaliaTaxonomyDocMigration',
        'group_name' => 'drupalitaliaprod',
      ),
      'DrupalItaliaTaxonomyTags' => array(
        'class_name' => 'DrupalItaliaTaxonomyTagsMigration',
        'group_name' => 'drupalitaliaprod',
      ),
      'DrupalItaliaTaxonomyDrupalVersion' => array(
        'class_name' => 'DrupalItaliaTaxonomyDrupalVersionMigration',
        'group_name' => 'drupalitaliaprod',
      ),
    ),
  );
  return $api;
}
