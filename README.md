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
some that begin with the word _ilter_.  These _deims_ modules contain overrides of existing 
DEIMS default features, mostly are expansions of the current core content types. The
original features are located in _/profiles/deims/modules/features_, just place the new
overriding features in the corresponding folders, overwrite the existing ones with the new 
ones. DEIMS will enact the changes automatically most of the times.  

THe custom features that begin with _ilter_ also need to be copied under your DEIMS 
instance. For example, you can copy them in the _modules_ folder, like this:

* `cp -r deims-ilter-custom/features/ilter_* DEIMSROOT/sites/default/modules/`

### Feature Dependencies

You need to instal the  _Views Data Export_ contributed module.  One way to do this is
issue the following drush command:

`drush dl --destination=profiles/deims/modules/contrib  views_data_export`


## Notes ##

Please enable the Forum core module before you attempt the migration.

In the folder "misc", you will find some miscellaneous files that you'll find
interesting. "color.inc" contains a custom palette for ILTER.

### Migration Notes ###

This is a very large migration, do not attempt it yourself if you do not really
know what you are doing.

 - Chichen-and-egg issues (that is, many circular dependencies).  

 - Some default migrations go unused, including:
   - The Core Areas Taxonomy
   - The Controlled Keywords taxonomies.  
   - The Book migration
   - The Research Project 
   - The DataSet (so different, needs to change completely)

 - The order matters, we cannot build the perfect order due to the circular dependencies.
   - First, the Organizations
   - Users
   - Taxonomies (non empty ones)
   - Light, independent content type nodes.
   - Person (begin chicken-n-egg)
   - Research Sites ? and Fields
   - Data FIles
   - Data Set
   - Sites

It is advisable to tweak the core deimsd6migration accordingly, to remove already loaded
migrations.

For example, the Site migration has a dependency on the DataSet migration.  
But the DataSet also depends on the Site.



