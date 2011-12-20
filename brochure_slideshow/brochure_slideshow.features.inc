<?php
/**
 * @file
 * brochure_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function brochure_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function brochure_slideshow_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function brochure_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow
  $styles['slideshow'] = array(
    'name' => 'slideshow',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '940',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '-10',
      ),
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '940',
          'height' => '250',
        ),
        'weight' => '-9',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function brochure_slideshow_node_info() {
  $items = array(
    'slideshow_image' => array(
      'name' => t('Slideshow Image'),
      'base' => 'node_content',
      'description' => t('Adds a new image to the front page slideshow'),
      'has_title' => '1',
      'title_label' => t('Administrative title'),
      'help' => t('The admin title will let you select this slideshow image from a list when administering the slideshow. It is not shown to the users.'),
    ),
  );
  return $items;
}
