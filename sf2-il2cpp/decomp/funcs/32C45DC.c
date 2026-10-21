// FEPCHKMAIBL$$MBLOPJIFOMC @ RVA 0x32C45DC

void FEPCHKMAIBL__MBLOPJIFOMC(MethodInfo *method)

{
  long lVar1;
  FEPCHKMAIBL_c *method_00;
  MethodInfo *method_01;
  FEPCHKMAIBL_StaticFields *pFVar2;
  System_Action_o *pSVar3;
  long lVar4;
  System_Object_array *args;
  
  if ((DAT_045674e7 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
    FUN_01bab630(&StringLiteral_15586);
    DAT_045674e7 = 1;
  }
  if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar2 = FEPCHKMAIBL_TypeInfo->static_fields;
  if (pFVar2->AIGNPODKOAH != (HOOAAGABMBL_o *)0x0) {
    if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pFVar2 = FEPCHKMAIBL_TypeInfo->static_fields;
    }
    pSVar3 = pFVar2->OBDBCPILHKI;
    if (pSVar3 != (System_Action_o *)0x0) {
      if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pSVar3 = FEPCHKMAIBL_TypeInfo->static_fields->OBDBCPILHKI;
        if (pSVar3 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
    }
  }
  lVar1 = Method_System_Array_Empty<object>__;
  lVar4 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
  if (lVar4 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<object>__);
    lVar4 = *(long *)(lVar1 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  args = (System_Object_array *)**(undefined8 **)(lVar1 + 0xb8);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogFormat(StringLiteral_15586,args,(MethodInfo *)0x0);
  method_00 = FEPCHKMAIBL_TypeInfo;
  if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (FEPCHKMAIBL_c *)thunk_FUN_01ba7564();
  }
  FEPCHKMAIBL__DGLJCGNHLIG((MethodInfo *)method_00);
  FEPCHKMAIBL__IKAAFAICDMD(method_01);
  return;
}

