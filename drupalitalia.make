core = 7.x

api = 2

projects[] = "drupal"

; Modules

;; Contrib

;;; Admin
;projects[admin][subdir] = "contrib"
;projects[admin_menu][subdir] = "contrib"
;projects[taxonomy_manager][subdir] = "contrib"

;;; Core
projects[boxes][subdir] = "contrib"
projects[boxes][version] = 1.0-beta8
projects[ctools][subdir] = "contrib"
projects[context][subdir] = "contrib"
projects[date][subdir] = "contrib"
projects[entity][subdir] = "contrib"
projects[features][subdir] = "contrib"
projects[field_group][subdir] = "contrib"
projects[field_permissions][subdir] = "contrib"
projects[link][subdir] = "contrib"
projects[pathauto][subdir] = "contrib"
projects[references][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[views][subdir] = "contrib"
projects[mollom][subdir] = "contrib"
projects[link][subdir] = "contrib"

;;; Optional
;projects[auto_nodetitle][subdir] = "contrib"
;projects[block_class][subdir] = "contrib"
;projects[block_class][version] = 1.1
;projects[defaultcontent][subdir] = "contrib"
;projects[defaultcontent][version] = 1.0-alpha6
;projects[delta][subdir] = "contrib"
;projects[flag][subdir] = "contrib"
;projects[flag][version] = 2.0-beta6
;projects[colorbox][subdir] = "contrib"
;projects[filefield_paths][subdir] = "contrib"
;projects[globalredirect][subdir] = "contrib"
;projects[google_analytics][subdir] = "contrib"
;projects[hierarchical_select][subdir] = "contrib"
;projects[jquery_update][subdir] = "contrib"
;projects[panels][subdir] = "contrib"
;projects[nodequeue][subdir] = "contrib"
;projects[nodequeue][version] = 2.0-beta1
;projects[omega_tools][subdir] = "contrib"
;projects[omega_tools][version] = 3.0-rc4
;projects[rules][subdir] = "contrib"
;projects[strongarm][subdir] = "contrib"
;projects[strongarm][version] = 2.0-rc1
;projects[variable][subdir] = "contrib"
;projects[webform][subdir] = "contrib"

;;; SEO
;projects[google_analytics][subdir] = "contrib"
;projects[metatags_quick][subdir] = "contrib"
;projects[xmlsitemap][subdir] = "contrib"

;;; Editor
;projects[imce][subdir] = "contrib"
;projects[imce_wysiwyg][subdir] = "contrib"
;projects[insert][subdir] = "contrib"
;projects[wysiwyg][subdir] = "contrib"


;; Custom


;; Devel
;projects[coder][subdir] = "devel"
projects[devel][subdir] = "devel"
projects[devel_themer][subdir] = "devel"
;projects[performance][subdir] = "devel"

;; Features


;; L10n
;projects[i18n][subdir] = "l10n"
;projects[languageicons][subdir] = "l10n"
;projects[translation_helpers][subdir] = "l10n"
;projects[translation_overview][subdir] = "l10n"
;projects[translation_management][subdir] = "l10n"
;projects[transliteration][subdir] = "l10n"


; Themes
;projects[] = omega
projects[] = rubik
projects[] = tao

; Libraries
;libraries[jquery_ui][download][type] = "get"
;libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery-ui-1.8.5.zip"
;libraries[jquery_ui][destination] = "modules/contrib/jquery_ui"

;libraries[tinymce][download][type] = "get"
;libraries[tinymce][download][url] = "http://github.com/downloads/tinymce/tinymce/tinymce_3.4.9.zip"
;libraries[tinymce][destination] = "modules/contrib/tinymce"
