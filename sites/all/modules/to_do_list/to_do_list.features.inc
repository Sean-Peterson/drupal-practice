<?php
/**
 * @file
 * to_do_list.features.inc
 */

/**
 * Implements hook_node_info().
 */
function to_do_list_node_info() {
  $items = array(
    'to_do_list' => array(
      'name' => t('To-Do List'),
      'base' => 'node_content',
      'description' => t('Enter the list of items that you need to do!'),
      'has_title' => '1',
      'title_label' => t('To-Do List title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
