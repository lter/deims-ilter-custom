deims-ilter-custom
=================

DEIMS customizations for ILTER

Customizations for the ILTER DEIMS migration

This is a set of custom Drupal 7.x modules.  The _ilter_ module extends the Drupal 
contributed _migrate_ module and the DEIMS custom module D6 Migrate module, which 
in itself is an extension of the Drupal contrib. _migrate_. The _ilter_ module addresses 
special customizations of the International LTER information management system

## Instructions ##

Clone 
* `git clone --branch 7.x-1.x git@github.com:lter/deims-ilter-custom.git` 
into a place of your choice (current directory, Desktop, etc)

Or download this module from: 

* `https://github.com/lter/deims-ilter-custom/archive/7.x-1.x.zip`
Extract the contents in a local directory, you will copy the parts inside to different
places in your DEIMS install, as we explain now.

Once you have the repository locally, create a folder named _modules_ under your
DEIMS root _sites/default_ (unless you have already made it)

Under the _sites/default/modules_, create another folder named _ilter_ 

Copy the _ilter.*_ files you downloaded from github locally, into the _ilter_ 
folder you just created. Also, copy the _migration_ subfolder you downloaded from 
_github_ into the same _ilter_ folder. 

Also, we need new content types, views and DEIMS content type extensions for the 
ILTER. You will find those, _featurized_, in the local github download subfolder named
_features_ .  Inside, you will see some features that start with the word _deims_ and
some that begin with the word _ntl_.  THe _deims_ are overrides of existing features,
and are located in _/profiles/deims/modules/features_, just place the content accordingly,
overwrite the existing ones with the new - DEIMS will enact the changes.  THe custom,
_ntl_ specific need to be moved too, for example, copy them in the _modules_ folder,
like this:

* `cp -r deims-ntl-custom/features/ilter_* DEIMSROOT/sites/default/modules/`

