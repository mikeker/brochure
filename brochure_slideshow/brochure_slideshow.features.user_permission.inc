<?php
/**
 * @file
 * brochure_slideshow.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function brochure_slideshow_user_default_permissions() {
  $permissions = array();

  // Exported permission: create slideshow_image content
  $permissions['create slideshow_image content'] = array(
    'name' => 'create slideshow_image content',
    'roles' => array(),
  );

  // Exported permission: delete any slideshow_image content
  $permissions['delete any slideshow_image content'] = array(
    'name' => 'delete any slideshow_image content',
    'roles' => array(),
  );

  // Exported permission: delete own slideshow_image content
  $permissions['delete own slideshow_image content'] = array(
    'name' => 'delete own slideshow_image content',
    'roles' => array(),
  );

  // Exported permission: edit any slideshow_image content
  $permissions['edit any slideshow_image content'] = array(
    'name' => 'edit any slideshow_image content',
    'roles' => array(),
  );

  // Exported permission: edit own slideshow_image content
  $permissions['edit own slideshow_image content'] = array(
    'name' => 'edit own slideshow_image content',
    'roles' => array(),
  );

  return $permissions;
}
