// NLPJLHOEAOE$$BIFFLMONEDB @ RVA 0x32044BC

void NLPJLHOEAOE__BIFFLMONEDB
               (NLPJLHOEAOE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttribute_o *pSVar1;
  System_String_o *pSVar2;
  ACHLOMELAJE_o *pAVar3;
  ACHLOMELAJE_o **ppAVar4;
  MethodInfo *method_00;
  DOPEEDABNEK_o *pDVar5;
  GGHCLMEFIGO_o *__this_00;
  System_Xml_XmlNode_o **ppSVar6;
  int32_t local_34;
  
  if ((DAT_04566e27 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11703);
    FUN_01bab630(&StringLiteral_8487);
    DAT_04566e27 = 1;
  }
  pSVar1 = EIABCPKDEBD__NHPDFFAIJMF(AHDGNOJPPIB,StringLiteral_11703,(MethodInfo *)0x0);
  if (pSVar1 == (System_Xml_XmlAttribute_o *)0x0) {
    EIABCPKDEBD__HBGAGFJBGKD(AHDGNOJPPIB,StringLiteral_11703,(MethodInfo *)0x0);
  }
  pSVar1 = EIABCPKDEBD__NHPDFFAIJMF(AHDGNOJPPIB,StringLiteral_11703,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_0456647b == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456647b = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_34 = NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO;
  pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  if (pSVar1 != (System_Xml_XmlAttribute_o *)0x0) {
    method_00 = (pSVar1->klass->vtable)._10_set_Value.method;
    (*(pSVar1->klass->vtable)._10_set_Value.methodPtr)(pSVar1,pSVar2);
    ppSVar6 = &(__this->fields).FMOKFPGPAJE;
    *ppSVar6 = AHDGNOJPPIB;
    thunk_FUN_01c20e04(ppSVar6,AHDGNOJPPIB);
    pAVar3 = NLPJLHOEAOE__MCAIOFGHPKH(__this,*ppSVar6,method_00);
    if (DAT_04566e53 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04566e53 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppAVar4 = &NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    *ppAVar4 = pAVar3;
    thunk_FUN_01c20e04(ppAVar4,pAVar3);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__Log(StringLiteral_8487,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
      __this_00 = (pAVar3->fields).OIDPLCLELEN;
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if ((pDVar5 != (DOPEEDABNEK_o *)0x0) && (__this_00 != (GGHCLMEFIGO_o *)0x0)) {
        GGHCLMEFIGO__NFDLCAPILII(__this_00,(pDVar5->fields).DIGBEFKAPHM,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

