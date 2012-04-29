<?php
/**
 * @file
 * drupalitalia_forum.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function drupalitalia_forum_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition__cloned'] = entity_import('rules_config', '{ "rules_link_condition__cloned" : {
      "LABEL" : "Rules link: Block forum topic author (cloned) condition",
      "PLUGIN" : "and",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : []
    }
  }');
  $items['rules_link_condition__cloned_cloned'] = entity_import('rules_config', '{ "rules_link_condition__cloned_cloned" : {
      "LABEL" : "Rules link: Block forum comment author (cloned) condition",
      "PLUGIN" : "and",
      "USES VARIABLES" : { "comment" : { "type" : "comment", "label" : "comment" } },
      "AND" : []
    }
  }');
  $items['rules_link_condition_block_forum_comment_author'] = entity_import('rules_config', '{ "rules_link_condition_block_forum_comment_author" : {
      "LABEL" : "Rules link: Block forum comment author condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "comment" : { "label" : "comment", "type" : "comment" } },
      "AND" : [
        { "AND" : [
            { "node_is_of_type" : {
                "node" : [ "comment:node" ],
                "type" : { "value" : { "forum" : "forum" } }
              }
            },
            { "user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "16" : "16", "14" : "14" } },
                "operation" : "OR"
              }
            },
            { "NOT user_is_blocked" : { "account" : [ "comment:author" ] } }
          ]
        }
      ]
    }
  }');
  $items['rules_link_condition_block_forum_topic_author'] = entity_import('rules_config', '{ "rules_link_condition_block_forum_topic_author" : {
      "LABEL" : "Rules link: Block forum topic author condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "AND" : [
            { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "forum" : "forum" } } } },
            { "user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "16" : "16", "14" : "14" } },
                "operation" : "OR"
              }
            },
            { "NOT user_is_blocked" : { "account" : [ "node:author" ] } }
          ]
        }
      ]
    }
  }');
  $items['rules_link_condition_publish_all_user_s_contents'] = entity_import('rules_config', '{ "rules_link_condition_publish_all_user_s_contents" : {
      "LABEL" : "Rules link: Publish all user\\u0027s contents condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "user" : { "type" : "user", "label" : "user" } },
      "AND" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "16" : "16" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_unblock_forum_comment_author'] = entity_import('rules_config', '{ "rules_link_condition_unblock_forum_comment_author" : {
      "LABEL" : "Rules link: Unblock forum comment author condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "comment" : { "label" : "comment", "type" : "comment" } },
      "AND" : [
        { "AND" : [
            { "node_is_of_type" : {
                "node" : [ "comment:node" ],
                "type" : { "value" : { "forum" : "forum" } }
              }
            },
            { "user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "16" : "16", "14" : "14" } },
                "operation" : "OR"
              }
            },
            { "user_is_blocked" : { "account" : [ "comment:author" ] } }
          ]
        }
      ]
    }
  }');
  $items['rules_link_condition_unblock_forum_topic_author'] = entity_import('rules_config', '{ "rules_link_condition_unblock_forum_topic_author" : {
      "LABEL" : "Rules link: Unblock forum topic author condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "AND" : [
            { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "forum" : "forum" } } } },
            { "user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "16" : "16", "14" : "14" } },
                "operation" : "OR"
              }
            },
            { "user_is_blocked" : { "account" : [ "node:author" ] } }
          ]
        }
      ]
    }
  }');
  $items['rules_link_condition_unpublish_all_user_s_contents'] = entity_import('rules_config', '{ "rules_link_condition_unpublish_all_user_s_contents" : {
      "LABEL" : "Rules link: Unpublish all user\\u0027s contents condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "user" : { "type" : "user", "label" : "user" } },
      "AND" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "16" : "16" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_set_block_forum_comment_author'] = entity_import('rules_config', '{ "rules_link_set_block_forum_comment_author" : {
      "LABEL" : "Rules link: Block forum comment author rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "comment" : { "type" : "comment", "label" : "comment" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "AND" : [
                  { "node_is_of_type" : {
                      "node" : [ "comment:node" ],
                      "type" : { "value" : { "forum" : "forum" } }
                    }
                  },
                  { "user_has_role" : {
                      "account" : [ "site:current-user" ],
                      "roles" : { "value" : { "16" : "16", "14" : "14" } },
                      "operation" : "OR"
                    }
                  },
                  { "NOT user_is_blocked" : { "account" : [ "comment:author" ] } }
                ]
              }
            ],
            "DO" : [ { "user_block" : { "account" : [ "comment:author" ] } } ],
            "LABEL" : "Forum comment block author"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_block_forum_topic_author'] = entity_import('rules_config', '{ "rules_link_set_block_forum_topic_author" : {
      "LABEL" : "Rules link: Block forum topic author rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "AND" : [
                  { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "forum" : "forum" } } } },
                  { "user_has_role" : {
                      "account" : [ "site:current-user" ],
                      "roles" : { "value" : { "16" : "16", "14" : "14" } },
                      "operation" : "OR"
                    }
                  },
                  { "NOT user_is_blocked" : { "account" : [ "node:author" ] } }
                ]
              }
            ],
            "DO" : [ { "user_block" : { "account" : [ "node:author" ] } } ],
            "LABEL" : "Forum block author"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_publish_all_user_s_contents'] = entity_import('rules_config', '{ "rules_link_set_publish_all_user_s_contents" : {
      "LABEL" : "Rules link: Publish all user\\u0027s contents rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules", "drupalitalia_utilities" ],
      "USES VARIABLES" : { "user" : { "type" : "user", "label" : "user" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "user_has_role" : {
                  "account" : [ "site:current-user" ],
                  "roles" : { "value" : { "16" : "16" } }
                }
              }
            ],
            "DO" : [ { "publish_user_contents_action" : { "account" : [ "user" ] } } ],
            "LABEL" : "Publish all user\\u0027s contents"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_unblock_forum_comment_author'] = entity_import('rules_config', '{ "rules_link_set_unblock_forum_comment_author" : {
      "LABEL" : "Rules link: Unblock forum comment author rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "comment" : { "type" : "comment", "label" : "comment" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "AND" : [
                  { "node_is_of_type" : {
                      "node" : [ "comment:node" ],
                      "type" : { "value" : { "forum" : "forum" } }
                    }
                  },
                  { "user_has_role" : {
                      "account" : [ "site:current-user" ],
                      "roles" : { "value" : { "16" : "16", "14" : "14" } },
                      "operation" : "OR"
                    }
                  },
                  { "user_is_blocked" : { "account" : [ "comment:author" ] } }
                ]
              }
            ],
            "DO" : [ { "user_unblock" : { "account" : [ "comment:author" ] } } ],
            "LABEL" : "Forum comment unblock author"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_unblock_forum_topic_author'] = entity_import('rules_config', '{ "rules_link_set_unblock_forum_topic_author" : {
      "LABEL" : "Rules link: Unblock forum topic author rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "AND" : [
                  { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "forum" : "forum" } } } },
                  { "user_has_role" : {
                      "account" : [ "site:current-user" ],
                      "roles" : { "value" : { "16" : "16", "14" : "14" } },
                      "operation" : "OR"
                    }
                  },
                  { "user_is_blocked" : { "account" : [ "node:author" ] } }
                ]
              }
            ],
            "DO" : [ { "user_unblock" : { "account" : [ "node:author" ] } } ],
            "LABEL" : "Forum unblock author"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_unpublish_all_user_s_contents'] = entity_import('rules_config', '{ "rules_link_set_unpublish_all_user_s_contents" : {
      "LABEL" : "Rules link: Unpublish all user\\u0027s contents rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules", "drupalitalia_utilities" ],
      "USES VARIABLES" : { "user" : { "type" : "user", "label" : "user" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "user_has_role" : {
                  "account" : [ "site:current-user" ],
                  "roles" : { "value" : { "16" : "16" } }
                }
              }
            ],
            "DO" : [ { "unpublish_user_contents_action" : { "account" : [ "user" ] } } ],
            "LABEL" : "Unpublish all user\\u0027s contents"
          }
        }
      ]
    }
  }');
  return $items;
}
