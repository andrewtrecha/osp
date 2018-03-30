<?php
/**
 * @file
 * cms_portfolio_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function cms_portfolio_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Artist Profile',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663635,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0fbc0438-4983-48b7-9ff1-eb3905dbfc05',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>It is a paradisematic country, in which roasted parts of sentences fly into your mouth. test&nbsp;</p>

<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'SooperThemes',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
        'uuid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '69b9fe93-3c6d-4dcc-aff3-a4174d9d7baf',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => '7d1ef4d1-4224-4f2e-83d9-7a5d8a033bab',
        'alt' => NULL,
        'title' => NULL,
      ),
      2 => array(
        'file_uuid' => 'c988f524-5f6b-4ee8-b372-7cc620554198',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(
    'und' => array(
      0 => array(
        'value' => 'bottom',
      ),
    ),
  ),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:20:35 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'App UX',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440665700,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '144a4987-8e06-4795-b3f8-36532f548cff',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div>
	<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>

	<p>The Big Oxmox advised her not to do so, because there were thousands of bad Commas, wild Question Marks and devious Semikoli, but the Little Blind Text didn’t listen.</p>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => ' Pityful a rethoric ',
        'format' => NULL,
      ),
    ),
  ),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
        'uuid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '64ae00d6-474d-4f72-b933-c80f54828fab',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => 'dc5b8d4a-4782-4e53-b560-1ec3d5307505',
        'alt' => NULL,
        'title' => NULL,
      ),
      2 => array(
        'file_uuid' => 'ee207b58-08ab-473d-bcd4-9dda78b1aeb5',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:55:00 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'Photographer Profile',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663653,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2a8af362-8cce-4365-b01d-8df64bb71829',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>It is a paradisematic country, in which roasted parts of sentences fly into your mouth. test&nbsp;</p>

<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'SooperThemes',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
        'uuid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'c988f524-5f6b-4ee8-b372-7cc620554198',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => '69b9fe93-3c6d-4dcc-aff3-a4174d9d7baf',
        'alt' => NULL,
        'title' => NULL,
      ),
      2 => array(
        'file_uuid' => '7d1ef4d1-4224-4f2e-83d9-7a5d8a033bab',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(
    'und' => array(
      0 => array(
        'value' => 'right',
      ),
    ),
  ),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:20:53 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'App Mockup',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663575,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2b1fbd9f-6ab1-4ac0-a6fb-180e7adcdd20',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>It is a paradisematic country, in which roasted parts of sentences fly into your mouth. test&nbsp;</p>

<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'SooperThemes',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
        'uuid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'dc5b8d4a-4782-4e53-b560-1ec3d5307505',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => 'ee207b58-08ab-473d-bcd4-9dda78b1aeb5',
        'alt' => NULL,
        'title' => NULL,
      ),
      2 => array(
        'file_uuid' => '64ae00d6-474d-4f72-b933-c80f54828fab',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:19:35 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'Logos',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440665640,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2b805604-a725-40d8-941d-0ebdbac3d077',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div>
	<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>

	<p>The Big Oxmox advised her not to do so, because there were thousands of bad Commas, wild Question Marks and devious Semikoli, but the Little Blind Text didn’t listen.</p>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'SooperThemes',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Glazed',
        'format' => NULL,
      ),
    ),
  ),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
        'uuid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'd1af75da-522d-4c4b-8f53-481cff90dab2',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => 'dd1f99e7-d0c5-43ec-8818-e37c7ee6e5e8',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:54:00 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'CD Cover',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663575,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '310ef199-cd73-4a38-8164-60a5058e6e5d',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>It is a paradisematic country, in which roasted parts of sentences fly into your mouth. test&nbsp;</p>

<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'SooperThemes',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'views_field_formatter',
        'settings' => 'a:1:{s:21:"views_field_formatter";a:3:{s:4:"view";s:30:"image_field_galleries::block_1";s:8:"multiple";i:0;s:17:"implode_character";s:0:"";}}',
      ),
    ),
  ),
  'field_image_display_style' => array(
    'und' => array(
      0 => array(
        'value' => 'grid',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
        'uuid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '0b90c490-2eec-4fb0-8795-822e97ab11fb',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => '99b3c9bc-2f4f-4ca9-9c6a-4b19cac438e8',
        'alt' => NULL,
        'title' => NULL,
      ),
      2 => array(
        'file_uuid' => '64ae00d6-474d-4f72-b933-c80f54828fab',
        'alt' => NULL,
        'title' => NULL,
      ),
      3 => array(
        'file_uuid' => '3f8761e3-c3d3-4b1e-935e-433bcb37e1ac',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:19:35 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'Business Card',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663575,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '37ab55c7-8caa-4a6e-91d7-d8ca3e407ce9',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>It is a paradisematic country, in which roasted parts of sentences fly into your mouth. test&nbsp;</p>

<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'SooperThemes',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
        'uuid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '933e66cc-feae-490d-a7f4-6faf58827632',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:19:35 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'Stationary Branding',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663575,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3fbdac22-c64d-4065-941d-9b19a805d2de',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>It is a paradisematic country, in which roasted parts of sentences fly into your mouth. test&nbsp;</p>

<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'SooperThemes',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(),
  'field_comparison_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'c988f524-5f6b-4ee8-b372-7cc620554198',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => '7d1ef4d1-4224-4f2e-83d9-7a5d8a033bab',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
        'uuid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'ec90957e-402d-41da-893a-9ffce5967500',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(
    'und' => array(
      0 => array(
        'value' => 'left',
      ),
    ),
  ),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:19:35 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'Glazed Poster',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440664175,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '46776433-49a0-4da7-bf2a-35f97342e47c',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div>
	<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>

	<p>The Big Oxmox advised her not to do so, because there were thousands of bad Commas, wild Question Marks and devious Semikoli, but the Little Blind Text didn’t listen.</p>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
        'uuid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
      ),
      1 => array(
        'tid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
        'uuid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '4ca2174b-2af8-44cd-bc94-3ac9d1bd9f4b',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => '99b3c9bc-2f4f-4ca9-9c6a-4b19cac438e8',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:29:35 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'Apple Watch UX',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663575,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '627706db-c8cd-437b-a833-6bf5e238dae8',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>It is a paradisematic country, in which roasted parts of sentences fly into your mouth. test&nbsp;</p>

<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'SooperThemes',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
        'uuid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'ee207b58-08ab-473d-bcd4-9dda78b1aeb5',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => 'dc5b8d4a-4782-4e53-b560-1ec3d5307505',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:19:35 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'Architect Profile',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663703,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '66705fa9-4a74-4b5d-ba68-5d4b2b441c42',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div>
	<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>

	<p>The Big Oxmox advised her not to do so, because there were thousands of bad Commas, wild Question Marks and devious Semikoli, but the Little Blind Text didn’t listen.</p>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
        'uuid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '7d1ef4d1-4224-4f2e-83d9-7a5d8a033bab',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => '69b9fe93-3c6d-4dcc-aff3-a4174d9d7baf',
        'alt' => NULL,
        'title' => NULL,
      ),
      2 => array(
        'file_uuid' => 'c988f524-5f6b-4ee8-b372-7cc620554198',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(
    'und' => array(
      0 => array(
        'value' => 'left',
      ),
    ),
  ),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:21:43 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'Paperback Book',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440665700,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6e95a721-dc10-4df8-9169-66eee9cdf916',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div>
	<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>

	<p>The Big Oxmox advised her not to do so, because there were thousands of bad Commas, wild Question Marks and devious Semikoli, but the Little Blind Text didn’t listen.</p>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
        'uuid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '3f8761e3-c3d3-4b1e-935e-433bcb37e1ac',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => '0b90c490-2eec-4fb0-8795-822e97ab11fb',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:55:00 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'Stationary Design',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440752996,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '810ccb6a-f32d-452e-b8e3-fa8cf2396e9a',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>

<p>The Big Oxmox advised her not to do so, because there were thousands of bad Commas, wild Question Marks and devious Semikoli, but the Little Blind Text didn’t listen.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
        'uuid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
      ),
      1 => array(
        'tid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
        'uuid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '99b3c9bc-2f4f-4ca9-9c6a-4b19cac438e8',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => 'dd1f99e7-d0c5-43ec-8818-e37c7ee6e5e8',
        'alt' => NULL,
        'title' => NULL,
      ),
      2 => array(
        'file_uuid' => '3f8761e3-c3d3-4b1e-935e-433bcb37e1ac',
        'alt' => NULL,
        'title' => NULL,
      ),
      3 => array(
        'file_uuid' => '4ca2174b-2af8-44cd-bc94-3ac9d1bd9f4b',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(
    'und' => array(
      0 => array(
        'value' => 'top',
      ),
    ),
  ),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-28 09:09:56 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'Book & Slipcase',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663575,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8f964e18-5e17-4e6c-9b8d-e52754210822',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>It is a paradisematic country, in which roasted parts of sentences fly into your mouth. test&nbsp;</p>

<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'SooperThemes',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
        'uuid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '0b90c490-2eec-4fb0-8795-822e97ab11fb',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => '3f8761e3-c3d3-4b1e-935e-433bcb37e1ac',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:19:35 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'Glazed Book',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440750666,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '91ea6105-d5a4-4202-a30c-e4afd630d3f9',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-row row  az-row--sm" data-az-id="1s48uuuh" data-azat-device="sm" data-azb="az_row" data-azcnt="true" style="">
	<div class="az-element az-ctnr az-column  col-sm-12" data-az-id="l3bbhrg0" data-azb="az_column" data-azcnt="true" style="">
		<div class="az-element az-text" data-az-id="kxj21hd3" data-azb="az_text" data-azcnt="true" style="">
			<p>It is a paradisematic country, in which roasted parts of sentences fly into your mouth. test&nbsp;</p>

			<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>
		</div>
	</div>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric question',
        'format' => NULL,
      ),
    ),
  ),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
        'uuid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
      ),
      1 => array(
        'tid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
        'uuid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '0b90c490-2eec-4fb0-8795-822e97ab11fb',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => 'be609e8a-164d-40bc-abe4-9871562db732',
        'alt' => NULL,
        'title' => NULL,
      ),
      2 => array(
        'file_uuid' => '933e66cc-feae-490d-a7f4-6faf58827632',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-28 08:31:06 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'Business Card',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440664225,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'afa694d4-055b-4cc3-a4c6-e5235621761d',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>A small river named Duden flows by their place and supplies it with the necessary regelialia.</p>

<p>It is a paradisematic country, in which roasted parts of sentences fly into your mouth.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_simple',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
        'uuid' => '7e8026dd-4a39-4e3e-8d4e-1163beb9e05e',
      ),
      1 => array(
        'tid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
        'uuid' => 'e94cbd43-3334-4460-ba33-8bb0d85ed789',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'dd1f99e7-d0c5-43ec-8818-e37c7ee6e5e8',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:30:25 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'Motion Design',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440663575,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f39e7dc5-4622-47d7-b3df-52b0215fedd9',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>It is a paradisematic country, in which roasted parts of sentences fly into your mouth. test&nbsp;</p>

<p>Even the all-powerful Pointing has no control about the blind texts it is an almost unorthographic life One day however a small line of blind text by the name of Lorem Ipsum decided to leave for the far World of Grammar.</p>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'SooperThemes',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(),
  'field_cms_portoflio_custom' => array(),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
        'uuid' => 'f2e0fc90-0708-4015-8cdd-6170241a2e1e',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => 'cf9bd97f-c757-4e6f-87bf-2374624f65a4',
        'alt' => NULL,
        'title' => NULL,
      ),
      1 => array(
        'file_uuid' => 'ee207b58-08ab-473d-bcd4-9dda78b1aeb5',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-27 08:19:35 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  $nodes[] = array(
  'title' => 'Card Design',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'portfolio',
  'language' => 'und',
  'created' => 1440749347,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f92ce0fd-a55f-4a71-9203-624270628344',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-row row  az-row--sm" data-az-id="ras150a3" data-azat-device="sm" data-azb="az_row" data-azcnt="true" style="">
	<div class="az-element az-ctnr az-column  col-sm-12" data-az-id="58fdgrts" data-azb="az_column" data-azcnt="true" style="">
		<div class="az-element az-text" data-az-id="ucjera6x" data-azb="az_text" data-azcnt="true" style="">
			<p>Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts. test</p>

			<p>Separated they live in Bookmarksgrove right at the coast of the Semantics, a large language ocean.</p>
		</div>
	</div>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cms_portfolio_client' => array(
    'und' => array(
      0 => array(
        'value' => 'Wikipedia',
        'format' => NULL,
      ),
    ),
  ),
  'field_cms_portfolio_links' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.sooperthemes.com/pricing',
        'title' => 'Project Link',
        'attributes' => array(),
      ),
    ),
  ),
  'field_cms_portoflio_custom' => array(
    'und' => array(
      0 => array(
        'value' => 'Pityful a rethoric',
        'format' => NULL,
      ),
    ),
  ),
  'field_comparison_images' => array(),
  'field_image_display' => array(
    'und' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:15:"full_width_1920";s:10:"image_link";s:4:"file";}',
      ),
    ),
  ),
  'field_image_display_style' => array(),
  'field_page_attachments' => array(),
  'field_portfolio_category' => array(
    'und' => array(
      0 => array(
        'tid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
        'uuid' => '4e9e1f82-0684-4fed-8916-6a1b1d76764e',
      ),
    ),
  ),
  'field_portfolio_images' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '933e66cc-feae-490d-a7f4-6faf58827632',
        'alt' => NULL,
        'title' => NULL,
      ),
    ),
  ),
  'field_project_details_layout' => array(),
  'field_project_sidebar' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-08-28 08:09:07 +0000',
  'user_uuid' => 'f3a5fbb6-f1ba-4c51-956c-a81a485017f7',
);
  return $nodes;
}
