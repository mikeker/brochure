; Basic brochure site make file
core = 7.x
api = 2


; Modules (use latest version)
; ----------------------------
projects[] = admin_menu
projects[] = backup_migrate
projects[] = boost
projects[] = context
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


; Modules (specific version)
; --------------------------
; No release yet, so use the latest dev
projects[better_formats][version] = 1.x-dev

; Use Media 2.x -- unstable, yes, but that's where the dev-love has been going...
projects[media][version] = 2.0-unstable2
projects[media_flickr][version] = 1.0-alpha1
projects[media_youtube][version] = 1.0-alpha5

; Alpha2 of UUID causes install.php to break, use the latest -dev release until
; a new recommended release is rolled
projects[uuid][version] = 1.x-dev
projects[uuid_features][version] = 1.x-dev

; Includes Features/Exportables support until a new stable > 2.1 is released.
; see http://drupal.org/node/624018
projects[wysiwyg][version] = 2.x-dev 


; Themes (and theme related)
; --------------------------
projects[omega][version] = 3.0
projects[omega][type] = theme
projects[] = omega_tools
projects[] = delta
projects[] = less


; Libraries
; ---------
; Shadowbox has its own make file so no need to download that library separately

; CKEditor
libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

; jQuery Cycle plugin, plus JSON2 plugin so we can set advanced options for Views Slideshow
libraries[jquery_cycle][download][type]= "git"
libraries[jquery_cycle][download][url] = "git://github.com/malsup/cycle.git"
libraries[jquery_cycle][directory_name] = "jquery.cycle"
libraries[jquery_cycle][destination] = "libraries"
libraries[json2][download][type]= "git"
libraries[json2][download][url] = "git://github.com/douglascrockford/JSON-js.git"
libraries[json2][directory_name] = "json2"
libraries[json2][destination] = "libraries"
