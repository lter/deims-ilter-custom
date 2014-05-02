<?php

/**
 * @file
 * Definition of IlterFileMigration.
 */

class IlterFileMigration extends DeimsFileMigration {

  public function prepare($file, $row) {


    // Add data for documents from the CCT "Resources"

    $connection = Database::getConnection('default', $this->sourceConnection);
    $query = $connection->select('node', 'n');
    $query->condition('n.type', 'resources');
    $query->join('node_revisions', 'nr', 'n.vid = nr.vid');
    $query->fields('nr', array('title'));

//   There is a "link" field to ext resources, not sure what would i do with it.
//    $query->join('content_type_resources', 'ctd', 'n.vid = ctd.vid');
//    $query->condition('ctd.field_download_file_fid', $row->fid);

    if ($result = $query->execute()->fetch()) {
      if (!empty($result->title)) {
        $file->filename = $result->title;
      } 
    }

    // Hack to make migration work as we expect.

    $file->value = 'public://' . str_replace("sites/data.lter-europe.net.deims/files/","",$file->value);

    if (!file_exists($file->value)) {
      throw new MigrateException("The file at {$file->value} does not exist.");
    }
//    parent::prepare($file, $row);
  }
}
