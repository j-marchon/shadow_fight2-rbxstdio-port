// BGKIJKALIHG$$HNIHOIAMDPC @ RVA 0x3300978

void BGKIJKALIHG__HNIHOIAMDPC
               (BGKIJKALIHG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456771a & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    DAT_0456771a = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 034009dc to 035009eb has its CatchHandler @ 03400c38 */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
                    /* try { // try from 03400a00 to 03500a07 has its CatchHandler @ 03400c3c */
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM
                         (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).DEKCPPOJFEH;
      *ppSVar2 = pSVar1;
                    /* try { // try from 03400a1c to 03500a23 has its CatchHandler @ 03400ad0 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

