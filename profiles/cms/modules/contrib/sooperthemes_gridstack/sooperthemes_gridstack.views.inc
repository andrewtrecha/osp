<?php
/**
 * @file
 * Provide views data and handlers.
 */
/**
 * Implements hook_views_plugins().
 */
function sooperthemes_gridstack_views_plugins() {
  $module_path = drupal_get_path('module', 'sooperthemes_gridstack');
  return array(
    'style' => array(
      'sooperthemes_gridstack_gridstack_plugin_style' => array(
        'title' => t('SooperThemes GridStack'),
        'help' => t('SooperThemes GridStack gridstack style'),
        'path' => $module_path . '/plugins/sooperthemes_gridstack',
        'handler' => 'GlazedGridStackPluginStyle',
        'parent' => 'default',
        'theme' => 'sooperthemes_gridstack_gridstack_plugin_style',
        'theme path' => $module_path . '/templates/sooperthemes_gridstack',
        'theme file' => 'theme.inc',
        'uses row plugin' => TRUE,
        'uses grouping' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
    'row' => array(
      'sooperthemes_gridstack_gridstack_plugin_rows' => array(
        'title' => t('SooperThemes GridStack'),
        'help' => t('Choose the fields to display in SooperThemes GridStack Style.'),
        'path' => $module_path . '/plugins/sooperthemes_gridstack',
        'handler' => 'GlazedMagazineGridStackPluginRows',
        'theme' => 'sooperthemes_gridstack_gridstack_plugin_rows',
        'theme path' => $module_path . '/templates/sooperthemes_gridstack',
        'theme file' => 'theme.inc',
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}