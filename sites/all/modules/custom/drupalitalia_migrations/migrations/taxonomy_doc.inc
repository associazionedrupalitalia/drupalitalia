<?php
/**
 * @file
 * Documentation taxonomy migration.
 */
class DrupalItaliaTaxonomyDocMigration extends Migration {

  /**
   * Class constructor.
   */
  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->description = t('Migrate documentation topics from csv file to argomenti_documentazione vocabulary');

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

    $source_file = drupal_get_path('module', 'drupalitalia_migrations') . '/data/taxonomy_doc.csv';

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

    $this->destination = new MigrateDestinationTerm('argomenti_documentazione');

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
