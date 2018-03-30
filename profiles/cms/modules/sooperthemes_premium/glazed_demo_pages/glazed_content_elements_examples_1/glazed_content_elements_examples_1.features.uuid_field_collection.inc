<?php
/**
 * @file
 * glazed_content_elements_examples_1.features.uuid_field_collection.inc
 */

/**
 * Implements hook_uuid_features_default_field_collections().
 */
function glazed_content_elements_examples_1_uuid_features_default_field_collections() {
  $field_collections = array();

  $field_collections[] = array(
    'field_name' => 'field_glazed_content_design',
    'default_revision' => 1,
    'archived' => 0,
    'uuid' => '0fec26ce-1d6c-41b2-a753-4b9b300a9f2b',
    'field_dropdown_background' => array(),
    'field_dropdown_hover_background' => array(),
    'field_dropdown_hover_text_color' => array(),
    'field_dropdown_text_color' => array(),
    'field_full_width_header' => array(),
    'field_glazed_body_image' => array(),
    'field_glazed_content_region' => array(),
    'field_glazed_header_image' => array(),
    'field_glazed_header_mode' => array(),
    'field_glazed_header_position' => array(),
    'field_glazed_header_style' => array(),
    'field_glazed_hide_regions' => array(),
    'field_header_background' => array(),
    'field_header_block_background' => array(),
    'field_header_block_text_color' => array(),
    'field_header_height' => array(),
    'field_header_layout' => array(),
    'field_header_text' => array(),
    'field_menu_background' => array(),
    'field_menu_hover_background' => array(),
    'field_menu_hover_effect' => array(),
    'field_menu_hover_text_color' => array(),
    'field_menu_text_color' => array(),
    'field_navbar_background' => array(),
    'field_page_layout' => array(),
    'field_side_header_background' => array(),
    'field_side_header_text_color' => array(),
    'field_side_header_width' => array(),
    'rdf_mapping' => array(),
  );
  return $field_collections;
}
