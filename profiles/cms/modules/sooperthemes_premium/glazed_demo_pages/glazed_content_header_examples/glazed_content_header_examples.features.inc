<?php
/**
 * @file
 * glazed_content_header_examples.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function glazed_content_header_examples_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
