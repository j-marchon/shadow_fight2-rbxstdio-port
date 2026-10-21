// FGKGKDEJCOG$$FNKGNGCMHHN @ RVA 0x3334218

void FGKGKDEJCOG__FNKGNGCMHHN
               (FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *message;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar3;
  KMBNFNCDDBP_o *pKVar4;
  
  pMVar3 = (MethodInfo *)AHDGNOJPPIB;
  if ((DAT_04567937 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<FGKGKDEJCOG_CFNJNJBHGNA>__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&StringLiteral_5339);
    FUN_01bab630(&StringLiteral_12942);
    DAT_04567937 = 1;
    pMVar3 = extraout_x1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar3 = extraout_x1_00;
  }
  if (EOAOCPLIKOI_TypeInfo->static_fields->ABJLMAOEEEE == false) {
    iVar2 = FGKGKDEJCOG__IEPCAAEKFHN((FGKGKDEJCOG_o *)EOAOCPLIKOI_TypeInfo,pMVar3);
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_034343f0;
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_12942,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                        (LBJNDMNEJJB,iVar2,Method_EIABCPKDEBD_CKHGJBKDIID<FGKGKDEJCOG_CFNJNJBHGNA>__
                        );
    }
    if (__this == (FGKGKDEJCOG_o *)0x0) goto LAB_034343f0;
  }
  else {
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045611dc == '\0') {
      FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
      DAT_045611dc = '\x01';
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pKVar4 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
    if (pKVar4 == (KMBNFNCDDBP_o *)0x0) {
LAB_034343f0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    message = System_String__Concat
                        (StringLiteral_5339,(pKVar4->fields).IGLHCNLNIPK,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)message,(MethodInfo *)0x0);
    iVar2 = 0;
  }
  (__this->fields).ACOFLEKJNHM = iVar2;
  iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  bVar1 = GNAFJMPJNKI__NCOIGMBGENK(iVar2,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = (__this->fields).ACOFLEKJNHM;
  }
  else {
    iVar2 = 1;
    (__this->fields).ACOFLEKJNHM = 1;
  }
  pMVar3 = extraout_x1_01;
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar3 = extraout_x1_02;
  }
  FGKGKDEJCOG__MKLEBCDAJHA(iVar2,pMVar3);
  return;
}

