<?php
/**
 * @file
 * Tags taxonomy migration.
 */
class DrupalItaliaTaxonomyTagsMigration extends Migration {

  /**
   * Class constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->description = t('Migrate tags from csv file to tags vocabulary');

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'term' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Forum source term',
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $source_file = drupal_get_path('module', 'drupalitalia_migrations') . '/data/taxonomy_tags.csv';

    $columns = array(
      array('term', 'term'),
    );

    $this->source = new MigrateSourceCSV(
      $source_file,
      $columns,
      array(
        'header_rows' => 1,
        'delimiter' => ',',
        'enclosure' => '"',
      )
    );

    $this->destination = new MigrateDestinationTerm('tags');

    $this->addFieldMapping('name', 'term');

    $this->addUnmigratedDestinations(
      array(
        'description',
        'format',
        'weight',
        'path',
        'parent',
      )
    );
  }
}
