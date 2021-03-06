<?php
// $Id: coder.inc,v 1.1.2.2.2.1 2008/11/21 22:54:27 jeffcd Exp $

/**
 * @file
 * Coder plugin for the YUI Editor.
 */

function yui_editor_coder_settings(&$form, &$profile) {
  $form['plugins']['coder'] = array(
    '#type' => 'checkbox',
    '#title' => t('Coder button'),
    '#default_value' => $profile['coder'],
    '#description' => t('Add the code viewing button to the toolbar. Note: This does not work with the Plaintext button. Choose one of them only.'),
  );
}

function yui_editor_coder_render(&$profile) {
  if ($profile['coder'] == 1) {
    drupal_add_js(drupal_get_path('module', 'yui_editor') .'/plugins/coder.js', 'module', 'footer');
    drupal_add_css(drupal_get_path('module', 'yui_editor') .'/plugins/coder.css');
  }
}
