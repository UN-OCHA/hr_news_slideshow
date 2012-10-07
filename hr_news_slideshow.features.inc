<?php
/**
 * @file
 * hr_news_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_news_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function hr_news_slideshow_views_default_views_alter(&$data) {
  if (isset($data['news'])) {
    $view = $data['news'];
    
    /* Display: Slideshow */
    $handler = $view->new_display('block', 'Slideshow', 'block_2');
    $handler->display->display_options['defaults']['title'] = FALSE;
    $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
    $handler->display->display_options['defaults']['pager'] = FALSE;
    $handler->display->display_options['pager']['type'] = 'some';
    $handler->display->display_options['pager']['options']['items_per_page'] = '5';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'slideshow';
    $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'home_slideshow';
    $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'body';
    $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
    $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
    $handler->display->display_options['style_options']['skin_info'] = array(
      'class' => 'default',
      'name' => 'Default',
      'module' => 'views_slideshow',
      'path' => '',
      'stylesheets' => array(),
    );
    $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
    $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
    $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
      'field_news_image' => 0,
      'title_field' => 0,
      'body' => 0,
    );
    $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
    $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
    $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
    $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
    $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
    $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
      'field_news_image' => 0,
      'title_field' => 0,
      'body' => 0,
    );
    $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
    $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
    $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
    $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
    $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
    $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
    $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
    $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
    $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
    $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
    $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
    $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['row_plugin'] = 'fields';
    $handler->display->display_options['defaults']['row_options'] = FALSE;
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Content: Image */
    $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
    $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
    $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
    $handler->display->display_options['fields']['field_news_image']['label'] = '';
    $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
    $handler->display->display_options['fields']['field_news_image']['settings'] = array(
      'image_style' => 'resp_img__grid_4',
      'image_link' => 'content',
    );
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
    $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
    $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
    $handler->display->display_options['fields']['title_field']['label'] = '';
    $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
    $handler->display->display_options['fields']['title_field']['alter']['max_length'] = '35';
    $handler->display->display_options['fields']['title_field']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title_field']['alter']['trim'] = TRUE;
    $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
    /* Field: Content: Body */
    $handler->display->display_options['fields']['body']['id'] = 'body';
    $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
    $handler->display->display_options['fields']['body']['field'] = 'body';
    $handler->display->display_options['fields']['body']['label'] = '';
    $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
    $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="flex-caption"><h2>[title_field]</h2>
  [body]</div>';
    $handler->display->display_options['fields']['body']['element_class'] = 'flex-caption';
    $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
    $handler->display->display_options['fields']['body']['settings'] = array(
      'trim_length' => '35',
    );
    $handler->display->display_options['block_description'] = 'Home Slideshow';
  }
}
