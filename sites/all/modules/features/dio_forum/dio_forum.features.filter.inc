<?php
/**
 * @file
 * dio_forum.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function dio_forum_filter_default_formats() {
  $formats = array();

  // Exported format: Forum.
  $formats[1] = array(
    'format' => 1,
    'name' => 'Forum',
    'cache' => 1,
    'status' => 1,
    'weight' => -1,
    'filters' => array(
      'filter_url' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => -9,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <blockquote> <cite> <code> <em> <img> <strike> <ul> <ol> <li> <dl> <dt> <dd> <strong>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 1,
        ),
      ),
      'filter_autop' => array(
        'weight' => -8,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -7,
        'status' => 1,
        'settings' => array(),
      ),
      'codefilter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'nowrap_expand' => FALSE,
        ),
      ),
      'quote' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
