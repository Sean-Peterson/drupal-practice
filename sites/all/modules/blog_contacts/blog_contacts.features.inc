<?php
/**
 * @file
 * blog_contacts.features.inc
 */

/**
 * Implements hook_node_info().
 */
function blog_contacts_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('A blog content type'),
      'has_title' => '1',
      'title_label' => t('Blog Title'),
      'help' => t('Post a blog. Have fun'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
