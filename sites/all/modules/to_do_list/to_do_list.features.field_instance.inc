<?php
/**
 * @file
 * to_do_list.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function to_do_list_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-to_do_list-field_to_do_item'.
  $field_instances['node-to_do_list-field_to_do_item'] = array(
    'bundle' => 'to_do_list',
    'default_value' => array(
      0 => array(
        'value' => '<li>to do item</li>',
      ),
    ),
    'deleted' => 0,
    'description' => 'Put in items as a list',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_to_do_item',
    'label' => 'To-Do item',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Put in items as a list');
  t('To-Do item');

  return $field_instances;
}
