<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
 <xsl:template match="/">
<html>
<head><title>Document</title><style>
body product {
    background-color: lightseagreen;
    display: flex;
    width:18%;
    height: 50%;
    flex-direction: column;
    margin: auto;
    
}
body product h1{
    background-color: rgb(237, 136, 136);
    display: flex;
    justify-content: center;
    text-align: center;
}
body product name{
    font-size:12px;
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
}
body product type{
    font-size:18px;
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
}
body product discr{
    font-size:20px;
    display: flex;
    flex-direction: column;
    justify-content: flex-start;
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
}

body product awards 
{
    font-size:20px;
    background-color: rgb(238, 66, 66);
    text-align: center;
}
body{
    display: flex;
    height: 100%;
    width:100%;
    justify-content: space-between;
}
p{margin-top: 0;}</style>
</head>
 <body>
   <xsl:for-each select="body/product">
   <xsl:sort select="name/h1" order="ascending"/>
   <product>
     <name><h1><xsl:value-of select="name/h1"/></h1></name>
     <type><xsl:copy-of select="type"/></type>
     <discr><xsl:copy-of select="discr"/></discr> <awards><xsl:copy-of select="awards"/></awards>
     </product>
   </xsl:for-each>
 </body>
 </html>
 </xsl:template>
</xsl:stylesheet>
