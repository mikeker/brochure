<?php
/**
 * @file
 * brochure_slideshow.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function brochure_slideshow_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_slideshow_image';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_slideshow_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_slideshow_image';
  $strongarm->value = 0;
  $export['comment_anonymous_slideshow_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_slideshow_image';
  $strongarm->value = 1;
  $export['comment_default_mode_slideshow_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_slideshow_image';
  $strongarm->value = '50';
  $export['comment_default_per_page_slideshow_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_slideshow_image';
  $strongarm->value = 1;
  $export['comment_form_location_slideshow_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_slideshow_image';
  $strongarm->value = '1';
  $export['comment_preview_slideshow_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_slideshow_image';
  $strongarm->value = '0';
  $export['comment_slideshow_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_slideshow_image';
  $strongarm->value = 1;
  $export['comment_subject_field_slideshow_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_slideshow_image';
  $strongarm->value = array();
  $export['menu_options_slideshow_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_slideshow_image';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_slideshow_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_slideshow_image';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_slideshow_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_slideshow_image';
  $strongarm->value = '0';
  $export['node_preview_slideshow_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_slideshow_image';
  $strongarm->value = 0;
  $export['node_submitted_slideshow_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_slideshow_image_pattern';
  $strongarm->value = 'slideshow/[node:nid]';
  $export['pathauto_node_slideshow_image_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_slideshow_image';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_slideshow_image'] = $strongarm;

  return $export;
}
