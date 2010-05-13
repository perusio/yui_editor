<?php
// $Id: plaintext.inc,v 1.1.2.2.2.1 2008/11/21 22:54:27 jeffcd Exp $

/**
 * @file
 * Clean Paste plugin for YUI RTE.
 */

function yui_editor_clean_paste_settings(&$form, &$profile) {
  $form['plugins']['clean paste'] = array(
    '#type' => 'checkbox',
    '#title' => t('Clean Paste'),
    '#default_value' => $profile['clean paste'],
    '#description' => t('Allow cut & paste from Word'),
  );
}

function yui_editor_clean_paste_render(&$profile) {
  if ($profile['clean paste'] == 1) {
    drupal_add_js(drupal_get_path('module', 'yui_editor') .'/plugins/clean_paste.js', 'module', 'footer');
  }
}
