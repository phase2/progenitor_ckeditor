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
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<p><strong><em><u><a><sub><sup><address><blockquote><br><ol><ul><li><h3><h4><h5><h6>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
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
