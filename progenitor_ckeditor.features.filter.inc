<?php
/**
 * @file
 * progenitor_ckeditor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function progenitor_ckeditor_filter_default_formats() {
  $formats = array();

  // Exported format: ckEditor Full.
  $formats['ckeditor_full'] = array(
    'format' => 'ckeditor_full',
    'name' => 'WYSIWYG Full',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
