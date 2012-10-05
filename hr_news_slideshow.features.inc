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
    $data['news']->display['block_2'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:8:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:8:{s:5:"title";b:0;s:16:"hide_admin_links";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"fields";b:0;}s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"5";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:9:"slideshow";s:13:"style_options";a:6:{s:26:"flexslider_views_slideshow";a:2:{s:9:"optionset";s:14:"home_slideshow";s:13:"caption_field";s:4:"body";}s:14:"slideshow_type";s:26:"flexslider_views_slideshow";s:14:"slideshow_skin";s:7:"default";s:9:"skin_info";a:5:{s:5:"class";s:7:"default";s:4:"name";s:7:"Default";s:6:"module";s:15:"views_slideshow";s:4:"path";s:0:"";s:11:"stylesheets";a:0:{}}s:7:"widgets";a:2:{s:3:"top";a:3:{s:21:"views_slideshow_pager";a:3:{s:6:"weight";s:1:"1";s:4:"type";s:28:"views_slideshow_pager_fields";s:35:"views_slideshow_pager_fields_fields";a:3:{s:16:"field_news_image";i:0;s:11:"title_field";i:0;s:4:"body";i:0;}}s:24:"views_slideshow_controls";a:2:{s:6:"weight";s:1:"1";s:4:"type";s:29:"views_slideshow_controls_text";}s:29:"views_slideshow_slide_counter";a:1:{s:6:"weight";s:1:"1";}}s:6:"bottom";a:3:{s:21:"views_slideshow_pager";a:3:{s:6:"weight";s:1:"1";s:4:"type";s:28:"views_slideshow_pager_fields";s:35:"views_slideshow_pager_fields_fields";a:3:{s:16:"field_news_image";i:0;s:11:"title_field";i:0;s:4:"body";i:0;}}s:24:"views_slideshow_controls";a:2:{s:6:"weight";s:1:"1";s:4:"type";s:29:"views_slideshow_controls_text";}s:29:"views_slideshow_slide_counter";a:1:{s:6:"weight";s:1:"1";}}}s:21:"views_slideshow_cycle";a:9:{s:7:"timeout";s:4:"5000";s:5:"speed";s:3:"700";s:5:"delay";s:1:"0";s:12:"start_paused";i:0;s:19:"remember_slide_days";s:1:"1";s:15:"items_per_slide";s:1:"1";s:27:"wait_for_image_load_timeout";s:4:"3000";s:9:"cleartype";i:0;s:13:"cleartypenobg";i:0;}}s:10:"row_plugin";s:6:"fields";s:6:"fields";a:3:{s:16:"field_news_image";a:7:{s:2:"id";s:16:"field_news_image";s:5:"table";s:27:"field_data_field_news_image";s:5:"field";s:16:"field_news_image";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:16:"resp_img__grid_4";s:10:"image_link";s:7:"content";}}s:11:"title_field";a:8:{s:2:"id";s:11:"title_field";s:5:"table";s:22:"field_data_title_field";s:5:"field";s:11:"title_field";s:5:"label";s:0:"";s:7:"exclude";b:1;s:5:"alter";a:3:{s:10:"max_length";s:2:"35";s:13:"word_boundary";b:0;s:4:"trim";b:1;}s:19:"element_label_colon";b:0;s:14:"link_to_entity";i:1;}s:4:"body";a:9:{s:2:"id";s:4:"body";s:5:"table";s:15:"field_data_body";s:5:"field";s:4:"body";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:61:"<div class="flex-caption"><h2>[title_field]</h2>
    [body]</div>";}s:13:"element_class";s:12:"flex-caption";s:19:"element_label_colon";b:0;s:4:"type";s:23:"text_summary_or_trimmed";s:8:"settings";a:1:{s:11:"trim_length";s:2:"35";}}}s:17:"block_description";s:14:"Home Slideshow";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:7:"block_2";s:13:"display_title";s:9:"Slideshow";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}'); /* WAS: '' */
  }
}
