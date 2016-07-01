<?php if (!empty($content['field_data_source_file'])): ?>

      <gmd:distributionFormat>
         <gmd:MD_Format>
           <gmd:name>
		   <?php 
			$fileURL = pathinfo(render($content['field_data_source_file']));

			$extension = $fileURL['extension'];
			$fileName = $fileURL['filename'];
			if ($extension == 'xlsx'){
				$excelType = 'Microsoft Excel Open XML Document';
				$excelVersion = 'Excel 2007 and later';
			}
			elseif ($extension == 'xls'){
				$excelType = 'Worksheet file (Microsoft Excel)';
				$excelVersion = 'Excel 97-2003';
			}
		   ?>
             <gco:CharacterString><?php print($excelType); ?></gco:CharacterString>
           </gmd:name>
           <gmd:version><gco:CharacterString><?php print($excelVersion) ?></gco:CharacterString></gmd:version>
         </gmd:MD_Format>
      </gmd:distributionFormat>
      <gmd:transferOptions>
          <gmd:MD_DigitalTransferOptions>
             <gmd:onLine>
                <gmd:CI_OnlineResource>
                   <gmd:linkage>
                      <gmd:URL><?php print render($content['field_data_source_file']); ?></gmd:URL>
                   </gmd:linkage>
				   <gmd:name>
					<gco:CharacterString><?php print($fileName)?></gco:CharacterString>
				   </gmd:name>
				   <gmd:function>
					<gmd:CI_OnLineFunctionCode codeList="http://www.isotc211.org/2005/resources/Codelist/gmxCodelists.xml#CI_OnLineFunctionCode" codeListValue="download"/>
				   </gmd:function>
                </gmd:CI_OnlineResource>
             </gmd:onLine>
           </gmd:MD_DigitalTransferOptions>
      </gmd:transferOptions>

<?php endif; ?>
