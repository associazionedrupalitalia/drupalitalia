<?php
/**
 * @file
 * dio_user.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function dio_user_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_u_address'
  $field_bases['field_u_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_address',
    'field_permissions' => array(
      'type' => 1,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_u_association_list'
  $field_bases['field_u_association_list'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_association_list',
    'field_permissions' => array(
      'type' => 1,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Si' => 'Si',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_u_birthday'
  $field_bases['field_u_birthday'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_birthday',
    'field_permissions' => array(
      'type' => 1,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_u_birthday_place'
  $field_bases['field_u_birthday_place'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_birthday_place',
    'field_permissions' => array(
      'type' => 1,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_u_cap'
  $field_bases['field_u_cap'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_cap',
    'field_permissions' => array(
      'type' => 1,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 10,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_u_cf'
  $field_bases['field_u_cf'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_cf',
    'field_permissions' => array(
      'type' => 1,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 50,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_u_city'
  $field_bases['field_u_city'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_city',
    'field_permissions' => array(
      'type' => 1,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_u_country'
  $field_bases['field_u_country'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_country',
    'field_permissions' => array(
      'type' => 1,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Italia' => 'Italia',
        'Austria' => 'Austria',
        'Belgium' => 'Belgium',
        'Bulgaria' => 'Bulgaria',
        'Cyprus' => 'Cyprus',
        'Czech Republic' => 'Czech Republic',
        'Denmark' => 'Denmark',
        'Estonia' => 'Estonia',
        'Finland' => 'Finland',
        'France' => 'France',
        'Germany' => 'Germany',
        'Greece' => 'Greece',
        'Hungary' => 'Hungary',
        'Ireland' => 'Ireland',
        'Latvia' => 'Latvia',
        'Lithuania' => 'Lithuania',
        'Luxembourg' => 'Luxembourg',
        'Malta' => 'Malta',
        'Netherlands' => 'Netherlands',
        'Poland' => 'Poland',
        'Portugal' => 'Portugal',
        'Romania' => 'Romania',
        'Slovakia' => 'Slovakia',
        'Slovenia' => 'Slovenia',
        'Spain' => 'Spain',
        'Sweden' => 'Sweden',
        'United Kingdom' => 'United Kingdom',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_u_description'
  $field_bases['field_u_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_description',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_u_drupalorg'
  $field_bases['field_u_drupalorg'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_drupalorg',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_u_facebook'
  $field_bases['field_u_facebook'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_facebook',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_u_first_name'
  $field_bases['field_u_first_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_first_name',
    'field_permissions' => array(
      'type' => 1,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_u_homepage'
  $field_bases['field_u_homepage'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_homepage',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_u_last_name'
  $field_bases['field_u_last_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_last_name',
    'field_permissions' => array(
      'type' => 1,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_u_linkedin'
  $field_bases['field_u_linkedin'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_linkedin',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_u_province'
  $field_bases['field_u_province'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_province',
    'field_permissions' => array(
      'type' => 1,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Agrigento' => 'Agrigento',
        'Alessandria' => 'Alessandria',
        'Ancona' => 'Ancona',
        'Arezzo' => 'Arezzo',
        'Ascoli Piceno' => 'Ascoli Piceno',
        'Asti' => 'Asti',
        'Avellino' => 'Avellino',
        'Bari' => 'Bari',
        'Barletta-Andria-Trani' => 'Barletta-Andria-Trani',
        'Belluno' => 'Belluno',
        'Benevento' => 'Benevento',
        'Bergamo' => 'Bergamo',
        'Biella' => 'Biella',
        'Bologna' => 'Bologna',
        'Bolzano/Bozen' => 'Bolzano/Bozen',
        'Brescia' => 'Brescia',
        'Brindisi' => 'Brindisi',
        'Cagliari' => 'Cagliari',
        'Caltanissetta' => 'Caltanissetta',
        'Campobasso' => 'Campobasso',
        'Carbonia-Iglesias' => 'Carbonia-Iglesias',
        'Caserta' => 'Caserta',
        'Catania' => 'Catania',
        'Catanzaro' => 'Catanzaro',
        'Chieti' => 'Chieti',
        'Como' => 'Como',
        'Cosenza' => 'Cosenza',
        'Cremona' => 'Cremona',
        'Crotone' => 'Crotone',
        'Cuneo' => 'Cuneo',
        'Enna' => 'Enna',
        'Fermo' => 'Fermo',
        'Ferrara' => 'Ferrara',
        'Firenze' => 'Firenze',
        'Foggia' => 'Foggia',
        'Forlì-Cesena' => 'Forlì-Cesena',
        'Frosinone' => 'Frosinone',
        'Genova' => 'Genova',
        'Gorizia' => 'Gorizia',
        'Grosseto' => 'Grosseto',
        'Imperia' => 'Imperia',
        'Isernia' => 'Isernia',
        'La Spezia' => 'La Spezia',
        'L\'Aquila' => 'L\'Aquila',
        'Latina' => 'Latina',
        'Lecce' => 'Lecce',
        'Lecco' => 'Lecco',
        'Livorno' => 'Livorno',
        'Lodi' => 'Lodi',
        'Lucca' => 'Lucca',
        'Macerata' => 'Macerata',
        'Mantova' => 'Mantova',
        'Massa-Carrara' => 'Massa-Carrara',
        'Matera' => 'Matera',
        'Medio Campidano' => 'Medio Campidano',
        'Messina' => 'Messina',
        'Milano' => 'Milano',
        'Modena' => 'Modena',
        'Monza e della Brianza' => 'Monza e della Brianza',
        'Napoli' => 'Napoli',
        'Novara' => 'Novara',
        'Nuoro' => 'Nuoro',
        'Ogliastra' => 'Ogliastra',
        'Olbia-Tempio' => 'Olbia-Tempio',
        'Oristano' => 'Oristano',
        'Padova' => 'Padova',
        'Palermo' => 'Palermo',
        'Parma' => 'Parma',
        'Pavia' => 'Pavia',
        'Perugia' => 'Perugia',
        'Pesaro e Urbino' => 'Pesaro e Urbino',
        'Pescara' => 'Pescara',
        'Piacenza' => 'Piacenza',
        'Pisa' => 'Pisa',
        'Pistoia' => 'Pistoia',
        'Pordenone' => 'Pordenone',
        'Potenza' => 'Potenza',
        'Prato' => 'Prato',
        'Ragusa' => 'Ragusa',
        'Ravenna' => 'Ravenna',
        'Reggio di Calabria' => 'Reggio di Calabria',
        'Reggio nell\'Emilia' => 'Reggio nell\'Emilia',
        'Rieti' => 'Rieti',
        'Rimini' => 'Rimini',
        'Roma' => 'Roma',
        'Rovigo' => 'Rovigo',
        'Salerno' => 'Salerno',
        'Sassari' => 'Sassari',
        'Savona' => 'Savona',
        'Siena' => 'Siena',
        'Siracusa' => 'Siracusa',
        'Sondrio' => 'Sondrio',
        'Taranto' => 'Taranto',
        'Teramo' => 'Teramo',
        'Terni' => 'Terni',
        'Torino' => 'Torino',
        'Trapani' => 'Trapani',
        'Trento' => 'Trento',
        'Treviso' => 'Treviso',
        'Trieste' => 'Trieste',
        'Udine' => 'Udine',
        'Valle d\'Aosta/Vallée d\'Aoste' => 'Valle d\'Aosta/Vallée d\'Aoste',
        'Varese' => 'Varese',
        'Venezia' => 'Venezia',
        'Verbano-Cusio-Ossola' => 'Verbano-Cusio-Ossola',
        'Vercelli' => 'Vercelli',
        'Verona' => 'Verona',
        'Vibo Valentia' => 'Vibo Valentia',
        'Vicenza' => 'Vicenza',
        'Viterbo' => 'Viterbo',
        'ESTERO' => 'ESTERO',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_u_twitter'
  $field_bases['field_u_twitter'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_u_twitter',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  return $field_bases;
}
