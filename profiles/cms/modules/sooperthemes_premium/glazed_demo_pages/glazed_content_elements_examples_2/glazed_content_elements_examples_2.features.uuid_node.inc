<?php
/**
 * @file
 * glazed_content_elements_examples_2.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function glazed_content_elements_examples_2_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Image Element & Slider',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1455277789,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0d2550e9-bc2f-42f7-9f4a-27f5ad950b94',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="300psv0x" class="az-element az-section" style="padding-top:60px;" data-az-id="300psv0x" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="9kzxfph6" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="ezw8sxe2" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="ydwdsr3t" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="gqs84ikp" data-azb="az_text" data-azcnt="true">
					<h2 style="text-align: center;">Image Element</h2>
				</div><div class="az-element az-text" style="" data-az-id="jb53172t" data-azb="az_text" data-azcnt="true">
					<p class="lead">The image element is a simple element that lets you upload images, or select them from the Drupal media library. Animation and image styling are very easy using the Glazed Builder element settings.</p>
				</div><hr class="az-element az-separator" style="border: none;" data-az-id="9bwm1iqi" data-azb="az_separator"></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="gzhwzrv1" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="pr4ewanq" class="az-element az-section" style="padding-top:60px;" data-az-id="pr4ewanq" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="qb7k267c" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="dj0hs7m1" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="ys0hsxh6" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-image" data-az-id="cc9v9ftj" data-azb="az_image" data-azat-image="http://i.imgur.com/KJ0Cgre.jpg" data-azat-height=""><img src="http://i.imgur.com/KJ0Cgre.jpg" alt="" title="" style="width: 100%;"></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="zhssixl8" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="cinkebgv" class="az-element az-section" style="padding-top:60px;" data-az-id="cinkebgv" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-top:5%;" data-az-id="yciwxf6s" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-top:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="xwehaa7e" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="iscxjtg5" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="padding-bottom:3%;" data-az-id="er9d6894" data-azb="az_text" data-azat-style="padding-bottom:3%;" data-azcnt="true">
					<h2 style="text-align: center;">Image animation on scroll event</h2>
				</div><div class="az-element az-image" data-az-id="64n6y1kk" style="opacity: 1;" data-azb="az_image" data-azat-image="http://i.imgur.com/KJ0Cgre.jpg" data-azat-height="" data-azat-an_start="appear" data-azat-an_in="slideInLeft" data-azat-an_hidden="before_in" data-azat-an_offset="70"><img src="http://i.imgur.com/KJ0Cgre.jpg" alt="" title="" style="width: 100%;"></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="14kwp0fd" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="ypf43vwt" class="az-element az-section" style="padding-top:60px;" data-az-id="ypf43vwt" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="h16qlgo4" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="mghiw6k0" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="8lo7b448" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="7txukhkr" data-azb="az_text" data-azcnt="true">
					<h2 style="text-align: center;">Image Carousel</h2>
				</div><div class="az-element az-text" style="" data-az-id="8jhc88j0" data-azb="az_text" data-azcnt="true">
					<p class="lead">The image carousel is a shortcut to creating a slider with only images in it. You don\'t need to manage separate slides and their content: just add images.</p>
				</div><hr class="az-element az-separator" style="border: none;" data-az-id="vnztvxwx" data-azb="az_separator"></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="npv15az5" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="aslfx2ch" class="az-element az-section" style="" data-az-id="aslfx2ch" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="ai6w4ufw" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="3zmewgcq" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="wscxgris" data-azb="az_column" data-azat-width=" 1/2 " data-azcnt="true"><div id="pixe8qqd" class="az-element az-images-carousel carousel slide" data-ride="carousel" style="" data-az-id="pixe8qqd" data-azb="az_images_carousel" data-azat-images="http://i.imgur.com/vo7Qbyw.jpg,http://i.imgur.com/8jMrhmb.jpg,http://i.imgur.com/xxZvNgI.jpg"><ol class="carousel-indicators"><li data-target="#pixe8qqd" data-slide-to="0" class=""></li><li data-target="#pixe8qqd" data-slide-to="1" class="active"></li><li data-target="#pixe8qqd" data-slide-to="2"></li></ol><div class="carousel-inner"><img class="item" style="width:100%" src="http://i.imgur.com/vo7Qbyw.jpg" alt="" title=""><img class="item active" style="width:100%" src="http://i.imgur.com/8jMrhmb.jpg" alt="" title=""><img class="item" style="width:100%" src="http://i.imgur.com/xxZvNgI.jpg" alt="" title=""></div><a class="left carousel-control" href="#pixe8qqd" data-slide="prev"><span class="glyphicon glyphicon-chevron-left"></span></a><a class="right carousel-control" href="#pixe8qqd" data-slide="next"><span class="glyphicon glyphicon-chevron-right"></span></a></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="xybp54r9" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"></div></div></div></div><div id="g7nmoike" class="az-element az-section" style="padding-top:5%;" data-az-id="g7nmoike" data-azb="az_section" data-azat-style="padding-top:5%;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="6zeeimfw" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="8hqow7zk" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="b62e3a5g" data-azb="az_column" data-azat-width=" 1/2 " data-azcnt="true"><div class="az-element az-text" style="" data-az-id="0egs9s07" data-azb="az_text" data-azcnt="true">
					<h2 style="text-align: center;">Hidden next/prev controls</h2>
				</div><div id="bf87yj31" class="az-element az-images-carousel carousel slide" data-ride="carousel" style="" data-az-id="bf87yj31" data-azb="az_images_carousel" data-azat-images="http://i.imgur.com/xxZvNgI.jpg,http://i.imgur.com/8jMrhmb.jpg,http://i.imgur.com/vo7Qbyw.jpg" data-azat-hide="prev_next_buttons"><ol class="carousel-indicators"><li data-target="#bf87yj31" data-slide-to="0" class=""></li><li data-target="#bf87yj31" data-slide-to="1" class="active"></li><li data-target="#bf87yj31" data-slide-to="2"></li></ol><div class="carousel-inner"><img class="item" style="width:100%" src="http://i.imgur.com/xxZvNgI.jpg" alt="" title=""><img class="item active" style="width:100%" src="http://i.imgur.com/8jMrhmb.jpg" alt="" title=""><img class="item" style="width:100%" src="http://i.imgur.com/vo7Qbyw.jpg" alt="" title=""></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="qcqhzc5s" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"></div></div></div></div><link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/animate.css/animate.min.css">
<script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script>
<script src="-base-url-/-module-directory-/glazed_builder/glazed_frontend.min.js"></script>
',
        'summary' => '',
        'format' => 'wysiwyg_simple',
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
  'date' => '2016-02-12 11:49:49 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Revolution Slider',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1460621876,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1a7f1fac-caa4-42b6-8c3e-46fef3fc12e1',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="h7kmb0md" class="az-element az-section" style="padding-top:60px;" data-az-id="h7kmb0md" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="1iikm9u4" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="dulzi132" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="dlhtn6r1" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="faqbham9" data-azb="az_text" data-azcnt="true">
					<h2 style="text-align: center;">Revolution Slider</h2>
				</div><div class="az-element az-text" style="" data-az-id="gm56et56" data-azb="az_text" data-azcnt="true">
					<p class="lead">Revolution Slider Drupal module is included free with our Glazed theme and Glazed Builder downloads. Create your own custom slideshows with a complete slide and layer animation engine. Alternatively, import a slider from the <a href="https://revolution.themepunch.com/free-slider-exchange/">ThemePunch libary</a>*.</p>

				</div><hr class="az-element az-separator" style="border: none;" data-az-id="jnozyj0a" data-azb="az_separator"></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="t4q806v4" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="4sst5w51" class="az-element az-section" style="padding-top:5%;" data-az-id="4sst5w51" data-azb="az_section" data-azat-style="padding-top:5%;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="ejs6v4wb" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-12" style="" data-az-id="usiuhu57" data-azb="az_column" data-azat-width="1/1" data-azcnt="true"><div class="az-element az-cms-element" style="" data-az-id="l9ftowtj" data-azb="az_block-revslider-1"></div></div></div></div></div>',
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
  'date' => '2016-04-14 08:17:56 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Animation with Glazed & Glazed Builder',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1455277935,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '34998698-bc3b-4056-a6b6-b793443a2edc',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="yk194bis" class="az-element az-section" style="margin-top:0px;padding-top:60px;background-color:#fafafa;" data-az-id="yk194bis" data-azb="az_section" data-azat-style="margin-top:0px;padding-top:60px;background-color:#fafafa;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="m73vizm1" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="kisn07e9" data-azb="az_column" data-azat-width="2/3" data-azcnt="true"><div class="az-element az-image" data-az-id="d3js4g31" style="" data-azb="az_image" data-azat-image="http://i.imgur.com/cxAM4jE.png" data-azat-height="" data-azat-an_start="appear" data-azat-an_in="floatSmall" data-azat-an_infinite="yes" data-azat-an_duration="3000" data-azat-style="margin-bottom:-175%;margin-left:-20%;opacity:0.25;"><img src="http://i.imgur.com/cxAM4jE.png" alt="" title="" style="margin-bottom: -175%; margin-left: -20%; opacity: 0.25; width: 100%;"></div><div class="az-element az-image" data-az-id="dnb0yggs" style="" data-azb="az_image" data-azat-image="http://i.imgur.com/my9DPGv.png" data-azat-width="80%" data-azat-height="" data-azat-an_start="appear" data-azat-an_in="float" data-azat-an_infinite="yes" data-azat-an_duration="3000"><img src="http://i.imgur.com/my9DPGv.png" alt="" title="" style="width: 80%;"></div><div class="az-element az-image" data-az-id="f8wgnqrq" style="" data-azb="az_image" data-azat-image="http://i.imgur.com/7o2VHAp.png" data-azat-width="60%" data-azat-height="" data-azat-an_start="appear" data-azat-an_in="float" data-azat-an_infinite="yes" data-azat-an_duration="3000" data-azat-an_in_delay="300" data-azat-style="margin-top:-12%;margin-left:15%;"><img src="http://i.imgur.com/7o2VHAp.png" alt="" title="" style="margin-top: -12%; margin-left: 15%; width: 60%;"></div><div class="az-element az-image" data-az-id="f7ggycxv" style="" data-azb="az_image" data-azat-image="http://i.imgur.com/mMCSy3x.png" data-azat-width="62%" data-azat-height="" data-azat-an_start="appear" data-azat-an_in="floatSmall" data-azat-an_infinite="yes" data-azat-an_duration="3000" data-azat-style="margin-top:-15%;margin-left:13%;"><img src="http://i.imgur.com/mMCSy3x.png" alt="" title="" style="margin-top: -15%; margin-left: 13%; width: 62%;"></div></div><div class="az-element az-ctnr az-column  col-sm-4" style="padding-top:10%;" data-az-id="x7mh9dw2" data-azb="az_column" data-azat-width=" 1/3" data-azat-style="padding-top:10%;" data-azcnt="true"><div class="az-element az-text" style="opacity: 1;" data-az-id="mbqthmtz" data-azb="az_text" data-azat-an_start="appear" data-azat-an_in="fadeInUp" data-azat-an_hidden="before_in" data-azat-an_duration="300" data-azat-an_in_delay="100" data-azcnt="true"><h2>Animation<br></h2></div><div class="az-element az-text" style="opacity: 1;" data-az-id="w21jnknj" data-azb="az_text" data-azat-an_start="appear" data-azat-an_in="fadeInUp" data-azat-an_hidden="before_in" data-azat-an_duration="300" data-azat-an_in_delay="400" data-azcnt="true">
          <p class="lead"><span style="color:#747a85;">When used tastefully animations can engage your customers and amplify your message.</span></p>
        </div><div class="az-element az-text" style="opacity: 1;" data-az-id="jbx0ht4y" data-azb="az_text" data-azat-an_start="appear" data-azat-an_in="fadeInUp" data-azat-an_hidden="before_in" data-azat-an_duration="300" data-azat-an_in_delay="700" data-azcnt="true">
          <p class="lead"><span style="color:#747a85;">To the left we use the Glazed float animation to convey that this product is light as a feather.</span></p>
        </div></div></div></div></div><div id="yvi2cijb" class="az-element az-section" style="margin-top:-8%;background-position:right top;" data-az-id="yvi2cijb" data-azb="az_section" data-azat-parallax_speed="9" data-azat-style="margin-top:-8%;background-position:right top;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="ijgk9lqp" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-6" style="padding-top:30%;padding-right:10%;" data-az-id="eughzu4r" data-azb="az_column" data-azat-width="1/2" data-azat-style="padding-top:30%;padding-right:10%;" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="i6dzfynv" data-azb="az_text" data-azcnt="true"><h2>Sometimes a simple scrolling background is all you need</h2>

<p class="lead">The parallax background is a special effect that is only available on the section&nbsp; element. It is typically used for animation of large background photos but in this case we use it a little differently.</p>
</div></div><div class="az-element az-ctnr az-column  col-sm-6" style="padding-right:100px;" data-az-id="ntcdhph0" data-azb="az_column" data-azat-width=" 1/2" data-azat-style="padding-right:100px;" data-azcnt="true"><div id="dpze3wsk" class="az-element az-section" style="margin-left: -10%; padding-bottom: 50%; padding-left: 10%; background-image: url(&quot;http://i.imgur.com/5tI0ROE.png&quot;); background-repeat: no-repeat; background-position: 100% 0px; background-attachment: scroll;" data-az-id="dpze3wsk" data-azb="az_section" data-azat-effect="parallax" data-azat-parallax_speed="50" data-azat-parallax_mode="scroll" data-azat-style="margin-left:-10%;padding-bottom:50%;padding-left:10%;background-image: url(http://i.imgur.com/5tI0ROE.png);background-repeat: no-repeat;background-position:right top;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-image" data-az-id="lcwhi1zi" style="" data-azb="az_image" data-azat-image="http://i.imgur.com/1FyYrue.png" data-azat-height="" data-azat-an_start="appear" data-azat-an_in="floatSmall" data-azat-an_infinite="yes" data-azat-an_offset="35" data-azat-an_duration="3000" data-azat-style="margin-left:-13%;margin-right:20%;"><img src="http://i.imgur.com/1FyYrue.png" alt="" title="" style="margin-left: -13%; margin-right: 20%; width: 100%;"></div></div></div></div></div></div></div><div id="kefd89yw" class="az-element az-section" style="padding-top:100px;padding-bottom:100px;background-color:#fafafa;" data-az-id="kefd89yw" data-azb="az_section" data-azat-style="padding-top:100px;padding-bottom:100px;background-color:#fafafa;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="qw0f8i2w" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="8mqc9zjo" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="aom6rmzb" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-text" style="margin-top: 15px; margin-bottom: 40px; opacity: 1;" data-az-id="zmwqgac7" data-azb="az_text" data-azat-an_start="appear" data-azat-an_in="fadeIn" data-azat-an_hidden="before_in" data-azat-an_duration="300" data-azat-an_in_delay="500" data-azat-style="margin-top:15px;margin-bottom:40px;" data-azcnt="true"><h2 style="text-align: center;">Animate Anything, Without Coding<br></h2><p class="lead" style="text-align: center;">Frontend development used to be complicated and error prone, especially with animation. With Glazed and Glazed Builder it\'s super easy. All the animations on this page are done just by enabling some animation presets and setting the speed. <br></p></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="9y8wcg58" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div><div class="az-element az-row row  az-row--sm" style="" data-az-id="s6k13tlx" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="5ydf2dcy" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="frpwox05" data-azb="az_column" data-azat-width=" 1/2 " data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="xjwkh0vt" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"></div></div></div></div><div id="nwuc9cov" class="az-element az-section glazed-util-overlay-primary glazed-util-overlay-60" style="padding-top:120px;padding-bottom:120px;background-image: url(http://i.imgur.com/nB7m65I.jpg);background-repeat: no-repeat;background-size: cover;" data-az-id="nwuc9cov" data-azb="az_section" data-azat-el_class="glazed-util-overlay-primary glazed-util-overlay-60" data-azat-style="padding-top:120px;padding-bottom:120px;background-image: url(http://i.imgur.com/nB7m65I.jpg);background-repeat: no-repeat;background-size: cover;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-text" style="padding-bottom: 30px; opacity: 1;" data-az-id="irenzben" data-azb="az_text" data-azat-an_start="appear" data-azat-an_in="flipInX" data-azat-an_hidden="before_in" data-azat-an_in_delay="100" data-azat-style="padding-bottom:30px;" data-azcnt="true"><h1 style="text-align: center;">Top Animation Features</h1>
</div><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="i1wljf7g" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInUp" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="kzo6jnyu" data-azb="az_column" data-azat-width=" 1/2" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="fn4qqmnw" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInLeft" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="jbot1p6w" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"><div class="az-element az-icon text-right glazed-util-color-accent1" data-az-id="81dkswy2" data-azb="az_icon" data-azat-icon="et et-icon-mobile" data-azat-size="fa-3x" data-azat-el_class="text-right glazed-util-color-accent1"><i class="et et-icon-mobile fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column  col-sm-10" style="" data-az-id="zqqbajjq" data-azb="az_column" data-azat-width=" 5/6" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="6hxd9839" data-azb="az_text" data-azcnt="true"><h3>Responsive Animation<br></h3><p class="lead">Try this page on your mobile. All animations work great on mobile devices, even when the responsive grid is collapsed to a single column.<br></p></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="4hqwv3sr" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="olqa8wec" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInRight" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="4vff2856" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"><div class="az-element az-icon text-right glazed-util-color-accent1" data-az-id="m8pbzbjo" data-azb="az_icon" data-azat-icon="et et-icon-hotairballoon" data-azat-size="fa-3x" data-azat-el_class="text-right glazed-util-color-accent1"><i class="et et-icon-hotairballoon fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column  col-sm-10" style="" data-az-id="21o6dkoc" data-azb="az_column" data-azat-width=" 5/6" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="kd510zgt" data-azb="az_text" data-azcnt="true"><h3>Scroll Animations</h3><p class="lead">With Glazed Builder you can create awesome scroll animations without any coding. Create amazing depth perception with parallax backgrounds.<br></p></div></div></div></div></div><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="iljja7dt" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInUp" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="ij39e61b" data-azb="az_column" data-azat-width=" 1/2" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="axok0qbx" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInLeft" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="a4mq8a2d" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"><div class="az-element az-icon text-right glazed-util-color-accent1" data-az-id="xhflmyj0" data-azb="az_icon" data-azat-icon="et et-icon-happy" data-azat-size="fa-3x" data-azat-el_class="text-right glazed-util-color-accent1"><i class="et et-icon-happy fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column  col-sm-10" style="" data-az-id="ahkyyqnn" data-azb="az_column" data-azat-width=" 5/6" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="3q3rkmh1" data-azb="az_text" data-azcnt="true"><h3>No Code</h3>

<p class="lead">Glazed Builder lets you add these beautiful animations at the click of a mouse. No coding skills needed.</p>
</div></div></div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="2w4kckn9" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="r8kaitsl" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInRight" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="3h8kgov2" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"><div class="az-element az-icon text-right glazed-util-color-accent1" data-az-id="r54luxxf" data-azb="az_icon" data-azat-icon="et et-icon-adjustments" data-azat-size="fa-3x" data-azat-el_class="text-right glazed-util-color-accent1"><i class="et et-icon-adjustments fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column  col-sm-10" style="" data-az-id="304ua21y" data-azb="az_column" data-azat-width=" 5/6" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="g4gx2zi1" data-azb="az_text" data-azcnt="true"><h3>Advanced Animation Settings<br></h3><p class="lead">Start with out animate.css presets and customize from there. You can change animation speed, events, transitions and more!<br></p></div></div></div></div></div><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="dy5jmm6v" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInUp" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="k633ojsh" data-azb="az_column" data-azat-width=" 1/2" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="2q76498u" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInLeft" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="2b1plr1i" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"><div class="az-element az-icon text-right glazed-util-color-accent1" data-az-id="s1trcier" data-azb="az_icon" data-azat-icon="et et-icon-browser" data-azat-size="fa-3x" data-azat-el_class="text-right glazed-util-color-accent1"><i class="et et-icon-browser fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column  col-sm-10" style="" data-az-id="a0bn6ofk" data-azb="az_column" data-azat-width=" 5/6" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="pbdaxufe" data-azb="az_text" data-azcnt="true"><h3>Full Demo Content Included<br></h3><p class="lead">Nothing is more fun that opening up the pre-installed demo content and editing animations.<br></p></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="w3mjah79" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="tb7typoh" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInRight" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="s23s7mfd" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"><div class="az-element az-icon text-right glazed-util-color-accent1" data-az-id="x8oolns5" data-azb="az_icon" data-azat-icon="et et-icon-tools" data-azat-size="fa-3x" data-azat-el_class="text-right glazed-util-color-accent1"><i class="et et-icon-tools fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column  col-sm-10" style="" data-az-id="1et5cef2" data-azb="az_column" data-azat-width=" 5/6" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="n1bocnfj" data-azb="az_text" data-azcnt="true"><h3>Bootstrap 3</h3>

<p class="lead">All the animations&nbsp; play nice with Bootstrap 3. In this section we stack different animations on rows and columns for a combined effect.</p>
</div></div></div></div></div><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="sa01r1aq" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInUp" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="i61owfe0" data-azb="az_column" data-azat-width=" 1/2" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="vx5f1bnr" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInLeft" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="13ruwzua" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"><div class="az-element az-icon text-right glazed-util-color-accent1" data-az-id="6trc5n2y" data-azb="az_icon" data-azat-icon="et et-icon-streetsign" data-azat-size="fa-3x" data-azat-el_class="text-right glazed-util-color-accent1"><i class="et et-icon-streetsign fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column  col-sm-10" style="" data-az-id="xmv1lfss" data-azb="az_column" data-azat-width=" 5/6" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="9yjszude" data-azb="az_text" data-azcnt="true"><h3>Directional or On the Spot<br></h3><p class="lead">Use directional animations to move the user forward, or keep an animation centered to keep attention on your call to action.<br></p></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="ytelm04r" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="zid1dplj" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInRight" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="cs01dc1e" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"><div class="az-element az-icon text-right glazed-util-color-accent1" data-az-id="eixlotma" data-azb="az_icon" data-azat-icon="et et-icon-bike" data-azat-size="fa-3x" data-azat-el_class="text-right glazed-util-color-accent1"><i class="et et-icon-bike fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column  col-sm-10" style="" data-az-id="ghos2rcl" data-azb="az_column" data-azat-width=" 5/6" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="15sxpla5" data-azb="az_text" data-azcnt="true"><h3>PageSpeed Optimized</h3><p class="lead">Our customized animation library is half the size animate.css while keeping. It\'s only loaded on there pages that need it.<br></p></div></div></div></div></div><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="b3ques15" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInUp" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="vfywsbw1" data-azb="az_column" data-azat-width=" 1/2" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="yukdbhg7" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInLeft" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="llo9ir8d" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"><div class="az-element az-icon text-right glazed-util-color-accent1" data-az-id="zslthkgl" data-azb="az_icon" data-azat-icon="et et-icon-newspaper" data-azat-size="fa-3x" data-azat-el_class="text-right glazed-util-color-accent1"><i class="et et-icon-newspaper fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column  col-sm-10" style="" data-az-id="7eja1ejn" data-azb="az_column" data-azat-width=" 5/6" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="fvl9vqk6" data-azb="az_text" data-azcnt="true"><h3>Site-wide animations</h3><p class="lead">Have you seen are mobile menu? Besides the menu Glazed supports animated page title options and more.<br></p></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="5g5jwxn3" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="opacity: 1;" data-az-id="e61rv8ji" data-azb="az_row" data-azat-device="sm" data-azat-an_start="appear" data-azat-an_in="fadeInRight" data-azat-an_hidden="before_in" data-azat-an_offset="90" data-azat-an_duration="400" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="075t7hcz" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"><div class="az-element az-icon text-right glazed-util-color-accent1" data-az-id="feurjb3z" data-azb="az_icon" data-azat-icon="et et-icon-heart" data-azat-size="fa-3x" data-azat-el_class="text-right glazed-util-color-accent1"><i class="et et-icon-heart fa-3x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column  col-sm-10" style="" data-az-id="6l9gv53d" data-azb="az_column" data-azat-width=" 5/6" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="u0skvyn6" data-azb="az_text" data-azcnt="true"><h3>Support &amp; Community</h3>

<p class="lead">Animations can be simple to create but it takes some experience to know the full capabilities of our animation tools. Our customer support and community are ready to help you out!</p>
</div></div></div></div></div></div></div><div id="6wa2mpdr" class="az-element az-section glazed-util-overlay-white glazed-util-overlay-20" style="padding-top:15%;padding-bottom:15%;background-color:#fafafa;background-image: url(http://i.imgur.com/vt9ofZX.jpg);background-repeat: no-repeat;background-position:right bottom;" data-az-id="6wa2mpdr" data-azb="az_section" data-azat-el_class="glazed-util-overlay-white glazed-util-overlay-20" data-azat-style="padding-top:15%;padding-bottom:15%;background-color:#fafafa;background-image: url(http://i.imgur.com/vt9ofZX.jpg);background-repeat: no-repeat;background-position:right bottom;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="dqdm1unx" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="46rruwwg" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="background-color:#fafafa;" data-az-id="zdg5txd5" data-azb="az_column" data-azat-width=" 4/6 " data-azat-style="background-color:#fafafa;" data-azcnt="true"><div class="az-element az-text" style="padding-top:20px;" data-az-id="evk2e9zg" data-azb="az_text" data-azat-style="padding-top:20px;" data-azcnt="true"><h2 style="text-align: center;">Technical details</h2>
</div><div class="az-element az-row row  az-row--sm" style="" data-az-id="ps5q34hw" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="fa099oy5" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-counter" data-az-id="32i6vy70" data-azb="az_counter" data-azat-end="46" data-azat-fontsize="72" data-azat-speed="1000" data-azat-el_class="text-center"><div id="32i6vy70" class="text-center" style="font-size: 72px;">46</div></div><div class="az-element az-text" style="" data-az-id="gllcn2ts" data-azb="az_text" data-azcnt="true"><p style="text-align: center;"><em>Animation presets</em></p>
</div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="fo77va0a" data-azb="az_column" data-azat-width=" 1/4 " data-azcnt="true"><div class="az-element az-counter" data-az-id="tc1nq2qr" data-azb="az_counter" data-azat-end="16" data-azat-fontsize="72" data-azat-speed="1000" data-azat-el_class="text-center"><div id="tc1nq2qr" class="text-center" style="font-size: 72px;">16</div></div><div class="az-element az-text" style="" data-az-id="y29qq5js" data-azb="az_text" data-azcnt="true"><p style="text-align: center;"><em>Animation settings</em></p>
</div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="hjv95742" data-azb="az_column" data-azat-width=" 1/4 " data-azcnt="true"><div class="az-element az-counter" data-az-id="g91fcd5r" data-azb="az_counter" data-azat-end="2" data-azat-fontsize="72" data-azat-speed="1000" data-azat-el_class="text-center"><div id="g91fcd5r" class="text-center" style="font-size: 72px;">2</div></div><div class="az-element az-text" style="" data-az-id="ca972nmq" data-azb="az_text" data-azcnt="true"><p style="text-align: center;">Parallax scroll types</p>
</div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="uw2j52g6" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"><div class="az-element az-counter" data-az-id="82j1shnv" data-azb="az_counter" data-azat-end="4" data-azat-fontsize="72" data-azat-speed="1000" data-azat-postfix="kb" data-azat-el_class="text-center"><div id="82j1shnv" class="text-center" style="font-size: 72px;">4kb</div></div><div class="az-element az-text" style="" data-az-id="c392azve" data-azb="az_text" data-azcnt="true"><p style="text-align: center;">Gzipped</p>
</div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="background-color:#fafafa;" data-az-id="sqrnagqh" data-azb="az_column" data-azat-width=" 1/6" data-azat-style="background-color:#fafafa;" data-azcnt="true"></div></div></div></div><div id="m589cwgb" class="az-element az-section" style="padding-top:5%;background-color:#ffffff;" data-az-id="m589cwgb" data-azb="az_section" data-azat-style="padding-top:5%;background-color:#ffffff;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="wafilhyf" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="mw1bi6vf" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="m4jdxrq6" data-azb="az_column" data-azat-width=" 1/2 " data-azcnt="true"><div class="az-element az-text" style="opacity: 1;" data-az-id="e1mexvdi" data-azb="az_text" data-azat-an_start="appear" data-azat-an_in="fadeIn" data-azat-an_hidden="before_in" data-azcnt="true"><p class="lead">With Glazed theme and Glazed Builder it\'s super easy to add animation to your content. Every element has an animation tab, where you can choose from a library of animate.css animations.</p>

<p class="lead">You can select when the animation starts: for example when an element scrolls into view, or into a certain height in the browser. You can control how speedy the animation is by setting the duration. And there\'s more to discover. Can\'t wait to try?&nbsp;</p>
</div><div class="az-element az-button text-center" data-az-id="cheiq4ay" style="opacity: 1;" data-azb="az_button" data-azat-title="Join SooperThemes For $78" data-azat-link="http://www.sooperthemes.com/pricing" data-azat-link_target="_self" data-azat-type="btn-primary" data-azat-size="btn-lg" data-azat-an_start="appear" data-azat-an_in="flipInX" data-azat-an_hidden="before_in" data-azat-an_in_delay="350" data-azat-el_class="text-center" data-azat-style="margin-top:15px;"><a href="http://www.sooperthemes.com/pricing" type="button" class="btn btn-primary btn-lg " style="margin-top:15px;" target="_self">Join SooperThemes For $78</a></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="r7q6xmag" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"></div></div></div></div><link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/et-line-font/et-line-font.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/css/icon-helpers.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/animate.css/animate.min.css">
<script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script>
<script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.parallax/jquery.parallax.js"></script>
<script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery-countTo/jquery.countTo.min.js"></script>
<script src="-base-url-/-module-directory-/glazed_builder/glazed_frontend.min.js"></script>
',
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
  'date' => '2016-02-12 11:52:15 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Motion Image Box',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1430066907,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '448c021f-1d62-43a3-aaa9-6111e2dca456',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="ciyepl9g" class="az-element az-section" style="padding-top:60px;" data-az-id="ciyepl9g" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="dag8jccp" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="n0ojyxp0" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="45u4ui0e" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="juyffs7u" data-azb="az_text" data-azcnt="true">
					<h2 style="text-align: center;">Authentic Motion with Glazed Image Box</h2>
				</div><div class="az-element az-text" style="" data-az-id="f5o8fcwb" data-azb="az_text" data-azcnt="true">
					<p class="lead">It\'s&nbsp;easier than ever to&nbsp;implement modern design principples like&nbsp;<em>Authentic Motion</em> to your website. Our drag and drop image boxes are ready to fit in any column size and you can easily swap out the image and update the texts!</p>
				</div><hr class="az-element az-separator" style="border: none;" data-az-id="cplnzudl" data-azb="az_separator"></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="xrhmg88a" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="nybdmlmq" class="az-element az-section" style="" data-az-id="nybdmlmq" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="1ec2xv0f" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="2j5a30e3" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="apq813ni" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="hwwubg01" data-azb="ashanti-animation"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/js/glazed.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--ashanti wow" data-wow-offset="546" style="visibility: visible;"><img class="stpe-imagebox__image" src="http://i.imgur.com/PERJ4sf.png" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Ashanti Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="98461z4d" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div><div id="3tfniwno" class="az-element az-section" style="" data-az-id="3tfniwno" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="rsknrbri" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="w95bll5t" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="xpfaoujo" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="snxykjm7" data-azb="lunda-animation"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/js/glazed.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--lunda wow" data-wow-offset="578" style="visibility: visible;"><img class="stpe-imagebox__image" src="http://i.imgur.com/odMOjGC.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Lunda Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="so4m799l" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div><div id="85iw8058" class="az-element az-section" style="" data-az-id="85iw8058" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="nt81rq9y" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="t6wiic11" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="npiq4ujy" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="owdrhgeg" data-azb="nyame-animation"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/js/glazed.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--nyame wow" data-wow-offset="546" style="visibility: visible;"><img class="stpe-imagebox__image" src="http://i.imgur.com/9CYpoKe.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Nyame Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="text-primary glazed-util-border-primary glazed-util-background-white btn stpe-borderbutton glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/" style="">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="tlzuew0v" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div><div id="gu5dt16g" class="az-element az-section" style="" data-az-id="gu5dt16g" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="es3onbp3" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="16zmfxjr" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="6fdylj56" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="tm22i8ki" data-azb="mawu-animation"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/js/glazed.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--mawu wow" data-wow-offset="578" style="visibility: visible;"><img class="stpe-imagebox__image" src="http://i.imgur.com/nCikTuz.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Mawu Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="eme2s9bt" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div><div id="r93ybunz" class="az-element az-section" style="" data-az-id="r93ybunz" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="gwzdcwf4" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="ered91du" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="hjp59k1j" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="g2flmx04" data-azb="yoruba-animation"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/js/glazed.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--yoruba wow" data-wow-offset="606" style="visibility: visible;"><img class="stpe-imagebox__image" src="http://i.imgur.com/epKB2lC.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Yoruba Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="nf70zgse" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div><div id="f82gkjlf" class="az-element az-section" style="" data-az-id="f82gkjlf" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="w6h4p5w3" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="a5bf5b2i" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="wdl0ctqh" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="aiqc0pe2" data-azb="shona-animation"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/js/glazed.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--shona wow" data-wow-offset="546" style="visibility: visible;"><img class="stpe-imagebox__image" src="http://i.imgur.com/PERJ4sf.png" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Shona Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="text-primary glazed-util-border-primary glazed-util-background-white btn stpe-borderbutton glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/" style="">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="ekl90edk" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div><div id="4dqrrygf" class="az-element az-section" style="" data-az-id="4dqrrygf" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="37qz9opk" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="7dpug1qb" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="i0q27bys" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="hjwsfv79" data-azb="sawar-animation"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/js/glazed.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--sawar wow" data-wow-offset="578" style="visibility: visible;"><img class="stpe-imagebox__image" src="http://i.imgur.com/odMOjGC.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Sawar Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="1d2vqdgq" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div><div id="ficp6qky" class="az-element az-section" style="" data-az-id="ficp6qky" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="0a3eoi9d" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="kzo1y6h3" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="1jlzg5kq" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="f092ol0q" data-azb="akan-animation"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/js/glazed.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--akan wow" data-wow-offset="546" style="visibility: visible;"><img class="stpe-imagebox__image" src="http://i.imgur.com/9CYpoKe.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Akan Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="pzc042fk" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div><div id="sjjjoyv3" class="az-element az-section" style="" data-az-id="sjjjoyv3" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="uht522ts" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="htmxp0yw" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="k7w1odvd" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="4alaqisv" data-azb="anansi-animation"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/js/glazed.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--anansi wow" data-wow-offset="578" style="visibility: visible;"><img class="stpe-imagebox__image" src="http://i.imgur.com/nCikTuz.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Anansi Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="pja99o92" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div><div id="urfdm3sk" class="az-element az-section" style="" data-az-id="urfdm3sk" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="dr62r8ps" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="yam3fs1v" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="5kyoga4w" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="2g0r8fyb" data-azb="pygmy-animation"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/js/glazed.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--pygmy wow" data-wow-offset="606" style="visibility: visible;"><img class="stpe-imagebox__image" src="http://i.imgur.com/epKB2lC.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Pygmy Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="9657foer" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div><div id="rhgavzxp" class="az-element az-section" style="" data-az-id="rhgavzxp" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="jzc1jwob" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="g1e49c8a" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="oa3rlr5f" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="yjeho4k1" data-azb="efik-animation"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/js/glazed.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--efik wow" data-wow-offset="546" style="visibility: visible;"><img class="stpe-imagebox__image" src="http://i.imgur.com/9CYpoKe.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Efik Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="7fizc7qm" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div><div id="veqnv0gs" class="az-element az-section" style="" data-az-id="veqnv0gs" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="y6igj144" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="nuv9zgi0" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="d18km0v0" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="m8dlw9n3" data-azb="igbo-animation"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/js/glazed.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--igbo wow" data-wow-offset="578" style="visibility: visible;"><img class="stpe-imagebox__image" src="http://i.imgur.com/odMOjGC.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Igbo Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="zwp1bnb9" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div><div id="kj742l8a" class="az-element az-section" style="" data-az-id="kj742l8a" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="5u0qi23m" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="ddz27qwf" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="5bu7f86e" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="rx7049qs" data-azb="loko-animation"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/js/glazed.wow.js"></script><div class="stpe-imagebox">
							<figure data-wow-offset="578" class="stpe-imagebox__figure stpe-imagebox__figure--loko wow" style="visibility: visible;"><img class="stpe-imagebox__image" src="http://i.imgur.com/nCikTuz.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Loko Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="95b0a5q0" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div><div id="301i094v" class="az-element az-section" style="" data-az-id="301i094v" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="2gex6ris" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="fvgilfcl" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="lu6adt30" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="ffkjy442" data-azb="loa-animation"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../css/elements/imagebox.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Motion%20Image%20Boxes/../../glazed_builder/js/glazed.wow.js"></script><div class="stpe-imagebox">
							<figure class="stpe-imagebox__figure stpe-imagebox__figure--loa wow" data-wow-offset="606" style="visibility: visible;"><img class="stpe-imagebox__image" src="http://i.imgur.com/cNA0FRx.jpg" style=""><figcaption class="stpe-imagebox__fig-caption"><h2 class="stpe-imagebox__title">Loa Animation</h2>

									<div class="stpe-imagebox__fig-content">
										<p class="az-editable">This is a sub-title.</p>
										<a class="btn stpe-borderbutton glazed-util-border-primary text-primary glazed-util-hover-color-white glazed-util-hover-border-primary glazed-util-hover-background-primary" href="http://sooperthemes.com/">Buy Theme!</a></div>
								</figcaption></figure></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="8nqmre48" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div>',
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
  'date' => '2015-04-26 16:48:27 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Icons',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1455277697,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4b2cf32d-ba09-4ba9-9879-5a9bd359b598',
  'field_glazed_content_design' => array(
    'und' => array(
      0 => array(
        'value' => '0fec26ce-1d6c-41b2-a753-4b9b300a9f2b',
        'revision_id' => '0fec26ce-1d6c-41b2-a753-4b9b300a9f2b',
        'uuid' => '0fec26ce-1d6c-41b2-a753-4b9b300a9f2b',
      ),
    ),
  ),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="jmak0e4o" class="az-element az-section" style="padding-top:60px;" data-az-id="jmak0e4o" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="j5t25vvk" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="4kpwa0sr" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="a7bsqawz" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="rclbhteo" data-azb="az_text" data-azcnt="true">
					<h2 style="text-align: center;">Icons</h2>
				</div><div class="az-element az-text" style="" data-az-id="mjihuk6e" data-azb="az_text" data-azcnt="true">
					<p class="lead">Instantly access over 1000 icons, including Glyphicons, Font Awesome icons and various line icon sets!</p>

					<p class="lead">At SooperThemes we love icons and we make it easy to use them anywhere in your drag and drop pages.</p>
				</div><hr class="az-element az-separator" style="border: none;" data-az-id="uzo7t81i" data-azb="az_separator"></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="o4hjyf9c" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="jk9gdvhw" class="az-element az-section" style="padding-top:60px;" data-az-id="jk9gdvhw" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--xs" style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;" data-az-id="systrs82" data-azb="az_row" data-azat-device="xs" data-azat-style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;" data-azcnt="true"><div class="az-element az-ctnr az-column bg-primary col-xs-4" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-az-id="uwi5ecn0" data-azb="az_column" data-azat-width="1/3" data-azat-el_class="bg-primary" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-azcnt="true"><div class="az-element az-icon text-center" data-az-id="lzgdytva" data-azb="az_icon" data-azat-icon="fa fa-heart-o" data-azat-size="fa-5x" data-azat-el_class="text-center"><i class="fa fa-heart-o fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column glazed-util-background-accent1 col-xs-4" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-az-id="5kbq6xsv" data-azb="az_column" data-azat-width=" 1/3 " data-azat-el_class="glazed-util-background-accent1" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-azcnt="true"><div class="az-element az-icon text-center" data-az-id="u6bqhfrl" data-azb="az_icon" data-azat-icon="fa fa-heart-o" data-azat-size="fa-5x" data-azat-el_class="text-center"><i class="fa fa-heart-o fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column glazed-util-background-accent2 col-xs-4" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-az-id="5hczr87a" data-azb="az_column" data-azat-width=" 1/3" data-azat-el_class="glazed-util-background-accent2" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-azcnt="true"><div class="az-element az-icon text-center" data-az-id="f030oal4" data-azb="az_icon" data-azat-icon="fa fa-heart-o" data-azat-size="fa-5x" data-azat-el_class="text-center"><i class="fa fa-heart-o fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div></div><div class="az-element az-row row  az-row--xs" style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;" data-az-id="3pkbde86" data-azb="az_row" data-azat-device="xs" data-azat-style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;" data-azcnt="true"><div class="az-element az-ctnr az-column glazed-util-background-accent2 col-xs-4" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-az-id="le4v2vms" data-azb="az_column" data-azat-width="1/3" data-azat-el_class="glazed-util-background-accent2" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-azcnt="true"><div class="az-element az-icon text-center" data-az-id="6917b64e" data-azb="az_icon" data-azat-icon="fa fa-heart-o" data-azat-size="fa-5x" data-azat-el_class="text-center"><i class="fa fa-heart-o fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column bg-primary col-xs-4" style="padding-top:5%;padding-bottom:5%;" data-az-id="xlnro7ij" data-azb="az_column" data-azat-width=" 1/3 " data-azat-el_class="bg-primary" data-azat-style="padding-top:5%;padding-bottom:5%;" data-azcnt="true"><div class="az-element az-icon text-center" data-az-id="yfliqxk3" data-azb="az_icon" data-azat-icon="fa fa-heart-o" data-azat-size="fa-5x" data-azat-el_class="text-center"><i class="fa fa-heart-o fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column glazed-util-background-accent1 col-xs-4" style="padding-top:5%;padding-bottom:5%;" data-az-id="t07els6d" data-azb="az_column" data-azat-width=" 1/3" data-azat-el_class="glazed-util-background-accent1" data-azat-style="padding-top:5%;padding-bottom:5%;" data-azcnt="true"><div class="az-element az-icon text-center" data-az-id="ab5jtckz" data-azb="az_icon" data-azat-icon="fa fa-heart-o" data-azat-size="fa-5x" data-azat-el_class="text-center"><i class="fa fa-heart-o fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div></div></div></div><div id="6xvg6uyw" class="az-element az-section" style="padding-top:60px;" data-az-id="6xvg6uyw" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="wpxc1k3l" data-azb="az_text" data-azcnt="true">
			<h2 style="text-align: center;">Combine icons with animation</h2>
		</div><div class="az-element az-row row  az-row--xs az-row--equal-height" style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;" data-az-id="4mwfbr4n" data-azb="az_row" data-azat-device="xs" data-azat-equal="yes" data-azat-style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;" data-azcnt="true"><div class="az-element az-ctnr az-column bg-primary col-xs-4" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-az-id="w1fpf2sd" data-azb="az_column" data-azat-width="1/3" data-azat-el_class="bg-primary" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-azcnt="true"><div class="az-element az-icon text-center" data-az-id="etp2sltf" style="" data-azb="az_icon" data-azat-icon="glyphicon glyphicon-tint" data-azat-size="fa-5x" data-azat-an_start="appear" data-azat-an_in="fadeInDown" data-azat-an_infinite="yes" data-azat-an_offset="90" data-azat-an_duration="3000" data-azat-el_class="text-center"><i class="glyphicon glyphicon-tint fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column glazed-util-background-accent1 col-xs-4" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-az-id="4961i99m" data-azb="az_column" data-azat-width=" 1/3 " data-azat-el_class="glazed-util-background-accent1" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-azcnt="true"><div class="az-element az-icon text-center" data-az-id="dfakribf" style="" data-azb="az_icon" data-azat-icon="glyphicon glyphicon-leaf" data-azat-size="fa-5x" data-azat-an_start="appear" data-azat-an_in="fadeInLeftBig" data-azat-an_offset="90" data-azat-an_duration="1500" data-azat-el_class="text-center"><i class="glyphicon glyphicon-leaf fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column glazed-util-background-accent2 col-xs-4" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-az-id="e5zbdh6c" data-azb="az_column" data-azat-width=" 1/3" data-azat-el_class="glazed-util-background-accent2" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;" data-azcnt="true"><div class="az-element az-icon text-center" data-az-id="hmdodwfr" style="" data-azb="az_icon" data-azat-icon="glyphicon glyphicon-fire" data-azat-size="fa-5x" data-azat-an_start="appear" data-azat-an_in="pulse" data-azat-an_infinite="yes" data-azat-el_class="text-center"><i class="glyphicon glyphicon-fire fa-5x  undefined undefined  " style="color: undefined;background-color: undefined;"></i></div></div></div></div></div><div id="x7rzqp5d" class="az-element az-section" style="padding-top:60px;padding-bottom:5%;" data-az-id="x7rzqp5d" data-azb="az_section" data-azat-style="padding-top:60px;padding-bottom:5%;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="sb7xepqz" data-azb="az_text" data-azcnt="true">
			<h2 style="text-align: center;">Or visually support your content</h2>
		</div><div class="az-element az-row row  az-row--xs" style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;" data-az-id="tuphuv5r" data-azb="az_row" data-azat-device="xs" data-azat-style="margin-top:2px;margin-bottom:2px;padding-top:0px;padding-bottom:0px;" data-azcnt="true"><div class="az-element az-ctnr az-column glazed-util-color-white col-xs-6" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;padding-left:3%;padding-right:3%;background-color:#8968b5;" data-az-id="97ani1r6" data-azb="az_column" data-azat-width="1/2" data-azat-el_class="glazed-util-color-white" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;padding-left:3%;padding-right:3%;background-color:#8968b5;" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="usr2lkct" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-4" style="" data-az-id="q0y9n7tj" data-azb="az_column" data-azat-width="1/3" data-azcnt="true"><div class="az-element az-icon" data-az-id="12mflkyb" data-azb="az_icon" data-azat-icon="et et-icon-wallet" data-azat-size="fa-5x" data-azat-style="color:#57e2b9;font-size:120px;"><i class="et et-icon-wallet fa-5x  undefined undefined  " style="color:#57e2b9;font-size:120px;color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="swfkxhl1" data-azb="az_column" data-azat-width=" 2/3" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="jnyutlzh" data-azb="az_text" data-azcnt="true">
							<h2><span style="color:#ffffff;">Budgeting for success</span></h2>

							<p class="lead">Consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>

							<p class="lead"><a href="http://www.sooperthemes.com/pricing">read more</a></p>
						</div></div></div></div><div class="az-element az-ctnr az-column glazed-util-background-accent1 col-xs-6" style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;padding-left:3%;padding-right:3%;" data-az-id="px82blhz" data-azb="az_column" data-azat-width=" 1/2" data-azat-el_class="glazed-util-background-accent1" data-azat-style="margin-bottom:0px;padding-top:5%;padding-bottom:5%;padding-left:3%;padding-right:3%;" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="5wkmpzk0" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-4" style="" data-az-id="d1o2dbig" data-azb="az_column" data-azat-width="1/3" data-azcnt="true"><div class="az-element az-icon" data-az-id="rvhlsht5" data-azb="az_icon" data-azat-icon="et et-icon-strategy" data-azat-size="fa-5x" data-azat-orientation="fa-flip-horizontal" data-azat-style="color:#f85753;font-size:150px;"><i class="et et-icon-strategy fa-5x  undefined undefined  fa-flip-horizontal" style="color:#f85753;font-size:150px;color: undefined;background-color: undefined;"></i></div></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="0luptjgb" data-azb="az_column" data-azat-width=" 2/3" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="4ir2pynm" data-azb="az_text" data-azcnt="true">
							<h2>Strategy &amp; Tactics</h2>

							<p class="lead">Consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>

							<p class="lead"><a href="http://www.sooperthemes.com/pricing">read more</a></p>
						</div></div></div></div></div></div></div><link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/font-awesome/css/font-awesome.min.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/css/icon-helpers.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/et-line-font/et-line-font.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/animate.css/animate.min.css">
<script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script>
<script src="-base-url-/-module-directory-/glazed_builder/glazed_frontend.min.js"></script>
',
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
  'date' => '2016-02-12 11:48:17 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Circle Counter',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1431010294,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5c9b6810-6a1f-4109-9a8b-2560f5c65d0f',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="xzsy8lw7" class="az-element az-section" style="padding-top:60px;" data-az-id="xzsy8lw7" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="2gqp992n" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="1uhrartn" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="fnvjptrm" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="3b6h2nq2" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;">Circle Counter Element</h2></div><div class="az-element az-text" style="" data-az-id="kasg3bly" data-azb="az_text" data-azcnt="true"><p class="lead">Animated&nbsp;circle charts are a fun and effective way to display infographical information, like data&nbsp;that describes your website topic or information about your clients.</p></div><div class="az-element az-unknown" data-az-id="ip9fxss4" data-azb="az_unknown" data-azcnt="true">Element Not Found.</div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="xnnximmh" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="lsvq0ppc" class="az-element az-section" style="margin-top:60px;margin-bottom:60px;" data-az-id="lsvq0ppc" data-azb="az_section" data-azat-style="margin-top:60px;margin-bottom:60px;"><div class="az-ctnr container" data-azcnt="true"><div id="tiuqzxx5" class="az-element az-section" style="" data-az-id="tiuqzxx5" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="2viqi4zo" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;">Software Skill Example</h2></div></div></div><div class="az-element az-row row  az-row--sm" style="" data-az-id="ipsgg71b" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="wi5f4h5g" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-circle-counter" style="" data-az-id="b5r89fgi" data-azb="az_circle_counter" data-azat-fgcolor="#1488cb" data-azat-bgcolor="#eeeeee" data-azat-text="99%" data-azat-fontsize="48" data-azat-info="Photoshop" data-azat-percent="99" data-azat-border="default"><div id="b5r89fgi" data-dimension="250" data-text="99%" data-info="Photoshop" data-width="5" data-fontsize="48" data-type="" data-percent="99" data-fgcolor="#1488cb" data-bgcolor="#eeeeee" data-fill="" data-border="default" class="jquery-once-1-processed circliful" style="width: 250px;"><span class="circle-text" style="line-height: 250px; font-size: 48px;">99%</span><span class="circle-info-half" style="line-height: 312.5px;">Photoshop</span><canvas width="250" height="250" style="width: 250px; height: 250px;"></canvas></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="zuv96c5l" data-azb="az_column" data-azat-width=" 1/4 " data-azcnt="true"><div class="az-element az-circle-counter" style="" data-az-id="kus9nx3c" data-azb="az_circle_counter" data-azat-fgcolor="#1488cb" data-azat-bgcolor="#eeeeee" data-azat-text="75%" data-azat-fontsize="48" data-azat-info="After Effects" data-azat-percent="75" data-azat-border="default"><div id="kus9nx3c" data-dimension="250" data-text="75%" data-info="After Effects" data-width="5" data-fontsize="48" data-type="" data-percent="75" data-fgcolor="#1488cb" data-bgcolor="#eeeeee" data-fill="" data-border="default" class="jquery-once-1-processed circliful" style="width: 250px;"><span class="circle-text" style="line-height: 250px; font-size: 48px;">75%</span><span class="circle-info-half" style="line-height: 312.5px;">After Effects</span><canvas width="250" height="250" style="width: 250px; height: 250px;"></canvas></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="bask1iwg" data-azb="az_column" data-azat-width=" 1/4 " data-azcnt="true"><div class="az-element az-circle-counter" style="" data-az-id="pkpvn42z" data-azb="az_circle_counter" data-azat-fgcolor="#1488cb" data-azat-bgcolor="#eeeeee" data-azat-text="50%" data-azat-fontsize="48" data-azat-info="Illustrator" data-azat-border="default"><div id="pkpvn42z" data-dimension="250" data-text="50%" data-info="Illustrator" data-width="5" data-fontsize="48" data-type="" data-percent="50" data-fgcolor="#1488cb" data-bgcolor="#eeeeee" data-fill="" data-border="default" class="jquery-once-1-processed circliful" style="width: 250px;"><span class="circle-text" style="line-height: 250px; font-size: 48px;">50%</span><span class="circle-info-half" style="line-height: 312.5px;">Illustrator</span><canvas width="250" height="250" style="width: 250px; height: 250px;"></canvas></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="t81zar6t" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"><div class="az-element az-circle-counter" style="" data-az-id="rdbynge6" data-azb="az_circle_counter" data-azat-fgcolor="#1488cb" data-azat-bgcolor="#eeeeee" data-azat-text="35%" data-azat-fontsize="48" data-azat-info="Premiere Pro" data-azat-percent="35" data-azat-border="default"><div id="rdbynge6" data-dimension="250" data-text="35%" data-info="Premiere Pro" data-width="5" data-fontsize="48" data-type="" data-percent="35" data-fgcolor="#1488cb" data-bgcolor="#eeeeee" data-fill="" data-border="default" class="jquery-once-1-processed circliful" style="width: 250px;"><span class="circle-text" style="line-height: 250px; font-size: 48px;">35%</span><span class="circle-info-half" style="line-height: 312.5px;">Premiere Pro</span><canvas width="250" height="250" style="width: 250px; height: 250px;"></canvas></div></div></div></div></div></div><div id="91dg8omc" class="az-element az-section glazed-util-overlay-black" style="padding-top:100px;padding-bottom:100px;background-image: url(http://i.imgur.com/rdwONym.jpgg);background-position: center;background-repeat: no-repeat;background-size: cover;" data-az-id="91dg8omc" data-azb="az_section" data-azat-el_class="glazed-util-overlay-black" data-azat-style="padding-top:100px;padding-bottom:100px;background-image: url(http://i.imgur.com/rdwONym.jpgg);background-position: center;background-repeat: no-repeat;background-size: cover;"><div class="az-ctnr container" data-azcnt="true"><div id="jljxseb6" class="az-element az-section" style="" data-az-id="jljxseb6" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="f9zekw84" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;">Dark Background Example</h2></div></div></div><div class="az-element az-row row  az-row--sm" style="" data-az-id="zhmfd14r" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="ylyt2ygd" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-circle-counter" style="" data-az-id="qmqbpgbt" data-azb="az_circle_counter" data-azat-fgcolor="#33e86a" data-azat-bgcolor="#333333" data-azat-dimension="280" data-azat-fontsize="48" data-azat-info="85% Organic Food" data-azat-width="8" data-azat-percent="85" data-azat-border="default" data-azat-icon="glyphicon glyphicon-leaf" data-azat-icon_size="48" data-azat-icon_color="#33e86a"><div id="qmqbpgbt" data-dimension="280" data-text="" data-info="85% Organic Food" data-width="8" data-fontsize="48" data-type="" data-percent="85" data-fgcolor="#33e86a" data-bgcolor="#333333" data-fill="" data-border="default" data-icon=" glyphicon glyphicon-leaf" data-iconsize="48" data-iconcolor="#33e86a" class="jquery-once-1-processed circliful" style="width: 280px;"><span class="circle-text" style="line-height: 280px; font-size: 48px;"><i class="fa glyphicon glyphicon-leaf" style="color: rgb(51, 232, 106); font-size: 48px;"></i></span><span class="circle-info-half" style="line-height: 350px;">85% Organic Food</span><canvas width="280" height="280" style="width: 280px; height: 280px;"></canvas></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="17q1rakv" data-azb="az_column" data-azat-width=" 1/4 " data-azcnt="true"><div class="az-element az-circle-counter" style="" data-az-id="6sz2wndx" data-azb="az_circle_counter" data-azat-fgcolor="#ffea4c" data-azat-bgcolor="#333333" data-azat-dimension="280" data-azat-fontsize="48" data-azat-info="75% Home Grown" data-azat-width="7" data-azat-percent="75" data-azat-border="default" data-azat-icon="fa fa-pagelines" data-azat-icon_size="48" data-azat-icon_color="#ffea4c"><div id="6sz2wndx" data-dimension="280" data-text="" data-info="75% Home Grown" data-width="7" data-fontsize="48" data-type="" data-percent="75" data-fgcolor="#ffea4c" data-bgcolor="#333333" data-fill="" data-border="default" data-icon=" fa fa-pagelines" data-iconsize="48" data-iconcolor="#ffea4c" class="jquery-once-1-processed circliful" style="width: 280px;"><span class="circle-text" style="line-height: 280px; font-size: 48px;"><i class="fa fa-pagelines" style="color: rgb(255, 234, 76); font-size: 48px;"></i></span><span class="circle-info-half" style="line-height: 350px;">75% Home Grown</span><canvas width="280" height="280" style="width: 280px; height: 280px;"></canvas></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="z9a2pft9" data-azb="az_column" data-azat-width=" 1/4 " data-azcnt="true"><div class="az-element az-circle-counter" style="" data-az-id="zb24hhag" data-azb="az_circle_counter" data-azat-fgcolor="#3ce2ff" data-azat-bgcolor="#333333" data-azat-dimension="280" data-azat-fontsize="48" data-azat-info="35% Less Water Wastage" data-azat-width="7" data-azat-percent="35" data-azat-border="default" data-azat-icon="glyphicon glyphicon-tint" data-azat-icon_size="48" data-azat-icon_color="#3ce2ff"><div id="zb24hhag" data-dimension="280" data-text="" data-info="35% Less Water Wastage" data-width="7" data-fontsize="48" data-type="" data-percent="35" data-fgcolor="#3ce2ff" data-bgcolor="#333333" data-fill="" data-border="default" data-icon=" glyphicon glyphicon-tint" data-iconsize="48" data-iconcolor="#3ce2ff" class="jquery-once-1-processed circliful" style="width: 280px;"><span class="circle-text" style="line-height: 280px; font-size: 48px;"><i class="fa glyphicon glyphicon-tint" style="color: rgb(60, 226, 255); font-size: 48px;"></i></span><span class="circle-info-half" style="line-height: 350px;">35% Less Water Wastage</span><canvas width="280" height="280" style="width: 280px; height: 280px;"></canvas></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="drm3qb2r" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"><div class="az-element az-circle-counter" style="" data-az-id="nvwgai1y" data-azb="az_circle_counter" data-azat-fgcolor="#f213ea" data-azat-bgcolor="#333333" data-azat-dimension="280" data-azat-info="90% Fair Trade" data-azat-width="7" data-azat-percent="90" data-azat-border="default" data-azat-icon="fa fa-heart" data-azat-icon_size="48" data-azat-icon_color="#f213ea"><div id="nvwgai1y" data-dimension="280" data-text="" data-info="90% Fair Trade" data-width="7" data-fontsize="16" data-type="" data-percent="90" data-fgcolor="#f213ea" data-bgcolor="#333333" data-fill="" data-border="default" data-icon=" fa fa-heart" data-iconsize="48" data-iconcolor="#f213ea" class="jquery-once-1-processed circliful" style="width: 280px;"><span class="circle-text" style="line-height: 280px; font-size: 16px;"><i class="fa fa-heart" style="color: rgb(242, 19, 234); font-size: 48px;"></i></span><span class="circle-info-half" style="line-height: 350px;">90% Fair Trade</span><canvas width="280" height="280" style="width: 280px; height: 280px;"></canvas></div></div></div></div></div></div><div id="82hknjna" class="az-element az-section" style="margin-top:60px;margin-bottom:60px;padding-top:90px;padding-bottom:90px;" data-az-id="82hknjna" data-azb="az_section" data-azat-style="margin-top:60px;margin-bottom:60px;padding-top:90px;padding-bottom:90px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="gnvg7wqi" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;"><em>Completely Customizable</em></h2></div><div class="az-element az-row row  az-row--sm" style="" data-az-id="ofusfrl2" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-4" style="" data-az-id="u929b9xv" data-azb="az_column" data-azat-width="1/3" data-azcnt="true"><div class="az-element az-circle-counter" style="" data-az-id="414nqkkw" data-azb="az_circle_counter" data-azat-fgcolor="#8224e3" data-azat-bgcolor="#d7cce2" data-azat-dimension="175" data-azat-fontsize="32" data-azat-info="85% Purple" data-azat-width="10" data-azat-percent="85" data-azat-border="inline" data-azat-icon="fa fa-paint-brush" data-azat-icon_size="36" data-azat-icon_color="#8224e3"><div id="414nqkkw" data-dimension="175" data-text="" data-info="85% Purple" data-width="10" data-fontsize="32" data-type="" data-percent="85" data-fgcolor="#8224e3" data-bgcolor="#d7cce2" data-fill="" data-border="inline" data-icon=" fa fa-paint-brush" data-iconsize="36" data-iconcolor="#8224e3" class="jquery-once-1-processed circliful" style="width: 175px;"><span class="circle-text" style="line-height: 175px; font-size: 32px;"><i class="fa fa-paint-brush" style="color: rgb(130, 36, 227); font-size: 36px;"></i></span><span class="circle-info-half" style="line-height: 218.75px;">85% Purple</span><canvas width="175" height="175" style="width: 175px; height: 175px;"></canvas></div></div></div><div class="az-element az-ctnr az-column  col-sm-4" style="" data-az-id="2mxduffg" data-azb="az_column" data-azat-width=" 1/3 " data-azcnt="true"><div class="az-element az-circle-counter" style="" data-az-id="7l56t9sg" data-azb="az_circle_counter" data-azat-fgcolor="#8224e3" data-azat-bgcolor="#d7cce2" data-azat-dimension="195" data-azat-fontsize="32" data-azat-info="Extremely Hot" data-azat-width="12" data-azat-percent="98" data-azat-border="default" data-azat-icon="glyphicon glyphicon-fire" data-azat-icon_size="48" data-azat-icon_color="#dd3333"><div id="7l56t9sg" data-dimension="195" data-text="" data-info="Extremely Hot" data-width="12" data-fontsize="32" data-type="" data-percent="98" data-fgcolor="#8224e3" data-bgcolor="#d7cce2" data-fill="" data-border="default" data-icon=" glyphicon glyphicon-fire" data-iconsize="48" data-iconcolor="#dd3333" class="jquery-once-1-processed circliful" style="width: 195px;"><span class="circle-text" style="line-height: 195px; font-size: 32px;"><i class="fa glyphicon glyphicon-fire" style="color: rgb(221, 51, 51); font-size: 48px;"></i></span><span class="circle-info-half" style="line-height: 243.75px;">Extremely Hot</span><canvas width="195" height="195" style="width: 195px; height: 195px;"></canvas></div></div></div><div class="az-element az-ctnr az-column  col-sm-4" style="" data-az-id="3wta7zn9" data-azb="az_column" data-azat-width=" 1/3" data-azcnt="true"><div class="az-element az-circle-counter" style="" data-az-id="gfx5c2on" data-azb="az_circle_counter" data-azat-fgcolor="#81d742" data-azat-bgcolor="#666666" data-azat-type="half" data-azat-fontsize="32" data-azat-info="Half Circle" data-azat-width="10" data-azat-percent="90" data-azat-border="default" data-azat-icon="fa fa-dashboard" data-azat-icon_size="48" data-azat-icon_color="#2b8c4a"><div id="gfx5c2on" data-dimension="250" data-text="" data-info="Half Circle" data-width="10" data-fontsize="32" data-type="half" data-percent="90" data-fgcolor="#81d742" data-bgcolor="#666666" data-fill="" data-border="default" data-icon=" fa fa-dashboard" data-iconsize="48" data-iconcolor="#2b8c4a" class="jquery-once-1-processed circliful" style="width: 250px;"><span class="circle-text-half" style="line-height: 172.414px; font-size: 32px;"><i class="fa fa-dashboard" style="color: rgb(43, 140, 74); font-size: 48px;"></i></span><span class="circle-info-half" style="line-height: 225px;">Half Circle</span><canvas width="250" height="250" style="width: 250px; height: 250px;"></canvas></div></div></div></div></div></div><link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/jquery.circliful/css/jquery.circliful.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/font-awesome/css/font-awesome.min.css">
<script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.circliful/js/jquery.circliful.min.js"></script>
<script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script>
<script src="-base-url-/-module-directory-/glazed_builder/glazed_frontend.min.js"></script>
',
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
  'comment_count' => 0,
  'date' => '2015-05-07 14:51:34 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Drupal Blocks',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1455277904,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '621b040c-215e-4302-a133-ee52589bf8c4',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="102ex3jv" class="az-element az-section" style="padding-top:60px;" data-az-id="102ex3jv" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="cgv8fvaw" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="rjz7e7q2" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="uppxa2r6" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="4ixj5405" data-azb="az_text" data-azcnt="true">
					<h2 style="text-align: center;">Drupal Blocks</h2>
				</div><div class="az-element az-text" style="" data-az-id="rxm1qp9i" data-azb="az_text" data-azcnt="true"><p class="lead">Any blocks that are available in Drupal core\'s block administration form are also available as drag and drop components in any Glazed Builder instance. Add any dynamic content to your&nbsp; drag and drop builder and it simply works.<br></p></div><hr class="az-element az-separator" style="border: none;" data-az-id="ktbtizj3" data-azb="az_separator"></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="m7t8yy46" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="8iob1hi1" class="az-element az-section" style="" data-az-id="8iob1hi1" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="hy7pwws2" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="3js3nwzi" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="1jt2i2p9" data-azb="az_column" data-azat-width=" 1/2 " data-azcnt="true"><div class="az-element az-text" style="" data-az-id="gy648zok" data-azb="az_text" data-azcnt="true">
					<h2>User Login Block</h2>

					<p>In Glazed Builder you can load any block in your drag and drop container. Here is an example of loading the user login form, but really you could load any form that is available as a block. Got a from from webform module you want to include? Just expose it as a block from the webform edit page.</p>
				</div><hr class="az-element az-separator" style="border: none;" data-az-id="gb7bjg1e" data-azb="az_separator"><div class="az-element az-cms-element" style="padding-bottom:5%;" data-az-id="wg7lt7eh" data-azb="az_block-user-login" data-azat-style="padding-bottom:5%;"></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="lept5p3t" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"></div></div></div></div><div id="ntn7u5vq" class="az-element az-section" style="" data-az-id="ntn7u5vq" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="0e17atfe" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="6sbr75wg" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="mh85fvxq" data-azb="az_column" data-azat-width=" 1/2 " data-azcnt="true"><div class="az-element az-text" style="" data-az-id="pexb6bty" data-azb="az_text" data-azcnt="true"><h2>Admin Blocks &amp; Dashboards</h2><p>Even admin blocks can be loaded, imagine the awesome dashboards you can create. This is exactly what we do at SooperThemes. The downloads dashboard at sooperthemes.com is also built with Glazed Builder. Combine the Drupal blocks integration with <a data-cke-saved-href="/elements/interactive-elements/drupal-views" href="/elements/interactive-elements/drupal-views">Drupal Views</a> integration and you can build anything!</p><p>You don\'t need to worry about permissions because this is taken care of automatally. The cached version of this page shows the block content for anonymous users and for authenticated users the block is AJAX loaded with proper personalisation.<br></p></div><div class="az-element az-cms-element" style="" data-az-id="55jc19yc" data-azb="az_block-node-recent" data-azat-display_title="yes"></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="f6s0xylp" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"></div></div></div></div>',
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
  'date' => '2016-02-12 11:51:44 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Team Box',
  'log' => 'Copy of the revision from <em class="placeholder">Tue, 03/15/2016 - 13:12</em>.',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1431010331,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '706f5a68-da75-4834-a050-9de1b4d58fd6',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="9fvhty4u" class="az-element az-section" style="padding-top:60px;" data-az-id="9fvhty4u" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="o91z6yck" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="ncoh6ey7" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="cb468mkv" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="ixub8xbn" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;">Drag and Drop Team Box Grids</h2></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="lvpmhpgx" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="ikowb9y1" class="az-element az-section" style="padding-bottom:3%;" data-az-id="ikowb9y1" data-azb="az_section" data-azat-style="padding-bottom:3%;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="padding-bottom:5%;" data-az-id="bjl8sr3x" data-azb="teambox-4" data-azat-style="padding-bottom:5%;"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Team/../../css/elements/teambox.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/glazed_elements/Team/../../glazed_builder/vendor/font-awesome/css/font-awesome.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/glazed_elements/Team/../../glazed_builder/css/icon-helpers.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/glazed_elements/Team/../../glazed_builder/css/social.css" rel="stylesheet" type="text/css"><div class="row">
  <div class="col-sm-3">
    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/glazed_elements/Team/img/portrait-2-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Jeffrey McHill</h3>

          <h4 class="stpe-teambox__member-role">Consultant</h4>
        </div>
      </div>
    </div>
  </div>

  <div class=" col-sm-3">
    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/glazed_elements/Team/img/portrait-12-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Kathy Austin</h3>

          <h4 class="stpe-teambox__member-role">Consultant</h4>
        </div>
      </div>
    </div>
  </div>

  <div class=" col-sm-3">
    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/glazed_elements/Team/img/portrait-6-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Jenny White</h3>

          <h4 class="stpe-teambox__member-role">Consultant</h4>
        </div>
      </div>
    </div>
  </div>

  <div class=" col-sm-3">
    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/glazed_elements/Team/img/portrait-16-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Fairlyn Bodet</h3>

          <h4 class="stpe-teambox__member-role">Consultant</h4>
        </div>
      </div>
    </div>
  </div>
</div></div></div></div></div><div id="j99wpklq" class="az-element az-section" style="padding-bottom:3%;" data-az-id="j99wpklq" data-azb="az_section" data-azat-style="padding-bottom:3%;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="padding-bottom:5%;" data-az-id="sz204x0j" data-azb="teambox-3" data-azat-style="padding-bottom:5%;"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Team/../../css/elements/teambox.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/glazed_elements/Team/../../glazed_builder/vendor/font-awesome/css/font-awesome.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/glazed_elements/Team/../../glazed_builder/css/icon-helpers.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/glazed_elements/Team/../../glazed_builder/css/social.css" rel="stylesheet" type="text/css"><div class="row">
  <div class="col-sm-4">

    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/glazed_elements/Team/img/portrait-3-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Sarah Yu</h3>

          <h4 class="stpe-teambox__member-role">Marketing Manager</h4>
        </div>
      </div>
    </div>
  </div>

  <div class=" col-sm-4">

    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/glazed_elements/Team/img/portrait-17-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Kenny White</h3>

          <h4 class="stpe-teambox__member-role">Production Manager</h4>
        </div>
      </div>
    </div>
  </div>

  <div class=" col-sm-4">

    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/glazed_elements/Team/img/portrait-4-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Laura Tilly</h3>

          <h4 class="stpe-teambox__member-role">HR Manager</h4>
        </div>
      </div>
    </div>
  </div>
</div></div></div></div></div><div id="lwdf3ha1" class="az-element az-section" style="padding-bottom:3%;" data-az-id="lwdf3ha1" data-azb="az_section" data-azat-style="padding-bottom:3%;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="padding-bottom:5%;" data-az-id="5yn4f9wy" data-azb="teambox-2" data-azat-style="padding-bottom:5%;"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Team/../../css/elements/teambox.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/glazed_elements/Team/../../glazed_builder/vendor/font-awesome/css/font-awesome.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/glazed_elements/Team/../../glazed_builder/css/icon-helpers.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/glazed_elements/Team/../../glazed_builder/css/social.css" rel="stylesheet" type="text/css"><div class="row">
  <div class="col-sm-6">

    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/glazed_elements/Team/img/portrait-5-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Tara DeVille</h3>

          <h4 class="stpe-teambox__member-role">Senior Vice President</h4>
        </div>
      </div>
    </div>
  </div>

  <div class=" col-sm-6">

    <div class="stpe-teambox stpe-teambox--split clearfix">
      <img alt="" class="img-responsive" src="-base-url-/-module-directory-/glazed_elements/Team/img/portrait-1-518.jpg"><div class="stpe-teambox__member-info">
        <div class="stpe-teambox__member-social">
          <ul class="stbe-social-links stbe-social-links--inline"><li class="stbe-social-links__item" title="twitter">
              <a class="fa fa-twitter stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>

            <li class="stbe-social-links__item" title="linkedin">
              <a class="fa fa-linkedin stbe-util-icon-pulse stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" href="http://sooperthemes.com/pricing"></a>
            </li>
          </ul></div>

        <div class="stpe-teambox__member-name-role">
          <h3 class="stpe-teambox__member-name">Rudy McIntyre</h3>

          <h4 class="stpe-teambox__member-role">CFO</h4>
        </div>
      </div>
    </div>
  </div>
</div></div></div></div></div>',
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
  'date' => '2015-05-07 14:52:11 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Social Links',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1455277707,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '887edc90-eb66-4e94-9757-645e9221a364',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="f7rlko1i" class="az-element az-section" style="padding-top:60px;" data-az-id="f7rlko1i" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="w5qzamps" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="c2dms85l" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="5u165q6s" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="kygmdaa2" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;">Social Links Element<br></h2></div><div class="az-element az-text" style="" data-az-id="4wq06h8t" data-azb="az_text" data-azcnt="true"><p class="lead">Add links to various social accounts with this useful and retina-friendly social links element. The buttons support brand colors and are highly customizable.<br></p><p class="lead">The vector icons are powered by Font Awesome, meaning they look gorgeous on retina screens and don\'t pixelate when enlarged.<br></p></div><hr class="az-element az-separator" style="border: none;" data-az-id="qakm5khl" data-azb="az_separator"></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="csxrpwr1" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="xbviuvvr" class="az-element az-section" style="padding-top:60px;" data-az-id="xbviuvvr" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:10%;" data-az-id="rx5vhm92" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:10%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-12" style="" data-az-id="u6w2h08j" data-azb="az_column" data-azat-width="1/1" data-azcnt="true"><ul class="az-element st-social stbe-social-links text-center stbe-social-links--bgcolor-brand" style="" data-az-id="01vzugz2" data-azb="st_social" data-azat-st_social_links="Facebook%3D\'http%3A%2F%2Fwww.example.com\'%0AYouTube%3D\'http%3A%2F%2Fwww.example.com\'%0ATwitter%3D\'http%3A%2F%2Fwww.example.com\'%0AGoogle-Plus%3D\'http%3A%2F%2Fwww.example.com\'%0ALinkedin%3D\'http%3A%2F%2Fwww.example.com\'%0AEnvelope%3D\'http%3A%2F%2Fwww.example.com\'" data-azat-st_type="inline" data-azat-st_style="circle" data-azat-st_size="2x" data-azat-st_theme_bgcolor="brand" data-azat-st_css3_hover_effects="disc" data-azat-el_class="text-center"><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-facebook stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-disc" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="facebook"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-youtube stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-disc" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="youtube"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-twitter stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-disc" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="twitter"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-google-plus stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-disc" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="google-plus"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-linkedin stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-disc" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="linkedin"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-envelope stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-disc" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="envelope"></i></a></li></ul></div></div><div class="az-element az-row row  az-row--sm" style="padding-bottom:10%;" data-az-id="axat9mmy" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:10%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-12" style="" data-az-id="2k43zqyv" data-azb="az_column" data-azat-width="1/1" data-azcnt="true"><ul class="az-element st-social stbe-social-links text-center stbe-social-links--bgcolor-brand" style="" data-az-id="lifcmh47" data-azb="st_social" data-azat-st_social_links="Facebook%3D\'http%3A%2F%2Fwww.example.com\'%0AYouTube%3D\'http%3A%2F%2Fwww.example.com\'%0ATwitter%3D\'http%3A%2F%2Fwww.example.com\'%0AGoogle-Plus%3D\'http%3A%2F%2Fwww.example.com\'%0ALinkedin%3D\'http%3A%2F%2Fwww.example.com\'%0AEnvelope%3D\'http%3A%2F%2Fwww.example.com\'" data-azat-st_type="inline" data-azat-st_style="square" data-azat-st_size="2x" data-azat-st_theme_bgcolor="brand" data-azat-el_class="text-center"><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-facebook stbe-util-icon-square stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="facebook"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-youtube stbe-util-icon-square stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="youtube"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-twitter stbe-util-icon-square stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="twitter"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-google-plus stbe-util-icon-square stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="google-plus"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-linkedin stbe-util-icon-square stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="linkedin"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-envelope stbe-util-icon-square stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="envelope"></i></a></li></ul></div></div><div class="az-element az-row row  az-row--sm" style="padding-bottom:10%;" data-az-id="o4sp9nil" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:10%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-12" style="" data-az-id="lbcucyen" data-azb="az_column" data-azat-width="1/1" data-azcnt="true"><ul class="az-element st-social stbe-social-links text-center" style="" data-az-id="cg8w3nzi" data-azb="st_social" data-azat-st_social_links="Facebook%3D\'http%3A%2F%2Fwww.example.com\'%0AYouTube%3D\'http%3A%2F%2Fwww.example.com\'%0ATwitter%3D\'http%3A%2F%2Fwww.example.com\'%0AGoogle-Plus%3D\'http%3A%2F%2Fwww.example.com\'%0ALinkedin%3D\'http%3A%2F%2Fwww.example.com\'%0AEnvelope%3D\'http%3A%2F%2Fwww.example.com\'" data-azat-st_type="inline" data-azat-st_style="circle" data-azat-st_size="lg" data-azat-st_color="#ffffff" data-azat-st_bgcolor="#57e2b9" data-azat-st_css3_hover_effects="pulse" data-azat-el_class="text-center"><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-lg fa-facebook stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" style="color: #ffffff;background-color: #57e2b9;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="facebook"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-lg fa-youtube stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" style="color: #ffffff;background-color: #57e2b9;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="youtube"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-lg fa-twitter stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" style="color: #ffffff;background-color: #57e2b9;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="twitter"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-lg fa-google-plus stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" style="color: #ffffff;background-color: #57e2b9;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="google-plus"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-lg fa-linkedin stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" style="color: #ffffff;background-color: #57e2b9;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="linkedin"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-lg fa-envelope stbe-util-icon-circle stbe-util-icon-fx stbe-util-fx-pulse" style="color: #ffffff;background-color: #57e2b9;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="envelope"></i></a></li></ul></div></div><div class="az-element az-row row  az-row--sm" style="padding-bottom:10%;" data-az-id="y03d8etr" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:10%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-12" style="" data-az-id="fhdkxvwj" data-azb="az_column" data-azat-width="1/1" data-azcnt="true"><ul class="az-element st-social stbe-social-links text-center" style="" data-az-id="tt78flts" data-azb="st_social" data-azat-st_social_links="Facebook%3D\'http%3A%2F%2Fwww.example.com\'%0AYouTube%3D\'http%3A%2F%2Fwww.example.com\'%0ATwitter%3D\'http%3A%2F%2Fwww.example.com\'%0AGoogle-Plus%3D\'http%3A%2F%2Fwww.example.com\'%0ALinkedin%3D\'http%3A%2F%2Fwww.example.com\'%0AEnvelope%3D\'http%3A%2F%2Fwww.example.com\'" data-azat-st_type="inline" data-azat-st_size="2x" data-azat-st_color="#f85753" data-azat-st_bgcolor="#ffffff" data-azat-st_css3_hover_effects="pulse" data-azat-el_class="text-center"><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-facebook stbe-util-icon- stbe-util-icon-fx stbe-util-fx-pulse" style="color: #f85753;background-color: #ffffff;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="facebook"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-youtube stbe-util-icon- stbe-util-icon-fx stbe-util-fx-pulse" style="color: #f85753;background-color: #ffffff;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="youtube"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-twitter stbe-util-icon- stbe-util-icon-fx stbe-util-fx-pulse" style="color: #f85753;background-color: #ffffff;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="twitter"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-google-plus stbe-util-icon- stbe-util-icon-fx stbe-util-fx-pulse" style="color: #f85753;background-color: #ffffff;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="google-plus"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-linkedin stbe-util-icon- stbe-util-icon-fx stbe-util-fx-pulse" style="color: #f85753;background-color: #ffffff;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="linkedin"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-envelope stbe-util-icon- stbe-util-icon-fx stbe-util-fx-pulse" style="color: #f85753;background-color: #ffffff;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="envelope"></i></a></li></ul></div></div><div class="az-element az-row row  az-row--sm" style="" data-az-id="vhyffil4" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="44rdwjwq" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="heo0i3s1" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="h6t4asah" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="990s5rjx" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"><ul class="az-element st-social stbe-social-links text-center stbe-social-links--bgcolor-brand stbe-social-links-stacked" style="" data-az-id="ohlvr85y" data-azb="st_social" data-azat-st_social_links="Behance%3D\'http%3A%2F%2Fwww.example.com\'%0ASpotify%3D\'http%3A%2F%2Fwww.example.com\'%0A500px%3D\'http%3A%2F%2Fwww.example.com\'%0AFlickr%3D\'http%3A%2F%2Fwww.example.com\'%0ASkype%3D\'http%3A%2F%2Fwww.example.com\'" data-azat-st_type="stacked" data-azat-st_style="rounded" data-azat-st_size="2x" data-azat-st_color="#ffffff" data-azat-st_theme_bgcolor="brand" data-azat-st_bgcolor="#eeeeee" data-azat-el_class="text-center"><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-behance stbe-util-icon-rounded stbe-util-fx-" style="color: #ffffff;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="behance"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-spotify stbe-util-icon-rounded stbe-util-fx-" style="color: #ffffff;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="spotify"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-500px stbe-util-icon-rounded stbe-util-fx-" style="color: #ffffff;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="500px"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-flickr stbe-util-icon-rounded stbe-util-fx-" style="color: #ffffff;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="flickr"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-2x fa-skype stbe-util-icon-rounded stbe-util-fx-" style="color: #ffffff;" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="skype"></i></a></li></ul></div><div class="az-element az-ctnr az-column  col-sm-10" style="" data-az-id="mizrfz56" data-azb="az_column" data-azat-width=" 5/6" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="zlc73tz3" data-azb="az_text" data-azcnt="true"><h2>Lorem ipsum dolor sit amet.</h2>

<p class="lead">Consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>

<p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>

<p>Consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
</div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="0tbebgqe" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="7v5bfzqy" class="az-element az-section" style="padding-top:60px;" data-az-id="7v5bfzqy" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="3po3rr04" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="9ny0t446" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="7lbvwrys" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="6posd69y" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;">All brand colored icons:<br></h2></div><ul class="az-element st-social stbe-social-links  stbe-social-links--color-brand" style="" data-az-id="fjcxgg6g" data-azb="st_social" data-azat-st_social_links="envelope-o%3D\'http%3A%2F%2Fwww.example.com\'%0A500px%3D\'http%3A%2F%2Fwww.example.com\'%0Aadn%3D\'http%3A%2F%2Fwww.example.com\'%0Aamazon%3D\'http%3A%2F%2Fwww.example.com\'%0Aandroid%3D\'http%3A%2F%2Fwww.example.com\'%0Aangellist%3D\'http%3A%2F%2Fwww.example.com\'%0Aapple%3D\'http%3A%2F%2Fwww.example.com\'%0Abehance%3D\'http%3A%2F%2Fwww.example.com\'%0Abehance-square%3D\'http%3A%2F%2Fwww.example.com\'%0Abitbucket%3D\'http%3A%2F%2Fwww.example.com\'%0Abitbucket-square%3D\'http%3A%2F%2Fwww.example.com\'%0Abitcoin%3D\'http%3A%2F%2Fwww.example.com\'%0Ablack-tie%3D\'http%3A%2F%2Fwww.example.com\'%0Abtc%3D\'http%3A%2F%2Fwww.example.com\'%0Abuysellads%3D\'http%3A%2F%2Fwww.example.com\'%0Acc-amex%3D\'http%3A%2F%2Fwww.example.com\'%0Acc-diners-club%3D\'http%3A%2F%2Fwww.example.com\'%0Acc-discover%3D\'http%3A%2F%2Fwww.example.com\'%0Acc-jcb%3D\'http%3A%2F%2Fwww.example.com\'%0Acc-mastercard%3D\'http%3A%2F%2Fwww.example.com\'%0Acc-paypal%3D\'http%3A%2F%2Fwww.example.com\'%0Acc-stripe%3D\'http%3A%2F%2Fwww.example.com\'%0Acc-visa%3D\'http%3A%2F%2Fwww.example.com\'%0Achrome%3D\'http%3A%2F%2Fwww.example.com\'%0Acodepen%3D\'http%3A%2F%2Fwww.example.com\'%0Aconnectdevelop%3D\'http%3A%2F%2Fwww.example.com\'%0Acontao%3D\'http%3A%2F%2Fwww.example.com\'%0Acreative-commons%3D\'http%3A%2F%2Fwww.example.com\'%0Acss3%3D\'http%3A%2F%2Fwww.example.com\'%0Adashcube%3D\'http%3A%2F%2Fwww.example.com\'%0Adelicious%3D\'http%3A%2F%2Fwww.example.com\'%0Adeviantart%3D\'http%3A%2F%2Fwww.example.com\'%0Adigg%3D\'http%3A%2F%2Fwww.example.com\'%0Adribbble%3D\'http%3A%2F%2Fwww.example.com\'%0Adropbox%3D\'http%3A%2F%2Fwww.example.com\'%0Adrupal%3D\'http%3A%2F%2Fwww.example.com\'%0Aempire%3D\'http%3A%2F%2Fwww.example.com\'%0Aexpeditedssl%3D\'http%3A%2F%2Fwww.example.com\'%0Afacebook%3D\'http%3A%2F%2Fwww.example.com\'%0Afacebook-official%3D\'http%3A%2F%2Fwww.example.com\'%0Afacebook-square%3D\'http%3A%2F%2Fwww.example.com\'%0Afirefox%3D\'http%3A%2F%2Fwww.example.com\'%0Aflickr%3D\'http%3A%2F%2Fwww.example.com\'%0Afonticons%3D\'http%3A%2F%2Fwww.example.com\'%0Aforumbee%3D\'http%3A%2F%2Fwww.example.com\'%0Afoursquare%3D\'http%3A%2F%2Fwww.example.com\'%0Age%3D\'http%3A%2F%2Fwww.example.com\'%0Aget-pocket%3D\'http%3A%2F%2Fwww.example.com\'%0Agg%3D\'http%3A%2F%2Fwww.example.com\'%0Agg-circle%3D\'http%3A%2F%2Fwww.example.com\'%0Agit%3D\'http%3A%2F%2Fwww.example.com\'%0Agit-square%3D\'http%3A%2F%2Fwww.example.com\'%0Agithub%3D\'http%3A%2F%2Fwww.example.com\'%0Agithub-alt%3D\'http%3A%2F%2Fwww.example.com\'%0Agithub-square%3D\'http%3A%2F%2Fwww.example.com\'%0Agittip%3D\'http%3A%2F%2Fwww.example.com\'%0Agoogle%3D\'http%3A%2F%2Fwww.example.com\'%0Agoogle-plus%3D\'http%3A%2F%2Fwww.example.com\'%0Agoogle-plus-square%3D\'http%3A%2F%2Fwww.example.com\'%0Agoogle-wallet%3D\'http%3A%2F%2Fwww.example.com\'%0Ahacker-news%3D\'http%3A%2F%2Fwww.example.com\'%0Ahouzz%3D\'http%3A%2F%2Fwww.example.com\'%0Ahtml5%3D\'http%3A%2F%2Fwww.example.com\'%0Ainstagram%3D\'http%3A%2F%2Fwww.example.com\'%0Ainternet-explorer%3D\'http%3A%2F%2Fwww.example.com\'%0Aioxhost%3D\'http%3A%2F%2Fwww.example.com\'%0Ajoomla%3D\'http%3A%2F%2Fwww.example.com\'%0Ajsfiddle%3D\'http%3A%2F%2Fwww.example.com\'%0Alastfm%3D\'http%3A%2F%2Fwww.example.com\'%0Alastfm-square%3D\'http%3A%2F%2Fwww.example.com\'%0Aleanpub%3D\'http%3A%2F%2Fwww.example.com\'%0Alinkedin%3D\'http%3A%2F%2Fwww.example.com\'%0Alinkedin-square%3D\'http%3A%2F%2Fwww.example.com\'%0Alinux%3D\'http%3A%2F%2Fwww.example.com\'%0Amaxcdn%3D\'http%3A%2F%2Fwww.example.com\'%0Ameanpath%3D\'http%3A%2F%2Fwww.example.com\'%0Amedium%3D\'http%3A%2F%2Fwww.example.com\'%0Aodnoklassniki%3D\'http%3A%2F%2Fwww.example.com\'%0Aodnoklassniki-square%3D\'http%3A%2F%2Fwww.example.com\'%0Aopencart%3D\'http%3A%2F%2Fwww.example.com\'%0Aopenid%3D\'http%3A%2F%2Fwww.example.com\'%0Aopera%3D\'http%3A%2F%2Fwww.example.com\'%0Aoptin-monster%3D\'http%3A%2F%2Fwww.example.com\'%0Apagelines%3D\'http%3A%2F%2Fwww.example.com\'%0Apaypal%3D\'http%3A%2F%2Fwww.example.com\'%0Apied-piper%3D\'http%3A%2F%2Fwww.example.com\'%0Apied-piper-alt%3D\'http%3A%2F%2Fwww.example.com\'%0Apinterest%3D\'http%3A%2F%2Fwww.example.com\'%0Apinterest-p%3D\'http%3A%2F%2Fwww.example.com\'%0Apinterest-square%3D\'http%3A%2F%2Fwww.example.com\'%0Aqq%3D\'http%3A%2F%2Fwww.example.com\'%0Ara%3D\'http%3A%2F%2Fwww.example.com\'%0Arebel%3D\'http%3A%2F%2Fwww.example.com\'%0Areddit%3D\'http%3A%2F%2Fwww.example.com\'%0Areddit-square%3D\'http%3A%2F%2Fwww.example.com\'%0Arenren%3D\'http%3A%2F%2Fwww.example.com\'%0Asafari%3D\'http%3A%2F%2Fwww.example.com\'%0Asellsy%3D\'http%3A%2F%2Fwww.example.com\'%0Ashare-alt%3D\'http%3A%2F%2Fwww.example.com\'%0Ashare-alt-square%3D\'http%3A%2F%2Fwww.example.com\'%0Ashirtsinbulk%3D\'http%3A%2F%2Fwww.example.com\'%0Asimplybuilt%3D\'http%3A%2F%2Fwww.example.com\'%0Askyatlas%3D\'http%3A%2F%2Fwww.example.com\'%0Askype%3D\'http%3A%2F%2Fwww.example.com\'%0Aslack%3D\'http%3A%2F%2Fwww.example.com\'%0Aslideshare%3D\'http%3A%2F%2Fwww.example.com\'%0Asoundcloud%3D\'http%3A%2F%2Fwww.example.com\'%0Aspotify%3D\'http%3A%2F%2Fwww.example.com\'%0Astack-exchange%3D\'http%3A%2F%2Fwww.example.com\'%0Astack-overflow%3D\'http%3A%2F%2Fwww.example.com\'%0Asteam%3D\'http%3A%2F%2Fwww.example.com\'%0Asteam-square%3D\'http%3A%2F%2Fwww.example.com\'%0Astumbleupon%3D\'http%3A%2F%2Fwww.example.com\'%0Astumbleupon-circle%3D\'http%3A%2F%2Fwww.example.com\'%0Atencent-weibo%3D\'http%3A%2F%2Fwww.example.com\'%0Atrello%3D\'http%3A%2F%2Fwww.example.com\'%0Atripadvisor%3D\'http%3A%2F%2Fwww.example.com\'%0Atumblr%3D\'http%3A%2F%2Fwww.example.com\'%0Atumblr-square%3D\'http%3A%2F%2Fwww.example.com\'%0Atwitch%3D\'http%3A%2F%2Fwww.example.com\'%0Atwitter%3D\'http%3A%2F%2Fwww.example.com\'%0Atwitter-square%3D\'http%3A%2F%2Fwww.example.com\'%0Aviacoin%3D\'http%3A%2F%2Fwww.example.com\'%0Avimeo%3D\'http%3A%2F%2Fwww.example.com\'%0Avimeo-square%3D\'http%3A%2F%2Fwww.example.com\'%0Avine%3D\'http%3A%2F%2Fwww.example.com\'%0Avk%3D\'http%3A%2F%2Fwww.example.com\'%0Awechat%3D\'http%3A%2F%2Fwww.example.com\'%0Aweibo%3D\'http%3A%2F%2Fwww.example.com\'%0Aweixin%3D\'http%3A%2F%2Fwww.example.com\'%0Awikipedia-w%3D\'http%3A%2F%2Fwww.example.com\'%0Awindows%3D\'http%3A%2F%2Fwww.example.com\'%0Awordpress%3D\'http%3A%2F%2Fwww.example.com\'%0Axing%3D\'http%3A%2F%2Fwww.example.com\'%0Axing-square%3D\'http%3A%2F%2Fwww.example.com\'%0Ay-combinator%3D\'http%3A%2F%2Fwww.example.com\'%0Ayc%3D\'http%3A%2F%2Fwww.example.com\'%0Ayahoo%3D\'http%3A%2F%2Fwww.example.com\'%0Ayelp%3D\'http%3A%2F%2Fwww.example.com\'%0Ayoutube%3D\'http%3A%2F%2Fwww.example.com\'%0Ayoutube-play%3D\'http%3A%2F%2Fwww.example.com\'%0Ayoutube-square%3D\'http%3A%2F%2Fwww.example.com\'" data-azat-st_type="inline" data-azat-st_size="4x" data-azat-st_theme_color="brand"><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-envelope-o stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="envelope-o"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-500px stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="500px"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-adn stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="adn"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-amazon stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="amazon"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-android stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="android"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-angellist stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="angellist"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-apple stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="apple"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-behance stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="behance"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-behance-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="behance-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-bitbucket stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="bitbucket"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-bitbucket-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="bitbucket-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-bitcoin stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="bitcoin"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-black-tie stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="black-tie"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-btc stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="btc"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-buysellads stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="buysellads"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-cc-amex stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="cc-amex"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-cc-diners-club stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="cc-diners-club"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-cc-discover stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="cc-discover"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-cc-jcb stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="cc-jcb"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-cc-mastercard stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="cc-mastercard"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-cc-paypal stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="cc-paypal"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-cc-stripe stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="cc-stripe"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-cc-visa stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="cc-visa"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-chrome stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="chrome"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-codepen stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="codepen"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-connectdevelop stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="connectdevelop"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-contao stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="contao"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-creative-commons stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="creative-commons"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-css3 stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="css3"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-dashcube stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="dashcube"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-delicious stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="delicious"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-deviantart stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="deviantart"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-digg stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="digg"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-dribbble stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="dribbble"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-dropbox stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="dropbox"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-drupal stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="drupal"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-empire stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="empire"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-expeditedssl stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="expeditedssl"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-facebook stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="facebook"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-facebook-official stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="facebook-official"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-facebook-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="facebook-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-firefox stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="firefox"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-flickr stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="flickr"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-fonticons stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="fonticons"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-forumbee stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="forumbee"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-foursquare stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="foursquare"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-ge stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="ge"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-get-pocket stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="get-pocket"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-gg stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="gg"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-gg-circle stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="gg-circle"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-git stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="git"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-git-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="git-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-github stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="github"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-github-alt stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="github-alt"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-github-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="github-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-gittip stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="gittip"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-google stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="google"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-google-plus stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="google-plus"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-google-plus-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="google-plus-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-google-wallet stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="google-wallet"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-hacker-news stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="hacker-news"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-houzz stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="houzz"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-html5 stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="html5"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-instagram stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="instagram"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-internet-explorer stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="internet-explorer"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-ioxhost stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="ioxhost"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-joomla stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="joomla"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-jsfiddle stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="jsfiddle"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-lastfm stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="lastfm"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-lastfm-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="lastfm-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-leanpub stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="leanpub"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-linkedin stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="linkedin"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-linkedin-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="linkedin-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-linux stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="linux"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-maxcdn stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="maxcdn"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-meanpath stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="meanpath"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-medium stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="medium"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-odnoklassniki stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="odnoklassniki"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-odnoklassniki-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="odnoklassniki-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-opencart stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="opencart"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-openid stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="openid"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-opera stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="opera"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-optin-monster stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="optin-monster"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-pagelines stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="pagelines"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-paypal stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="paypal"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-pied-piper stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="pied-piper"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-pied-piper-alt stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="pied-piper-alt"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-pinterest stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="pinterest"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-pinterest-p stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="pinterest-p"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-pinterest-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="pinterest-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-qq stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="qq"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-ra stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="ra"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-rebel stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="rebel"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-reddit stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="reddit"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-reddit-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="reddit-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-renren stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="renren"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-safari stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="safari"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-sellsy stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="sellsy"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-share-alt stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="share-alt"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-share-alt-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="share-alt-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-shirtsinbulk stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="shirtsinbulk"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-simplybuilt stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="simplybuilt"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-skyatlas stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="skyatlas"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-skype stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="skype"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-slack stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="slack"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-slideshare stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="slideshare"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-soundcloud stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="soundcloud"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-spotify stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="spotify"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-stack-exchange stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="stack-exchange"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-stack-overflow stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="stack-overflow"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-steam stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="steam"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-steam-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="steam-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-stumbleupon stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="stumbleupon"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-stumbleupon-circle stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="stumbleupon-circle"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-tencent-weibo stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="tencent-weibo"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-trello stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="trello"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-tripadvisor stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="tripadvisor"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-tumblr stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="tumblr"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-tumblr-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="tumblr-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-twitch stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="twitch"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-twitter stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="twitter"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-twitter-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="twitter-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-viacoin stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="viacoin"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-vimeo stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="vimeo"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-vimeo-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="vimeo-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-vine stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="vine"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-vk stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="vk"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-wechat stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="wechat"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-weibo stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="weibo"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-weixin stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="weixin"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-wikipedia-w stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="wikipedia-w"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-windows stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="windows"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-wordpress stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="wordpress"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-xing stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="xing"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-xing-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="xing-square"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-y-combinator stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="y-combinator"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-yc stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="yc"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-yahoo stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="yahoo"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-yelp stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="yelp"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-youtube stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="youtube"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-youtube-play stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="youtube-play"></i></a></li><li class="stbe-social-links__item"><a href="http://www.example.com"><i class="fa fa-4x fa-youtube-square stbe-util-icon- stbe-util-fx-" style="" data-toggle="tooltip" data-placement="top auto" title="" data-original-title="youtube-square"></i></a></li></ul></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="utms98qe" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/css/social.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/css/icon-helpers.css">
<link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/font-awesome/css/font-awesome.min.css">
',
        'summary' => NULL,
        'format' => NULL,
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
  'date' => '2016-02-12 11:48:27 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Drop Shadow',
  'log' => 'Copy of the revision from <em class="placeholder">Sun, 01/22/2017 - 10:09</em>.',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1430562858,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '88d22be5-b9e3-4953-b98b-9c2deac33640',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="ok8tunra" class="az-element az-section" style="padding-top:60px;" data-az-id="ok8tunra" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="xzgmj2y7" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="dzsmf2az" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="2px6lgj8" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="hgvtvq1x" data-azb="az_text" data-azcnt="true">
					<h2 style="text-align: center;">6 Pixel Perfect Unique CSS3 Drop Shadows</h2>
				</div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="miwu058u" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="lilqcoar" class="az-element az-section" style="padding-top:5%;" data-az-id="lilqcoar" data-azb="az_section" data-azat-style="padding-top:5%;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="mhthgkio" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="rwfph18h" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="kemzoaf2" data-azb="az_text" data-azcnt="true">
					<h2>Raised&nbsp;Drop Shadow</h2>
				</div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="9svqbh85" data-azb="az_column" data-azat-width="  1/2  " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="uzaglvan" data-azb="raised"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Drop%20Shadows/../../css/elements/dropshadow.css" rel="stylesheet" type="text/css"><div class="stpe-dropshadow stpe-dropshadow--raised"><img class="" alt="" src="http://i.imgur.com/uYsEqp5.jpg" style=""></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="7fkp8sol" data-azb="az_column" data-azat-width="  1/4" data-azcnt="true"></div></div></div></div><div id="mpawj2ld" class="az-element az-section" style="" data-az-id="mpawj2ld" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="ur7aoufy" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="wr7bdzj6" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="0ksys0eu" data-azb="az_text" data-azcnt="true">
					<h2>Curved horizontal double shadow</h2>
				</div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="2le1bjab" data-azb="az_column" data-azat-width=" 1/2 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="86ylq2m2" data-azb="curved-horizontal-double"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Drop%20Shadows/../../css/elements/dropshadow.css" rel="stylesheet" type="text/css"><div class="stpe-dropshadow stpe-dropshadow--curved-hz2 stpe-dropshadow--curved"><img class="" alt="" src="http://i.imgur.com/epKB2lC.jpg" style=""></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="as1gxr5g" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"></div></div></div></div><div id="s8pif5e9" class="az-element az-section" style="" data-az-id="s8pif5e9" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="q5lubr7k" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="qmduxtwy" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="ltit44gc" data-azb="az_text" data-azcnt="true"><h2>Curved horizontal single&nbsp;shadow<br></h2></div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="036125rm" data-azb="az_column" data-azat-width=" 1/2 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="wzez6dqm" data-azb="curved-horizontal"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Drop%20Shadows/../../css/elements/dropshadow.css" rel="stylesheet" type="text/css"><div class="stpe-dropshadow stpe-dropshadow--curved-hz1 stpe-dropshadow--curved"><img class="" alt="" src="http://i.imgur.com/idA8LKk.jpg" style=""></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="e338bwom" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"></div></div></div></div><div id="zvflfadh" class="az-element az-section" style="" data-az-id="zvflfadh" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="7y8uru2n" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="85u7q8zf" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="9z2ct384" data-azb="az_text" data-azcnt="true"><h2>Curved vertical double&nbsp;shadow<br></h2></div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="sho5zuva" data-azb="az_column" data-azat-width=" 1/2 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="mrcn56cf" data-azb="curved-vertical-double"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Drop%20Shadows/../../css/elements/dropshadow.css" rel="stylesheet" type="text/css"><div class="stpe-dropshadow stpe-dropshadow--curved-vt2 stpe-dropshadow--curved"><img class="" alt="" src="http://i.imgur.com/cNA0FRx.jpg" style=""></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="4qstwn6p" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"></div></div></div></div><div id="57enf2pg" class="az-element az-section" style="" data-az-id="57enf2pg" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="0g4q6ze6" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="a69ywdp7" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="r2ih3the" data-azb="az_text" data-azcnt="true"><h2>Lifted Drop Shadow<br></h2></div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="yd7pz4p8" data-azb="az_column" data-azat-width=" 1/2 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="p5ql8vyb" data-azb="lifted"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Drop%20Shadows/../../css/elements/dropshadow.css" rel="stylesheet" type="text/css"><div class="stpe-dropshadow stpe-dropshadow--lifted"><img class="" alt="" src="http://i.imgur.com/SeE6zNk.jpg" style=""></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="voqr8kxs" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"></div></div></div></div><div id="73fhdjz4" class="az-element az-section" style="" data-az-id="73fhdjz4" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="padding-bottom:5%;" data-az-id="ec9vampz" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-bottom:5%;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="8qabkyzu" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="4u7sxtbl" data-azb="az_text" data-azcnt="true"><h2>Perspective&nbsp;Drop Shadow<br></h2></div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="xif3945v" data-azb="az_column" data-azat-width=" 1/2 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="e3yjtxj2" data-azb="perspective"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Drop%20Shadows/../../css/elements/dropshadow.css" rel="stylesheet" type="text/css"><div class="stpe-dropshadow stpe-dropshadow--perspective"><img class="" alt="" src="http://i.imgur.com/vBgHjo1.jpg" style=""></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="x3if5mds" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"></div></div></div></div>',
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
  'date' => '2015-05-02 10:34:18 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Drupal Views',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1455277917,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8a6234be-e970-4c98-8074-daeda9957d3d',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="81uencwo" class="az-element az-section" style="padding-top:60px;" data-az-id="81uencwo" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="1pso6wxa" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="8cz7uo9x" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="n58kgt03" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="pojfcwiv" data-azb="az_text" data-azcnt="true">
					<h2 style="text-align: center;">Drupal Views</h2>
				</div><div class="az-element az-text" style="" data-az-id="shn8a0e8" data-azb="az_text" data-azcnt="true"><p class="lead">The Drupal view element lets you load any views display in your drag and drop page. You can modify the view too: Create new pager settings, add contextual filters, and control content through exposed sorting and exposed filters.<br></p></div><hr class="az-element az-separator" style="border: none;" data-az-id="qyfsoput" data-azb="az_separator"></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="3k3lbcvr" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="zaratwo5" class="az-element az-section" style="" data-az-id="zaratwo5" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="wq33fomk" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="6yu7fqki" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="8ovwsjvd" data-azb="az_text" data-azcnt="true">
					<h3>Views display filtered on <em>Business</em> category</h3>
				</div><div class="az-element az-cms-element" style="" data-az-id="f81585ka" data-azb="az_view-cms_blog-recent_blog_teasers" data-azat-settings="field_blog_category_tid=1" data-azat-override_pager="no" data-azat-offset="" data-azat-toggle_fields="field_blog_image,fieldset,field_blog_category,title,body,created"></div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="ab0t2f7k" data-azb="az_column" data-azat-width=" 1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="5a1errin" data-azb="az_text" data-azcnt="true">
					<h3>Same display filtered on <em>Lifestyle</em> category</h3>
				</div><div class="az-element az-cms-element" style="" data-az-id="qe4tjbsg" data-azb="az_view-cms_blog-recent_blog_teasers" data-azat-settings="field_blog_category_tid=3" data-azat-override_pager="no" data-azat-offset="" data-azat-toggle_fields="field_blog_image,fieldset,field_blog_category,title,body,created"></div></div></div></div></div>',
        'summary' => '',
        'format' => 'wysiwyg_simple',
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
  'date' => '2016-02-12 11:51:57 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Counter',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1431010261,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9c1a0b9b-a4c6-4c74-b134-975d2f0c0f33',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="kpaxvjnb" class="az-element az-section" style="padding-top:60px;" data-az-id="kpaxvjnb" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="pnkgwney" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="caas7ei3" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="h6ixqpgc" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="0uh5lpoz" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;">Number Counter Element</h2></div><div class="az-element az-text" style="" data-az-id="kp2syify" data-azb="az_text" data-azcnt="true"><p class="lead">Number counters are a fun and effective way to display basic infographical information on your website. You can customize everything about the counter and add&nbsp;icons. Look at our examples for ideas!</p></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="nw43tyxc" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="d7qd7g8g" class="az-element az-section" style="margin-bottom:200px;padding-top:30px;padding-bottom:30px;" data-az-id="d7qd7g8g" data-azb="az_section" data-azat-style="margin-bottom:200px;padding-top:30px;padding-bottom:30px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="5igb5chi" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="u4zhkc16" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-counter" data-az-id="li18y9nu" data-azb="az_counter" data-azat-end="1000" data-azat-fontsize="72" data-azat-el_class="text-primary text-center"><div id="li18y9nu" class="text-primary text-center" style="font-size: 72px;">1000</div></div><div class="az-element az-html text-center" style="" data-az-id="2piwd5d6" data-azb="az_html" data-azat-el_class="text-center" data-azcnt="true"><p class="lead">Clients</p></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="lyf3jvow" data-azb="az_column" data-azat-width=" 1/4 " data-azcnt="true"><div class="az-element az-counter" data-az-id="am63uou0" data-azb="az_counter" data-azat-end="9999" data-azat-fontsize="72" data-azat-seperator="." data-azat-el_class="text-primary text-center"><div id="am63uou0" class="text-primary text-center" style="font-size: 72px;">9.999</div></div><div class="az-element az-html text-center" style="" data-az-id="ld4q9vfc" data-azb="az_html" data-azat-el_class="text-center" data-azcnt="true"><p class="lead">Lines of code</p></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="qyybxnmd" data-azb="az_column" data-azat-width=" 1/4 " data-azcnt="true"><div class="az-element az-counter" data-az-id="zuujz2v5" data-azb="az_counter" data-azat-end="250" data-azat-fontsize="72" data-azat-el_class="text-primary text-center"><div id="zuujz2v5" class="text-primary text-center" style="font-size: 72px;">250</div></div><div class="az-element az-html text-center" style="" data-az-id="099exohl" data-azb="az_html" data-azat-el_class="text-center" data-azcnt="true"><p class="lead">Espresso</p></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="ys3omcrg" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"><div class="az-element az-counter" data-az-id="cwkai2l0" data-azb="az_counter" data-azat-end="1" data-azat-fontsize="72" data-azat-el_class="text-primary text-center"><div id="cwkai2l0" class="text-primary text-center" style="font-size: 72px;">1</div></div><div class="az-element az-html text-center" style="" data-az-id="tl50f9lf" data-azb="az_html" data-azat-el_class="text-center" data-azcnt="true"><p class="lead">Theme</p></div></div></div></div></div><div id="ztclrttv" class="az-element az-section glazed-util-overlay-primary" style="padding-top:300px;padding-bottom:300px;background-image: url(http://i.imgur.com/yusYZvS.jpg);background-position: center;background-repeat: no-repeat;background-size: cover;" data-az-id="ztclrttv" data-azb="az_section" data-azat-el_class="glazed-util-overlay-primary" data-azat-style="padding-top:300px;padding-bottom:300px;background-image: url(http://i.imgur.com/yusYZvS.jpg);background-position: center;background-repeat: no-repeat;background-size: cover;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="p1bj8mnh" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="9zi9ienq" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-panel panel  undefined" style="padding-top:60px;padding-bottom:40px;" data-az-id="rgythkw1" data-azb="az_panel" data-azat-style="padding-top:60px;padding-bottom:40px;"><div class="panel-body az-ctnr" data-azcnt="true"><div class="az-element az-counter" data-az-id="b76k3dsc" data-azb="az_counter" data-azat-end="25" data-azat-fontsize="72" data-azat-postfix="%" data-azat-el_class="text-primary text-center" data-azat-style="padding-bottom:20px;"><div id="b76k3dsc" class="text-primary text-center" style="padding-bottom: 20px; font-size: 72px;">18%</div></div><div class="az-element az-html text-center" style="" data-az-id="o81a9p1j" data-azb="az_html" data-azat-el_class="text-center" data-azcnt="true"><p class="lead">Art Direction</p></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="g3nf3r61" data-azb="az_column" data-azat-width=" 1/4 " data-azcnt="true"><div class="az-element az-panel panel  undefined" style="padding-top:60px;padding-bottom:40px;" data-az-id="3wpsugmo" data-azb="az_panel" data-azat-style="padding-top:60px;padding-bottom:40px;"><div class="panel-body az-ctnr" data-azcnt="true"><div class="az-element az-counter" data-az-id="zu8g2h5g" data-azb="az_counter" data-azat-end="25" data-azat-fontsize="72" data-azat-postfix="%" data-azat-el_class="text-primary text-center" data-azat-style="padding-bottom:20px;"><div id="zu8g2h5g" class="text-primary text-center" style="padding-bottom: 20px; font-size: 72px;">17%</div></div><div class="az-element az-html text-center" style="" data-az-id="wenyskrg" data-azb="az_html" data-azat-el_class="text-center" data-azcnt="true"><p class="lead">Design</p></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="tgc7lxeq" data-azb="az_column" data-azat-width=" 1/4 " data-azcnt="true"><div class="az-element az-panel panel  undefined" style="padding-top:60px;padding-bottom:40px;" data-az-id="ew61u25i" data-azb="az_panel" data-azat-style="padding-top:60px;padding-bottom:40px;"><div class="panel-body az-ctnr" data-azcnt="true"><div class="az-element az-counter" data-az-id="mckqrj9u" data-azb="az_counter" data-azat-end="20" data-azat-fontsize="72" data-azat-postfix="%" data-azat-el_class="text-primary text-center" data-azat-style="padding-bottom:20px;"><div id="mckqrj9u" class="text-primary text-center" style="padding-bottom: 20px; font-size: 72px;">13%</div></div><div class="az-element az-html text-center" style="" data-az-id="g5onsp36" data-azb="az_html" data-azat-el_class="text-center" data-azcnt="true"><p class="lead">Code Architecture</p></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="tnagaeuu" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"><div class="az-element az-panel panel  undefined" style="padding-top:60px;padding-bottom:40px;" data-az-id="xd79cp5s" data-azb="az_panel" data-azat-style="padding-top:60px;padding-bottom:40px;"><div class="panel-body az-ctnr" data-azcnt="true"><div class="az-element az-counter" data-az-id="7nkt8sp7" data-azb="az_counter" data-azat-end="30" data-azat-fontsize="72" data-azat-postfix="%" data-azat-el_class="text-primary text-center" data-azat-style="padding-bottom:20px;"><div id="7nkt8sp7" class="text-primary text-center" style="padding-bottom: 20px; font-size: 72px;">20%</div></div><div class="az-element az-html text-center" style="" data-az-id="lf3mtlgu" data-azb="az_html" data-azat-el_class="text-center" data-azcnt="true"><p class="lead">Programming</p></div></div></div></div></div><div class="az-element az-row row  az-row--sm" style="padding-top:90px;padding-bottom:90px;" data-az-id="jyvim1cc" data-azb="az_row" data-azat-device="sm" data-azat-style="padding-top:90px;padding-bottom:90px;" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-4" style="" data-az-id="fd10q8vf" data-azb="az_column" data-azat-width="1/3" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="h4zrvf0c" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-12" style="" data-az-id="pceq5vt6" data-azb="az_column" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="99n6i0bg" data-azb="az_text" data-azcnt="true"><br></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-4" style="" data-az-id="mpcdpomb" data-azb="az_column" data-azat-width=" 1/3 " data-azcnt="true"><div class="az-element az-panel panel  undefined" style="margin-bottom:60px;padding-top:40px;padding-bottom:40px;" data-az-id="0kphct1z" data-azb="az_panel" data-azat-style="margin-bottom:60px;padding-top:40px;padding-bottom:40px;"><div class="panel-body az-ctnr" data-azcnt="true"><div class="az-element az-counter" data-az-id="torc2pvi" data-azb="az_counter" data-azat-fontsize="72" data-azat-speed="3000" data-azat-postfix="%" data-azat-el_class="text-center" data-azat-style="padding-top:40px;padding-bottom:40px;"><div id="torc2pvi" class="text-center" style="padding-top: 40px; padding-bottom: 40px; font-size: 72px;">63%</div></div><div class="az-element az-html text-center" style="" data-az-id="839vig8k" data-azb="az_html" data-azat-el_class="text-center" data-azcnt="true"><p class="lead">Awesome</p></div></div></div><div class="az-element az-panel panel  undefined" style="padding-top:40px;padding-bottom:40px;" data-az-id="8bpx8x85" data-azb="az_panel" data-azat-style="padding-top:40px;padding-bottom:40px;"><div class="panel-body az-ctnr" data-azcnt="true"><div class="az-element az-counter" data-az-id="88z1tyak" data-azb="az_counter" data-azat-end="9000" data-azat-fontsize="72" data-azat-speed="3000" data-azat-prefix="$" data-azat-el_class="text-center" data-azat-style="padding-top:40px;padding-bottom:40px;"><div id="88z1tyak" class="text-center" style="padding-top: 40px; padding-bottom: 40px; font-size: 72px;">$6000</div></div><div class="az-element az-html text-center" style="" data-az-id="w7osdqb1" data-azb="az_html" data-azat-el_class="text-center" data-azcnt="true"><p class="lead">Works with prefix too!</p></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-4" style="" data-az-id="3c7zg1du" data-azb="az_column" data-azat-width=" 1/3" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="djfebf5g" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-12" style="" data-az-id="4n09paeu" data-azb="az_column" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="evsj905l" data-azb="az_text" data-azcnt="true"><br></div></div></div></div></div></div></div><script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery-countTo/jquery.countTo.min.js"></script>
<script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script>
<script src="-base-url-/-module-directory-/glazed_builder/glazed_frontend.min.js"></script>
',
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
  'comment_count' => 0,
  'date' => '2015-05-07 14:51:01 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Count Down Timer',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1431010318,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9e718e9f-d297-46a8-a908-142b3853d829',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="dy24raxf" class="az-element az-section" style="padding-top:60px;" data-az-id="dy24raxf" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="mm66936j" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="x5i1ynu4" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="l29lntv8" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="kxwg2tae" data-azb="az_text" data-azcnt="true">
					<h2 style="text-align: center;">Count Down Element</h2>
				</div><div class="az-element az-text" style="" data-az-id="7gs11jbd" data-azb="az_text" data-azcnt="true">
					<p class="lead">Sometimes it\'s important to make a moment in time&nbsp;the focal point of a a page. Examples are landing pages for events you organize or limited time offers. With Glazed it\'s easy to drop this highly configurable element anywhere in your page.</p>
				</div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="l03c9y4w" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="kvamwntb" class="az-element az-section glazed-util-overlay-black glazed-util-overlay-40" style="padding-top: 150px; padding-bottom: 150px; background-image: url(&quot;http://i.imgur.com/NZD3yTV.jpg&quot;); background-position: center center; background-repeat: no-repeat; background-size: cover; background-attachment: fixed;" data-az-id="kvamwntb" data-azb="az_section" data-azat-fluid="yes" data-azat-effect="fixed" data-azat-el_class="glazed-util-overlay-black glazed-util-overlay-40" data-azat-style="padding-top:150px;padding-bottom:150px;background-image: url(http://i.imgur.com/NZD3yTV.jpg);background-position: center;background-repeat: no-repeat;background-size: cover;"><div class="az-ctnr container-fluid" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="bgyqek4n" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-12" style="" data-az-id="e7m1txi5" data-azb="az_column" data-azat-width="1/1" data-azcnt="true"><div class="az-element az-text text-center glazed-util-color-white" style="color:#ffffff;" data-az-id="vhhozgie" data-azb="az_text" data-azat-el_class="text-center glazed-util-color-white" data-azat-style="color:#ffffff;" data-azcnt="true"><h1>Transparent Count Down</h1>
</div><div class="az-element az-countdown text-center glazed-util-color-primary ce-countdown--theme-12" style="color:#ffffff;" data-az-id="utpqppo6" data-azb="az_countdown" data-azat-countdown_style="style12" data-azat-counter_scope="date_time" data-azat-date_time="01.01.2018 00" data-azat-time="23" data-azat-saved="Mon, 23 Jan 2017 12:24:06 GMT" data-azat-display="days,hours,minutes,seconds" data-azat-el_class="text-center glazed-util-color-primary" data-azat-style="color:#ffffff;"><div class="ce-countdown"><div class="ce-col"><div class="ce-days ce-digits"><span class="ce-days-digit">1</span><span class="ce-days-digit">8</span><span class="ce-days-digit">4</span></div> <span class="ce-days-label">Days</span></div><div class="ce-col"><div class="ce-hours ce-digits"><span class="ce-hours-digit">1</span><span class="ce-hours-digit">3</span></div> <span class="ce-hours-label">Hours</span></div><div class="ce-col"><div class="ce-minutes ce-digits"><span class="ce-minutes-digit">1</span><span class="ce-minutes-digit">5</span></div> <span class="ce-minutes-label">Minutes</span></div><div class="ce-col"><div class="ce-seconds ce-digits"><span class="ce-seconds-digit">1</span><span class="ce-seconds-digit">1</span></div> <span class="ce-seconds-label">Seconds</span></div></div></div></div></div></div></div><div id="xm8j1qwc" class="az-element az-section" style="padding-top:60px;padding-bottom:60px;" data-az-id="xm8j1qwc" data-azb="az_section" data-azat-style="padding-top:60px;padding-bottom:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="2n3l0h1t" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="afko3w8e" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="0t4kkmzm" data-azb="az_text" data-azcnt="true">
					<p class="lead">Count Down Timers can count down to a specific date and/or time</p>
				</div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="a0qq70lq" data-azb="az_column" data-azat-width="  1/2  " data-azcnt="true"><div class="az-element az-text" style="" data-az-id="ye0pvuog" data-azb="az_text" data-azcnt="true">
					<h3 style="text-align: center;"><em>Get Ready</em> for Glazed Conference 1.0!</h3>
				</div><div class="az-element az-countdown  ce-countdown--theme-1" style="" data-az-id="299ccmty" data-azb="az_countdown" data-azat-countdown_style="style1" data-azat-counter_scope="date_time" data-azat-date_time="23.01.2018 00" data-azat-time="23" data-azat-saved="Mon, 23 Jan 2017 12:24:18 GMT" data-azat-display="days,hours,minutes,seconds"><div class="ce-countdown"><div class="ce-col"><span class="ce-days"><span class="ce-days-digit">2</span><span class="ce-days-digit">0</span><span class="ce-days-digit">6</span></span> <span class="ce-days-label">Days</span></div><div class="ce-col"><span class="ce-hours"><span class="ce-hours-digit">1</span><span class="ce-hours-digit">3</span></span> <span class="ce-hours-label">Hours</span></div><div class="ce-col"><span class="ce-minutes"><span class="ce-minutes-digit">1</span><span class="ce-minutes-digit">5</span></span> <span class="ce-minutes-label">Minutes</span></div><div class="ce-col"><span class="ce-seconds"><span class="ce-seconds-digit">1</span><span class="ce-seconds-digit">1</span></span> <span class="ce-seconds-label">Seconds</span></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="fsg1vl9g" data-azb="az_column" data-azat-width="  1/4" data-azcnt="true"></div></div></div></div><div id="8y9tuq9o" class="az-element az-section" style="padding-top:60px;padding-bottom:200px;" data-az-id="8y9tuq9o" data-azb="az_section" data-azat-style="padding-top:60px;padding-bottom:200px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="93r4p21q" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="ay326ub8" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="aarx1e4o" data-azb="az_text" data-azcnt="true">
					<p class="lead">Or reset every day to count to a time only</p>
				</div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="tqinklou" data-azb="az_column" data-azat-width="  1/2  " data-azcnt="true"><div class="az-element az-text" style="" data-az-id="rtsy5muc" data-azb="az_text" data-azcnt="true">
					<h3 style="text-align: center;"><em>Get Ready</em>&nbsp;for Bed Time!</h3>
				</div><div class="az-element az-countdown glazed-util-color-primary ce-countdown--theme-1" style="" data-az-id="fil3dm9y" data-azb="az_countdown" data-azat-countdown_style="style1" data-azat-counter_scope="repeating" data-azat-date_time="01.01.2016 00" data-azat-time="23" data-azat-saved="Fri, 08 May 2015 12:17:31 GMT" data-azat-display="hours,minutes,seconds" data-azat-el_class="glazed-util-color-primary"><div class="ce-countdown"><div class="ce-col"><span class="ce-hours"><span class="ce-hours-digit">1</span><span class="ce-hours-digit">1</span></span> <span class="ce-hours-label">Hours</span></div><div class="ce-col"><span class="ce-minutes"><span class="ce-minutes-digit">1</span><span class="ce-minutes-digit">5</span></span> <span class="ce-minutes-label">Minutes</span></div><div class="ce-col"><span class="ce-seconds"><span class="ce-seconds-digit">1</span><span class="ce-seconds-digit">1</span></span> <span class="ce-seconds-label">Seconds</span></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="eah9ogs0" data-azb="az_column" data-azat-width="  1/4" data-azcnt="true"></div></div></div></div><div id="noijzjfb" class="az-element az-section bg-primary" style="padding-top:60px;padding-bottom:60px;" data-az-id="noijzjfb" data-azb="az_section" data-azat-el_class="bg-primary" data-azat-style="padding-top:60px;padding-bottom:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="kffltfkj" data-azb="az_text" data-azcnt="true">
			<h2>Count Down Timers come with 10 predefined unique styles</h2>
		</div></div></div><div id="ugwqz053" class="az-element az-section" style="padding-top:100px;padding-bottom:100px;" data-az-id="ugwqz053" data-azb="az_section" data-azat-style="padding-top:100px;padding-bottom:100px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="kd13r1ha" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="vdlvntoy" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="7wo68aab" data-azb="az_text" data-azcnt="true">
					<h2>Airport Style</h2>
				</div></div><div class="az-element az-ctnr az-column  col-sm-9" style="" data-az-id="79mtuzgx" data-azb="az_column" data-azat-width="  3/4" data-azcnt="true"><div class="az-element az-countdown  ce-countdown--theme-10" style="" data-az-id="ttn6dpxf" data-azb="az_countdown" data-azat-countdown_style="style10" data-azat-counter_scope="date_time" data-azat-date_time="17.01.2018 00" data-azat-time="23" data-azat-saved="Mon, 23 Jan 2017 12:24:34 GMT" data-azat-display="days,hours,minutes,seconds"><div class="ce-countdown"><div class="ce-unit-wrap"><div class="ce-days"><span class="ce-days-digit">2</span><span class="ce-days-digit">0</span><span class="ce-days-digit">0</span><div class="ce-digits"><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div><div class="ce-digits"><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div><div class="ce-digits"><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div></div><span class="ce-days-label">Days</span></div><div class="ce-unit-wrap"><div class="ce-hours"><span class="ce-hours-digit">1</span><span class="ce-hours-digit">3</span><div class="ce-digits"><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div><div class="ce-digits"><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div></div><span class="ce-hours-label">Hours</span></div><div class="ce-unit-wrap"><div class="ce-minutes"><span class="ce-minutes-digit">1</span><span class="ce-minutes-digit">5</span><div class="ce-digits"><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div><div class="ce-digits"><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div></div><span class="ce-minutes-label">Minutes</span></div><div class="ce-unit-wrap"><div class="ce-seconds"><span class="ce-seconds-digit">1</span><span class="ce-seconds-digit">1</span><div class="ce-digits play"><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div><div class="ce-digits play"><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">0</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">0</div></div></div></div><div class="ce-digits-inner active"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">1</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">1</div></div></div></div><div class="ce-digits-inner before"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">2</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">2</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">3</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">3</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">4</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">4</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">5</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">5</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">6</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">6</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">7</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">7</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">8</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">8</div></div></div></div><div class="ce-digits-inner"><div class="ce-flip-wrap"><div class="ce-up"><div class="ce-shadow"></div><div class="ce-inn">9</div></div><div class="ce-down"><div class="ce-shadow"></div><div class="ce-inn">9</div></div></div></div></div></div><span class="ce-seconds-label">Seconds</span></div></div></div></div></div></div></div><div id="srwv8pmm" class="az-element az-section" style="padding-top:100px;padding-bottom:100px;" data-az-id="srwv8pmm" data-azb="az_section" data-azat-style="padding-top:100px;padding-bottom:100px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="18hwxivf" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="yy7wtjk9" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="yjf9lkmo" data-azb="az_text" data-azcnt="true">
					<h2>3D Flip</h2>
				</div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="8jnmnuhl" data-azb="az_column" data-azat-width="  1/2  " data-azcnt="true"><div class="az-element az-countdown  ce-countdown--theme-6 clearfix" style="" data-az-id="a3v89war" data-azb="az_countdown" data-azat-countdown_style="style6" data-azat-counter_scope="date_time" data-azat-date_time="01.02.2018 00" data-azat-time="23" data-azat-saved="Mon, 23 Jan 2017 12:24:46 GMT" data-azat-display="days,hours,minutes,seconds"><div class="ce-countdown"><div class="ce-col col-md-3"><div class="ce-days" data-old="215"><div class="ce-flip-wrap"><div class="ce-flip-front bg-primary">215</div><div class="ce-flip-back bg-primary">215</div></div></div><span class="ce-days-label">Days</span></div><div class="ce-col col-md-3"><div class="ce-hours" data-old="13"><div class="ce-flip-wrap"><div class="ce-flip-front bg-primary">13</div><div class="ce-flip-back bg-primary">13</div></div></div><span class="ce-hours-label">Hours</span></div><div class="ce-col col-md-3"><div class="ce-minutes" data-old="15"><div class="ce-flip-wrap"><div class="ce-flip-front bg-primary">15</div><div class="ce-flip-back bg-primary">15</div></div></div><span class="ce-minutes-label">Minutes</span></div><div class="ce-col col-md-3"><div class="ce-seconds" data-old="12"><div class="ce-flip-wrap"><div class="ce-flip-front bg-primary">12</div><div class="ce-flip-back bg-primary">11</div></div></div><span class="ce-seconds-label">Seconds</span></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="4fvxzb6l" data-azb="az_column" data-azat-width="  1/4" data-azcnt="true"></div></div></div></div><div id="t6w44m2j" class="az-element az-section" style="padding-top:100px;padding-bottom:100px;" data-az-id="t6w44m2j" data-azb="az_section" data-azat-style="padding-top:100px;padding-bottom:100px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="zjiu9ij6" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="h1z9pc1b" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="bixko26w" data-azb="az_text" data-azcnt="true">
					<h2>Disc Style</h2>
				</div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="b42m3npe" data-azb="az_column" data-azat-width="  1/2  " data-azcnt="true"><div class="az-element az-countdown  ce-countdown--theme-9" style="" data-az-id="er1aiv9d" data-azb="az_countdown" data-azat-countdown_style="style9" data-azat-counter_scope="date_time" data-azat-date_time="03.02.2018 00" data-azat-time="23" data-azat-saved="Mon, 23 Jan 2017 12:24:58 GMT" data-azat-display="days,hours,minutes,seconds"><div class="ce-countdown"><div class="ce-circle"><canvas id="ce-days" width="408" height="408"></canvas><div class="ce-circle__values"><span class="ce-digit ce-days"><span class="ce-days-digit">2</span><span class="ce-days-digit">1</span><span class="ce-days-digit">7</span></span><span class="ce-label ce-days-label">Days</span></div></div><div class="ce-circle"><canvas id="ce-hours" width="408" height="408"></canvas><div class="ce-circle__values"><span class="ce-digit ce-hours"><span class="ce-hours-digit">1</span><span class="ce-hours-digit">3</span></span><span class="ce-label ce-hours-label">Hours</span></div></div><div class="ce-circle"><canvas id="ce-minutes" width="408" height="408"></canvas><div class="ce-circle__values"><span class="ce-digit ce-minutes"><span class="ce-minutes-digit">1</span><span class="ce-minutes-digit">5</span></span><span class="ce-label ce-minutes-label">Minutes</span></div></div><div class="ce-circle"><canvas id="ce-seconds" width="408" height="408"></canvas><div class="ce-circle__values"><span class="ce-digit ce-seconds"><span class="ce-seconds-digit">1</span><span class="ce-seconds-digit">1</span></span><span class="ce-label ce-seconds-label">Seconds</span></div></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="wz513bjo" data-azb="az_column" data-azat-width="  1/4" data-azcnt="true"></div></div></div></div><div id="ivphibxv" class="az-element az-section" style="padding-top:100px;padding-bottom:100px;" data-az-id="ivphibxv" data-azb="az_section" data-azat-style="padding-top:100px;padding-bottom:100px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="b3e7b31b" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="087pzyow" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="trmowvcl" data-azb="az_text" data-azcnt="true">
					<h2>Grid Style</h2>
				</div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="83xl83bm" data-azb="az_column" data-azat-width="  1/2  " data-azcnt="true"><div class="az-element az-countdown glazed-util-color-primary ce-countdown--theme-1" style="" data-az-id="c2s6rpaw" data-azb="az_countdown" data-azat-countdown_style="style1" data-azat-counter_scope="date_time" data-azat-date_time="11.01.2018 00" data-azat-time="23" data-azat-saved="Mon, 23 Jan 2017 12:25:13 GMT" data-azat-display="days,hours,minutes,seconds" data-azat-el_class="glazed-util-color-primary"><div class="ce-countdown"><div class="ce-col"><span class="ce-days"><span class="ce-days-digit">1</span><span class="ce-days-digit">9</span><span class="ce-days-digit">4</span></span> <span class="ce-days-label">Days</span></div><div class="ce-col"><span class="ce-hours"><span class="ce-hours-digit">1</span><span class="ce-hours-digit">3</span></span> <span class="ce-hours-label">Hours</span></div><div class="ce-col"><span class="ce-minutes"><span class="ce-minutes-digit">1</span><span class="ce-minutes-digit">5</span></span> <span class="ce-minutes-label">Minutes</span></div><div class="ce-col"><span class="ce-seconds"><span class="ce-seconds-digit">1</span><span class="ce-seconds-digit">1</span></span> <span class="ce-seconds-label">Seconds</span></div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="xatk7pvl" data-azb="az_column" data-azat-width="  1/4" data-azcnt="true"></div></div></div></div><link rel="stylesheet" type="text/css" href="-base-url-/-module-directory-/glazed_builder/vendor/counteverest/css/counteverest.glazed.css">
<script src="-base-url-/-module-directory-/glazed_builder/vendor/counteverest/js/vendor/jquery.counteverest.min.js"></script>
<script src="-base-url-/-module-directory-/glazed_builder/vendor/datetimepicker/jquery.datetimepicker.js"></script>
<script src="-base-url-/-module-directory-/glazed_builder/glazed_frontend.min.js"></script>
',
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
  'date' => '2015-05-07 14:51:58 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Call to Action',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1429539688,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a13b4055-cfd9-4437-9127-35acd06cf9ea',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="cm0ruqi2" class="az-element az-section" style="padding-top:60px;" data-az-id="cm0ruqi2" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="hu7nfps8" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="yadcbqql" data-azb="az_column" data-azat-width="1/6" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-8" style="" data-az-id="nkgcairu" data-azb="az_column" data-azat-width=" 4/6 " data-azcnt="true"><div class="az-element az-text" style="" data-az-id="7j15e414" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;">Call to Action Element</h2></div><div class="az-element az-text" style="" data-az-id="2rvhhn2y" data-azb="az_text" data-azcnt="true"><p class="lead">The Glazed team&nbsp;used advice from&nbsp;conversion optimization experts to give you the tools&nbsp;that are needed to design&nbsp;websites that work both beautifully and effectively. These Call-to-action drag and drop elements&nbsp;can be droppped anywhere on your page to create a clear focal point in your landing page!</p></div></div><div class="az-element az-ctnr az-column  col-sm-2" style="" data-az-id="528s07uq" data-azb="az_column" data-azat-width=" 1/6" data-azcnt="true"></div></div></div></div><div id="m2p6r3nw" class="az-element az-section our glazed-util-background-primary" style="padding-top:150px;padding-bottom:150px;" data-az-id="m2p6r3nw" data-azb="az_section" data-azat-el_class="our glazed-util-background-primary" data-azat-style="padding-top:150px;padding-bottom:150px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="yj2qid0h" data-azb="cta-large-white"><div data-azcnt="true"><div class="stpe-cta stpe-cta--large row">
          <div class="col-md-9 stpe-cta__text az-editable" style="">
            <p class="lead our glazed-util-color-white">You feel there should be no barrier between your creativity and the internet. Direct communication. Our theme is built to work this way: Frictionless expression.</p>
          </div>

          <div class="col-md-3 stpe-cta__button"><a class="btn btn-lg stpe-borderbutton our glazed-util-border-white our glazed-util-color-white our glazed-util-hover-background-white our glazed-util-hover-border-white our glazed-util-hover-color-primary az-editable" href="http://www.sooperthemes.com/pricing">Buy Theme</a></div>
        </div></div></div></div></div><div id="ns4fa5fg" class="az-element az-section" style="padding-top:150px;padding-bottom:150px;" data-az-id="ns4fa5fg" data-azb="az_section" data-azat-style="padding-top:150px;padding-bottom:150px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="nhigh4v5" data-azb="cta-large"><div data-azcnt="true"><h3 class="stpe-cta__heading">About Our Theme</h3>

        <div class="stpe-cta stpe-cta--large row">
          <div class="col-md-9 stpe-cta__text az-editable">
            <p class="lead">You feel there should be no barrier between your creativity and the internet. Direct communication. Our theme is built to work this way: Frictionless expression.</p>
          </div>

          <div class="col-md-3 stpe-cta__button"><a style="" class="glazed-util-color-primary glazed-util-border-primary stpe-borderbutton btn btn-lg our glazed-util-hover-border-primary glazed-util-hover-color-white glazed-util-hover-background-primary az-editable" href="http://www.sooperthemes.com/pricing">Buy Theme</a></div>
        </div></div></div></div></div><div id="vqtn2roe" class="az-element az-section glazed-util-background-accent1" style="padding-top:150px;padding-bottom:150px;" data-az-id="vqtn2roe" data-azb="az_section" data-azat-parallax_speed="58" data-azat-el_class="glazed-util-background-accent1" data-azat-style="padding-top:150px;padding-bottom:150px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="4zahg3jl" data-azb="cta-center"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css"><p class="lead center-block col-md-6 az-editable">Thousands of Drupal Professionals Love Glazed. Glazed replaces all other themes by providing dozens of full demos,  with unique branding and amazing Drag and Drop elements.</p>
<p>
  <a style="" class="btn btn-primary btn-lg center-block col-sm-3 clear-both clearfix" href="http://sooperthemes.com/pricing">Join SooperThemes</a>
</p></div></div></div></div><div id="m9ola1mn" class="az-element az-section" style="padding-top:150px;padding-bottom:150px;background-color:#eeeeee;" data-az-id="m9ola1mn" data-azb="az_section" data-azat-style="padding-top:150px;padding-bottom:150px;background-color:#eeeeee;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="t78kqljf" data-azb="cta-wide"><div data-azcnt="true"><div class="stpe-cta stpe-cta--wide">
          <h2 class="stpe-cta__heading">Discover the Drupal solution that makes your life easy</h2>
          <a class="btn btn-lg btn-primary wow wow-visible tada" data-wow-offset="335" href="http://www.sooperthemes.com/pricing" style="visibility: visible;">Buy Theme</a></div></div></div></div></div><div id="7l5mh5vw" class="az-element az-section" style="padding-top:150px;padding-bottom:150px;" data-az-id="7l5mh5vw" data-azb="az_section" data-azat-style="padding-top:150px;padding-bottom:150px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="u139a3fw" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="s08w7bau" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-template" style="padding-top:90px;" data-az-id="bqjqj7fc" data-azb="cta-simple" data-azat-style="padding-top:90px;"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css"><p class="lead az-editable">Thousands of Drupal Professionals Love Glazed. Glazed replaces all other themes by providing dozens of full demos,  with unique branding and amazing Drag and Drop features.</p>
<p>
  <a class="btn btn-primary btn-lg clear-both clearfix az-editable" href="http://sooperthemes.com/pricing">
  Try it now
  </a>
</p></div></div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="3x8t5c7v" data-azb="az_column" data-azat-width=" 1/2" data-azcnt="true"><div class="az-element az-image" data-az-id="qzxuikm5" data-azb="az_image" data-azat-image="http://i.imgur.com/LarzgF4.jpg" data-azat-width="" data-azat-height=""><img src="http://i.imgur.com/LarzgF4.jpg" alt="" title="" style=""></div></div></div></div></div><div id="a5ui4kl8" class="az-element az-section" style="padding-top:150px;padding-bottom:150px;background-color:#eeeeee;" data-az-id="a5ui4kl8" data-azb="az_section" data-azat-style="padding-top:150px;padding-bottom:150px;background-color:#eeeeee;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="61arxkw3" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="f3jbie2o" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-image" data-az-id="m1u7fpra" data-azb="az_image" data-azat-image="http://i.imgur.com/0wZmy4L.jpg" data-azat-width="" data-azat-height=""><img src="http://i.imgur.com/0wZmy4L.jpg" alt="" title="" style=""></div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="4gibep38" data-azb="az_column" data-azat-width=" 1/2" data-azcnt="true"><div class="az-element az-template" style="padding-top:90px;" data-az-id="n15btc3q" data-azb="cta-simple" data-azat-style="padding-top:90px;"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css"><p class="lead az-editable">Thousands of Drupal Professionals Love Glazed. Glazed replaces all other themes by providing dozens of full demos,  with unique branding and amazing Drag and Drop features.</p>
<p>
  <a class="btn btn-primary btn-lg clear-both clearfix az-editable" href="http://sooperthemes.com/pricing">
  Try it now
  </a>
</p></div></div></div></div></div></div><div id="6nvndf4c" class="az-element az-section" style="padding-top:150px;padding-bottom:150px;" data-az-id="6nvndf4c" data-azb="az_section" data-azat-style="padding-top:150px;padding-bottom:150px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="bf26mnz1" data-azb="cta-contact-call"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/glazed_elements/Call%20to%20action/../../glazed_builder/vendor/animate.css/animate.min.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Call%20to%20action/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Call%20to%20action/../../glazed_builder/js/glazed.wow.js"></script><p class="lead center-block col-md-6 az-editable">Please contact us for questions or a free assessment and we will get back to you as soon as possible!</p>
<div data-wow-offset="368" style="visibility: visible;" class="wow wow-visible pulse clear-both clearfix">
  <a class="btn btn-primary btn-lg center-block col-sm-3 az-editable" href="http://sooperthemes.com/pricing">
  Contact us now
  </a>
</div>
<br><p class="text-center clear-both clearfix az-editable">
  <a class="btn btn-default btn-sm bs-popover" data-html="FALSE" data-placement="top" data-animation="TRUE" data-content="You can reach us at 1-55-555-555. You may reach our office from monday to friday form 09.00 to 17.30" data-toggle="popover" href="#" data-original-title="Call us">Or click here for our phone number</a>
</p></div></div></div></div><div id="w0xamq4w" class="az-element az-section" style="padding-top:200px;padding-bottom:200px;background-color:#eeeeee;" data-az-id="w0xamq4w" data-azb="az_section" data-azat-style="padding-top:200px;padding-bottom:200px;background-color:#eeeeee;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="rxpo46ts" data-azb="cta-center"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css"><p class="lead center-block col-md-6 az-editable">Thousands of Drupal Professionals Love Glazed. Glazed replaces all other themes by providing dozens of full demos,  with unique branding and amazing Drag and Drop elements.</p>
<p>
  <a style="" class="center-block glazed-util-background-accent2 btn btn-primary btn-lg col-sm-3 clear-both clearfix" href="http://sooperthemes.com/pricing">Try it now</a>
</p></div></div></div></div><div id="sdld83r9" class="az-element az-section" style="padding-top: 200px; padding-bottom: 200px; background-image: url(&quot;http://i.imgur.com/PqTCt5k.jpg&quot;); background-position: 50% 0px; background-repeat: no-repeat; background-size: cover;" data-az-id="sdld83r9" data-azb="az_section" data-azat-effect="parallax" data-azat-parallax_speed="15" data-azat-style="padding-top:200px;padding-bottom:200px;background-image: url(http://i.imgur.com/PqTCt5k.jpg);background-position: center;background-repeat: no-repeat;background-size: cover;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="padding-top:40px;padding-bottom:40px;background-color:#ffffff;opacity:0.88;" data-az-id="vl8zvlmh" data-azb="cta-contact-call" data-azat-style="padding-top:40px;padding-bottom:40px;background-color:#ffffff;opacity:0.88;"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css"><link href="-base-url-/-module-directory-/glazed_elements/Call%20to%20action/../../glazed_builder/vendor/animate.css/animate.min.css" rel="stylesheet" type="text/css"><script src="-base-url-/-module-directory-/glazed_elements/Call%20to%20action/../../glazed_builder/vendor/WOW/dist/wow.min.js"></script><script src="-base-url-/-module-directory-/glazed_elements/Call%20to%20action/../../glazed_builder/js/glazed.wow.js"></script><p class="lead center-block col-md-6 az-editable">Please contact us for questions or a free assessment and we will get back to you as soon as possible!</p>
<div data-wow-offset="368" style="visibility: visible;" class="wow wow-visible pulse clear-both clearfix">
  <a style="" class="btn btn-primary glazed-util-background-accent1 btn-lg center-block col-sm-3 az-editable" href="http://sooperthemes.com/pricing">Contact us now</a>
</div>
<br><p class="text-center clear-both clearfix az-editable">
  <a class="btn btn-default btn-sm bs-popover" data-html="FALSE" data-placement="top" data-animation="TRUE" data-content="You can reach us at 1-55-555-555. You may reach our office from monday to friday form 09.00 to 17.30" data-toggle="popover" href="#" data-original-title="Call us">Or click here for our phone number</a>
</p></div></div></div></div><div id="5u0idcmm" class="az-element az-section our glazed-util-background-primary" style="padding-top:200px;padding-bottom:200px;" data-az-id="5u0idcmm" data-azb="az_section" data-azat-el_class="our glazed-util-background-primary" data-azat-style="padding-top:200px;padding-bottom:200px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="g6gjeien" data-azb="cta-center"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Call%20to%20action/../../css/elements/cta.css" rel="stylesheet" type="text/css"><p class="lead center-block col-md-6 az-editable">Thousands of Drupal Professionals Love Glazed. Glazed replaces all other themes by providing dozens of full demos,  with unique branding and amazing Drag and Drop elements.</p>
<p>
  <a style="color:#333333;background-color:#ffffff;" class="btn btn-primary btn-lg center-block col-sm-3 clear-both clearfix" href="http://sooperthemes.com/pricing">Try it now</a>
</p></div></div></div></div><script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.parallax/jquery.parallax.js"></script>
<script src="-base-url-/-module-directory-/glazed_builder/vendor/jquery.waypoints/lib/jquery.waypoints.min.js"></script>
<script src="-base-url-/-module-directory-/glazed_builder/glazed_frontend.min.js"></script>
',
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
  'comment_count' => 0,
  'date' => '2015-04-20 14:21:28 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Google Maps',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1455277888,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a4608e7f-a620-4b47-b9a6-3e960302cf32',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="2ekuht1o" class="az-element az-section" style="padding-top:60px;" data-az-id="2ekuht1o" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="9ifc1hnh" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="k9dp9rkz" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="u3smcu8d" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="owdw8tde" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;">Google Maps Element<br></h2></div><hr class="az-element az-separator" style="border: none;" data-az-id="769pza2q" data-azb="az_separator"></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="58rlgp92" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="ro0zc1ab" class="az-element az-section" style="padding-top:60px;" data-az-id="ro0zc1ab" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="d2rrsmfw" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="mbjbta5s" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="f5347opi" data-azb="az_text" data-azcnt="true"><p class="lead">Easily add Google Maps to your pages. Simply select the Maps element in the Glazed Builder interface and fill in the address.<br></p><p class="lead">The map element is powered by Google, it understands much more that just addresses. For example: "Walmarts in Chicago" is used as location in the map below.<br></p></div></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="zaqs9p8q" data-azb="az_column" data-azat-width=" 1/2" data-azcnt="true"><div style="line-height: 0;" class="az-element az-map" data-az-id="u7mc5bte" data-azb="az_map" data-azat-address="Nachtegaalstraat 35, Utrecht" data-azat-height="200"><iframe src="https://maps.google.com/maps?q=Nachtegaalstraat+35, Utrecht&amp;iwloc=near&amp;output=embed" frameborder="0" style="width: 100%; height: 200px;">&amp;lt;/&amp;lt;iframe&amp;gt;</iframe></div></div></div></div></div><div id="nazngm2p" class="az-element az-section" style="padding-top:60px;" data-az-id="nazngm2p" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="rbvg5c6n" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-12" style="" data-az-id="tekx3aaj" data-azb="az_column" data-azat-width="1/1" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="omnbnxv9" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;">Find a Wallmart near you:</h2>
</div><div style="line-height: 0;" class="az-element az-map" data-az-id="2nhddwjl" data-azb="az_map" data-azat-address="wallmart supercenter, chicago" data-azat-height="500px"><iframe src="https://maps.google.com/maps?q=wallmart+supercenter, chicago&amp;iwloc=near&amp;output=embed" frameborder="0" style="width: 100%; height: 500px;">&amp;lt;/&amp;lt;iframe&amp;gt;</iframe></div></div></div></div></div><div id="wbgpka4o" class="az-element az-section" style="padding-top:10%;padding-bottom:10%;" data-az-id="wbgpka4o" data-azb="az_section" data-azat-style="padding-top:10%;padding-bottom:10%;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="dx3obaws" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="rdz0vduz" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="5he90vwb" data-azb="az_column" data-azat-width=" 1/2 " data-azcnt="true"><div class="az-element az-text" style="" data-az-id="s6pr29r2" data-azb="az_text" data-azcnt="true"><h2>Full Width Google Map</h2>
</div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="nkz9dp7k" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"></div></div></div></div><div style="line-height: 0;" class="az-element az-map" data-az-id="fuki1fm5" data-azb="az_map" data-azat-address="Nachtegaalstraat 35, Utrecht"><iframe src="https://maps.google.com/maps?q=Nachtegaalstraat+35, Utrecht&amp;iwloc=near&amp;output=embed" frameborder="0" style="width: 100%; height: 400px;">&amp;lt;/&amp;lt;iframe&amp;gt;</iframe></div>',
        'summary' => NULL,
        'format' => NULL,
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
  'date' => '2016-02-12 11:51:28 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Quote Slider',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1430566560,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd495cf25-fc13-4103-a876-c71b190c421c',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="m9b1bbk0" class="az-element az-section" style="padding-top:60px;" data-az-id="m9b1bbk0" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="nh8avxfj" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="89f7aw26" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="1bcuqqlo" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="3zl9pbi7" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;">Easy: Ready-made Quote Slider</h2></div><div class="az-element az-text" style="" data-az-id="vro2y5ev" data-azb="az_text" data-azcnt="true"><p class="lead">The quote slider is great for display for testimonials, reviews or&nbsp;quotes.&nbsp;Glazed allows you to just drop a quote slider anywhere in the page. It will look good in&nbsp;columns of all reasonable sizes.&nbsp;</p></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="oy6l9hc7" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="acnyfu9o" class="az-element az-section" style="padding-bottom:5%;" data-az-id="acnyfu9o" data-azb="az_section" data-azat-style="padding-bottom:5%;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="g9yyp0ty" data-azb="quoteslider-4"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Quote%20slider/../../css/elements/quoteslider.css" rel="stylesheet" type="text/css"><div class="carousel slide stpe-quoteslider" data-ride="carousel" id="stpe-quoteslider">
  <!-- Bottom Carousel Indicators -->
  <ol class="carousel-indicators"><li data-target="#stpe-quoteslider" data-slide-to="0" class="active">
    </li><li class="" data-target="#stpe-quoteslider" data-slide-to="1">
    </li><li class="" data-target="#stpe-quoteslider" data-slide-to="2">
    </li><li class="" data-target="#stpe-quoteslider" data-slide-to="3">
  </li></ol><div class="carousel-inner">
    <div class="item active">
      <blockquote>
        <div class="row">
          <div class="col-sm-3 text-center">
            <img class="img-circle stpe-quoteslider__image" src="http://i.imgur.com/capIu94s.jpg"></div>
          <div class="col-sm-9">
            <p class="az-editable">It\'s incredible. Product impressed me on multiple levels. Very easy to use. Wow what great service, I love it!</p>
            <small class="az-editable">Jack Finklestein</small>
          </div>
        </div>
      </blockquote>
    </div>
    <div class="item">
      <blockquote>
        <div class="row">
          <div class="col-sm-3 text-center">
            <img class="img-circle stpe-quoteslider__image" src="http://i.imgur.com/capIu94s.jpg"></div>
          <div class="col-sm-9">
            <p class="az-editable">The best on the net! I would be lost without Product. Product is worth much more than I paid.</p>
            <small class="az-editable">Rick Edwards</small>
          </div>
        </div>
      </blockquote>
    </div>
    <div class="item">
      <blockquote>
        <div class="row">
          <div class="col-sm-3 text-center">
            <img class="img-circle stpe-quoteslider__image" src="http://i.imgur.com/capIu94s.jpg"></div>
          <div class="col-sm-9">
            <p class="az-editable">I like Product more and more each day because it makes my life a lot easier. I was amazed at the quality of Product. It\'s exactly what I\'ve been looking for. Best. Product. Ever!</p>
            <small class="az-editable">Carla Achterberg</small>
          </div>
        </div>
      </blockquote>
    </div>
    <div class="item">
      <blockquote>
        <div class="row">
          <div class="col-sm-3 text-center">
            <img class="img-circle stpe-quoteslider__image" src="http://i.imgur.com/capIu94s.jpg"></div>
          <div class="col-sm-9">
            <p class="az-editable">We can\'t understand how we\'ve been living without Product. Product is the most valuable business resource we have EVER purchased. Man, this thing is getting better and better as I learn more about it. Very easy to use.</p>
            <small class="az-editable">Michael White</small>
          </div>
        </div>
      </blockquote>
    </div>
  </div>

  <!-- Carousel Buttons Next/Prev -->
  <a data-slide="prev" href="#stpe-quoteslider" class="left carousel-control"><i class="glyphicon glyphicon-chevron-left">&nbsp;</i></a>
  <a data-slide="next" href="#stpe-quoteslider" class="right carousel-control"><i class="glyphicon glyphicon-chevron-right">&nbsp;</i></a>
</div></div></div></div></div>',
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
  'comment_count' => 0,
  'date' => '2015-05-02 11:36:00 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  $nodes[] = array(
  'title' => 'Pricing Table',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'cb_drag_drop_page',
  'language' => 'und',
  'created' => 1450522250,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e54ed492-aa67-4f17-84c2-a841dac84118',
  'field_glazed_content_design' => array(),
  'cb_body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="wo0xpdzs" class="az-element az-section" style="padding-top:60px;" data-az-id="wo0xpdzs" data-azb="az_section" data-azat-style="padding-top:60px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="y34ciplb" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="gn7sy0tm" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="sagbujmi" data-azb="az_column" data-azat-width="1/2" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="c906nllj" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;">Pricing Tables: Easier than ever!</h2></div><div class="az-element az-text" style="" data-az-id="zy6ccwsv" data-azb="az_text" data-azcnt="true"><p class="lead">Different pricing table designs and layouts can be dropped anywhere in your page from the sidebar in our page builder. Simply click a price, feature, or any other text to edit. You can even feature particular plans to focus conversion!</p></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="6vf02tdh" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div></div></div></div><div id="mvtus1so" class="az-element az-section" style="" data-az-id="mvtus1so" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="i13q7w8w" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;">Boxed Table<br></h2></div></div></div><div id="cmulytwz" class="az-element az-section" style="margin-top:100px;margin-bottom:100px;" data-az-id="cmulytwz" data-azb="az_section" data-azat-style="margin-top:100px;margin-bottom:100px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="w9hyt6lw" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-4" style="" data-az-id="bg23q85m" data-azb="az_column" data-azat-width="1/3" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-4" style="" data-az-id="u6yqidr8" data-azb="az_column" data-azat-width=" 1/3 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="5zrjtp2p" data-azb="pricingtable-boxed-1"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--boxed row clearfix">
              <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-12">
                <div class="stpe-pricingtable__panel-container">
                  <div class="stpe-pricingtable__panel">
                    <div class="stpe-pricingtable__panel-heading">
                      <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                    </div>

                    <div class="stpe-pricingtable__panel-body">
                      <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                    </div>

                    <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                      <li class="az-editable list-group-item">5 GB Storage</li>
                      <li class="az-editable list-group-item" style="">Unlimited Users</li>
                      <li class="az-editable list-group-item">10 GB Bandwith</li>
                    </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
                  </div>
                </div>
              </div>
            </div></div></div></div><div class="az-element az-ctnr az-column  col-sm-4" style="" data-az-id="w0kt9rh0" data-azb="az_column" data-azat-width=" 1/3" data-azcnt="true"></div></div></div></div><div id="m56si1kr" class="az-element az-section" style="margin-top:100px;margin-bottom:100px;" data-az-id="m56si1kr" data-azb="az_section" data-azat-style="margin-top:100px;margin-bottom:100px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="fwi1ccx2" data-azb="pricingtable-boxed-2"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--boxed row clearfix">
          <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-6">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                  <li class="az-editable list-group-item">5 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">10 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-6">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                  <li class="az-editable list-group-item">15 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">20 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>
        </div></div></div></div></div><div id="s4znqxtt" class="az-element az-section" style="margin-top:100px;margin-bottom:100px;" data-az-id="s4znqxtt" data-azb="az_section" data-azat-style="margin-top:100px;margin-bottom:100px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="egcfe0zv" data-azb="pricingtable-boxed-3"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--boxed row clearfix">
          <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-4">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                  <li class="az-editable list-group-item">5 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">10 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-4">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                  <li class="az-editable list-group-item">15 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">20 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-4 stpe-pricingtable__stpe-pricingtable__panel-wrapper--standout">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Professional</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">39</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">15 Projects</li>
                  <li class="az-editable list-group-item">30 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">50 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>
        </div></div></div></div></div><div id="gkj6ymh9" class="az-element az-section" style="margin-top:100px;margin-bottom:100px;" data-az-id="gkj6ymh9" data-azb="az_section" data-azat-style="margin-top:100px;margin-bottom:100px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="qtg6pjn7" data-azb="pricingtable-boxed-4"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--boxed row clearfix">
          <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-3">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                  <li class="az-editable list-group-item">5 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">10 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-3">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                  <li class="az-editable list-group-item">15 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">20 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-3 stpe-pricingtable__stpe-pricingtable__panel-wrapper--standout">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Professional</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">39</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">15 Projects</li>
                  <li class="az-editable list-group-item">30 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">50 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-3">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Maximum</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">49</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">30 Projects</li>
                  <li class="az-editable list-group-item">100 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">150 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>
        </div></div></div></div></div><div id="lj36eksx" class="az-element az-section" style="margin-top:100px;margin-bottom:100px;" data-az-id="lj36eksx" data-azb="az_section" data-azat-style="margin-top:100px;margin-bottom:100px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="v6pnwlrn" data-azb="pricingtable-boxed-5"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--boxed row glazed-util-columns-5 clearfix">
          <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                  <li class="az-editable list-group-item">5 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">10 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                  <li class="az-editable list-group-item">15 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">20 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2 stpe-pricingtable__stpe-pricingtable__panel-wrapper--standout">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Professional</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">39</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">15 Projects</li>
                  <li class="az-editable list-group-item">30 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">50 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Maximum</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">49</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">30 Projects</li>
                  <li class="az-editable list-group-item">100 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">150 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Extreme</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">59</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">Unlimited Projects</li>
                  <li class="az-editable list-group-item">Unlimited Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">Unlimited Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>
        </div></div></div></div></div><div id="qt7y6z9h" class="az-element az-section" style="" data-az-id="qt7y6z9h" data-azb="az_section"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-text" style="" data-az-id="96frmxgy" data-azb="az_text" data-azcnt="true"><h2 style="text-align: center;">Solid Table<br></h2></div></div></div><div id="vsoq1qav" class="az-element az-section" style="margin-top:100px;margin-bottom:100px;" data-az-id="vsoq1qav" data-azb="az_section" data-azat-style="margin-top:100px;margin-bottom:100px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="mxcp1i4w" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-4" style="" data-az-id="uopovfur" data-azb="az_column" data-azat-width="1/3" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-4" style="" data-az-id="m1rp44o6" data-azb="az_column" data-azat-width=" 1/3 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="n4ewj9yv" data-azb="pricingtable-full-1"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--full row clearfix">
              <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-12">
                <div class="stpe-pricingtable__panel-container">
                  <div class="stpe-pricingtable__panel">
                    <div class="stpe-pricingtable__panel-heading">
                      <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                    </div>

                    <div class="stpe-pricingtable__panel-body">
                      <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                    </div>

                    <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                      <li class="az-editable list-group-item">5 GB Storage</li>
                      <li class="az-editable list-group-item">Unlimited Users</li>
                      <li class="az-editable list-group-item">10 GB Bandwith</li>
                    </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
                  </div>
                </div>
              </div>
            </div></div></div></div><div class="az-element az-ctnr az-column  col-sm-4" style="" data-az-id="sei404ca" data-azb="az_column" data-azat-width=" 1/3" data-azcnt="true"></div></div></div></div><div id="fm9otqaw" class="az-element az-section" style="margin-top:100px;margin-bottom:100px;" data-az-id="fm9otqaw" data-azb="az_section" data-azat-style="margin-top:100px;margin-bottom:100px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-row row  az-row--sm" style="" data-az-id="lbqksxso" data-azb="az_row" data-azat-device="sm" data-azcnt="true"><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="varin7wt" data-azb="az_column" data-azat-width="1/4" data-azcnt="true"></div><div class="az-element az-ctnr az-column  col-sm-6" style="" data-az-id="m8kvo4jj" data-azb="az_column" data-azat-width=" 1/2 " data-azcnt="true"><div class="az-element az-template" style="" data-az-id="04b8ygr0" data-azb="pricingtable-full-2"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--full row clearfix">
              <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-6">
                <div class="stpe-pricingtable__panel-container">
                  <div class="stpe-pricingtable__panel">
                    <div class="stpe-pricingtable__panel-heading">
                      <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                    </div>

                    <div class="stpe-pricingtable__panel-body">
                      <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                    </div>

                    <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                      <li class="az-editable list-group-item">5 GB Storage</li>
                      <li class="az-editable list-group-item">Unlimited Users</li>
                      <li class="az-editable list-group-item">10 GB Bandwith</li>
                    </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
                  </div>
                </div>
              </div>

              <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-6">
                <div class="stpe-pricingtable__panel-container">
                  <div class="stpe-pricingtable__panel">
                    <div class="stpe-pricingtable__panel-heading">
                      <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                    </div>

                    <div class="stpe-pricingtable__panel-body">
                      <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                    </div>

                    <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                      <li class="az-editable list-group-item">15 GB Storage</li>
                      <li class="az-editable list-group-item">Unlimited Users</li>
                      <li class="az-editable list-group-item">20 GB Bandwith</li>
                    </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
                  </div>
                </div>
              </div>
            </div></div></div></div><div class="az-element az-ctnr az-column  col-sm-3" style="" data-az-id="8nknv6vc" data-azb="az_column" data-azat-width=" 1/4" data-azcnt="true"></div></div></div></div><div id="5yeyu3cs" class="az-element az-section" style="margin-top:100px;margin-bottom:100px;" data-az-id="5yeyu3cs" data-azb="az_section" data-azat-style="margin-top:100px;margin-bottom:100px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="flz1cnfe" data-azb="pricingtable-full-3"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--full row clearfix">
          <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-4">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                  <li class="az-editable list-group-item">5 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">10 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-4">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                  <li class="az-editable list-group-item">15 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">20 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-4 stpe-pricingtable__stpe-pricingtable__panel-wrapper--standout">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Professional</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">39</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">15 Projects</li>
                  <li class="az-editable list-group-item">30 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">50 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>
        </div></div></div></div></div><div id="iqa3k6jt" class="az-element az-section" style="margin-top:100px;margin-bottom:100px;" data-az-id="iqa3k6jt" data-azb="az_section" data-azat-style="margin-top:100px;margin-bottom:100px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="his3jurd" data-azb="pricingtable-full-4"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--full row clearfix">
          <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-3">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                  <li class="az-editable list-group-item">5 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">10 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-3">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                  <li class="az-editable list-group-item">15 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">20 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-3 stpe-pricingtable__stpe-pricingtable__panel-wrapper--standout">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Professional</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">39</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">15 Projects</li>
                  <li class="az-editable list-group-item">30 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">50 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-3">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Maximum</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">49</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">30 Projects</li>
                  <li class="az-editable list-group-item">100 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">150 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>
        </div></div></div></div></div><div id="ki5yps11" class="az-element az-section" style="margin-top:100px;margin-bottom:100px;" data-az-id="ki5yps11" data-azb="az_section" data-azat-style="margin-top:100px;margin-bottom:100px;"><div class="az-ctnr container" data-azcnt="true"><div class="az-element az-template" style="" data-az-id="v1pou8wc" data-azb="pricingtable-full-5"><div data-azcnt="true"><link href="-base-url-/-module-directory-/glazed_elements/Pricing%20tables/../../css/elements/pricingtable.css" rel="stylesheet" type="text/css"><div class="stpe-pricingtable stpe-pricingtable--full row glazed-util-columns-5 clearfix">
          <div class="az-editable stpe-pricingtable__panel-wrapper  col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Standard</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">19</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">5 Projects</li>
                  <li class="az-editable list-group-item">5 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">10 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Premium</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">29</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">10 Projects</li>
                  <li class="az-editable list-group-item">15 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">20 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2 stpe-pricingtable__stpe-pricingtable__panel-wrapper--standout">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Professional</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">39</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">15 Projects</li>
                  <li class="az-editable list-group-item">30 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">50 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Maximum</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">49</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">30 Projects</li>
                  <li class="az-editable list-group-item">100 GB Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">150 GB Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>

          <div class="az-editable stpe-pricingtable__panel-wrapper col-sm-2">
            <div class="stpe-pricingtable__panel-container">
              <div class="stpe-pricingtable__panel">
                <div class="stpe-pricingtable__panel-heading">
                  <h3 class="stpe-pricingtable__panel-title">Extreme</h3>
                </div>

                <div class="stpe-pricingtable__panel-body">
                  <div class="stpe-pricingtable__price"><span class="az-editable stpe-pricingtable__currency">$</span><span class="az-editable stpe-pricingtable__integer text-primary az-editable">59</span><sup class="az-editable stpe-pricingtable__decimal text-primary az-editable">99</sup><span class="az-editable stpe-pricingtable__period">monthly</span></div>
                </div>

                <ul class="list-group az-sortable"><li class="az-editable list-group-item">Unlimited Projects</li>
                  <li class="az-editable list-group-item">Unlimited Storage</li>
                  <li class="az-editable list-group-item">Unlimited Users</li>
                  <li class="az-editable list-group-item">Unlimited Bandwith</li>
                </ul><div class="stpe-pricingtable__panel-footer"><a class="az-editable stpe-borderbutton btn-lg" href="http://sooperthemes.com/pricing">Sign Up</a></div>
              </div>
            </div>
          </div>
        </div></div></div></div></div>',
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
  'date' => '2015-12-19 10:50:50 +0000',
  'user_uuid' => '4eaaf13b-5ae4-4474-941c-6e48ae639eda',
);
  return $nodes;
}
