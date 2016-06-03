<?php

/**
 * @file
 * Administrative page callbacks for the ISO 19139 module.
 */

function iso19139_settings_form() {

  $form['iso19139_data_policies'] = array(
    '#type' => 'textarea',
    '#title' => t('Data policies text'),
    '#default_value' => variable_get('iso19139_data_policies', ''),
    //'#required' => TRUE,
  );

  return system_settings_form($form);
}
