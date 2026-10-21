// ABNLGBHKOCE$$.ctor @ RVA 0x3192D80

void ABNLGBHKOCE___ctor(ABNLGBHKOCE_o *__this,System_Xml_XmlNode_o *PJHODHEOHFN,MethodInfo *method)

{
  ABNLGBHKOCE_JBMHDDKONHC_o *__this_00;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04566a4c & 1) == 0) {
    FUN_01bab630(&ABNLGBHKOCE_JBMHDDKONHC_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    DAT_04566a4c = 1;
  }
  auVar3 = thunk_FUN_01bda818(ABNLGBHKOCE_JBMHDDKONHC_TypeInfo);
  __this_00 = auVar3._0_8_;
  ABNLGBHKOCE_JBMHDDKONHC___ctor(__this_00,auVar3._8_8_);
  (__this->fields).CKNFEFFGHLC = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (PJHODHEOHFN != (System_Xml_XmlNode_o *)0x0) {
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(PJHODHEOHFN->klass->vtable)._16_get_Attributes.methodPtr)
                          (PJHODHEOHFN,(PJHODHEOHFN->klass->vtable)._16_get_Attributes.method);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_01,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM
                         (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).JIJLBFGKNJK;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

