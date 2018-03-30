<?php
/**
 * @file sooperthemes-gridstack-gridstack-plugin-rows.tpl.php
 * Default simple view template to display sooperthemes_gridstack_gridstack_plugin_rows.
 *
 * @ingroup views_templates
 */
?>

<div class="sooperthemes-gridstack__content">
  <div class="sooperthemes-gridstack__image"><?php print $image ?></div>
  <div class="sooperthemes-gridstack__field-wrapper">
    <?php if (!empty($category)): ?>
      <div class="sooperthemes-gridstack__category"><?php print $category ?></div>
    <?php endif ?>
    <?php if (!empty($title)): ?>
      <h3 class="sooperthemes-gridstack__title"><?php print $title ?></h3>
    <?php endif ?>
  </div>
</div>
