<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function om_place_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear om_place_feed feeds
  $permissions['clear om_place_feed feeds'] = array(
    'name' => 'clear om_place_feed feeds',
    'roles' => array(),
  );

  // Exported permission: import om_place_feed feeds
  $permissions['import om_place_feed feeds'] = array(
    'name' => 'import om_place_feed feeds',
    'roles' => array(),
  );

  return $permissions;
}
