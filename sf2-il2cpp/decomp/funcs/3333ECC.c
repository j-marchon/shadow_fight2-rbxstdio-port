// FGKGKDEJCOG$$CGPMJHLMPKO @ RVA 0x3333ECC

void FGKGKDEJCOG__CGPMJHLMPKO
               (FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  KMBNFNCDDBP_o *pKVar5;
  
  if ((DAT_04567935 & 1) == 0) {
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<FGKGKDEJCOG_CFNJNJBHGNA>__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&StringLiteral_8597);
    DAT_04567935 = 1;
  }
  iVar3 = UnityEngine_SystemInfo__get_systemMemorySize((MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
  }
  if (DAT_045611dc == '\0') {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045611dc = '\x01';
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar5 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
  if (pKVar5 != (KMBNFNCDDBP_o *)0x0) {
    iVar1 = (pKVar5->fields).JJIGNBIMLCC;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar4 = EOAOCPLIKOI__KDONMCINCCB((MethodInfo *)0x0);
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_00,StringLiteral_8597,(MethodInfo *)0x0);
        iVar3 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                          (LBJNDMNEJJB,(uint)(iVar4 != 0 && (iVar1 <= iVar3 || iVar4 == 1)),
                           Method_EIABCPKDEBD_CKHGJBKDIID<FGKGKDEJCOG_CFNJNJBHGNA>__);
        (__this->fields).ILACIHPOGDC = iVar3;
        iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
        bVar2 = GNAFJMPJNKI__NCOIGMBGENK(iVar3,(MethodInfo *)0x0);
        if (bVar2) {
          iVar3 = (__this->fields).ILACIHPOGDC;
        }
        else {
          iVar3 = 1;
          (__this->fields).ILACIHPOGDC = 1;
        }
        method_00 = extraout_x1;
        if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_00;
        }
        FGKGKDEJCOG__OPCKGNOBACO(iVar3,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

