// FGKGKDEJCOG$$.ctor @ RVA 0x3334F94

void FGKGKDEJCOG___ctor(FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *JIFEPAFBENM,
                       System_Xml_XmlNode_o *NMGANDPPOLH,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlNode_o **ppSVar2;
  FGKGKDEJCOG_o *__this_00;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *method_00;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03434f7c with catch @ 03434f98
                       catch(type#2 @ 00000000) { ... } // from try @ 03434f90 with catch @ 03434f98
                        */
  if ((DAT_0456793b & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&StringLiteral_8340);
    FUN_01bab630(&StringLiteral_12228);
    DAT_0456793b = 1;
  }
  (__this->fields).FIIKIHJHLNJ = 1;
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CIOBNDOOGIM___ctor((CIOBNDOOGIM_o *)__this,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).INCBBOHLBND;
  *ppSVar2 = JIFEPAFBENM;
  thunk_FUN_01c20e04(ppSVar2,JIFEPAFBENM);
  if (JIFEPAFBENM != (System_Xml_XmlNode_o *)0x0) {
    method_00 = (JIFEPAFBENM->klass->vtable)._51_get_Item.method;
    __this_00 = (FGKGKDEJCOG_o *)
                (*(JIFEPAFBENM->klass->vtable)._51_get_Item.methodPtr)
                          (JIFEPAFBENM,StringLiteral_12228);
    FGKGKDEJCOG__OJOGIDJOKMK(__this_00,(System_Xml_XmlNode_o *)__this_00,method_00);
    FGKGKDEJCOG__DLKPAPOBKKO(__this,JIFEPAFBENM,NMGANDPPOLH,method);
    FGKGKDEJCOG__CMAKHKNDMMH(__this,JIFEPAFBENM,(MethodInfo *)NMGANDPPOLH);
    FGKGKDEJCOG__FNKGNGCMHHN(__this,JIFEPAFBENM,(MethodInfo *)NMGANDPPOLH);
    FGKGKDEJCOG__CGPMJHLMPKO(__this,JIFEPAFBENM,(MethodInfo *)NMGANDPPOLH);
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(JIFEPAFBENM->klass->vtable)._16_get_Attributes.methodPtr)
                          (JIFEPAFBENM,(JIFEPAFBENM->klass->vtable)._16_get_Attributes.method);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_01,StringLiteral_8340,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
      (__this->fields).AFGIAJPDOKH = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

