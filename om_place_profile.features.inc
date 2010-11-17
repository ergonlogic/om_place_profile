<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function om_place_profile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function om_place_profile_node_info() {
  $items = array(
    'company_info' => array(
      'name' => t('Company Information'),
      'module' => 'features',
      'description' => t('The currently available information from a call to the Open Marketplace API'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
