// NHBBOEHHEKG$$GCFGNPFKBHN @ RVA 0x3053834

UnityAnimator_o * NHBBOEHHEKG__GCFGNPFKBHN(MethodInfo *method)

{
  bool bVar1;
  UnityAnimator_o **ppUVar2;
  UnityAnimator_o *pUVar3;
  
  if ((DAT_04565e63 & 1) == 0) {
    FUN_01bab630(&NHBBOEHHEKG_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<UnityAnimator>__);
    FUN_01bab630(&StringLiteral_10404);
    DAT_04565e63 = 1;
  }
  pUVar3 = NHBBOEHHEKG_TypeInfo->static_fields->BHLAIPNCPEJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityAnimator_o *)
             UnityEngine_Resources__Load<object>
                       (StringLiteral_10404,Method_UnityEngine_Resources_Load<UnityAnimator>__);
    ppUVar2 = &NHBBOEHHEKG_TypeInfo->static_fields->BHLAIPNCPEJ;
    *ppUVar2 = pUVar3;
    thunk_FUN_01c20e04(ppUVar2,pUVar3);
  }
  return NHBBOEHHEKG_TypeInfo->static_fields->BHLAIPNCPEJ;
}

