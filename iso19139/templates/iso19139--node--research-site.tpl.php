<gmd:description>
  <?php print render($content['field_description']); ?>
</gmd:description>
<gmd:geographicElement>
  <gmd:EX_GeographicBoundingBox>
    <?php print render($content['field_coordinates']); ?>
  </gmd:EX_GeographicBoundingBox>
</gmd:geographicElement>
<?php if (!empty($content['field_elevation'])): ?>
<gmd:verticalElement>
    <gmd:EX_VerticalExtent>
       <gmd:minimumValue>
			<gco:Real><?php print render($content['field_elevation_min']); ?></gco:Real>
		 </gmd:minimumValue>
		 <gmd:maximumValue>
			<gco:Real><?php print render($content['field_elevation']); ?></gco:Real>
		 </gmd:maximumValue>
		 <gmd:verticalCRS>
			<gml:VerticalCRS gml:id="crs.msl_height">
			   <gml:identifier codeSpace="OGP">urn:ogc:def:crs:EPSG</gml:identifier>
			   <gml:name>MSL height</gml:name>
			   <gml:remarks>Not specific to any location or epoch.</gml:remarks>
			   <gml:domainOfValidity xlink:href="urn:ogc:def:area:EPSG::1262"/>
			   <gml:scope>Hydrography.</gml:scope>
			   <gml:verticalCS xlink:href="urn:ogc:def:datum:EPSG::5100"/>
			   <gml:verticalDatum xlink:href="urn:ogc:def:cs:EPSG::6499"/>
			</gml:VerticalCRS>
		 </gmd:verticalCRS>
	  </gmd:EX_VerticalExtent>
</gmd:verticalElement>
<?php endif; ?>