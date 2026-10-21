// LHEANFBMAAI$$BHCOJOPEOHH @ RVA 0x31AEEA0

void LHEANFBMAAI__BHCOJOPEOHH(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar1;
  
  method_00 = (MethodInfo *)(ulong)(uint)BKFOLMBMFNP;
  if ((DAT_04566b6d & 1) == 0) {
    method_00 = (MethodInfo *)FUN_01bab630(&LHEANFBMAAI_TypeInfo);
    DAT_04566b6d = 1;
  }
  if (BKFOLMBMFNP == 0xd) {
    pSVar1 = LHEANFBMAAI_TypeInfo->static_fields->AEDKMCHPODL;
    if (pSVar1 != (System_Action_o *)0x0) {
      method_00 = (MethodInfo *)
                  (*(code *)(pSVar1->fields).super.super.invoke_impl)
                            ((pSVar1->fields).super.super.method_code,
                             (pSVar1->fields).super.super.method);
    }
    LHEANFBMAAI__DGLJCGNHLIG(method_00);
    LHEANFBMAAI__IKAAFAICDMD(method_01);
    return;
  }
  return;
}

