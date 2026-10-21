// FGKGKDEJCOG$$OPCKGNOBACO @ RVA 0x3334068

void FGKGKDEJCOG__OPCKGNOBACO(int32_t DBJLIBHKKGP,MethodInfo *method)

{
  FGKGKDEJCOG_StaticFields *pFVar1;
  System_String_o **ppSVar2;
  MethodInfo *extraout_x1;
  System_String_o *pSVar3;
  float fVar4;
  
  if ((DAT_04567939 & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&StringLiteral_16205);
    DAT_04567939 = 1;
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
  }
  else {
    if (DBJLIBHKKGP != 1) {
      if (DBJLIBHKKGP != 0) {
        return;
      }
      if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar1 = FGKGKDEJCOG_TypeInfo->static_fields;
      pFVar1->NADOFNLEECE = 2.0;
      pSVar3 = StringLiteral_16205;
      ppSVar2 = &pFVar1->BDFFMDCAHGJ;
      *ppSVar2 = StringLiteral_16205;
      goto LAB_034341a8;
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar1 = FGKGKDEJCOG_TypeInfo->static_fields;
    fVar4 = 1.0;
  }
  ppSVar2 = &pFVar1->BDFFMDCAHGJ;
  *ppSVar2 = (System_String_o *)0x0;
  pSVar3 = (System_String_o *)0x0;
  pFVar1->NADOFNLEECE = fVar4;
LAB_034341a8:
  thunk_FUN_01c20e04(ppSVar2,pSVar3);
  return;
}

