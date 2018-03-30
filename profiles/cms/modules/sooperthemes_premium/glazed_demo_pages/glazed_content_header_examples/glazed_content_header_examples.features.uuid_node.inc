<?php
/**
 * @file
 * glazed_content_header_examples.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function glazed_content_header_examples_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Pull-Down Box Header',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1473181893,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0cf51090-8d6a-4e4f-8fb7-7c9d6c6b655e',
  'field_glazed_content_design' => array(
    'und' => array(
      0 => array(
        'value' => '3a359960-12d9-4de6-b4e6-69630e2b7fe5',
        'revision_id' => '3a359960-12d9-4de6-b4e6-69630e2b7fe5',
        'uuid' => '3a359960-12d9-4de6-b4e6-69630e2b7fe5',
      ),
    ),
  ),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-section  " data-az-id="b2" data-azat-fullheight="yes" data-azat-style="background-image: url(-base-url-/-files-directory-/page-cb_attachments/demopages-32.jpg?fid=65);background-repeat: no-repeat;background-size: cover;" data-azb="az_section" id="b2" style="background-image: url(&quot;-base-url-/-files-directory-/page-cb_attachments/demopages-32.jpg?fid=65&quot;); background-repeat: no-repeat; background-size: cover; height: 100vh;">
	<div class="az-ctnr container" data-azcnt="true"></div>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'demopages-32.jpg',
        'uri' => 'public://page-cb_attachments/demopages-32.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 614041,
        'status' => 1,
        'type' => 'image',
        'uuid' => '9ee1042d-33c1-4d28-8488-b9076b0bed37',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1200,
          'width' => 1920,
        ),
        'alt' => '',
        'title' => '',
        'height' => 1200,
        'width' => 1920,
        'display' => 0,
        'description' => '',
        'uuid_features_packaged_file_path' => 'assets/demopages-32.jpg',
      ),
    ),
  ),
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
  'date' => '2016-09-06 17:11:33 +0000',
  'user_uuid' => '06421791-c291-4c51-8e56-3aa1519fd98f',
);
  $nodes[] = array(
  'title' => 'Logo Left, Menu Left',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1473849012,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0e51456a-cf62-4c5d-9d6b-ebfb9dd2577b',
  'field_glazed_content_design' => array(
    'und' => array(
      0 => array(
        'value' => '98d71b30-00b4-4120-8db0-489489bb486d',
        'revision_id' => '98d71b30-00b4-4120-8db0-489489bb486d',
        'uuid' => '98d71b30-00b4-4120-8db0-489489bb486d',
      ),
    ),
  ),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-section glazed-util-color-white glazed-util-overlay-60 glazed-util-overlay-primary " data-az-id="b23" data-azat-el_class="glazed-util-color-white glazed-util-overlay-60 glazed-util-overlay-primary" data-azat-fullheight="yes" data-azat-parallax_speed="30" data-azat-style="padding-top:15%;padding-bottom:15%;background-image: url(http://i.imgur.com/vQuGmRc.jpg);background-repeat: no-repeat;background-size: cover;" data-azb="az_section" id="b23" style="padding-top: 15%; padding-bottom: 15%; background-image: url(&quot;http://i.imgur.com/vQuGmRc.jpg&quot;); background-repeat: no-repeat; background-size: cover; height: 100vh;">
	<div class="az-ctnr container" data-azcnt="true">
		<div class="az-element az-section" data-az-id="b24" data-azat-an_hidden="before_in" data-azat-an_in="fadeIn" data-azat-an_start="appear" data-azb="az_section" id="b24" style="opacity: 1;">
			<div class="az-ctnr container" data-azcnt="true">
				<div class="az-element az-text" data-az-id="b25" data-azat-style="opacity:1;" data-azb="az_text" data-azcnt="true" style="opacity:1;">
					<h1><strong><span style="color:#FFFFFF;">Dive into the Glazed Drupal Experience</span></strong></h1>
				</div>

				<div class="az-element az-row row" data-az-id="b26" data-azat-device="sm" data-azb="az_row" data-azcnt="true" style="">
					<div class="az-element az-ctnr az-column  col-sm-9" data-az-id="b27" data-azat-width="3/4" data-azb="az_column" data-azcnt="true" style="">
						<div class="az-element az-text" data-az-id="b28" data-azb="az_text" data-azcnt="true" style="">
							<h2><span style="color:#FFFFFF;">Easy Theme Settings, Pixel Perfect Sub-Themes and a powerful Drag and Drop builder with Views and Media integration.</span></h2>
						</div>
					</div>

					<div class="az-element az-ctnr az-column  col-sm-3" data-az-id="b29" data-azat-width=" 1/4" data-azb="az_column" data-azcnt="true" style="">
						<div class="az-element az-template " data-az-id="b30" data-azb="button-border-white" style="">
							<div data-azcnt="true"><a class="btn btn-lg btn-block stpe-borderbutton glazed-util-border-white glazed-util-color-white glazed-util-hover-background-white glazed-util-hover-border-white glazed-util-hover-color-primary az-editable" href="http://sooperthemes.com/pricing" style="padding-left:10px;padding-right:10px;" target="_self" type="button">Join SooperThemes &gt;</a></div>
						</div>
					</div>
				</div>
			</div>
		</div>
	</div>
</div>
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/animate.css/animate.min.css"><script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script><script src="-base-url-/-module-directory-/glazed_builder/glazed_frontend.min.js"></script>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2016-09-14 10:30:12 +0000',
  'user_uuid' => '06421791-c291-4c51-8e56-3aa1519fd98f',
);
  $nodes[] = array(
  'title' => 'Side Header',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1473161524,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2666ca79-fd85-4457-8a13-133e93db3693',
  'field_glazed_content_design' => array(
    'und' => array(
      0 => array(
        'value' => '09d096ec-9275-486a-b43b-934fd8c3d75c',
        'revision_id' => '09d096ec-9275-486a-b43b-934fd8c3d75c',
        'uuid' => '09d096ec-9275-486a-b43b-934fd8c3d75c',
      ),
    ),
  ),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-section  " data-az-id="b2" data-azat-fullheight="yes" data-azat-style="padding-top:25%;background-image: url(-base-url-/-files-directory-/page-cb_attachments/food-hero-adnan-puzic-hq-1-1920.jpg?fid=35);background-repeat: no-repeat;background-size: cover;" data-azb="az_section" id="b2" style="padding-top: 25%; background-image: url(&quot;-base-url-/-files-directory-/page-cb_attachments/food-hero-adnan-puzic-hq-1-1920.jpg?fid=35&quot;); background-repeat: no-repeat; background-size: cover; height: 100vh;">
	<div class="az-ctnr container" data-azcnt="true">
		<div class="az-element az-row row" data-az-id="b3" data-azat-device="sm" data-azb="az_row" data-azcnt="true" style="">
			<div class="az-element az-ctnr az-column  col-sm-12" data-az-id="b4" data-azat-width="1/1" data-azb="az_column" data-azcnt="true" style=""></div>
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
  'field_cb_page_attachments' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'food-hero-adnan-puzic-hq-1-1920.jpg',
        'uri' => 'public://page-cb_attachments/food-hero-adnan-puzic-hq-1-1920.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 672752,
        'status' => 1,
        'type' => 'image',
        'uuid' => 'b9359b64-78f8-4ff9-bc92-47b86705373e',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1286,
          'width' => 1920,
        ),
        'alt' => '',
        'title' => '',
        'height' => 1286,
        'width' => 1920,
        'display' => 0,
        'description' => '',
        'uuid_features_packaged_file_path' => 'assets/food-hero-adnan-puzic-hq-1-1920.jpg',
      ),
    ),
  ),
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
  'date' => '2016-09-06 11:32:04 +0000',
  'user_uuid' => '06421791-c291-4c51-8e56-3aa1519fd98f',
);
  $nodes[] = array(
  'title' => 'Full Width Header',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1473709465,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2b1a92c8-69d9-494b-8db2-d588f8a012ac',
  'field_glazed_content_design' => array(
    'und' => array(
      0 => array(
        'value' => '3a6ee47f-a933-4e36-bea5-1896e6c50e4c',
        'revision_id' => '3a6ee47f-a933-4e36-bea5-1896e6c50e4c',
        'uuid' => '3a6ee47f-a933-4e36-bea5-1896e6c50e4c',
      ),
    ),
  ),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-section  " data-az-id="b2" data-azat-fullheight="yes" data-azat-style="background-image: url(-base-url-/-files-directory-/page-cb_attachments/clean-desk-top_1.jpg?fid=31);background-repeat: no-repeat;background-size: cover;background-position:center bottom;" data-azb="az_section" id="b2" style="background-image: url(&quot;-base-url-/-files-directory-/page-cb_attachments/clean-desk-top_1.jpg?fid=31&quot;); background-repeat: no-repeat; background-size: cover; background-position: center bottom; height: 100vh;">
	<div class="az-ctnr container" data-azcnt="true"></div>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'clean-desk-top_1.jpg',
        'uri' => 'public://page-cb_attachments/clean-desk-top_1.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 400188,
        'status' => 1,
        'type' => 'image',
        'uuid' => '4da2a0dc-e1be-46c4-b312-62e05964d34c',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1225,
          'width' => 1920,
        ),
        'alt' => '',
        'title' => '',
        'height' => 1225,
        'width' => 1920,
        'display' => 0,
        'description' => '',
        'uuid_features_packaged_file_path' => 'assets/clean-desk-top_1.jpg',
      ),
    ),
  ),
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
  'date' => '2016-09-12 19:44:25 +0000',
  'user_uuid' => '06421791-c291-4c51-8e56-3aa1519fd98f',
);
  $nodes[] = array(
  'title' => 'Centered (Stacked)',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1478028370,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2efc8ede-fe27-42f4-b1a9-aa20c164ab50',
  'field_glazed_content_design' => array(
    'und' => array(
      0 => array(
        'value' => '5a2d84f4-f700-49b0-b70d-43791b2ea1d8',
        'revision_id' => '5a2d84f4-f700-49b0-b70d-43791b2ea1d8',
        'uuid' => '5a2d84f4-f700-49b0-b70d-43791b2ea1d8',
      ),
    ),
  ),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-section glazed-util-color-white glazed-util-overlay-60 glazed-util-overlay-primary " data-az-id="b23" data-azat-el_class="glazed-util-color-white glazed-util-overlay-60 glazed-util-overlay-primary" data-azat-fullheight="yes" data-azat-parallax_speed="30" data-azat-style="padding-top:15%;padding-bottom:15%;background-image: url(http://i.imgur.com/vQuGmRc.jpg);background-repeat: no-repeat;background-size: cover;" data-azb="az_section" id="b23" style="padding-top: 15%; padding-bottom: 15%; background-image: url(&quot;http://i.imgur.com/vQuGmRc.jpg&quot;); background-repeat: no-repeat; background-size: cover; height: 100vh;">
	<div class="az-ctnr container" data-azcnt="true">
		<div class="az-element az-section" data-az-id="b24" data-azat-an_hidden="before_in" data-azat-an_in="fadeIn" data-azat-an_start="appear" data-azb="az_section" id="b24" style="opacity: 1;">
			<div class="az-ctnr container" data-azcnt="true">
				<div class="az-element az-text" data-az-id="b25" data-azat-style="opacity:1;" data-azb="az_text" data-azcnt="true" style="opacity:1;">
					<h1><strong><span style="color:#FFFFFF;">Dive into the Glazed Drupal Experience</span></strong></h1>
				</div>

				<div class="az-element az-row row" data-az-id="b26" data-azat-device="sm" data-azb="az_row" data-azcnt="true" style="">
					<div class="az-element az-ctnr az-column  col-sm-9" data-az-id="b27" data-azat-width="3/4" data-azb="az_column" data-azcnt="true" style="">
						<div class="az-element az-text" data-az-id="b28" data-azb="az_text" data-azcnt="true" style="">
							<h2><span style="color:#FFFFFF;">Easy Theme Settings, Pixel Perfect Sub-Themes and a powerful Drag and Drop builder with Views and Media integration.</span></h2>
						</div>
					</div>

					<div class="az-element az-ctnr az-column  col-sm-3" data-az-id="b29" data-azat-width=" 1/4" data-azb="az_column" data-azcnt="true" style="">
						<div class="az-element az-template " data-az-id="b30" data-azb="button-border-white" style="">
							<div data-azcnt="true"><a class="btn btn-lg btn-block stpe-borderbutton glazed-util-border-white glazed-util-color-white glazed-util-hover-background-white glazed-util-hover-border-white glazed-util-hover-color-primary az-editable" href="http://sooperthemes.com/pricing" style="padding-left:10px;padding-right:10px;" target="_self" type="button">Join SooperThemes &gt;</a></div>
						</div>
					</div>
				</div>
			</div>
		</div>
	</div>
</div>
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/animate.css/animate.min.css"><script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script><script src="-base-url-/-module-directory-/glazed_builder/glazed_frontend.min.js"></script>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2016-11-01 19:26:10 +0000',
  'user_uuid' => '06421791-c291-4c51-8e56-3aa1519fd98f',
);
  $nodes[] = array(
  'title' => 'Transparent Header',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1473142413,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '51bb3421-2cc2-42b4-b278-5e845db02e71',
  'field_glazed_content_design' => array(
    'und' => array(
      0 => array(
        'value' => '9aed5260-2dac-416e-a13c-7db95495937c',
        'revision_id' => '9aed5260-2dac-416e-a13c-7db95495937c',
        'uuid' => '9aed5260-2dac-416e-a13c-7db95495937c',
      ),
    ),
  ),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-section glazed-util-overlay-20 glazed-util-overlay-gray " data-az-id="b2" data-azat-el_class="glazed-util-overlay-20 glazed-util-overlay-gray" data-azat-fullheight="yes" data-azat-style="padding-top:25%;padding-bottom:5%;background-image: url(-base-url-/-files-directory-/page-cb_attachments/casual-professional_0.jpg?fid=32);background-repeat: no-repeat;background-size: cover;background-position:center center;" data-azb="az_section" id="b2" style="padding-top: 25%; padding-bottom: 5%; background-image: url(&quot;-base-url-/-files-directory-/page-cb_attachments/casual-professional_0.jpg?fid=32&quot;); background-repeat: no-repeat; background-size: cover; background-position: center center; height: 100vh;">
	<div class="az-ctnr container" data-azcnt="true">
		<div class="az-element az-row row" data-az-id="b3" data-azat-device="sm" data-azb="az_row" data-azcnt="true" style="">
			<div class="az-element az-ctnr az-column  col-sm-4" data-az-id="b4" data-azat-width="1/3" data-azb="az_column" data-azcnt="true" style="">
				<div class="az-element az-template " data-az-id="b5" data-azb="cta-simple" style="">
					<div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css">
						<p class="lead az-editable" style="">Glazed lets you design the header for individual pages. Get that perfect fit for your hero image!</p>

						<p><a class="btn btn-primary btn-lg clear-both clearfix az-editable" href="http://sooperthemes.com/pricing">Try it now </a></p>
					</div>
				</div>
			</div>

			<div class="az-element az-ctnr az-column  col-sm-4" data-az-id="b6" data-azat-width=" 1/3 " data-azb="az_column" data-azcnt="true" style=""></div>

			<div class="az-element az-ctnr az-column  col-sm-4" data-az-id="b7" data-azat-width=" 1/3" data-azb="az_column" data-azcnt="true" style=""></div>
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
  'field_cb_page_attachments' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'casual-professional_0.jpg',
        'uri' => 'public://page-cb_attachments/casual-professional_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 143559,
        'status' => 1,
        'type' => 'image',
        'uuid' => '75b687d0-a898-49c6-b87e-336f13462d71',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1112,
          'width' => 1920,
        ),
        'alt' => '',
        'title' => '',
        'height' => 1112,
        'width' => 1920,
        'display' => 0,
        'description' => '',
        'uuid_features_packaged_file_path' => 'assets/casual-professional_0.jpg',
      ),
    ),
  ),
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
  'date' => '2016-09-06 06:13:33 +0000',
  'user_uuid' => '06421791-c291-4c51-8e56-3aa1519fd98f',
);
  $nodes[] = array(
  'title' => 'Logo Right, Menu Left',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1473843259,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7288000a-d02b-4ffa-96df-0029ffcfc095',
  'field_glazed_content_design' => array(
    'und' => array(
      0 => array(
        'value' => 'f9f22153-c14f-447c-b856-88dd3f9c965d',
        'revision_id' => 'f9f22153-c14f-447c-b856-88dd3f9c965d',
        'uuid' => 'f9f22153-c14f-447c-b856-88dd3f9c965d',
      ),
    ),
  ),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-section glazed-util-color-white glazed-util-overlay-60 glazed-util-overlay-primary " data-az-id="b39" data-azat-el_class="glazed-util-color-white glazed-util-overlay-60 glazed-util-overlay-primary" data-azat-fullheight="yes" data-azat-parallax_speed="30" data-azat-style="padding-top:15%;padding-bottom:15%;background-image: url(http://i.imgur.com/vQuGmRc.jpg);background-repeat: no-repeat;background-size: cover;" data-azb="az_section" id="b39" style="padding-top: 15%; padding-bottom: 15%; background-image: url(&quot;http://i.imgur.com/vQuGmRc.jpg&quot;); background-repeat: no-repeat; background-size: cover; height: 100vh;">
	<div class="az-ctnr container" data-azcnt="true">
		<div class="az-element az-section" data-az-id="b40" data-azat-an_hidden="before_in" data-azat-an_in="fadeIn" data-azat-an_start="appear" data-azb="az_section" id="b40" style="opacity: 1;">
			<div class="az-ctnr container" data-azcnt="true">
				<div class="az-element az-text" data-az-id="b41" data-azat-style="opacity:1;" data-azb="az_text" data-azcnt="true" style="opacity:1;">
					<h1><strong><span style="color:#FFFFFF;">Dive into the Glazed Drupal Experience</span></strong></h1>
				</div>

				<div class="az-element az-row row" data-az-id="b42" data-azat-device="sm" data-azb="az_row" data-azcnt="true" style="">
					<div class="az-element az-ctnr az-column  col-sm-9" data-az-id="b43" data-azat-width="3/4" data-azb="az_column" data-azcnt="true" style="">
						<div class="az-element az-text" data-az-id="b44" data-azb="az_text" data-azcnt="true" style="">
							<h2><span style="color:#FFFFFF;">Easy Theme Settings, Pixel Perfect Sub-Themes and a powerful Drag and Drop builder with Views and Media integration.</span></h2>
						</div>
					</div>

					<div class="az-element az-ctnr az-column  col-sm-3" data-az-id="b45" data-azat-width=" 1/4" data-azb="az_column" data-azcnt="true" style="">
						<div class="az-element az-template " data-az-id="b46" data-azb="button-border-white" style="">
							<div data-azcnt="true"><a class="btn btn-lg btn-block stpe-borderbutton glazed-util-border-white glazed-util-color-white glazed-util-hover-background-white glazed-util-hover-border-white glazed-util-hover-color-primary az-editable" href="http://sooperthemes.com/pricing" style="padding-left:10px;padding-right:10px;" target="_self" type="button">Join SooperThemes &gt;</a></div>
						</div>
					</div>
				</div>
			</div>
		</div>
	</div>
</div>
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/animate.css/animate.min.css"><script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script><script src="-base-url-/-module-directory-/glazed_builder/glazed_frontend.min.js"></script>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2016-09-14 08:54:19 +0000',
  'user_uuid' => '06421791-c291-4c51-8e56-3aa1519fd98f',
);
  $nodes[] = array(
  'title' => 'Logo Center, Menu Left',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1473849365,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8c1594e4-5a78-4657-b6dc-26b40cf72648',
  'field_glazed_content_design' => array(
    'und' => array(
      0 => array(
        'value' => 'd5f6c7fa-9663-43b4-ab9e-dbd229f93f00',
        'revision_id' => 'd5f6c7fa-9663-43b4-ab9e-dbd229f93f00',
        'uuid' => 'd5f6c7fa-9663-43b4-ab9e-dbd229f93f00',
      ),
    ),
  ),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-section glazed-util-color-white glazed-util-overlay-60 glazed-util-overlay-primary " data-az-id="b23" data-azat-el_class="glazed-util-color-white glazed-util-overlay-60 glazed-util-overlay-primary" data-azat-fullheight="yes" data-azat-parallax_speed="30" data-azat-style="padding-top:15%;padding-bottom:15%;background-image: url(http://i.imgur.com/vQuGmRc.jpg);background-repeat: no-repeat;background-size: cover;" data-azb="az_section" id="b23" style="padding-top: 15%; padding-bottom: 15%; background-image: url(&quot;http://i.imgur.com/vQuGmRc.jpg&quot;); background-repeat: no-repeat; background-size: cover; height: 100vh;">
	<div class="az-ctnr container" data-azcnt="true">
		<div class="az-element az-section" data-az-id="b24" data-azat-an_hidden="before_in" data-azat-an_in="fadeIn" data-azat-an_start="appear" data-azb="az_section" id="b24" style="opacity: 1;">
			<div class="az-ctnr container" data-azcnt="true">
				<div class="az-element az-text" data-az-id="b25" data-azat-style="opacity:1;" data-azb="az_text" data-azcnt="true" style="opacity:1;">
					<h1><strong><span style="color:#FFFFFF;">Dive into the Glazed Drupal Experience</span></strong></h1>
				</div>

				<div class="az-element az-row row" data-az-id="b26" data-azat-device="sm" data-azb="az_row" data-azcnt="true" style="">
					<div class="az-element az-ctnr az-column  col-sm-9" data-az-id="b27" data-azat-width="3/4" data-azb="az_column" data-azcnt="true" style="">
						<div class="az-element az-text" data-az-id="b28" data-azb="az_text" data-azcnt="true" style="">
							<h2><span style="color:#FFFFFF;">Easy Theme Settings, Pixel Perfect Sub-Themes and a powerful Drag and Drop builder with Views and Media integration.</span></h2>
						</div>
					</div>

					<div class="az-element az-ctnr az-column  col-sm-3" data-az-id="b29" data-azat-width=" 1/4" data-azb="az_column" data-azcnt="true" style="">
						<div class="az-element az-template " data-az-id="b30" data-azb="button-border-white" style="">
							<div data-azcnt="true"><a class="btn btn-lg btn-block stpe-borderbutton glazed-util-border-white glazed-util-color-white glazed-util-hover-background-white glazed-util-hover-border-white glazed-util-hover-color-primary az-editable" href="http://sooperthemes.com/pricing" style="padding-left:10px;padding-right:10px;" target="_self" type="button">Join SooperThemes &gt;</a></div>
						</div>
					</div>
				</div>
			</div>
		</div>
	</div>
</div>
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/animate.css/animate.min.css"><script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script><script src="-base-url-/-module-directory-/glazed_builder/glazed_frontend.min.js"></script>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2016-09-14 10:36:05 +0000',
  'user_uuid' => '06421791-c291-4c51-8e56-3aa1519fd98f',
);
  $nodes[] = array(
  'title' => 'Floating Menu Header',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1473328053,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a5b033a1-c69c-4bc0-b645-23a0658efb56',
  'field_glazed_content_design' => array(
    'und' => array(
      0 => array(
        'value' => 'ab033898-20b6-4db3-9d41-032129cf3fbf',
        'revision_id' => 'ab033898-20b6-4db3-9d41-032129cf3fbf',
        'uuid' => 'ab033898-20b6-4db3-9d41-032129cf3fbf',
      ),
    ),
  ),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-section  " data-az-id="b2" data-azat-fullheight="yes" data-azat-style="background-image: url(-base-url-/-files-directory-/page-cb_attachments/buddhist-monks-elephant-1920.jpg?fid=30);background-repeat: no-repeat;background-size: cover;" data-azb="az_section" id="b2" style="background-image: url(&quot;-base-url-/-files-directory-/page-cb_attachments/buddhist-monks-elephant-1920.jpg?fid=30&quot;); background-repeat: no-repeat; background-size: cover; height: 100vh;">
	<div class="az-ctnr container" data-azcnt="true"></div>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'buddhist-monks-elephant-1920.jpg',
        'uri' => 'public://page-cb_attachments/buddhist-monks-elephant-1920.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 399137,
        'status' => 1,
        'type' => 'image',
        'uuid' => '4ba7006f-9a6d-43ae-92f7-d41ff2b2c348',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1280,
          'width' => 1920,
        ),
        'alt' => '',
        'title' => '',
        'height' => 1280,
        'width' => 1920,
        'display' => 0,
        'description' => '',
        'uuid_features_packaged_file_path' => 'assets/buddhist-monks-elephant-1920.jpg',
      ),
    ),
  ),
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
  'date' => '2016-09-08 09:47:33 +0000',
  'user_uuid' => '06421791-c291-4c51-8e56-3aa1519fd98f',
);
  $nodes[] = array(
  'title' => 'Custom Colors',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1473710870,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c52c1f98-2302-4133-9d8c-811d45a7f4b4',
  'field_glazed_content_design' => array(
    'und' => array(
      0 => array(
        'value' => 'a121db4a-5e8f-42c6-b798-150b8d1eabd1',
        'revision_id' => 'a121db4a-5e8f-42c6-b798-150b8d1eabd1',
        'uuid' => 'a121db4a-5e8f-42c6-b798-150b8d1eabd1',
      ),
    ),
  ),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-section  " data-az-id="b2" data-azat-fullheight="yes" data-azat-style="background-image: url(-base-url-/-files-directory-/page-cb_attachments/cupcake-redshift.jpg?fid=36);background-repeat: no-repeat;background-size: cover;background-position:center bottom;" data-azb="az_section" id="b2" style="background-image: url(&quot;-base-url-/-files-directory-/page-cb_attachments/cupcake-redshift.jpg?fid=36&quot;); background-repeat: no-repeat; background-size: cover; background-position: center bottom; height: 100vh;">
	<div class="az-ctnr container" data-azcnt="true"></div>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'cupcake-redshift.jpg',
        'uri' => 'public://page-cb_attachments/cupcake-redshift.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 379323,
        'status' => 1,
        'type' => 'image',
        'uuid' => 'ccfc2df1-7d42-457b-9818-4f48169f8e6c',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1280,
          'width' => 1920,
        ),
        'alt' => '',
        'title' => '',
        'height' => 1280,
        'width' => 1920,
        'display' => 0,
        'description' => '',
        'uuid_features_packaged_file_path' => 'assets/cupcake-redshift.jpg',
      ),
    ),
  ),
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
  'date' => '2016-09-12 20:07:50 +0000',
  'user_uuid' => '06421791-c291-4c51-8e56-3aa1519fd98f',
);
  $nodes[] = array(
  'title' => 'Centered (Inline)',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1473850567,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cb5d554f-9ba6-4d78-9d5c-cb7cb4819be4',
  'field_glazed_content_design' => array(
    'und' => array(
      0 => array(
        'value' => '30210fad-9afa-4b09-8c36-d84e615d8312',
        'revision_id' => '30210fad-9afa-4b09-8c36-d84e615d8312',
        'uuid' => '30210fad-9afa-4b09-8c36-d84e615d8312',
      ),
    ),
  ),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-section glazed-util-color-white glazed-util-overlay-60 glazed-util-overlay-primary " data-az-id="b23" data-azat-el_class="glazed-util-color-white glazed-util-overlay-60 glazed-util-overlay-primary" data-azat-fullheight="yes" data-azat-parallax_speed="30" data-azat-style="padding-top:15%;padding-bottom:15%;background-image: url(http://i.imgur.com/vQuGmRc.jpg);background-repeat: no-repeat;background-size: cover;" data-azb="az_section" id="b23" style="padding-top: 15%; padding-bottom: 15%; background-image: url(&quot;http://i.imgur.com/vQuGmRc.jpg&quot;); background-repeat: no-repeat; background-size: cover; height: 100vh;">
	<div class="az-ctnr container" data-azcnt="true">
		<div class="az-element az-section" data-az-id="b24" data-azat-an_hidden="before_in" data-azat-an_in="fadeIn" data-azat-an_start="appear" data-azb="az_section" id="b24" style="opacity: 1;">
			<div class="az-ctnr container" data-azcnt="true">
				<div class="az-element az-text" data-az-id="b25" data-azat-style="opacity:1;" data-azb="az_text" data-azcnt="true" style="opacity:1;">
					<h1><strong><span style="color:#FFFFFF;">Dive into the Glazed Drupal Experience</span></strong></h1>
				</div>

				<div class="az-element az-row row" data-az-id="b26" data-azat-device="sm" data-azb="az_row" data-azcnt="true" style="">
					<div class="az-element az-ctnr az-column  col-sm-9" data-az-id="b27" data-azat-width="3/4" data-azb="az_column" data-azcnt="true" style="">
						<div class="az-element az-text" data-az-id="b28" data-azb="az_text" data-azcnt="true" style="">
							<h2><span style="color:#FFFFFF;">Easy Theme Settings, Pixel Perfect Sub-Themes and a powerful Drag and Drop builder with Views and Media integration.</span></h2>
						</div>
					</div>

					<div class="az-element az-ctnr az-column  col-sm-3" data-az-id="b29" data-azat-width=" 1/4" data-azb="az_column" data-azcnt="true" style="">
						<div class="az-element az-template " data-az-id="b30" data-azb="button-border-white" style="">
							<div data-azcnt="true"><a class="btn btn-lg btn-block stpe-borderbutton glazed-util-border-white glazed-util-color-white glazed-util-hover-background-white glazed-util-hover-border-white glazed-util-hover-color-primary az-editable" href="http://sooperthemes.com/pricing" style="padding-left:10px;padding-right:10px;" target="_self" type="button">Join SooperThemes &gt;</a></div>
						</div>
					</div>
				</div>
			</div>
		</div>
	</div>
</div>
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/animate.css/animate.min.css"><script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script><script src="-base-url-/-module-directory-/glazed_builder/glazed_frontend.min.js"></script>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2016-09-14 10:56:07 +0000',
  'user_uuid' => '06421791-c291-4c51-8e56-3aa1519fd98f',
);
  $nodes[] = array(
  'title' => 'Logo Center, Menu Right',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1473849599,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f62f6d64-0a66-4d18-bbdc-692f0a946ac5',
  'field_glazed_content_design' => array(
    'und' => array(
      0 => array(
        'value' => 'dfd05d65-00f3-4e6f-92f5-b087f6892ad8',
        'revision_id' => 'dfd05d65-00f3-4e6f-92f5-b087f6892ad8',
        'uuid' => 'dfd05d65-00f3-4e6f-92f5-b087f6892ad8',
      ),
    ),
  ),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-section glazed-util-color-white glazed-util-overlay-60 glazed-util-overlay-primary " data-az-id="b23" data-azat-el_class="glazed-util-color-white glazed-util-overlay-60 glazed-util-overlay-primary" data-azat-fullheight="yes" data-azat-parallax_speed="30" data-azat-style="padding-top:15%;padding-bottom:15%;background-image: url(http://i.imgur.com/vQuGmRc.jpg);background-repeat: no-repeat;background-size: cover;" data-azb="az_section" id="b23" style="padding-top: 15%; padding-bottom: 15%; background-image: url(&quot;http://i.imgur.com/vQuGmRc.jpg&quot;); background-repeat: no-repeat; background-size: cover; height: 100vh;">
	<div class="az-ctnr container" data-azcnt="true">
		<div class="az-element az-section" data-az-id="b24" data-azat-an_hidden="before_in" data-azat-an_in="fadeIn" data-azat-an_start="appear" data-azb="az_section" id="b24" style="opacity: 1;">
			<div class="az-ctnr container" data-azcnt="true">
				<div class="az-element az-text" data-az-id="b25" data-azat-style="opacity:1;" data-azb="az_text" data-azcnt="true" style="opacity:1;">
					<h1><strong><span style="color:#FFFFFF;">Dive into the Glazed Drupal Experience</span></strong></h1>
				</div>

				<div class="az-element az-row row" data-az-id="b26" data-azat-device="sm" data-azb="az_row" data-azcnt="true" style="">
					<div class="az-element az-ctnr az-column  col-sm-9" data-az-id="b27" data-azat-width="3/4" data-azb="az_column" data-azcnt="true" style="">
						<div class="az-element az-text" data-az-id="b28" data-azb="az_text" data-azcnt="true" style="">
							<h2><span style="color:#FFFFFF;">Easy Theme Settings, Pixel Perfect Sub-Themes and a powerful Drag and Drop builder with Views and Media integration.</span></h2>
						</div>
					</div>

					<div class="az-element az-ctnr az-column  col-sm-3" data-az-id="b29" data-azat-width=" 1/4" data-azb="az_column" data-azcnt="true" style="">
						<div class="az-element az-template " data-az-id="b30" data-azb="button-border-white" style="">
							<div data-azcnt="true"><a class="btn btn-lg btn-block stpe-borderbutton glazed-util-border-white glazed-util-color-white glazed-util-hover-background-white glazed-util-hover-border-white glazed-util-hover-color-primary az-editable" href="http://sooperthemes.com/pricing" style="padding-left:10px;padding-right:10px;" target="_self" type="button">Join SooperThemes &gt;</a></div>
						</div>
					</div>
				</div>
			</div>
		</div>
	</div>
</div>
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/animate.css/animate.min.css"><script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script><script src="-base-url-/-module-directory-/glazed_builder/glazed_frontend.min.js"></script>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(),
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
  'date' => '2016-09-14 10:39:59 +0000',
  'user_uuid' => '06421791-c291-4c51-8e56-3aa1519fd98f',
);
  $nodes[] = array(
  'title' => 'Box Header',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1473161399,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f9deb576-445f-4b2b-914b-930fc84dcf73',
  'field_glazed_content_design' => array(
    'und' => array(
      0 => array(
        'value' => '7c9b9ac9-f7df-43e6-817f-206dfefe3ca8',
        'revision_id' => '7c9b9ac9-f7df-43e6-817f-206dfefe3ca8',
        'uuid' => '7c9b9ac9-f7df-43e6-817f-206dfefe3ca8',
      ),
    ),
  ),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="az-element az-section  " data-az-id="b2" data-azat-fullheight="yes" data-azat-style="background-image: url(-base-url-/-files-directory-/page-cb_attachments/demopagesB.jpg?fid=33);background-repeat: no-repeat;background-size: cover;" data-azat-video_options="loop" data-azat-video_start="600" data-azat-video_stop="610" data-azat-video_youtube="https://www.youtube.com/watch?v=qREKP9oijWI" data-azb="az_section" id="b2" style="background-image: url(&quot;-base-url-/-files-directory-/page-cb_attachments/demopagesB.jpg?fid=33&quot;); background-repeat: no-repeat; background-size: cover; height: 100vh;">
	<div class="az-ctnr container" data-azcnt="true"></div>
</div>
',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cb_page_attachments' => array(
    'und' => array(
      0 => array(
        'uid' => 1,
        'filename' => 'demopagesB.jpg',
        'uri' => 'public://page-cb_attachments/demopagesB.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 751302,
        'status' => 1,
        'type' => 'image',
        'uuid' => '82ed31a3-2613-4eef-823e-0c86077905d8',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1272,
          'width' => 1920,
        ),
        'alt' => '',
        'title' => '',
        'height' => 1272,
        'width' => 1920,
        'display' => 0,
        'description' => '',
        'uuid_features_packaged_file_path' => 'assets/demopagesB.jpg',
      ),
    ),
  ),
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
    'pathauto' => 0,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-06 11:29:59 +0000',
  'user_uuid' => '06421791-c291-4c51-8e56-3aa1519fd98f',
);
  return $nodes;
}
