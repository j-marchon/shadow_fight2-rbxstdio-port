// MGJNNCKDJCP$$.ctor @ RVA 0x35C4B60

void MGJNNCKDJCP___ctor(MGJNNCKDJCP_o *__this,MethodInfo *method)

{
  System_Xml_XmlDocument_o *__this_00;
  System_Xml_XmlDocument_o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568f55 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_04568f55 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo,method)
  ;
  System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).HJKLIDCAEOE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

