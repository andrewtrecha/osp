<?php
/**
 * @file
 * glazed_main_theme_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function glazed_main_theme_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_glazed_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'profiles/cms/themes/glazed/glazed-favicon.png',
    'favicon_upload' => '',
    'bootstrap__active_tab' => 'edit-general',
    'bootstrap_fluid_container' => 0,
    'bootstrap_button_size' => '',
    'bootstrap_button_colorize' => 1,
    'bootstrap_button_iconize' => 1,
    'bootstrap_forms_required_has_error' => 0,
    'bootstrap_forms_smart_descriptions' => 1,
    'bootstrap_forms_smart_descriptions_limit' => '250',
    'bootstrap_forms_smart_descriptions_allowed_tags' => '',
    'bootstrap_image_shape' => '',
    'bootstrap_image_responsive' => 1,
    'bootstrap_table_bordered' => 0,
    'bootstrap_table_condensed' => 0,
    'bootstrap_table_hover' => 1,
    'bootstrap_table_striped' => 1,
    'bootstrap_table_responsive' => 1,
    'bootstrap_breadcrumb' => '1',
    'bootstrap_breadcrumb_home' => 0,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => 'static-top',
    'bootstrap_navbar_inverse' => 1,
    'bootstrap_pager_first_and_last' => 1,
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-secondary_header' => '',
    'bootstrap_region_well-slider' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content_top' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-content_bottom' => '',
    'bootstrap_region_well-sidebar_first' => '',
    'bootstrap_region_well-sidebar_second' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-dashboard_main' => '',
    'bootstrap_region_well-dashboard_sidebar' => '',
    'bootstrap_region_well-dashboard_inactive' => '',
    'bootstrap_anchors_fix' => 1,
    'bootstrap_anchors_smooth_scrolling' => 1,
    'bootstrap_forms_has_error_value_toggle' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'top',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_trigger_autoclose' => 1,
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto top',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_toggle_jquery_error' => 0,
    'bootstrap_cdn_provider' => 'jsdelivr',
    'bootstrap_cdn_custom_css' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.css',
    'bootstrap_cdn_custom_css_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.min.css',
    'bootstrap_cdn_custom_js' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.js',
    'bootstrap_cdn_custom_js_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.min.js',
    'bootstrap_cdn_jsdelivr_version' => '3.3.7',
    'bootstrap_cdn_jsdelivr_theme' => 'bootstrap',
    'global__active_tab' => 'edit-theme-settings',
    'body_line_height' => '1.6',
    'body_font_size' => '16',
    'nav_font_size' => '16',
    'headings_line_height' => '1.1',
    'scale_factor' => '1.34',
    'h1_font_size' => '52',
    'h2_font_size' => '38',
    'h3_font_size' => '29',
    'h4_font_size' => '21',
    'blockquote_font_size' => '21',
    'blockquote_line_height' => '1.5',
    'headings_letter_spacing' => '0',
    'headings_uppercase' => 0,
    'body_mobile_font_size' => '14',
    'nav_mobile_font_size' => '14',
    'h1_mobile_font_size' => '52',
    'h2_mobile_font_size' => '38',
    'h3_mobile_font_size' => '29',
    'blockquote_mobile_font_size' => '21',
    'divider_thickness' => '4',
    'divider_length' => '0',
    'divider_position' => '1',
    'divider_color' => '',
    'divider_color_custom' => '#eeeeee',
    'portfolio_details' => 'top',
    'portfolio_sidebar' => '4',
    'portfolio_images' => 'stack',
    'page_title_breadcrumbs' => 0,
    'page_title_home_hide' => 1,
    'page_title_align' => 'left',
    'page_title_height' => '180',
    'page_title_animate' => '0',
    'page_title_image' => 0,
    'page_title_image_opacity' => '1',
    'page_title_image_style' => 'cover',
    'page_title_image_mode' => 'normal',
    'page_title_image_position' => 'center_center',
    'boxed_layout' => 1,
    'sticky_footer' => 1,
    'boxed_layout_boxbg' => '#ffffff',
    'box_max_width' => '1800',
    'layout_max_width' => '1280',
    'gutter_horizontal' => '30',
    'gutter_vertical' => '30',
    'gutter_container' => '60',
    'background_image' => 0,
    'background_image_style' => 'cover',
    'background_image_position' => 'center_center',
    'gutter_horizontal_mobile' => '30',
    'gutter_vertical_mobile' => '30',
    'gutter_container_mobile' => '30',
    'secondary_header_hide' => 'hidden_xs',
    'full_width_containers' => array(
      'cnt_secondary_header' => 'cnt_secondary_header',
      'cnt_footer' => 'cnt_footer',
      'cnt_header_nav' => 0,
      'cnt_page_title' => 0,
      'cnt_content_top' => 0,
      'cnt_content' => 0,
      'cnt_content_bottom' => 0,
    ),
    'full_width_content_types' => array(
      'cb_drag_drop_page' => 'cb_drag_drop_page',
      'blog' => 0,
      'page' => 0,
      'event' => 0,
      'news' => 0,
      'portfolio' => 0,
    ),
    'prevnext_content_types' => array(
      'blog' => 'blog',
      'event' => 'event',
      'news' => 'news',
      'portfolio' => 'portfolio',
      'page' => 0,
      'cb_drag_drop_page' => 0,
    ),
    'header_position' => 0,
    'header_top_layout' => '0',
    'header_style' => 'normal',
    'header_top_bg_opacity' => '0.63',
    'header_top_height' => '90',
    'header_top_fixed' => 1,
    'header_top_sticky' => 0,
    'header_top_sticky_show' => 'always',
    'header_top_height_sticky_offset' => '30',
    'header_top_height_scroll' => '60',
    'header_top_bg_opacity_scroll' => '0.9',
    'navbar_background' => '',
    'navbar_background_custom' => '',
    'header_block_background' => '',
    'header_block_background_custom' => '',
    'header_block_text_color' => '',
    'header_block_text_color_custom' => '',
    'menu_background' => '',
    'menu_background_custom' => '',
    'menu_text_color' => '',
    'menu_text_color_custom' => '',
    'menu_hover_background' => '',
    'menu_hover_background_custom' => '',
    'menu_hover_text_color' => '',
    'menu_hover_text_color_custom' => '',
    'dropdown_background' => '',
    'dropdown_background_custom' => '',
    'dropdown_text_color' => '',
    'dropdown_text_color_custom' => '',
    'dropdown_hover_background' => '',
    'dropdown_hover_background_custom' => '',
    'dropdown_hover_text_color' => '',
    'dropdown_hover_text_color_custom' => '#f9a035',
    'header_side_align' => 'left',
    'header_side_width' => '300',
    'menu_type' => 'uppercase',
    'menu_hover' => 'text',
    'menu_border_position' => 'bottom',
    'menu_border_animate' => 'middle',
    'menu_border_position_offset' => '20',
    'menu_border_position_offset_sticky' => '4',
    'menu_border_size' => '2',
    'menu_border_color' => 'base',
    'menu_border_color_custom' => '#eeeeee',
    'header_mobile_breakpoint' => '1200',
    'header_mobile_height' => '60',
    'body_font_face' => '0Source+Sans+Pro:',
    'body_font_face_selector' => 'body',
    'headings_font_face' => '0Source+Sans+Pro:300',
    'headings_font_face_selector' => 'h1,h2,h3,h4,h5,h6,label,.field-label,.page-title, .html .tp-caption',
    'nav_font_face' => '0Source+Sans+Pro:',
    'nav_font_face_selector' => 'nav,nav ul li,nav a',
    'sitename_font_face' => '0Source+Sans+Pro:300',
    'sitename_font_face_selector' => '.site-name, .navbar-brand',
    'blockquote_font_face' => '0Source+Sans+Pro:300italic',
    'blockquote_font_face_selector' => 'blockquote, blockquote p',
    'settings_import_box' => '',
    'glazed_content_elements_examples_1' => 1,
    'cms_portfolio_content' => 0,
    'glazed_content_elements_examples_2' => 1,
    'glazed_content_header_examples' => 1,
    'glazed_content_page_examples' => 1,
    'glazed_content_homepage_examples' => 1,
    'cms_blog_content' => 1,
    'cms_events_content' => 1,
    'cms_news_content' => 1,
    'cms_core_content' => 0,
    'glazed_construction_theme_settings' => 0,
    'glazed_landscaping_theme_settings' => 0,
    'glazed_logistics_theme_settings' => 0,
    'glazed_canvas_theme_settings' => 0,
    'glazed_main_dark_theme_settings' => 1,
    'glazed_simple_blog_theme_settings' => 0,
    'glazed_marketing_agency_theme_settings' => 0,
    'glazed_app_theme_settings' => 0,
    'glazed_business_theme_settings' => 0,
    'glazed_coffee_theme_settings' => 0,
    'glazed_drupal_agency_theme_settings' => 0,
    'glazed_musician_theme_settings' => 0,
    'glazed_main_theme_settings' => 1,
    'glazed_minimal_portfolio_theme_settings' => 0,
    'glazed_photography_theme_settings' => 0,
    'custom_css_site' => '',
    'custom_javascript_site' => '',
    'stlink' => 0,
    'block_preset' => '',
    'block_well' => '',
    'block_background' => '',
    'block_background_custom' => '#eeeeee',
    'block_padding' => '0',
    'block_border_radius' => '0',
    'block_border' => '0',
    'block_border_color' => '',
    'block_border_color_custom' => '#eeeeee',
    'title_font_size' => 'h2',
    'title_align' => 'left',
    'title_well' => '',
    'title_background' => '',
    'title_background_custom' => '#eeeeee',
    'title_padding' => '0',
    'title_border' => '0',
    'title_border_radius' => '0',
    'title_border_color' => '',
    'title_border_color_custom' => '#eeeeee',
    'title_sticker' => 0,
    'block_divider' => 0,
    'block_divider_custom' => 0,
    'block_divider_color' => '',
    'block_divider_color_custom' => '#eeeeee',
    'block_divider_thickness' => '4',
    'block_divider_length' => '10',
    'block_divider_spacing' => '20',
    'block_design_regions' => array(
      'sidebar_first' => 'sidebar_first',
      'sidebar_second' => 'sidebar_second',
      'content_top' => 'content_top',
      'content_bottom' => 'content_bottom',
      'secondary_header' => 0,
      'navigation' => 0,
      'slider' => 0,
      'header' => 0,
      'highlighted' => 0,
      'help' => 0,
      'content' => 0,
      'footer' => 0,
    ),
    'scheme' => 'default',
    'palette' => array(
      'base' => '#01b0ef',
      'link' => '#01b0ef',
      'accent1' => '#57e2b9',
      'accent2' => '#f85753',
      'text' => '#555555',
      'headings' => '#333333',
      'footer' => '#21252a',
      'footertext' => '#747a85',
      'secheader' => '#6924c5',
      'secheadertext' => '#fffffe',
      'well' => '#eeeeee',
      'welltext' => '#444444',
      'header' => '#ffffff',
      'headertext' => '#696969',
      'headerside' => '#20252a',
      'headersidetext' => '#737a85',
      'pagetitle' => '#01b0ee',
      'pagetitletext' => '#fffeff',
      'graylight' => '#777777',
      'graylighter' => '#ededed',
      'silver' => '#f1f1f1',
      'body' => '#efefef',
    ),
    'theme' => 'glazed',
    'info' => array(
      'copy' => array(
        0 => 'logo.png',
        1 => 'logo.svg',
        2 => 'glazed-favicon.png',
      ),
      'css' => array(
        0 => 'css/glazed.css',
      ),
      'fill' => array(),
      'gradients' => array(),
      'slices' => array(),
      'preview_css' => '',
      'base_image' => 'glazed-favicon-transparent.png',
      'blend_target' => '#ffffff',
      'fields' => array(
        'base' => 'Base color',
        'link' => 'Link color',
        'accent1' => 'Accent color 1',
        'accent2' => 'Accent color 2',
        'text' => 'Text color',
        'headings' => 'Headings color',
        'well' => 'Well color',
        'welltext' => 'Well text',
        'footer' => 'Footer background',
        'footertext' => 'Footer text',
        'secheader' => 'Secondary Header bg',
        'secheadertext' => 'Secondary Header text',
        'header' => 'Top Header background',
        'headertext' => 'Top Header text',
        'headerside' => 'Side Header/Mobile Menu background',
        'headersidetext' => 'Side Header/Mobile Menu text',
        'pagetitle' => 'Page Title background',
        'pagetitletext' => 'Page Title text',
        'graylight' => 'Gray Light',
        'graylighter' => 'Gray Lighter',
        'silver' => 'Silver',
        'body' => 'Body Background',
      ),
      'schemes' => array(
        'default' => array(
          'title' => 'Glazed (Default)',
          'colors' => array(
            'base' => '#01b0ef',
            'link' => '#01b0ef',
            'accent1' => '#57e2b9',
            'accent2' => '#f85753',
            'text' => '#555555',
            'headings' => '#333333',
            'footer' => '#21252a',
            'footertext' => '#747a85',
            'secheader' => '#6924c5',
            'secheadertext' => '#fffffe',
            'well' => '#eeeeee',
            'welltext' => '#444444',
            'header' => '#ffffff',
            'headertext' => '#696969',
            'headerside' => '#20252a',
            'headersidetext' => '#737a85',
            'pagetitle' => '#01b0ee',
            'pagetitletext' => '#fffeff',
            'graylight' => '#777777',
            'graylighter' => '#ededed',
            'silver' => '#f1f1f1',
            'body' => '#efefef',
          ),
        ),
        '' => array(
          'title' => 'Custom',
          'colors' => array(),
        ),
      ),
    ),
    'glazed_settings__active_tab' => 'edit-header',
    'jquery_update_jquery_version' => '2.1',
    'favicon_mimetype' => 'image/png',
  );
  $export['theme_glazed_settings'] = $strongarm;

  return $export;
}