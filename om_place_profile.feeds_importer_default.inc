<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function om_place_profile_feeds_importer_default() {
  $export = array();
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'om_place_feed';
  $feeds_importer->config = array(
    'name' => 'om_place_feed',
    'description' => 'Feed for OM places',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'company_info',
        'input_format' => '0',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_location:name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_location:street',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_location:city',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_location:province',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_location:postal_code',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_location:country',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_location:locpick][user_latitude',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_location:locpick][user_longitude',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:10',
            'target' => 'body',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_profile_url:url',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_om_place_id',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:15',
            'target' => 'guid',
            'unique' => 1,
          ),
          13 => array(
            'source' => 'xpathparser:16',
            'target' => 'taxonomy:features_industry',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_location:phone',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_location:fax',
            'unique' => FALSE,
          ),
        ),
        'author' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
  );

  $export['om_place_feed'] = $feeds_importer;
  return $export;
}
