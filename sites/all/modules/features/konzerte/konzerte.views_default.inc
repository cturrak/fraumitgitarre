<?php
/**
 * @file
 * konzerte.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function konzerte_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'c';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Konzerte';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Anstehende Konzerte';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'weitere Konzerte';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* Feld: Inhalt: Datum */
  $handler->display->display_options['fields']['field_concert_date']['id'] = 'field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['table'] = 'field_data_field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['field'] = 'field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['label'] = '';
  $handler->display->display_options['fields']['field_concert_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_concert_date']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_concert_date']['field_api_classes'] = 1;
  /* Feld: Inhalt: Ort */
  $handler->display->display_options['fields']['field_concert_city']['id'] = 'field_concert_city';
  $handler->display->display_options['fields']['field_concert_city']['table'] = 'field_data_field_concert_city';
  $handler->display->display_options['fields']['field_concert_city']['field'] = 'field_concert_city';
  $handler->display->display_options['fields']['field_concert_city']['label'] = '';
  $handler->display->display_options['fields']['field_concert_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_concert_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_city']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_concert_city']['field_api_classes'] = 0;
  /* Feld: Inhalt: Tickets */
  $handler->display->display_options['fields']['field_concert_ticket_link']['id'] = 'field_concert_ticket_link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['table'] = 'field_data_field_concert_ticket_link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['field'] = 'field_concert_ticket_link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['label'] = '';
  $handler->display->display_options['fields']['field_concert_ticket_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_class'] = 'ticket-link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_label_class'] = 'ticket-link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_wrapper_class'] = 'ticket-link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_ticket_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_concert_ticket_link']['type'] = 'link_label';
  $handler->display->display_options['fields']['field_concert_ticket_link']['field_api_classes'] = 0;
  /* Feld: Inhalt: Lokalität Link */
  $handler->display->display_options['fields']['field_concert_location_link']['id'] = 'field_concert_location_link';
  $handler->display->display_options['fields']['field_concert_location_link']['table'] = 'field_data_field_concert_location_link';
  $handler->display->display_options['fields']['field_concert_location_link']['field'] = 'field_concert_location_link';
  $handler->display->display_options['fields']['field_concert_location_link']['label'] = '';
  $handler->display->display_options['fields']['field_concert_location_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_location_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_concert_location_link']['field_api_classes'] = 0;
  /* Feld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="block-concert"> <span class="block-concert-date">[field_concert_date]</span>  [field_concert_city]  <span class="ticket-link">[field_concert_location_link]</span>  </p>
<p class="block-concert-location"> [field_concert_ticket_link] </p>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Inhalt: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Sort criterion: Inhalt: Datum (field_concert_date) */
  $handler->display->display_options['sorts']['field_concert_date_value']['id'] = 'field_concert_date_value';
  $handler->display->display_options['sorts']['field_concert_date_value']['table'] = 'field_data_field_concert_date';
  $handler->display->display_options['sorts']['field_concert_date_value']['field'] = 'field_concert_date_value';
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'konzerte' => 'konzerte',
  );
  /* Filter criterion: Datum: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_concert_date.field_concert_date_value' => 'field_data_field_concert_date.field_concert_date_value',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Konzerte';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = '...weitere Konzerte';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Inhalt: Datum (field_concert_date) */
  $handler->display->display_options['sorts']['field_concert_date_value']['id'] = 'field_concert_date_value';
  $handler->display->display_options['sorts']['field_concert_date_value']['table'] = 'field_data_field_concert_date';
  $handler->display->display_options['sorts']['field_concert_date_value']['field'] = 'field_concert_date_value';

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_concert_date' => 'field_concert_date',
    'field_concert_city' => 'field_concert_city',
    'field_concert_ticket_link' => 'field_concert_ticket_link',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Datum */
  $handler->display->display_options['fields']['field_concert_date']['id'] = 'field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['table'] = 'field_data_field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['field'] = 'field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['label'] = '';
  $handler->display->display_options['fields']['field_concert_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_concert_date']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_concert_date']['field_api_classes'] = 1;
  /* Feld: Inhalt: Ort */
  $handler->display->display_options['fields']['field_concert_city']['id'] = 'field_concert_city';
  $handler->display->display_options['fields']['field_concert_city']['table'] = 'field_data_field_concert_city';
  $handler->display->display_options['fields']['field_concert_city']['field'] = 'field_concert_city';
  $handler->display->display_options['fields']['field_concert_city']['label'] = '';
  $handler->display->display_options['fields']['field_concert_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_concert_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_city']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_concert_city']['field_api_classes'] = 0;
  /* Feld: Inhalt: Tickets */
  $handler->display->display_options['fields']['field_concert_ticket_link']['id'] = 'field_concert_ticket_link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['table'] = 'field_data_field_concert_ticket_link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['field'] = 'field_concert_ticket_link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['label'] = '';
  $handler->display->display_options['fields']['field_concert_ticket_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_class'] = 'ticket-link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_label_class'] = 'ticket-link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_wrapper_class'] = 'ticket-link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_ticket_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_concert_ticket_link']['type'] = 'link_label';
  $handler->display->display_options['fields']['field_concert_ticket_link']['field_api_classes'] = 0;
  /* Feld: Inhalt: Lokalität Link */
  $handler->display->display_options['fields']['field_concert_location_link']['id'] = 'field_concert_location_link';
  $handler->display->display_options['fields']['field_concert_location_link']['table'] = 'field_data_field_concert_location_link';
  $handler->display->display_options['fields']['field_concert_location_link']['field'] = 'field_concert_location_link';
  $handler->display->display_options['fields']['field_concert_location_link']['label'] = '';
  $handler->display->display_options['fields']['field_concert_location_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_location_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_concert_location_link']['field_api_classes'] = 0;
  /* Feld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p> <span class="view-konzerte-date" >[field_concert_date]</span> <span class="view-konzerte-city">[field_concert_city]</span><span class="view-konzerte-location">[field_concert_location_link]</span>
<span class="view-konzerte-ticket">[field_concert_ticket_link]</span></p>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Inhalt: Datum (field_concert_date) */
  $handler->display->display_options['sorts']['field_concert_date_value']['id'] = 'field_concert_date_value';
  $handler->display->display_options['sorts']['field_concert_date_value']['table'] = 'field_data_field_concert_date';
  $handler->display->display_options['sorts']['field_concert_date_value']['field'] = 'field_concert_date_value';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'konzerte' => 'konzerte',
  );
  /* Filter criterion: Datum: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_concert_date.field_concert_date_value' => 'field_data_field_concert_date.field_concert_date_value',
  );
  $handler->display->display_options['path'] = 'konzerte';

  /* Display: Anhang */
  $handler = $view->new_display('attachment', 'Anhang', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gespielte Konzerte';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'konzert_view';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h1 class="title">Gespielte Konzerte</h1>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Inhalt: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'konzerte' => 'konzerte',
  );
  /* Filter criterion: Datum: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '<';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_concert_date.field_concert_date_value' => 'field_data_field_concert_date.field_concert_date_value',
  );
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_concert_date' => 'field_concert_date',
    'field_concert_city' => 'field_concert_city',
    'field_concert_ticket_link' => 'field_concert_ticket_link',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Datum */
  $handler->display->display_options['fields']['field_concert_date']['id'] = 'field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['table'] = 'field_data_field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['field'] = 'field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['label'] = '';
  $handler->display->display_options['fields']['field_concert_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_concert_date']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_concert_date']['field_api_classes'] = 1;
  /* Feld: Inhalt: Ort */
  $handler->display->display_options['fields']['field_concert_city']['id'] = 'field_concert_city';
  $handler->display->display_options['fields']['field_concert_city']['table'] = 'field_data_field_concert_city';
  $handler->display->display_options['fields']['field_concert_city']['field'] = 'field_concert_city';
  $handler->display->display_options['fields']['field_concert_city']['label'] = '';
  $handler->display->display_options['fields']['field_concert_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_concert_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_city']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_concert_city']['field_api_classes'] = 0;
  /* Feld: Inhalt: Tickets */
  $handler->display->display_options['fields']['field_concert_ticket_link']['id'] = 'field_concert_ticket_link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['table'] = 'field_data_field_concert_ticket_link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['field'] = 'field_concert_ticket_link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['label'] = '';
  $handler->display->display_options['fields']['field_concert_ticket_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_class'] = 'ticket-link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_label_class'] = 'ticket-link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_wrapper_class'] = 'ticket-link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_ticket_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_concert_ticket_link']['type'] = 'link_label';
  $handler->display->display_options['fields']['field_concert_ticket_link']['field_api_classes'] = 0;
  /* Feld: Inhalt: Lokalität Link */
  $handler->display->display_options['fields']['field_concert_location_link']['id'] = 'field_concert_location_link';
  $handler->display->display_options['fields']['field_concert_location_link']['table'] = 'field_data_field_concert_location_link';
  $handler->display->display_options['fields']['field_concert_location_link']['field'] = 'field_concert_location_link';
  $handler->display->display_options['fields']['field_concert_location_link']['label'] = '';
  $handler->display->display_options['fields']['field_concert_location_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_location_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_concert_location_link']['field_api_classes'] = 0;
  /* Feld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p> <span class="view-konzerte-date" >[field_concert_date]</span> <span class="view-konzerte-city">[field_concert_city]</span><span class="view-konzerte-location">[field_concert_location_link]</span>
<span class="view-konzerte-ticket">[field_concert_ticket_link]</span></p>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'konzerte' => 'konzerte',
  );
  /* Filter criterion: Datum: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_concert_date.field_concert_date_value' => 'field_data_field_concert_date.field_concert_date_value',
  );
  $handler->display->display_options['path'] = 'konzerte';

  /* Display: Anhang 2 */
  $handler = $view->new_display('attachment', 'Anhang 2', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gespielte Konzerte';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h1 class="title">Gespielte Konzerte</h1>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Datum */
  $handler->display->display_options['fields']['field_concert_date']['id'] = 'field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['table'] = 'field_data_field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['field'] = 'field_concert_date';
  $handler->display->display_options['fields']['field_concert_date']['label'] = '';
  $handler->display->display_options['fields']['field_concert_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_concert_date']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_concert_date']['field_api_classes'] = 1;
  /* Feld: Inhalt: Ort */
  $handler->display->display_options['fields']['field_concert_city']['id'] = 'field_concert_city';
  $handler->display->display_options['fields']['field_concert_city']['table'] = 'field_data_field_concert_city';
  $handler->display->display_options['fields']['field_concert_city']['field'] = 'field_concert_city';
  $handler->display->display_options['fields']['field_concert_city']['label'] = '';
  $handler->display->display_options['fields']['field_concert_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_concert_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_city']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_city']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_concert_city']['field_api_classes'] = 0;
  /* Feld: Inhalt: Tickets */
  $handler->display->display_options['fields']['field_concert_ticket_link']['id'] = 'field_concert_ticket_link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['table'] = 'field_data_field_concert_ticket_link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['field'] = 'field_concert_ticket_link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['label'] = '';
  $handler->display->display_options['fields']['field_concert_ticket_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_class'] = 'ticket-link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_label_class'] = 'ticket-link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_wrapper_class'] = 'ticket-link';
  $handler->display->display_options['fields']['field_concert_ticket_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_ticket_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_ticket_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_concert_ticket_link']['type'] = 'link_label';
  $handler->display->display_options['fields']['field_concert_ticket_link']['field_api_classes'] = 0;
  /* Feld: Inhalt: Lokalität Link */
  $handler->display->display_options['fields']['field_concert_location_link']['id'] = 'field_concert_location_link';
  $handler->display->display_options['fields']['field_concert_location_link']['table'] = 'field_data_field_concert_location_link';
  $handler->display->display_options['fields']['field_concert_location_link']['field'] = 'field_concert_location_link';
  $handler->display->display_options['fields']['field_concert_location_link']['label'] = '';
  $handler->display->display_options['fields']['field_concert_location_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concert_location_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concert_location_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_concert_location_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_concert_location_link']['field_api_classes'] = 0;
  /* Feld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p> <span class="view-konzerte-date" >[field_concert_date]</span> <span class="view-konzerte-city">[field_concert_city]</span><span class="view-konzerte-location">[field_concert_location_link]</span>
<span class="view-konzerte-ticket">[field_concert_ticket_link]</span></p>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Inhalt: Datum (field_concert_date) */
  $handler->display->display_options['sorts']['field_concert_date_value']['id'] = 'field_concert_date_value';
  $handler->display->display_options['sorts']['field_concert_date_value']['table'] = 'field_data_field_concert_date';
  $handler->display->display_options['sorts']['field_concert_date_value']['field'] = 'field_concert_date_value';
  $handler->display->display_options['sorts']['field_concert_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'konzerte' => 'konzerte',
  );
  /* Filter criterion: Datum: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '<';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_concert_date.field_concert_date_value' => 'field_data_field_concert_date.field_concert_date_value',
  );
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block' => 0,
    'page_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['c'] = array(
    t('Master'),
    t('Anstehende Konzerte'),
    t('weitere Konzerte'),
    t('Apply'),
    t('Zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<p class="block-concert"> <span class="block-concert-date">[field_concert_date]</span>  [field_concert_city]  <span class="ticket-link">[field_concert_location_link]</span>  </p>
<p class="block-concert-location"> [field_concert_ticket_link] </p>'),
    t('Block'),
    t('Konzerte'),
    t('...weitere Konzerte'),
    t('Seite'),
    t('more'),
    t('<p> <span class="view-konzerte-date" >[field_concert_date]</span> <span class="view-konzerte-city">[field_concert_city]</span><span class="view-konzerte-location">[field_concert_location_link]</span>
<span class="view-konzerte-ticket">[field_concert_ticket_link]</span></p>'),
    t('Anhang'),
    t('Gespielte Konzerte'),
    t('<h1 class="title">Gespielte Konzerte</h1>'),
    t('Anhang 2'),
  );
  $export['c'] = $view;

  return $export;
}
