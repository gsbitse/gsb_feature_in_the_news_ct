<?php
/**
 * @file
 * gsb_feature_in_the_news_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_in_the_news_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alumni_name|node|in_the_news|form';
  $field_group->group_name = 'group_alumni_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'in_the_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alumni Name',
    'weight' => '10',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_salutation',
      2 => 'field_middle_name',
      3 => 'field_last_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_alumni_name|node|in_the_news|form'] = $field_group;

  return $export;
}
