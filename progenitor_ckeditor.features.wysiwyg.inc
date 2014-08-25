<?php
/**
 * @file
 * progenitor_ckeditor.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function progenitor_ckeditor_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: ckeditor_full
  $profiles['ckeditor_full'] = array(
    'format' => 'ckeditor_full',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Superscript' => 1,
          'Subscript' => 1,
          'Format' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6',
      'advanced__active_tab' => 'edit-basic',
      'forcePasteAsPlainText' => 0,
    ),
  );

  return $profiles;
}
