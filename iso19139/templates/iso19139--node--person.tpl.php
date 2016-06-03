<?php
/**
 * This template does not have a surrounding XML element because it is re-used
 * by other elements.
 */
?>
<gmd:CI_ResponsibleParty>
<?php print render($content['field_name']); ?>
<?php if (!empty($content['field_organization'])): ?>
<gmd:organisationName>
  <?php print render($content['field_organization']); ?>
</gmd:organisationName>
<?php endif; ?>
<gmd:contactInfo>
  <gmd:CI_Contact>
    <?php print render($content['field_phone']); ?>
    <?php print render($content['field_fax']); ?>
    <gmd:address>
     <gmd:CI_Address>
      <?php print render($content['field_address']); ?>
      <?php print render($content['field_email']); ?>
     </gmd:CI_Address>
    </gmd:address>
  </gmd:CI_Contact>
</gmd:contactInfo>
<?php print render($content['field_url']); ?>
 <gmd:role>
   <gmd:CI_RoleCode codeList="http://www.isotc211.org/2005/resources/Codelist/gmxCodelists.xml#CI_RoleCode" codeListValue="pointOfContact">pointOfContact</gmd:CI_RoleCode>
 </gmd:role>
</gmd:CI_ResponsibleParty>
