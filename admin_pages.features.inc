<?php
/**
 * @file
 * admin_pages.features.inc
 */

/**
 * Implements hook_views_api().
 */
function admin_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function admin_pages_node_info() {
  $items = array(
    'admin_page' => array(
      'name' => t('Admin Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
