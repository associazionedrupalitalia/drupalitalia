<?php
/**
 * @file
 * drupalitalia_forum.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalitalia_forum_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_rules_link().
 */
function drupalitalia_forum_default_rules_link() {
  $items = array();
  $items['block_forum_comment_author'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Block the author of this comment",
      "link_type" : "token",
      "bundles" : { "comment_node_forum" : "comment_node_forum" },
      "entity_link" : 1
    },
    "name" : "block_forum_comment_author",
    "label" : "Block forum comment author",
    "path" : "block_forum_comment_author",
    "entity_type" : "comment"
  }');
  $items['block_forum_topic_author'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Block the author of this topic",
      "link_type" : "token",
      "bundles" : { "forum" : "forum" },
      "entity_link" : 1
    },
    "name" : "block_forum_topic_author",
    "label" : "Block forum topic author",
    "path" : "block_forum_topic_author",
    "entity_type" : "node"
  }');
  $items['publish_all_user_s_contents'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Publish all user\\u0027s contents",
      "link_type" : "token",
      "bundles" : [],
      "entity_link" : 1
    },
    "name" : "publish_all_user_s_contents",
    "label" : "Publish all user\\u0027s contents",
    "path" : "publish_all_user_s_contents",
    "entity_type" : "user"
  }');
  $items['unblock_forum_comment_author'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Unblock the author of this comment",
      "link_type" : "token",
      "bundles" : { "comment_node_forum" : "comment_node_forum" },
      "entity_link" : 1
    },
    "name" : "unblock_forum_comment_author",
    "label" : "Unblock forum comment author",
    "path" : "unblock_forum_comment_author",
    "entity_type" : "comment"
  }');
  $items['unblock_forum_topic_author'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Unblock the author of this topic",
      "link_type" : "token",
      "bundles" : { "forum" : "forum" },
      "entity_link" : 1
    },
    "name" : "unblock_forum_topic_author",
    "label" : "Unblock forum topic author",
    "path" : "unblock_forum_topic_author",
    "entity_type" : "node"
  }');
  $items['unpublish_all_user_s_contents'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Unpublish all user\\u0027s contents",
      "link_type" : "token",
      "bundles" : [],
      "entity_link" : 1
    },
    "name" : "unpublish_all_user_s_contents",
    "label" : "Unpublish all user\\u0027s contents",
    "path" : "unpublish_all_user_s_contents",
    "entity_type" : "user"
  }');
  return $items;
}
