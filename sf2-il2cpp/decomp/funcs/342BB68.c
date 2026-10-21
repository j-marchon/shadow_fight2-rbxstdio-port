// POEIJGLGEED$$NHEFKKBBCDJ @ RVA 0x342BB68

void POEIJGLGEED__NHEFKKBBCDJ(int32_t LKFALEIFDIO,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  POEIJGLGEED_StaticFields *pPVar2;
  System_Action_int__o *pSVar3;
  
  if ((DAT_04568139 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&POEIJGLGEED_TypeInfo);
    FUN_01bab630(&StringLiteral_1100);
    FUN_01bab630(&StringLiteral_15581);
    FUN_01bab630(&StringLiteral_15580);
    DAT_04568139 = 1;
    method = extraout_x1;
  }
  if (LKFALEIFDIO == 0) {
    pSVar1 = StringLiteral_15581;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
      pSVar1 = StringLiteral_15581;
    }
  }
  else {
    pSVar1 = OIGEODHOGMC__IBBMFNFIKPE
                       (POEIJGLGEED_TypeInfo->static_fields->FJPDEJPEHMI,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(StringLiteral_15580,pSVar1,StringLiteral_1100,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  pPVar2 = POEIJGLGEED_TypeInfo->static_fields;
  pSVar3 = pPVar2->ACECMFNGPII;
  if (pSVar3 != (System_Action_int__o *)0x0) {
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,LKFALEIFDIO,
               (pSVar3->fields).super.super.method);
    pPVar2 = POEIJGLGEED_TypeInfo->static_fields;
  }
  pPVar2->ACECMFNGPII = (System_Action_int__o *)0x0;
  thunk_FUN_01c20e04(POEIJGLGEED_TypeInfo->static_fields,0);
  return;
}

