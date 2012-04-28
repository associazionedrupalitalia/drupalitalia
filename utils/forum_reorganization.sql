# Move, aggregates and deletes terms ids around the DI.org forum

# Forum sections renaming
UPDATE `taxonomy_term_data` SET name = "Amministrazione" WHERE tid = 6;
UPDATE `taxonomy_term_data` SET name = "Community & Associazione" WHERE tid = 19;
UPDATE `taxonomy_term_data` SET name = "Showcase" WHERE tid = 33;
UPDATE `taxonomy_term_data` SET name = "Offerte di lavoro" WHERE tid = 20;
UPDATE `taxonomy_term_data` SET name = "Sviluppo" WHERE tid = 31;
UPDATE `taxonomy_term_data` SET name = "Grafica e temizzazione" WHERE tid = 12;
UPDATE `taxonomy_term_data` SET name = "Area Tecnica" WHERE tid = 30;

# TIDs mapping
## Table field_data_taxonomy_forums
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 56 WHERE taxonomy_forums_tid = 57;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 56 WHERE taxonomy_forums_tid = 497;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 31 WHERE taxonomy_forums_tid = 455;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 19 WHERE taxonomy_forums_tid = 10;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 19 WHERE taxonomy_forums_tid = 513;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 19 WHERE taxonomy_forums_tid = 514;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 36;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 38;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 11;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 499;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 443;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 436;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 439;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 438;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 437;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 440;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 24;
UPDATE `field_data_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 55;
## Table field_revision_taxonomy_forums
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 56 WHERE taxonomy_forums_tid = 57;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 56 WHERE taxonomy_forums_tid = 497;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 31 WHERE taxonomy_forums_tid = 455;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 19 WHERE taxonomy_forums_tid = 10;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 19 WHERE taxonomy_forums_tid = 513;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 19 WHERE taxonomy_forums_tid = 514;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 36;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 38;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 11;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 499;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 443;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 436;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 439;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 438;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 437;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 440;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 24;
UPDATE `field_revision_taxonomy_forums` SET taxonomy_forums_tid = 6 WHERE taxonomy_forums_tid = 55;
## Table taxonomy_index
UPDATE `taxonomy_index` SET tid = 56 WHERE tid = 57;
UPDATE `taxonomy_index` SET tid = 56 WHERE tid = 497;
UPDATE `taxonomy_index` SET tid = 31 WHERE tid = 455;
UPDATE `taxonomy_index` SET tid = 19 WHERE tid = 10;
UPDATE `taxonomy_index` SET tid = 19 WHERE tid = 513;
UPDATE `taxonomy_index` SET tid = 19 WHERE tid = 514;
UPDATE `taxonomy_index` SET tid = 6 WHERE tid = 36;
UPDATE `taxonomy_index` SET tid = 6 WHERE tid = 38;
UPDATE `taxonomy_index` SET tid = 6 WHERE tid = 11;
UPDATE `taxonomy_index` SET tid = 6 WHERE tid = 499;
UPDATE `taxonomy_index` SET tid = 6 WHERE tid = 443;
UPDATE `taxonomy_index` SET tid = 6 WHERE tid = 436;
UPDATE `taxonomy_index` SET tid = 6 WHERE tid = 439;
UPDATE `taxonomy_index` SET tid = 6 WHERE tid = 438;
UPDATE `taxonomy_index` SET tid = 6 WHERE tid = 437;
UPDATE `taxonomy_index` SET tid = 6 WHERE tid = 440;
UPDATE `taxonomy_index` SET tid = 6 WHERE tid = 24;
UPDATE `taxonomy_index` SET tid = 6 WHERE tid = 55;
## Table forum_index
UPDATE `forum_index` SET tid = 56 WHERE tid = 57;
UPDATE `forum_index` SET tid = 56 WHERE tid = 497;
UPDATE `forum_index` SET tid = 31 WHERE tid = 455;
UPDATE `forum_index` SET tid = 19 WHERE tid = 10;
UPDATE `forum_index` SET tid = 19 WHERE tid = 513;
UPDATE `forum_index` SET tid = 19 WHERE tid = 514;
UPDATE `forum_index` SET tid = 6 WHERE tid = 36;
UPDATE `forum_index` SET tid = 6 WHERE tid = 38;
UPDATE `forum_index` SET tid = 6 WHERE tid = 11;
UPDATE `forum_index` SET tid = 6 WHERE tid = 499;
UPDATE `forum_index` SET tid = 6 WHERE tid = 443;
UPDATE `forum_index` SET tid = 6 WHERE tid = 436;
UPDATE `forum_index` SET tid = 6 WHERE tid = 439;
UPDATE `forum_index` SET tid = 6 WHERE tid = 438;
UPDATE `forum_index` SET tid = 6 WHERE tid = 437;
UPDATE `forum_index` SET tid = 6 WHERE tid = 440;
UPDATE `forum_index` SET tid = 6 WHERE tid = 24;
UPDATE `forum_index` SET tid = 6 WHERE tid = 55;
## Table forum
UPDATE `forum` SET tid = 56 WHERE tid = 57;
UPDATE `forum` SET tid = 56 WHERE tid = 497;
UPDATE `forum` SET tid = 31 WHERE tid = 455;
UPDATE `forum` SET tid = 19 WHERE tid = 10;
UPDATE `forum` SET tid = 19 WHERE tid = 513;
UPDATE `forum` SET tid = 19 WHERE tid = 514;
UPDATE `forum` SET tid = 6 WHERE tid = 36;
UPDATE `forum` SET tid = 6 WHERE tid = 38;
UPDATE `forum` SET tid = 6 WHERE tid = 11;
UPDATE `forum` SET tid = 6 WHERE tid = 499;
UPDATE `forum` SET tid = 6 WHERE tid = 443;
UPDATE `forum` SET tid = 6 WHERE tid = 436;
UPDATE `forum` SET tid = 6 WHERE tid = 439;
UPDATE `forum` SET tid = 6 WHERE tid = 438;
UPDATE `forum` SET tid = 6 WHERE tid = 437;
UPDATE `forum` SET tid = 6 WHERE tid = 440;
UPDATE `forum` SET tid = 6 WHERE tid = 24;
UPDATE `forum` SET tid = 6 WHERE tid = 55;

# Hierarchy fixes
## Parent fixes
UPDATE `taxonomy_term_hierarchy` SET parent = 28 WHERE tid = 20;
UPDATE `taxonomy_term_hierarchy` SET parent = 30 WHERE tid = 6;
## Weight fixes
### Technical area
UPDATE `taxonomy_term_data` SET weight = 0 WHERE tid = 30;
#### Sub-Sections
UPDATE `taxonomy_term_data` SET weight = 0 WHERE tid = 6;
UPDATE `taxonomy_term_data` SET weight = 1 WHERE tid = 12;
UPDATE `taxonomy_term_data` SET weight = 2 WHERE tid = 31;
UPDATE `taxonomy_term_data` SET weight = 3 WHERE tid = 4;
### General
UPDATE `taxonomy_term_data` SET weight = 1 WHERE tid = 28;
#### Sub-Sections
UPDATE `taxonomy_term_data` SET weight = 0 WHERE tid = 19;
UPDATE `taxonomy_term_data` SET weight = 1 WHERE tid = 20;
UPDATE `taxonomy_term_data` SET weight = 2 WHERE tid = 33;
### Other
UPDATE `taxonomy_term_data` SET weight = 2 WHERE tid = 34;
#### Sub-Sections
UPDATE `taxonomy_term_data` SET weight = 0 WHERE tid = 35;
UPDATE `taxonomy_term_data` SET weight = 1 WHERE tid = 56;

# TIDs removing
DELETE FROM `taxonomy_term_data` WHERE tid = 57;
DELETE FROM `taxonomy_term_data` WHERE tid = 497;
DELETE FROM `taxonomy_term_data` WHERE tid = 455;
DELETE FROM `taxonomy_term_data` WHERE tid = 10;
DELETE FROM `taxonomy_term_data` WHERE tid = 513;
DELETE FROM `taxonomy_term_data` WHERE tid = 514;
DELETE FROM `taxonomy_term_data` WHERE tid = 36;
DELETE FROM `taxonomy_term_data` WHERE tid = 38;
DELETE FROM `taxonomy_term_data` WHERE tid = 11;
DELETE FROM `taxonomy_term_data` WHERE tid = 499;
DELETE FROM `taxonomy_term_data` WHERE tid = 443;
DELETE FROM `taxonomy_term_data` WHERE tid = 436;
DELETE FROM `taxonomy_term_data` WHERE tid = 439;
DELETE FROM `taxonomy_term_data` WHERE tid = 438;
DELETE FROM `taxonomy_term_data` WHERE tid = 437;
DELETE FROM `taxonomy_term_data` WHERE tid = 440;
DELETE FROM `taxonomy_term_data` WHERE tid = 24;
DELETE FROM `taxonomy_term_data` WHERE tid = 55;
DELETE FROM `taxonomy_term_data` WHERE tid = 29;
