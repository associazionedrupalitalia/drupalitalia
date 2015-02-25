<?php
/**
 * @file
 * dio_membership.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dio_membership_default_rules_configuration() {
  $items = array();
  $items['dio_membership_cart_add_to_cart_message'] = entity_import('rules_config', '{ "dio_membership_cart_add_to_cart_message" : {
      "LABEL" : "Visualizza un messaggio Aggiungi al carrello",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "DIO Membership" ],
      "REQUIRES" : [ "commerce_cart", "rules" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "DO" : [
        { "commerce_cart_add_to_cart_message" : { "commerce_product" : [ "commerce-product" ] } },
        { "redirect" : { "url" : "cart" } }
      ]
    }
  }');
  $items['dio_membership_checkout_new_account'] = entity_import('rules_config', '{ "dio_membership_checkout_new_account" : {
      "LABEL" : "Creare un nuovo profilo utente per l\\u0027ordine anonimo",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "2",
      "OWNER" : "rules",
      "TAGS" : [ "DIO Membership" ],
      "REQUIRES" : [ "rules", "commerce", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-order:uid" ], "value" : "0" } },
        { "NOT entity_exists" : {
            "type" : "user",
            "property" : "mail",
            "value" : [ "commerce-order:mail" ]
          }
        },
        { "data_is" : { "data" : [ "commerce-order:type" ], "value" : "commerce_order" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "user",
              "param_field_u_birthday" : 1416063074,
              "param_name" : [ "commerce-order:mail-username" ],
              "param_mail" : [ "commerce-order:mail" ]
            },
            "PROVIDE" : { "entity_created" : { "account_created" : "Profilo utente creato" } }
          }
        },
        { "data_set" : { "data" : [ "account-created:status" ], "value" : 1 } },
        { "entity_save" : { "data" : [ "account-created" ], "immediate" : 1 } },
        { "entity_query" : {
            "USING" : {
              "type" : "user",
              "property" : "mail",
              "value" : [ "commerce-order:mail" ],
              "limit" : 1
            },
            "PROVIDE" : { "entity_fetched" : { "account_fetched" : "Profilo utente caricato" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "account-fetched" ] },
            "ITEM" : { "list_item" : "Elemento attuale dell\\u0027elenco" },
            "DO" : [
              { "send_account_email" : { "account" : [ "list-item" ], "email_type" : "register_admin_created" } },
              { "data_set" : { "data" : [ "commerce-order:uid" ], "value" : [ "list-item:uid" ] } },
              { "data_set" : {
                  "data" : [ "commerce-order:commerce-customer-billing:uid" ],
                  "value" : [ "list-item:uid" ]
                }
              },
              { "data_set" : {
                  "data" : [ "commerce-order:commerce-customer-user-profile:uid" ],
                  "value" : [ "list-item:uid" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['dio_membership_checkout_order_created_date_update'] = entity_import('rules_config', '{ "dio_membership_checkout_order_created_date_update" : {
      "LABEL" : "Set the order created date to the checkout completion date",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-10",
      "OWNER" : "rules",
      "TAGS" : [ "DIO Membership" ],
      "REQUIRES" : [ "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "data_set" : {
            "data" : [ "commerce-order:created" ],
            "value" : [ "site:current-date" ]
          }
        }
      ]
    }
  }');
  $items['dio_membership_checkout_order_email'] = entity_import('rules_config', '{ "dio_membership_checkout_order_email" : {
      "LABEL" : "Invia un\\u0027email di notifica dell\\u0027ordine",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "4",
      "TAGS" : [ "DIO Membership" ],
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "mail" : {
            "to" : [ "commerce-order:mail" ],
            "subject" : "Ordine [commerce-order:order-number] su [site:name]",
            "message" : "Grazie per aver effettuato l\\u0027ordine  [commerce-order:order-number] presso [site:name].\\r\\n\\r\\nSe si tratta del primo ordine effettuato su questo sito, in un messaggio separato verranno inviate le istruzioni di autenticazione per effettuare l\\u0027accesso. Una volta autenticati usando l\\u0027indirizzo sottostante, \\u00e8 possibile vedere la cronologia degli ordini effettuati:\\r\\n\\r\\n[site:login-url]\\r\\n\\r\\nRimaniamo a disposizione per qualsiasi chiarimento o domanda riguardante l\\u0027ordine.",
            "language" : [ "commerce-order:state" ]
          }
        }
      ]
    }
  }');
  $items['dio_membership_license_update_expiration'] = entity_import('rules_config', '{ "dio_membership_license_update_expiration" : {
      "LABEL" : "Aggiorna la data di scadenza di una license",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "DIO Membership" ],
      "REQUIRES" : [ "rules", "commerce_license" ],
      "ON" : { "commerce_license_presave" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-license:status" ], "value" : "2" } },
        { "NOT data_is" : { "data" : [ "commerce-license-unchanged:status" ], "value" : "2" } }
      ],
      "DO" : []
    }
  }');
  $items['dio_membership_limit_product'] = entity_import('rules_config', '{ "dio_membership_limit_product" : {
      "LABEL" : "Block cart to add only one item",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "DIO Membership" ],
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "DO" : [
        { "data_set" : { "data" : [ "commerce-line-item:quantity" ], "value" : "1" } }
      ]
    }
  }');
  $items['dio_membership_ordine_completato_al_pagamento'] = entity_import('rules_config', '{ "dio_membership_ordine_completato_al_pagamento" : {
      "LABEL" : "Ordine completato al pagamento",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "DIO Membership" ],
      "REQUIRES" : [ "commerce_order", "commerce_payment" ],
      "ON" : { "commerce_payment_order_paid_in_full" : [] },
      "DO" : [
        { "commerce_order_update_status" : { "commerce_order" : [ "commerce_order" ], "order_status" : "completed" } }
      ]
    }
  }');
  $items['dio_membership_payment_bank_transfer'] = entity_import('rules_config', '{ "dio_membership_payment_bank_transfer" : {
      "LABEL" : "Bonifico",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_payment" ],
      "TAGS" : [ "DIO Membership" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_bank_transfer" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "bank_transfer",
                "settings" : {
                  "details" : {
                    "account_owner" : "Associazione Drupal Italia",
                    "account_number" : "000100989636",
                    "account_iban" : "IT 79 F 02008 31140 000100989636",
                    "bank_code_appellation" : "",
                    "bank_code" : "",
                    "account_swift" : "",
                    "account_bank" : "UniCredit Banca",
                    "account_branch" : "Agenzia di Vigone -TO-"
                  },
                  "subject_oid" : 1,
                  "policy" : "Effettua il bonifico inserendo nella causale il codice dell\\u0027ordine sopra indicato.\\r\\n\\r\\nDiventerai socio non appena riceveremo la notifica dell\\u0027avvenuto bonifico; se vuoi velocizzare la procedura inviaci la ricevuta di bonifico contente il CRO del movimento all\\u0027indirizzo \\u003Cstrong\\u003Eassociazione@drupalitalia.org\\u003C\\/strong\\u003E."
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['dio_membership_payment_paypal_wps'] = entity_import('rules_config', '{ "dio_membership_payment_paypal_wps" : {
      "LABEL" : "PayPal WPS",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_payment" ],
      "TAGS" : [ "DIO Membership" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_paypal_wps" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "paypal_wps",
                "settings" : {
                  "business" : "paypal@drupalitalia.org",
                  "currency_code" : "EUR",
                  "language" : "IT",
                  "server" : "live",
                  "payment_action" : "sale",
                  "ipn_logging" : "full_ipn"
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['rules_commerce_license_update_expiration'] = entity_import('rules_config', '{ "rules_commerce_license_update_expiration" : {
      "LABEL" : "Aggiorna la data di scadenza di una license",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "DIO Membership" ],
      "REQUIRES" : [ "rules", "commerce_license" ],
      "ON" : { "commerce_license_presave" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-license:status" ], "value" : "2" } },
        { "NOT data_is" : { "data" : [ "commerce-license-unchanged:status" ], "value" : "2" } }
      ],
      "DO" : []
    }
  }');
  $items['rules_drupalitalia_limit_product'] = entity_import('rules_config', '{ "rules_drupalitalia_limit_product" : {
      "LABEL" : "Block cart to add only one item",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "DIO Membership" ],
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "DO" : [
        { "data_set" : { "data" : [ "commerce-line-item:quantity" ], "value" : "1" } }
      ]
    }
  }');
  $items['rules_ordine_completato_al_pagamento'] = entity_import('rules_config', '{ "rules_ordine_completato_al_pagamento" : {
      "LABEL" : "Ordine completato al pagamento",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "DIO Membership" ],
      "REQUIRES" : [ "commerce_order", "commerce_payment" ],
      "ON" : { "commerce_payment_order_paid_in_full" : [] },
      "DO" : [
        { "commerce_order_update_status" : { "commerce_order" : [ "commerce_order" ], "order_status" : "completed" } }
      ]
    }
  }');
  return $items;
}
