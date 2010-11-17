<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function om_place_profile_taxonomy_default_vocabularies() {
  return array(
    'industry' => array(
      'name' => 'Industry',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_industry',
      'weight' => '0',
      'nodes' => array(
        'company_info' => 'company_info',
      ),
    ),
  );
}
