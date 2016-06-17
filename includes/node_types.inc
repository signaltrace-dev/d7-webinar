<?php

function webinar_get_node_types(){
  $items = array(
    'webinar' => array(
      'name' => t('Webinar'),
      'base' => 'node_content',
      'description' => t('A Webinar that can have associated dates and times.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );

  return $items;
}
