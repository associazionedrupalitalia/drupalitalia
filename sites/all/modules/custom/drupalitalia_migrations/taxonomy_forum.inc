<?php
/**
 * @file
 *
 */
class DrupalItaliaTaxonomyForumMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    // Description.
    $this->description = t('Migrate Forum list from csv file to Forum vocabulary');

    // Mapping Table.
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

    $source_file = drupal_get_path('module', 'drupalitalia_migrations') . '/data/taxonomy_forum.csv';

    $columns = array(
      array('term', 'term'),
      array('parent', 'parent'),
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

    $this->destination = new MigrateDestinationTerm('forum_structure');

    $this->addFieldMapping('name', 'term');
    $this->addFieldMapping('parent_name', 'parent');

    $this->addUnmigratedDestinations(
      array(
        'description',
        'format',
        'weight',
        'path',
      )
    );
  }

  public function prepare($entity, stdClass $row) {
    if (!empty($row->parent)) {
      $v = taxonomy_vocabulary_machine_name_load('forum_structure');
      $query = new EntityFieldQuery();
      $return = $query
      ->entityCondition('entity_type', 'taxonomy_term')
      ->propertyCondition('vid', $v->vid)
      ->propertyCondition('name', $row->parent)
      ->execute();
      if (count($return['taxonomy_term'])) {
        foreach ($return['taxonomy_term'] as $tid => $term) {
          $entity->parent[0] = $tid;
        }
      }
    }
  }
}
