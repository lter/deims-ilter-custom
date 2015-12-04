<?php

/**
 * @file
 * Definition of IlterFileMigration.
 */

class IlterFileMigration extends DeimsFileMigration {

  public function prepare($file, $row) {

    // Hack to make migration work as we expect.

    $file->value = 'public://' . str_replace("sites/data.lter-europe.net.deims/files/","",$file->value);

    if (!file_exists($file->value)) {
      throw new MigrateException("The file at {$file->value} does not exist.");
    }

  }
}
