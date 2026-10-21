// FGKGKDEJCOG$$MKLEBCDAJHA @ RVA 0x3334508

void FGKGKDEJCOG__MKLEBCDAJHA(int32_t DBJLIBHKKGP,MethodInfo *method)

{
  FGKGKDEJCOG_StaticFields *pFVar1;
  System_String_o **ppSVar2;
  MethodInfo *extraout_x1;
  System_String_o *pSVar3;
  float fVar4;
  System_Action_o *pSVar5;
  
  if ((DAT_0456793a & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&StringLiteral_16205);
    DAT_0456793a = 1;
    method = extraout_x1;
  }
  if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo,method);
  }
  AMHFFFODDOC__NDNPGAKJLHM((MethodInfo *)0x0);
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NGCBNMBJMOE__NDNPGAKJLHM((MethodInfo *)0x0);
  UnityEngine_Resources__UnloadUnusedAssets((MethodInfo *)0x0);
  if (DBJLIBHKKGP == 2) {
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar1 = FGKGKDEJCOG_TypeInfo->static_fields;
    fVar4 = 0.5;
LAB_0343462c:
    ppSVar2 = &pFVar1->HABNBDAMLMP;
    *ppSVar2 = (System_String_o *)0x0;
    pSVar3 = (System_String_o *)0x0;
    pFVar1->CHCLEFKLOKH = fVar4;
  }
  else {
    if (DBJLIBHKKGP == 1) {
      if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar1 = FGKGKDEJCOG_TypeInfo->static_fields;
      fVar4 = 1.0;
      goto LAB_0343462c;
    }
    if (DBJLIBHKKGP != 0) goto LAB_0343463c;
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar1 = FGKGKDEJCOG_TypeInfo->static_fields;
    pFVar1->CHCLEFKLOKH = 2.0;
    pSVar3 = StringLiteral_16205;
    ppSVar2 = &pFVar1->HABNBDAMLMP;
    *ppSVar2 = StringLiteral_16205;
  }
  thunk_FUN_01c20e04(ppSVar2,pSVar3);
LAB_0343463c:
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar5 = FGKGKDEJCOG_TypeInfo->static_fields->JJHOFOMAHEB;
  if (pSVar5 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03434670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar5->fields).super.super.invoke_impl)
              ((pSVar5->fields).super.super.method_code,(pSVar5->fields).super.super.method);
    return;
  }
  return;
}

