<?php
/**
 * @file
 * glazed_content_page_examples.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function glazed_content_page_examples_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-me:uuid/node/09c313be-63ee-4325-a474-12ea5c8792db.
  $menu_links['main-menu_about-me:uuid/node/09c313be-63ee-4325-a474-12ea5c8792db'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/09c313be-63ee-4325-a474-12ea5c8792db',
    'router_path' => 'uuid',
    'link_title' => 'About Me',
    'options' => array(
      'identifier' => 'main-menu_about-me:uuid/node/09c313be-63ee-4325-a474-12ea5c8792db',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => '09c313be-63ee-4325-a474-12ea5c8792db',
    'vuuid' => 'aad96ada-0b82-43e9-9548-b8e1c2367006',
    'parent_identifier' => 'main-menu_pages:events',
  );
  // Exported menu link: main-menu_about-us-timeline:uuid/node/fefb9dcc-281b-4544-b7e0-4dfaa4ebf495.
  $menu_links['main-menu_about-us-timeline:uuid/node/fefb9dcc-281b-4544-b7e0-4dfaa4ebf495'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/fefb9dcc-281b-4544-b7e0-4dfaa4ebf495',
    'router_path' => 'uuid',
    'link_title' => 'About Us Timeline',
    'options' => array(
      'identifier' => 'main-menu_about-us-timeline:uuid/node/fefb9dcc-281b-4544-b7e0-4dfaa4ebf495',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => 'fefb9dcc-281b-4544-b7e0-4dfaa4ebf495',
    'vuuid' => 'f7eae342-bdd3-40c8-bb19-bb41f082d540',
    'parent_identifier' => 'main-menu_pages:events',
  );
  // Exported menu link: main-menu_about-us:uuid/node/984cfc78-e4cc-4262-9452-20b267bd3776.
  $menu_links['main-menu_about-us:uuid/node/984cfc78-e4cc-4262-9452-20b267bd3776'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/984cfc78-e4cc-4262-9452-20b267bd3776',
    'router_path' => 'uuid',
    'link_title' => 'About Us',
    'options' => array(
      'identifier' => 'main-menu_about-us:uuid/node/984cfc78-e4cc-4262-9452-20b267bd3776',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => '984cfc78-e4cc-4262-9452-20b267bd3776',
    'vuuid' => '7aae001b-48e1-42cd-bc65-1e2c2ef11f7f',
    'parent_identifier' => 'main-menu_pages:events',
  );
  // Exported menu link: main-menu_faq:uuid/node/973e2a11-c838-4666-a29c-49487ee8c79f.
  $menu_links['main-menu_faq:uuid/node/973e2a11-c838-4666-a29c-49487ee8c79f'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/973e2a11-c838-4666-a29c-49487ee8c79f',
    'router_path' => 'uuid',
    'link_title' => 'FAQ',
    'options' => array(
      'identifier' => 'main-menu_faq:uuid/node/973e2a11-c838-4666-a29c-49487ee8c79f',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => '973e2a11-c838-4666-a29c-49487ee8c79f',
    'vuuid' => 'cac5e284-7fdb-4736-93ec-00c485d94aef',
    'parent_identifier' => 'main-menu_pages:events',
  );
  // Exported menu link: main-menu_pages:events.
  $menu_links['main-menu_pages:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_pages:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_pricing-page:uuid/node/e9a73a03-7034-42a9-8a77-5ff90c98a0d2.
  $menu_links['main-menu_pricing-page:uuid/node/e9a73a03-7034-42a9-8a77-5ff90c98a0d2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/e9a73a03-7034-42a9-8a77-5ff90c98a0d2',
    'router_path' => 'uuid',
    'link_title' => 'Pricing Page',
    'options' => array(
      'identifier' => 'main-menu_pricing-page:uuid/node/e9a73a03-7034-42a9-8a77-5ff90c98a0d2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => 'e9a73a03-7034-42a9-8a77-5ff90c98a0d2',
    'vuuid' => '9e66b7f1-83ad-483a-921f-9f354fb0b7b4',
    'parent_identifier' => 'main-menu_pages:events',
  );
  // Exported menu link: main-menu_registration-landing-1:uuid/node/73824210-432e-4f4d-b0e8-4cc1866bb6b0.
  $menu_links['main-menu_registration-landing-1:uuid/node/73824210-432e-4f4d-b0e8-4cc1866bb6b0'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/73824210-432e-4f4d-b0e8-4cc1866bb6b0',
    'router_path' => 'uuid',
    'link_title' => 'Registration Landing 1',
    'options' => array(
      'identifier' => 'main-menu_registration-landing-1:uuid/node/73824210-432e-4f4d-b0e8-4cc1866bb6b0',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => '73824210-432e-4f4d-b0e8-4cc1866bb6b0',
    'vuuid' => '6c9badf7-87d9-4d69-a3fd-4ee7a0fa2169',
    'parent_identifier' => 'main-menu_pages:events',
  );
  // Exported menu link: main-menu_registration-landing-2:uuid/node/f33609ac-acba-4168-ba00-0f56d82e8b33.
  $menu_links['main-menu_registration-landing-2:uuid/node/f33609ac-acba-4168-ba00-0f56d82e8b33'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/f33609ac-acba-4168-ba00-0f56d82e8b33',
    'router_path' => 'uuid',
    'link_title' => 'Registration Landing 2',
    'options' => array(
      'identifier' => 'main-menu_registration-landing-2:uuid/node/f33609ac-acba-4168-ba00-0f56d82e8b33',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => 'f33609ac-acba-4168-ba00-0f56d82e8b33',
    'vuuid' => 'cae9ed86-1fa8-4f9b-89ba-85cd0737bdf4',
    'parent_identifier' => 'main-menu_pages:events',
  );
  // Exported menu link: main-menu_restaurant-menu-page:uuid/node/9ddaf86c-5040-4a76-986a-cd6621deacba.
  $menu_links['main-menu_restaurant-menu-page:uuid/node/9ddaf86c-5040-4a76-986a-cd6621deacba'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/9ddaf86c-5040-4a76-986a-cd6621deacba',
    'router_path' => 'uuid',
    'link_title' => 'Restaurant Menu Page',
    'options' => array(
      'identifier' => 'main-menu_restaurant-menu-page:uuid/node/9ddaf86c-5040-4a76-986a-cd6621deacba',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => '9ddaf86c-5040-4a76-986a-cd6621deacba',
    'vuuid' => '1e3702cd-9503-4951-ba44-afe048f236ea',
    'parent_identifier' => 'main-menu_pages:events',
  );
  // Exported menu link: main-menu_services-page:uuid/node/e31a7eb7-7117-45c3-ad3f-91f8c6589814.
  $menu_links['main-menu_services-page:uuid/node/e31a7eb7-7117-45c3-ad3f-91f8c6589814'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/e31a7eb7-7117-45c3-ad3f-91f8c6589814',
    'router_path' => 'uuid',
    'link_title' => 'Services Page',
    'options' => array(
      'identifier' => 'main-menu_services-page:uuid/node/e31a7eb7-7117-45c3-ad3f-91f8c6589814',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => 'e31a7eb7-7117-45c3-ad3f-91f8c6589814',
    'vuuid' => '0dfea02c-e1d0-4aef-b3c6-195abf68a5a3',
    'parent_identifier' => 'main-menu_pages:events',
  );
  // Exported menu link: main-menu_team-page:uuid/node/ef10c794-ab7b-4983-9c72-c59899b4a308.
  $menu_links['main-menu_team-page:uuid/node/ef10c794-ab7b-4983-9c72-c59899b4a308'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/ef10c794-ab7b-4983-9c72-c59899b4a308',
    'router_path' => 'uuid',
    'link_title' => 'Team Page',
    'options' => array(
      'identifier' => 'main-menu_team-page:uuid/node/ef10c794-ab7b-4983-9c72-c59899b4a308',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'uuid' => 'ef10c794-ab7b-4983-9c72-c59899b4a308',
    'vuuid' => 'b45fd5cf-180e-4388-9507-fe8ee884982b',
    'parent_identifier' => 'main-menu_pages:events',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Me');
  t('About Us');
  t('About Us Timeline');
  t('FAQ');
  t('Pages');
  t('Pricing Page');
  t('Registration Landing 1');
  t('Registration Landing 2');
  t('Restaurant Menu Page');
  t('Services Page');
  t('Team Page');

  return $menu_links;
}
