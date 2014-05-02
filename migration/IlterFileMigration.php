<?php

/**
 * @file
 * Definition of IlterFileMigration.
 */

class IlterFileMigration extends DeimsFileMigration {

  public function prepare($file, $row) {
    parent::prepare($file, $row);

    // Add data for documents from the CCT "Resources"

    $connection = Database::getConnection('default', $this->sourceConnection);
    $query = $connection->select('node', 'n');
    $query->condition('n.type', 'resources');
    $query->join('node_revisions', 'nr', 'n.vid = nr.vid');
    $query->fields('nr', array('title'));
    $query->join('content_type_resources', 'ctd', 'n.vid = ctd.vid');
    $query->condition('ctd.field_download_file_fid', $row->fid);

    if ($result = $query->execute()->fetch()) {
      if (!empty($result->title)) {
        $file->filename = $result->title;
      } 
    }

  }
}
