<?php
/**
 * @file
 * drupalitalia_user_fields.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function drupalitalia_user_fields_field_default_fields() {
  $fields = array();

  // Exported field: 'user-user-field_u_address'
  $fields['user-user-field_u_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_u_address',
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
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Inserisci il tuo indirizzo di residenza',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_u_address',
      'label' => 'Indirizzo',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'user-user-field_u_association_list'
  $fields['user-user-field_u_association_list'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_u_association_list',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Si' => 'Si',
          'No' => 'No',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Vuoi essere incluso nell\' elenco pubblico dei soci?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_u_association_list',
      'label' => 'Elenco Soci',
      'required' => 0,
      'settings' => array(
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'user-user-field_u_birthday'
  $fields['user-user-field_u_birthday'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_u_birthday',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
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
      'translatable' => '0',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'deleted' => '0',
      'description' => 'Inserisci la tua data di nascita',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'short',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_u_birthday',
      'label' => 'Data di Nascita',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'increment' => '15',
          'input_format' => 'd/m/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-90:+0',
        ),
        'type' => 'date_select',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'user-user-field_u_birthday_place'
  $fields['user-user-field_u_birthday_place'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_u_birthday_place',
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
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Inserisci il luogo di nascita',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_u_birthday_place',
      'label' => 'Luogo di nascita',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'user-user-field_u_cap'
  $fields['user-user-field_u_cap'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_u_cap',
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
      'module' => 'text',
      'settings' => array(
        'max_length' => '10',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Inserisci il CAP',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_u_cap',
      'label' => 'CAP',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'user-user-field_u_cf'
  $fields['user-user-field_u_cf'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_u_cf',
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
      'module' => 'text',
      'settings' => array(
        'max_length' => '50',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_u_cf',
      'label' => 'Codice Fiscale',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'user-user-field_u_city'
  $fields['user-user-field_u_city'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_u_city',
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
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Inserisci la città dove risiedi',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_u_city',
      'label' => 'Città',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'user-user-field_u_country'
  $fields['user-user-field_u_country'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_u_country',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
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
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '9',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_u_country',
      'label' => 'Nazione',
      'required' => 0,
      'settings' => array(
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'user-user-field_u_first_name'
  $fields['user-user-field_u_first_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_u_first_name',
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
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Inserisci il tuo nome.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_u_first_name',
      'label' => 'Nome',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'user-user-field_u_homepage'
  $fields['user-user-field_u_homepage'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_u_homepage',
      'foreign keys' => array(),
      'indexes' => array(),
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
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Inserisci la tua homepage.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_u_homepage',
      'label' => 'Homepage',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => 'nofollow',
          'target' => '_blank',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'title' => 'none',
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => 0,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'user-user-field_u_last_name'
  $fields['user-user-field_u_last_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_u_last_name',
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
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Inserisci il tuo cognome.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_u_last_name',
      'label' => 'Cognome',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'user-user-field_u_province'
  $fields['user-user-field_u_province'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_u_province',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
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
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_u_province',
      'label' => 'Provincia',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '10',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('CAP');
  t('Città');
  t('Codice Fiscale');
  t('Cognome');
  t('Data di Nascita');
  t('Elenco Soci');
  t('Homepage');
  t('Indirizzo');
  t('Inserisci il CAP');
  t('Inserisci il luogo di nascita');
  t('Inserisci il tuo cognome.');
  t('Inserisci il tuo indirizzo di residenza');
  t('Inserisci il tuo nome.');
  t('Inserisci la città dove risiedi');
  t('Inserisci la tua data di nascita');
  t('Inserisci la tua homepage.');
  t('Luogo di nascita');
  t('Nazione');
  t('Nome');
  t('Provincia');
  t('Vuoi essere incluso nell\' elenco pubblico dei soci?');

  return $fields;
}
