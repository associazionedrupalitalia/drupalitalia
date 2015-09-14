core = 7.x

api = 2

projects[drupal][version] = "7.39"

; Modules

;; Contrib
projects[addressfield][subdir] = "contrib"
projects[addressfield][version] = "1.1"

projects[advanced_forum][subdir] = "contrib"
projects[advanced_forum][version] = "2.5"

projects[advanced_forum_more_styles][subdir] = "contrib"
projects[advanced_forum_more_styles][version] = "2.0-alpha1"

projects[apachesolr][subdir] = "contrib"
projects[apachesolr][version] = "1.7"

projects[captcha][subdir] = "contrib"
projects[captcha][version] = "1.3"

projects[codefilter][subdir] = "contrib"
projects[codefilter][version] = "1.1"

projects[commerce][subdir] = "contrib"
projects[commerce][version] = "1.11"

projects[commerce_bank_transfer][subdir] = "contrib"
projects[commerce_bank_transfer][version] = "1.0-alpha3"

projects[commerce_features][subdir] = "contrib"
projects[commerce_features][version] = "1.1"

projects[commerce_license][subdir] = "contrib"
projects[commerce_license][version] = "1.3"

projects[commerce_no_payment][subdir] = "contrib"
projects[commerce_no_payment][version] = "1.0-beta1"

projects[commerce_paypal][subdir] = "contrib"
projects[commerce_paypal][version] = "2.3"

projects[commerce_sp][subdir] = "contrib"
projects[commerce_sp][version] = "1.2"

projects[contact_forms][subdir] = "contrib"
projects[contact_forms][version] = "1.8"

projects[context][subdir] = "contrib"
projects[context][version] = "3.6"

projects[core_release_block][subdir] = "contrib"
projects[core_release_block][version] = "1.0"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.9"

projects[date][subdir] = "contrib"
projects[date][version] = "2.9"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.6"

projects[entity_bundle_plugin][subdir] = "contrib"
projects[entity_bundle_plugin][version] = "1.0-beta2"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"

projects[facetapi][subdir] = "contrib"
projects[facetapi][version] = "1.5"

projects[features][subdir] = "contrib"
projects[features][version] = "1.0"

projects[field_permissions][subdir] = "contrib"
projects[field_permissions][version] = "1.0-beta2"

projects[flag][subdir] = "contrib"
projects[flag][version] = "2.2"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "1.4"

projects[honeypot][subdir] = "contrib"
projects[honeypot][version] = "1.21"

projects[i18n][subdir] = "contrib"
projects[i18n][version] = "1.13"

projects[l10n_update][subdir] = "contrib"
projects[l10n_update][version] = "1.1"

projects[legal][subdir] = "contrib"
projects[legal][version] = "1.5"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.2"

projects[link][subdir] = "contrib"
projects[link][version] = "1.3"

projects[mailchimp][subdir] = "contrib"
projects[mailchimp][version] = "2.12"

projects[migrate][subdir] = "contrib"
projects[migrate][version] = "2.7"

projects[mollom][subdir] = "contrib"
projects[mollom][version] = "2.14"

projects[nocurrent_pass][subdir] = "contrib"
projects[nocurrent_pass][version] = "1.0"

projects[quote][subdir] = "contrib"
projects[quote][version] = "1.1-beta3"

projects[recaptcha][subdir] = "contrib"
projects[recaptcha][version] = "1.12"

projects[references][subdir] = "contrib"
projects[references][version] = "2.1"

projects[rules][subdir] = "contrib"
projects[rules][version] = "2.9"

projects[smtp][subdir] = "contrib"
projects[smtp][version] = "1.2"

projects[social-share][subdir] = "contrib"
projects[social-share][version] = "1.13"

projects[superfish][subdir] = "contrib"
projects[superfish][version] = "1.9"

projects[token][subdir] = "contrib"
projects[token][version] = "1.6"

projects[translation_helpers][subdir] = "contrib"
projects[translation_helpers][version] = "1.0"

projects[userpoints][subdir] = "contrib"
projects[userpoints][version] = "1.1"

projects[variable][subdir] = "contrib"
projects[variable][version] = "2.5"

projects[views][subdir] = "contrib"
projects[views][version] = "3.11"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.3"

projects[xmlsitemap][subdir] = "contrib"
projects[xmlsitemap][version] = "2.2"

projects[droopalitalia][type] = "theme"
projects[droopalitalia][download][type] = "git"
projects[droopalitalia][download][branch] = "master"
projects[droopalitalia][download][url] = "https://github.com/associazionedrupalitalia/droopalitalia.git"

;; Devel
projects[devel][subdir] = "devel"
projects[devel_themer][subdir] = "devel"
projects[performance][subdir] = "devel"

; Libraries
libraries[mailchimp][download][type] = "get"
libraries[mailchimp][download][url] = "http://apidocs.mailchimp.com/api/downloads/mailchimp-api-class.zip"
libraries[mailchimp][directory_name] = "mailchimp"
libraries[mailchimp][destination] = "libraries"
