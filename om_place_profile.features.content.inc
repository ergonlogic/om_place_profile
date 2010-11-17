<?php

/**
 * Implementation of hook_content_default_fields().
 */
function om_place_profile_content_default_fields() {
  $fields = array();

  // Exported field: field_location
  $fields['company_info-field_location'] = array(
    'field_name' => 'field_location',
    'type_name' => 'company_info',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'location',
    'required' => '0',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'name' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '2',
          ),
          'street' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '4',
          ),
          'additional' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '6',
          ),
          'city' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '8',
          ),
          'province' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '10',
          ),
          'postal_code' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '12',
          ),
          'country' => array(
            'collect' => '1',
            'default' => 'us',
            'weight' => '14',
          ),
          'locpick' => array(
            'collect' => '1',
            'weight' => '20',
          ),
          'phone' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '25',
          ),
          'fax' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '30',
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'name' => 0,
          'street' => 0,
          'additional' => 0,
          'city' => 0,
          'province' => 0,
          'postal_code' => 0,
          'country' => 0,
          'locpick' => 0,
          'fax' => 0,
          'phone' => 0,
          'province_name' => 0,
          'country_name' => 0,
          'map_link' => 0,
          'coords' => 0,
        ),
      ),
    ),
    'gmap_macro' => '[gmap ]',
    'gmap_marker' => 'drupal',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'name' => '',
          'street' => '',
          'additional' => '',
          'city' => '',
          'province' => '',
          'postal_code' => '',
          'country' => 'us',
          'locpick' => array(
            'user_latitude' => '',
            'user_longitude' => '',
          ),
          'phone' => '',
          'fax' => '',
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'name' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '2',
                ),
                'street' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '4',
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '6',
                ),
                'city' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '8',
                ),
                'province' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '10',
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '12',
                ),
                'country' => array(
                  'default' => 'us',
                  'collect' => '1',
                  'weight' => '14',
                ),
                'locpick' => array(
                  'default' => array(
                    'user_latitude' => '',
                    'user_longitude' => '',
                  ),
                  'collect' => '1',
                  'weight' => '20',
                  'nodiff' => TRUE,
                ),
                'phone' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '25',
                ),
                'fax' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '30',
                ),
                'cck_preview_in_progress' => array(
                  'default' => TRUE,
                ),
                'location_settings' => array(
                  'default' => array(
                    'form' => array(
                      'fields' => array(
                        'name' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '2',
                        ),
                        'street' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '4',
                        ),
                        'additional' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '6',
                        ),
                        'city' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '8',
                        ),
                        'province' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '10',
                        ),
                        'postal_code' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '12',
                        ),
                        'country' => array(
                          'default' => 'us',
                          'collect' => '1',
                          'weight' => '14',
                        ),
                        'locpick' => array(
                          'default' => array(
                            'user_latitude' => '',
                            'user_longitude' => '',
                          ),
                          'collect' => '1',
                          'weight' => '20',
                          'nodiff' => TRUE,
                        ),
                        'phone' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '25',
                        ),
                        'fax' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '30',
                        ),
                        'cck_preview_in_progress' => array(
                          'default' => TRUE,
                        ),
                        'location_settings' => array(
                          'default' => array(
                            'form' => array(
                              'fields' => array(
                                'lid' => array(
                                  'default' => FALSE,
                                ),
                                'name' => array(
                                  'default' => '',
                                  'collect' => 1,
                                  'weight' => 2,
                                ),
                                'street' => array(
                                  'default' => '',
                                  'collect' => 1,
                                  'weight' => 4,
                                ),
                                'additional' => array(
                                  'default' => '',
                                  'collect' => 1,
                                  'weight' => 6,
                                ),
                                'city' => array(
                                  'default' => '',
                                  'collect' => 0,
                                  'weight' => 8,
                                ),
                                'province' => array(
                                  'default' => '',
                                  'collect' => 0,
                                  'weight' => 10,
                                ),
                                'postal_code' => array(
                                  'default' => '',
                                  'collect' => 0,
                                  'weight' => 12,
                                ),
                                'country' => array(
                                  'default' => 'us',
                                  'collect' => 1,
                                  'weight' => 14,
                                ),
                                'locpick' => array(
                                  'default' => FALSE,
                                  'collect' => 1,
                                  'weight' => 20,
                                  'nodiff' => TRUE,
                                ),
                                'latitude' => array(
                                  'default' => 0,
                                ),
                                'longitude' => array(
                                  'default' => 0,
                                ),
                                'source' => array(
                                  'default' => 0,
                                ),
                                'is_primary' => array(
                                  'default' => 0,
                                ),
                                'delete_location' => array(
                                  'default' => FALSE,
                                  'nodiff' => TRUE,
                                ),
                                'fax' => array(
                                  'default' => '',
                                  'collect' => 0,
                                  'weight' => 30,
                                ),
                                'phone' => array(
                                  'default' => '',
                                  'collect' => 0,
                                  'weight' => 25,
                                ),
                              ),
                            ),
                          ),
                        ),
                        'lid' => array(
                          'default' => FALSE,
                        ),
                        'latitude' => array(
                          'default' => 0,
                        ),
                        'longitude' => array(
                          'default' => 0,
                        ),
                        'source' => array(
                          'default' => 0,
                        ),
                        'is_primary' => array(
                          'default' => 0,
                        ),
                        'delete_location' => array(
                          'default' => FALSE,
                          'nodiff' => TRUE,
                        ),
                      ),
                    ),
                    'display' => array(
                      'hide' => array(
                        'name' => 0,
                        'street' => 0,
                        'additional' => 0,
                        'city' => 0,
                        'province' => 0,
                        'postal_code' => 0,
                        'country' => 0,
                        'locpick' => 0,
                        'fax' => 0,
                        'phone' => 0,
                        'province_name' => 0,
                        'country_name' => 0,
                        'map_link' => 0,
                        'coords' => 0,
                      ),
                    ),
                  ),
                ),
                'lid' => array(
                  'default' => FALSE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
              ),
            ),
            'display' => array(
              'hide' => array(
                'map_link' => 'map_link',
                'name' => 0,
                'street' => 0,
                'additional' => 0,
                'city' => 0,
                'province' => 0,
                'postal_code' => 0,
                'country' => 0,
                'locpick' => 0,
                'fax' => 0,
                'phone' => 0,
                'province_name' => 0,
                'country_name' => 0,
                'coords' => 0,
              ),
            ),
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => '26',
      'description' => '',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Exported field: field_om_place_id
  $fields['company_info-field_om_place_id'] = array(
    'field_name' => 'field_om_place_id',
    'type_name' => 'company_info',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_om_place_id][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'OM Place ID',
      'weight' => '29',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_url
  $fields['company_info-field_profile_url'] = array(
    'field_name' => 'field_profile_url',
    'type_name' => 'company_info',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => '',
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Profile URL',
      'weight' => '27',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Location');
  t('OM Place ID');
  t('Profile URL');

  return $fields;
}
