<?php
/**
 * @file
 * idei_capability_nodes_and_taxonomy.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function idei_capability_nodes_and_taxonomy_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Profile of the organisation accordians',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'fa83cc7d-411e-419f-b524-342fad4a896d',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474009163,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0bde028e-02e8-4be1-9a68-fdd2441b005e',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(),
  'field_accordian' => array(
    'und' => array(
      0 => array(
        'value' => 91,
        'revision_id' => 91,
      ),
      1 => array(
        'value' => 95,
        'revision_id' => 95,
      ),
      2 => array(
        'value' => 96,
        'revision_id' => 96,
      ),
    ),
  ),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 51,
        'uuid' => 'c76de39e-f3f3-41cc-b4e4-c297fde236a8',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-16 15:59:23 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '6. SETTING UP PROJECT MONITORING AND IMPACT ASSESSMENT SYSTEMS',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '45237368-1594-42bd-8357-b75440e0a99d',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474270645,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1605bd93-6e9e-4fde-b5b9-34e505838732',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(
    'und' => array(
      0 => array(
        'value' => 133,
        'revision_id' => 133,
      ),
    ),
  ),
  'field_accordian' => array(),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 67,
        'uuid' => 'ffc4b09f-f17b-47b8-aca6-ad9c69346271',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 16:37:25 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'PROFILE OF THE ORGANISATION',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4795718d-bb72-4856-bb54-bfa6bebc8b6a',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474266466,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1c16c8d0-9be7-4d82-b946-0c49ee5ad8d0',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(
    'und' => array(
      0 => array(
        'value' => 125,
        'revision_id' => 125,
      ),
    ),
  ),
  'field_accordian' => array(),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 59,
        'uuid' => '67298de8-523c-413f-9549-a38c24a6b978',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 15:27:46 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Image Section: 84% OF INDIA',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '62476111-ea11-4549-b5bb-5baa166669f8',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474267924,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2f1365af-8ccd-4bdc-8b56-afb5c1f95cf4',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(),
  'field_accordian' => array(),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 61,
        'uuid' => '71e97a4c-8b97-4e7c-977d-ac921927b103',
      ),
    ),
  ),
  'field_image_section' => array(
    'und' => array(
      0 => array(
        'value' => 127,
        'revision_id' => 127,
      ),
    ),
  ),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 15:52:04 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '5. CONSULTANCY ASSIGNMENTS',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c20a9659-f84f-4c43-bd55-ef2c260802d0',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474280622,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5071e382-5047-46cf-bdc4-64b52c91d2af',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(
    'und' => array(
      0 => array(
        'value' => 137,
        'revision_id' => 137,
      ),
    ),
  ),
  'field_accordian' => array(),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 54,
        'uuid' => '1be09964-6614-4a57-b74e-53990d79dc39',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 19:23:42 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '4. WORKING WITH NGOs & CBOs',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6c579763-1358-4960-bedd-8bf39175f4b6',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474280560,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5a961da1-d23d-4744-a82f-b8e8274f8ae9',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(
    'und' => array(
      0 => array(
        'value' => 136,
        'revision_id' => 136,
      ),
    ),
  ),
  'field_accordian' => array(),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 53,
        'uuid' => 'e5c96304-b16d-497d-99f1-9c86d6d24257',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 19:22:40 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Image Section: 200 STAFF',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0c165c4b-2438-4e93-8d19-10d51433830d',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474268150,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7fdf5a4f-80d6-4384-bb8e-59c13cb9abf5',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(),
  'field_accordian' => array(),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 62,
        'uuid' => 'a74a2ccf-90e9-4ca8-aa1c-6a240963c2dc',
      ),
    ),
  ),
  'field_image_section' => array(
    'und' => array(
      0 => array(
        'value' => 128,
        'revision_id' => 128,
      ),
    ),
  ),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 15:55:50 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '3. WORKING WITH THE GOVERNMENT',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '53bfedd9-9e67-4afc-af68-0ac24b53a4cf',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474280522,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '823fb39e-3b87-4240-ba56-156a224b2d29',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(
    'und' => array(
      0 => array(
        'value' => 135,
        'revision_id' => 135,
      ),
    ),
  ),
  'field_accordian' => array(),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 52,
        'uuid' => 'c0d05d8c-21fe-463b-83c1-39c3163b255e',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 19:22:02 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'IDEI CAPABILITY STATEMENT Section 2',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2eab15da-89eb-4c88-936c-3dd2eedfefe6',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474265381,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8d06d759-3a39-4ec0-820c-1712b68db817',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(
    'und' => array(
      0 => array(
        'value' => 121,
        'revision_id' => 121,
      ),
      1 => array(
        'value' => 122,
        'revision_id' => 122,
      ),
      2 => array(
        'value' => 123,
        'revision_id' => 123,
      ),
      3 => array(
        'value' => 124,
        'revision_id' => 124,
      ),
    ),
  ),
  'field_idei_capability_section_3' => array(),
  'field_accordian' => array(),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 58,
        'uuid' => 'f625b3ba-d3d5-4e0b-927f-f8ccae85a960',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 15:09:41 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Consultancy assignments accordians',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd5eb4817-e6a7-4fea-a21a-4c77942e1c5f',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474261377,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9064ccc0-3093-4a70-8073-3b14d3b4b1c0',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(),
  'field_accordian' => array(
    'und' => array(
      0 => array(
        'value' => 107,
        'revision_id' => 107,
      ),
      1 => array(
        'value' => 108,
        'revision_id' => 108,
      ),
      2 => array(
        'value' => 109,
        'revision_id' => 109,
      ),
      3 => array(
        'value' => 110,
        'revision_id' => 110,
      ),
      4 => array(
        'value' => 111,
        'revision_id' => 111,
      ),
    ),
  ),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 54,
        'uuid' => '1be09964-6614-4a57-b74e-53990d79dc39',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 14:02:57 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '2. MANAGEMENT OF INTER-DISCIPLINARY PROJECTS',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3b66c290-6240-449a-99d0-7c14305f84a2',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474269305,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '949dba6c-d06f-4415-a387-634d9b47ef84',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(
    'und' => array(
      0 => array(
        'value' => 130,
        'revision_id' => 130,
      ),
    ),
  ),
  'field_accordian' => array(),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 64,
        'uuid' => 'd5efec59-ba09-40d6-a7da-ce162564ab41',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 16:15:05 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Image Section: 1,000 Dealers',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7dc791ce-b9f4-4553-a6ed-ffe14e8c9903',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474268293,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9e053360-02c1-4c35-b163-a426c8773a35',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(),
  'field_accordian' => array(),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 63,
        'uuid' => '947407a7-c83f-4c85-b99f-0a1daf7b0c28',
      ),
    ),
  ),
  'field_image_section' => array(
    'und' => array(
      0 => array(
        'value' => 129,
        'revision_id' => 129,
      ),
    ),
  ),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 15:58:13 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Working with NGOs accordions',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '331d2fb6-7b15-4717-abcc-af33d30cd569',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474020392,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c00700c9-57b8-4caf-813b-bf32faeb1adc',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(),
  'field_accordian' => array(
    'und' => array(
      0 => array(
        'value' => 104,
        'revision_id' => 104,
      ),
      1 => array(
        'value' => 105,
        'revision_id' => 105,
      ),
      2 => array(
        'value' => 106,
        'revision_id' => 106,
      ),
    ),
  ),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 53,
        'uuid' => 'e5c96304-b16d-497d-99f1-9c86d6d24257',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-16 19:06:32 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Working with govt accordians.',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ba90fd12-97a1-43fa-b93e-51389a15608b',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474020005,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c8ca3961-88bb-4f07-a908-871e14e59a2d',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(),
  'field_accordian' => array(
    'und' => array(
      0 => array(
        'value' => 101,
        'revision_id' => 101,
      ),
      1 => array(
        'value' => 102,
        'revision_id' => 102,
      ),
      2 => array(
        'value' => 103,
        'revision_id' => 103,
      ),
    ),
  ),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 52,
        'uuid' => 'c0d05d8c-21fe-463b-83c1-39c3163b255e',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-16 19:00:05 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Impact accordians',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3df8a0db-0019-4bbf-ad0d-8f6a35f8f0f1',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474261624,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd1e29148-023c-4f0f-b25b-75897e870484',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(),
  'field_accordian' => array(
    'und' => array(
      0 => array(
        'value' => 115,
        'revision_id' => 115,
      ),
      1 => array(
        'value' => 116,
        'revision_id' => 116,
      ),
      2 => array(
        'value' => 117,
        'revision_id' => 117,
      ),
    ),
  ),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 57,
        'uuid' => '2a2d2e49-4c82-4a17-b07f-df433a5c55f4',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 14:07:04 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '8. IMPLEMENTING MULTIDISCIPLINARY CAPACITY BUILDING PROGRAMS',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0ca57802-448e-49d2-a653-d20d7ed09dd0',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474269954,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd2fe2d95-74f3-4e93-b17e-8c8876da5f61',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(
    'und' => array(
      0 => array(
        'value' => 132,
        'revision_id' => 132,
      ),
    ),
  ),
  'field_accordian' => array(),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 66,
        'uuid' => '5cc54374-a70f-4d75-aef5-a96fada8c172',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 16:25:54 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'IDEI\'s strategy accordions',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7ceb7875-575a-4854-9b23-231914c5a426',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474261743,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dcfad0f6-7440-4060-a96d-e3c98221246e',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(),
  'field_accordian' => array(
    'und' => array(
      0 => array(
        'value' => 118,
        'revision_id' => 118,
      ),
      1 => array(
        'value' => 119,
        'revision_id' => 119,
      ),
      2 => array(
        'value' => 120,
        'revision_id' => 120,
      ),
    ),
  ),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 56,
        'uuid' => '5faffd1f-7a8c-467a-a1ff-caae4fd2d2cc',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 14:09:03 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Awards',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'eb12ff62-a077-4732-bab4-6f5a7d558237',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474279634,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e6cb3bd5-e963-4958-8ddb-7eb8221fc252',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(),
  'field_accordian' => array(),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 68,
        'uuid' => '7a27887d-210d-4566-aba0-18ae272b5b07',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(
    'und' => array(
      0 => array(
        'value' => 134,
        'revision_id' => 134,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 19:07:14 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Technical expertise accordians',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'fc075341-fd1e-45a7-8c26-0655c03be4a3',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474261560,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e70dc3aa-81aa-4a23-ab24-474d5ac60405',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(),
  'field_accordian' => array(
    'und' => array(
      0 => array(
        'value' => 112,
        'revision_id' => 112,
      ),
      1 => array(
        'value' => 113,
        'revision_id' => 113,
      ),
      2 => array(
        'value' => 114,
        'revision_id' => 114,
      ),
    ),
  ),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 55,
        'uuid' => 'e8a717ba-ff1c-4e12-8807-0858892f8c94',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 14:06:00 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '7. IMPLEMENTING MULTIDISCIPLINARY HUMAN RESOURCE DEVELOPMENT',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '26fafaf0-4a28-4c5f-b8ac-ab7b4a4775b5',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474269794,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e943c652-e19a-48c6-ade2-2c3f2652284a',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(
    'und' => array(
      0 => array(
        'value' => 131,
        'revision_id' => 131,
      ),
    ),
  ),
  'field_accordian' => array(),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 65,
        'uuid' => 'adec7a1b-f91b-413e-b6ee-8f23eda8a1e6',
      ),
    ),
  ),
  'field_image_section' => array(),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 16:23:14 +0900',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Image Section: USD 7.3 Billion',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '737f37b5-0130-4fbc-b9f4-e3c09c9a949d',
  'type' => 'idei_capability_statement',
  'language' => 'und',
  'created' => 1474267410,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f6d1145a-780e-4ab2-927a-02ce73ba88f3',
  'revision_uid' => 1,
  'field_banner_image' => array(),
  'field_banner_field_collection' => array(),
  'field_section_2' => array(),
  'field_idei_capability_section_3' => array(),
  'field_accordian' => array(),
  'field_capability_term' => array(
    'und' => array(
      0 => array(
        'tid' => 60,
        'uuid' => 'a4e9cdae-8297-4964-99b9-dd6a34ba561e',
      ),
    ),
  ),
  'field_image_section' => array(
    'und' => array(
      0 => array(
        'value' => 126,
        'revision_id' => 126,
      ),
    ),
  ),
  'field_awards_section' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-09-19 15:43:30 +0900',
);
  return $nodes;
}
