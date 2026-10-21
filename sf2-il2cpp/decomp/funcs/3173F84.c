// HEGNACFOHEB$$.ctor @ RVA 0x3173F84

void HEGNACFOHEB___ctor(HEGNACFOHEB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  MGNDHCBAPEN_int__int__o *pMVar3;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03273f7c with catch @ 03273f88
                        */
  if ((DAT_04566949 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_8775);
    FUN_01bab630(&StringLiteral_5582);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_10807);
    DAT_04566949 = 1;
  }
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,0xe,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13991,(MethodInfo *)0x0);
      a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,StringLiteral_8775,(MethodInfo *)0x0);
      if (bVar2) {
        (__this->fields).JBNGADJBDHB = 0;
      }
      else {
        bVar2 = System_String__op_Equality(a,StringLiteral_10807,(MethodInfo *)0x0);
        if (bVar2) {
          (__this->fields).JBNGADJBDHB = 1;
        }
        else {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_5582,(MethodInfo *)0x0);
        }
      }
      pMVar3 = GIAMPEGMNHE__GGPIBJJKMPK(AHDGNOJPPIB,0,0x7fffffff,(MethodInfo *)0x0);
      if (pMVar3 != (MGNDHCBAPEN_int__int__o *)0x0) {
        iVar1 = (pMVar3->fields).DOKHHBGJICA;
        (__this->fields).GNBCPIBKFPA = (pMVar3->fields).PHPELPFMOII;
        (__this->fields).IIIKGINABJD = iVar1;
        if ((uint)(__this->fields).JBNGADJBDHB < 2) {
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                             (MGNPHCAAEIO_TypeInfo->static_fields->OCCMHDBJPJM).fields,
                             (MethodInfo *)0x0);
          if (bVar2) {
            (__this->fields).GNBCPIBKFPA = 0;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

