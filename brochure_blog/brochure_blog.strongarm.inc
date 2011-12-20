<?php
/**
 * @file
 * brochure_blog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function brochure_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_pattern';
  $strongarm->value = 'blog/[node:title]';
  $export['pathauto_node_article_pattern'] = $strongarm;

  return $export;
}
