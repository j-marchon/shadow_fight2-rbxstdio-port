// JADGCGOJLJB$$HNIHOIAMDPC @ RVA 0x317D794

void JADGCGOJLJB__HNIHOIAMDPC
               (JADGCGOJLJB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  System_Xml_XmlNode_o **ppSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  if ((DAT_04566997 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7230);
    DAT_04566997 = 1;
  }
  ppSVar1 = &(__this->fields).PFONAMNDHOH;
  *ppSVar1 = JHMENEKPIBO;
  thunk_FUN_01c20e04(ppSVar1,JHMENEKPIBO);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_7230,(MethodInfo *)0x0);
      CJNHFNHJHPE = GIAMPEGMNHE__NANCFCIGNEE(LBJNDMNEJJB,-1,(MethodInfo *)0x0);
      CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        (CJNHFNHJHPE,(MethodInfo *)0x0);
      (__this->fields)._NNEIIMCKKNF_k__BackingField.fields = CVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

