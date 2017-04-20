<?php
/**
 * @file
 * blog_contacts.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function blog_contacts_contact_categories_defaults() {
  return array(
    'Bulk Coffee Order.' => array(
      'category' => 'Bulk Coffee Order.',
      'recipients' => 'email@email.email',
      'reply' => 'Thank you for your order! Orders usually ship within 3 to 5 days.',
      'weight' => 0,
      'selected' => 0,
    ),
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'seanpeterson11@gmail.com',
      'reply' => 'Thank you for your feedback! We will respond within the next two days.',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
