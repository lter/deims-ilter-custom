<?php
/**
 * @file
 * ilter_nitrogen_pilot_survey.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ilter_nitrogen_pilot_survey_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nitrogen_pilot_survey';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nitrogen Pilot Survey';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nitrogen Pilot Survey';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: ILTER Person */
  $handler->display->display_options['fields']['field_ilter_person']['id'] = 'field_ilter_person';
  $handler->display->display_options['fields']['field_ilter_person']['table'] = 'field_data_field_ilter_person';
  $handler->display->display_options['fields']['field_ilter_person']['field'] = 'field_ilter_person';
  $handler->display->display_options['fields']['field_ilter_person']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Join Synthesis Team  */
  $handler->display->display_options['fields']['field_join_synthesis_team_']['id'] = 'field_join_synthesis_team_';
  $handler->display->display_options['fields']['field_join_synthesis_team_']['table'] = 'field_data_field_join_synthesis_team_';
  $handler->display->display_options['fields']['field_join_synthesis_team_']['field'] = 'field_join_synthesis_team_';
  /* Field: Content: Are you interested in implementing actual observation in your site? */
  $handler->display->display_options['fields']['field_new_research_theme']['id'] = 'field_new_research_theme';
  $handler->display->display_options['fields']['field_new_research_theme']['table'] = 'field_data_field_new_research_theme';
  $handler->display->display_options['fields']['field_new_research_theme']['field'] = 'field_new_research_theme';
  $handler->display->display_options['fields']['field_new_research_theme']['delta_offset'] = '0';
  /* Field: Content: Research Paper Available */
  $handler->display->display_options['fields']['field_research_paper_available']['id'] = 'field_research_paper_available';
  $handler->display->display_options['fields']['field_research_paper_available']['table'] = 'field_data_field_research_paper_available';
  $handler->display->display_options['fields']['field_research_paper_available']['field'] = 'field_research_paper_available';
  /* Field: Content: ILTER Site (Paper) */
  $handler->display->display_options['fields']['field_ilter_site']['id'] = 'field_ilter_site';
  $handler->display->display_options['fields']['field_ilter_site']['table'] = 'field_data_field_ilter_site';
  $handler->display->display_options['fields']['field_ilter_site']['field'] = 'field_ilter_site';
  $handler->display->display_options['fields']['field_ilter_site']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Theme of Paper */
  $handler->display->display_options['fields']['field_theme_paper']['id'] = 'field_theme_paper';
  $handler->display->display_options['fields']['field_theme_paper']['table'] = 'field_data_field_theme_paper';
  $handler->display->display_options['fields']['field_theme_paper']['field'] = 'field_theme_paper';
  $handler->display->display_options['fields']['field_theme_paper']['delta_offset'] = '0';
  /* Field: Content: Data Available */
  $handler->display->display_options['fields']['field_data_available']['id'] = 'field_data_available';
  $handler->display->display_options['fields']['field_data_available']['table'] = 'field_data_field_data_available';
  $handler->display->display_options['fields']['field_data_available']['field'] = 'field_data_available';
  /* Field: Content:  ILTER Site - data */
  $handler->display->display_options['fields']['field__ilter_site_data']['id'] = 'field__ilter_site_data';
  $handler->display->display_options['fields']['field__ilter_site_data']['table'] = 'field_data_field__ilter_site_data';
  $handler->display->display_options['fields']['field__ilter_site_data']['field'] = 'field__ilter_site_data';
  $handler->display->display_options['fields']['field__ilter_site_data']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Data Theme */
  $handler->display->display_options['fields']['field_data_theme']['id'] = 'field_data_theme';
  $handler->display->display_options['fields']['field_data_theme']['table'] = 'field_data_field_data_theme';
  $handler->display->display_options['fields']['field_data_theme']['field'] = 'field_data_theme';
  $handler->display->display_options['fields']['field_data_theme']['delta_offset'] = '0';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'User Name';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nitrogen_pilot_survey' => 'nitrogen_pilot_survey',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'nitrogen-pilot-survey';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Nitrogen Pilot Survey';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['nitrogen_pilot_survey'] = $view;

  return $export;
}
