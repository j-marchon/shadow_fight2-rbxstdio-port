// JCHNBADDBGO$$.ctor @ RVA 0x32FE850

void JCHNBADDBGO___ctor(JCHNBADDBGO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,bool EJMPGMPNCJE,
                       MethodInfo *method)

{
  bool bVar1;
  IGFGDDANEPE_o **ppIVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *method_00;
  
  if ((DAT_04567708 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14616);
    DAT_04567708 = 1;
  }
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,0,AHDGNOJPPIB,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields).DPCOEJPACKA;
  *ppIVar2 = (IGFGDDANEPE_o *)0x0;
  thunk_FUN_01c20e04(ppIVar2,0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14616,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
      (__this->fields).MPIICPLOKLF = false;
      (__this->fields).HHCHGNIMDJK = bVar1;
      (__this->fields).IDNBELKLCEL = 1;
      if (EJMPGMPNCJE) {
        method_00 = (__this->klass->vtable)._13_GKJKNKCEMPN.method;
        (*(__this->klass->vtable)._13_GKJKNKCEMPN.methodPtr)(__this,AHDGNOJPPIB);
      }
      JCHNBADDBGO__OOCAAJLDADI(__this,AHDGNOJPPIB,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

