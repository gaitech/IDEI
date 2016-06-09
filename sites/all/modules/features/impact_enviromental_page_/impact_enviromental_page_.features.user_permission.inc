<?php
/**
 * @file
 * impact_enviromental_page_.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function impact_enviromental_page__user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create impact_inner_pages content'.
  $permissions['create impact_inner_pages content'] = array(
    'name' => 'create impact_inner_pages content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any impact_inner_pages content'.
  $permissions['delete any impact_inner_pages content'] = array(
    'name' => 'delete any impact_inner_pages content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own impact_inner_pages content'.
  $permissions['delete own impact_inner_pages content'] = array(
    'name' => 'delete own impact_inner_pages content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any impact_inner_pages content'.
  $permissions['edit any impact_inner_pages content'] = array(
    'name' => 'edit any impact_inner_pages content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own impact_inner_pages content'.
  $permissions['edit own impact_inner_pages content'] = array(
    'name' => 'edit own impact_inner_pages content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
