<?php

/**
 * @file
 * Page callbacks for the ISO 19139 module.
 */

/**
 * Output a node as ISO 19139.
 *
 * Sets the content header for xml, renders the iso 19139, and returns nothing in
 * order to not have render actions take place on the iso.
 * When nothing is returned from a page callback Drupal will not render anything
 * and still call the rest of the proper hooks including necessary exit hooks.
 * For a similar usage example see:
 * @see http://api.drupal.org/api/drupal/modules%21node%21node.module/function/node_feed/7
 */
function iso19139_output_node($node) {
  if ($node->type != 'data_set') {
    return MENU_NOT_FOUND;
  }

  try {
    // Get the ISO 19139 as a string and output it.
    $dataset = new Iso19139DataSet($node);
    $iso19139 = $dataset->getISO19139();
    drupal_add_http_header('Content-Type', 'application/xml; charset=utf-8');
    print $iso19139;
  }
  catch (Exception $exception) {
    watchdog_exception('iso19139', $exception);
    return MENU_NOT_FOUND;
  }
}
