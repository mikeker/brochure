; Basic brochure site make file
; TODO: Build an install profile out of this so that we can setup users and
;       placeholder content.
; Setup after make runs:
;  -> Setup database, user, and adjust settings.php.
;  -> Investigate the ability to use drush si to run the installer.
;  Then run the following:
;     drush dis toolbar overlay
;     drush en admin_menu admin_menu_toolbar backup_migrate better_formats boost ctools fontyourface google_fonts_api globalredirect less devel features pathologic media media_youtube omega_tools pathauto strongarm shadowbox wysiwyg views views_ui views_slideshow_cycle service_links mollom uuid uuid_features
;     drush omega-subtheme "My Site Theme"

core = 7.x
api = 2
projects[] = drupal


; Modules (use latest version)
; ----------------------------
projects[] = admin_menu
projects[] = backup_migrate
projects[] = boost
projects[] = ctools
projects[] = devel
projects[] = entity
projects[] = features
projects[] = file_entity
projects[] = fontyourface
projects[] = globalredirect
projects[] = libraries
projects[] = mollom
projects[] = nodequeue
projects[] = pathauto
projects[] = pathologic
projects[] = rules
projects[] = service_links
projects[] = shadowbox
projects[] = skinr
projects[] = strongarm
projects[] = token
projects[] = views
projects[] = views_slideshow
projects[] = uuid
projects[] = uuid_features
projects[] = wysiwyg


; Modules (specific version)
; --------------------------
; No release yet, so use the latest dev
projects[better_formats][version] = 1.x-dev

; Use Media 2.x -- unstable, yes, but that's where the dev-love has been going...
project[media][version] = 2.0-unstable2
project[media_flickr][version] = 1.0-alpha1
project[media_youtube][version] = 1.0-alpha5


; Themes (and theme related)
; --------------------------
projects[omega][version] = 3.0
projects[omega][type] = "theme"
projects[] = omega_tools
projects[] = delta
projects[] = less


; Features
; --------
projects[brochure][type] = module
projects[brochure][subdir] = custom
projects[brochure][download][type] = git
projects[brochure][download][url] = git://github.com/mikeker/brochure.git


; Libraries
; ---------
; Shadowbox has its own make file so no need to download that library separately

; CKEditor
libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

; jQuery Cycle plugin, plus JSON2 plugin so we can set advanced options for Views Slideshow
;libraries[jquery_cycle][download][type]= "get"
;libraries[jquery_cycle][download][url] = "https://github.com/downloads/malsup/cycle/jquery.cycle.all.latest.min.js"
;libraries[jquery_cycle][download][filename] = "jquery.cycle.all.min.js"
;libraries[jquery_cycle][directory_name] = "jquery.cycle"
;libraries[jquery_cycle][destination] = "libraries"
;libraries[json2][download][type]= "get"
;libraries[json2][download][url] = "https://github.com/douglascrockford/JSON-js/blob/master/json2.js"
;libraries[json2][download][filename] = "json2.js"
;libraries[json2][directory_name] = "json2"
;libraries[json2][destination] = "libraries"
