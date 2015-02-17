<?php
/**
 * @file
 * ilter_nitrogen_pilot_survey.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilter_nitrogen_pilot_survey_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ilter_nitrogen_pilot_survey_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ilter_nitrogen_pilot_survey_node_info() {
  $items = array(
    'nitrogen_pilot_survey' => array(
      'name' => t('Nitrogen Pilot Survey'),
      'base' => 'node_content',
      'description' => t('This is to gain information about published research on Nitrogen'),
      'has_title' => '1',
      'title_label' => t('Title of Paper or Dataset'),
      'help' => t('This survey is to foster collaboration between people working on one or more of the following: 
<ul>
	<li>(a) Lichen and moss as bioindicator of N pollution, </li>
	<li>(b) N2O emission from various ecosystems </li>
	<li>(c) Long-term legacy impact on current N cycles in the LTER sites. </li>
</ul>
It will take less than 3 minutes to complete. (Note that if your LTER site is not listed you can still add it during the survey, which will take approximately 5 minutes more)</br></br>

If you have been working in the LTER sites and want to collaborate with us about (a) Lichen and moss, (b) N2O emission (c) Legacy impact on N cycles we ask you if:</br>
<ol>
	<li>you have published papers on these themes, done in LTER sites?
- yes/no; if yes then please upload your paper; and provide DOI, your LTER site name and contact people name;</li>

	<li>you have registered your data in the existing database or have published a data paper for data collected in LTER sites on those themes?  yes/no; </br>if yes then provide data DOI or EML file, your LTER site name and contact people name;</li>

	<li> if you said yes to any of the above questions do you want to join efforts using the existing data, on a global-scale synthesis paper (one per theme)?  yes/no </li>
</ol>

Please refer to the <a href="http://data.lter-europe.net/ilter_deims/ilter-research-projects/ilter-nitrogen-initiative-survey-instructions" target="_blank">Detailed Instructions and Implementation Plan</a> for further information on the project.  Please fill out the form with any of your relevant information in the ILTER sites.  </br></br>

We are looking forward to learning about your research products and working with you on the ILTER platform! </br></br>

Thank you very much for your contribution.'),
    ),
  );
  return $items;
}
