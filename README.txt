This project contains the make file and feature modules needed to build a basic
"brochure" Web site.

Features include:

  - Basic pages
  - "Blog"-type content type and views
  - Front page slideshow content type and views
  - Basic media support (Flickr, YouTube, uploaded images)
  - Image overlay by Shadowbox
  - Rich-text editor (CKEditor)
  - Sets up some placeholder pages and content

To use, build a distribution make (distro.make) file consisting of

  core = 7.x
  api = 2
  projects[] = drupal
  
  ; Brochure
  ; --------
  projects[brochure][type] = module
  projects[brochure][subdir] = custom
  projects[brochure][download][type] = git
  projects[brochure][download][url] = git://github.com/mikeker/brochure.git

and execute it using "drush make distro.make <path to installation>"
(eg: "drush make distro.make new_site" will install Drupal at new_site/index.php).
Drush Make will recursively run make files it finds, so the brochure.make
will be executed when distro.make is executed.

@TODO: Build an install profile out of this so that we can setup users and placeholder content.

After executing the distro.make file, do the following:
  - Setup database and database user for this site:
    (See http://drupal.org/documentation/install/create-database)
      @TODO: finish:
      mysqladmin -u sysadmin -p create brochure_db
  - Execute the following in shell:
    drush si standard \
      -- account-name = admin \
      -- account-mail = info@mikekeran.com  # Clearly, this should be changed... \
      -- site-name = Test Site Install \
      -- site-mail = info@mikekeran.com # Clearly, this should be changed as well... \
  - Then run the following in shell:
      drush dis toolbar; \
      drush en admin_menu admin_menu_toolbar backup_migrate better_formats boost ctools fontyourface google_fonts_api globalredirect less devel features pathologic media media_youtube omega_tools pathauto strongarm shadowbox wysiwyg views views_ui views_slideshow_cycle service_links mollom \
      drush omega-subtheme "My Site Theme" \
      drush en my_site_theme 
      @TODO:  uuid uuid_features?
  - Then turn on which features you want:
      drush en brochure_basic brochure_blog brochure_slideshow
