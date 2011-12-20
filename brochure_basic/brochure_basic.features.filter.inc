<?php
/**
 * @file
 * brochure_basic.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function brochure_basic_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'pathologic' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(
          'local_paths' => '',
          'absolute' => 1,
        ),
      ),
      'filter_html' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <br />',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 1,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '1',
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => '-48',
        'status' => '1',
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(
          'local_paths' => '',
          'absolute' => 1,
        ),
      ),
    ),
  );

  return $formats;
}
