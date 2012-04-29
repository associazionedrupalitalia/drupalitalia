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
