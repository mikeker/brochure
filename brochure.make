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
projects[] = jcarousel
projects[] = libraries
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


; Modules (specific version)
; --------------------------
; No release yet, so use the latest dev
projects[better_formats][version] = 1.x-dev

; Use Media 2.x -- unstable, yes, but that's where the dev-love has been going...
projects[media][version] = 2.0-unstable3
projects[media_flickr][version] = 1.0-alpha1
projects[media_youtube][version] = 1.0-alpha5

; Includes Features/Exportables support until a new stable > 2.1 is released.
; see http://drupal.org/node/624018
projects[wysiwyg][version] = 2.x-dev 


; Themes (and theme related)
; --------------------------
; TODO: Figure out what's next...

; Libraries
; ---------
; Shadowbox has its own make file so no need to download that library separately

; CKEditor
libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"
