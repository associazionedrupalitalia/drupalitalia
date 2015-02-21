<?php
/**
 * @file
 * dio_forum.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dio_forum_default_rules_configuration() {
  $items = array();
  $items['rules_di_comment_change'] = entity_import('rules_config', '{ "rules_di_comment_change" : {
      "LABEL" : "Limita modifica commento",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Comment" ],
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_presave" : [] },
      "IF" : [
        { "AND" : [
            { "entity_has_field" : { "entity" : [ "comment" ], "field" : "comment_body" } },
            { "NOT user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "16" : "16", "14" : "14" } },
                "operation" : "OR"
              }
            },
            { "data_is" : {
                "data" : [ "comment:created" ],
                "op" : "\\u003C",
                "value" : { "select" : "site:current-date", "date_offset" : { "value" : -1800 } }
              }
            }
          ]
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "comment:comment-body" ],
            "value" : [ "comment-unchanged:comment-body" ]
          }
        },
        { "drupal_message" : {
            "message" : "Non puoi modificare il commento dopo 30 minuti dall\\u0027inserimento.",
            "type" : "warning"
          }
        }
      ]
    }
  }');
  return $items;
}
