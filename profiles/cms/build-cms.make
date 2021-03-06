; Drush Make stub file for the cms distribution
;
; Use this file to build a full distribution including Drupal core and the
; cms install profile using the following command:
;
; drush make build-cms.make <target directory>

api = 2
core = 7.x

; Drupal core
; -----------
includes[] = drupal-org-core.make

; Install profiles
; ----------------
projects[cms][type] = profile
projects[cms][download][type] = file
projects[cms][download][url] = /var/www/sooperthemes/buildr-builds/cms-7-glazed_main_theme_settings-core-blog-events-news-portfolio-wysiwyg/cms.zip
