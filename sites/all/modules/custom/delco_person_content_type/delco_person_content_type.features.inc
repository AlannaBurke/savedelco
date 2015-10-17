<?php
/**
 * @file
 * delco_person_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function delco_person_content_type_node_info() {
  $items = array(
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('A person listed on the site. '),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
