// FDEOKGMPLBK$$MALGBADKPKB @ RVA 0x35057E8

void FDEOKGMPLBK__MALGBADKPKB(int32_t JEGMMDPFNIL,int32_t KMOHFJKJBMK,MethodInfo *method)

{
  long lVar1;
  System_Action_int__int__o *pSVar2;
  long lVar3;
  System_Object_array *args;
  
  if ((DAT_04568896 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__,KMOHFJKJBMK);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FDEOKGMPLBK_TypeInfo);
    FUN_01bab630(&StringLiteral_15549);
    DAT_04568896 = 1;
  }
  pSVar2 = FDEOKGMPLBK_TypeInfo->static_fields->HILLNHJFECF;
  if (pSVar2 != (System_Action_int__int__o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,JEGMMDPFNIL,KMOHFJKJBMK,
               (pSVar2->fields).super.super.method);
  }
  lVar1 = Method_System_Array_Empty<object>__;
  lVar3 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
  if (lVar3 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<object>__);
    lVar3 = *(long *)(lVar1 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
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
  UnityEngine_Debug__LogFormat(StringLiteral_15549,args,(MethodInfo *)0x0);
  return;
}

