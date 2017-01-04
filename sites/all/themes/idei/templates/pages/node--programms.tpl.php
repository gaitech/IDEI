<?php

$title = $node->title;
$body = $node->body['und'][0]['value'];
$header_image = $node->field_programms_image['und'][0]['uri'];
$header_image_path = file_create_url($header_image);
?>

<div class="program-wraps">
<div class="program-img"><?php print '<img src="'.$header_image_path.'">'; ?></div>
<div class="program-titles"><?php print $title; ?></div>
</div>
<div class="programs-body"><?php print $body; ?></div>