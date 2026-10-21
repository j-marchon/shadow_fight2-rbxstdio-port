// LHKALFIIJKB$$KNNAJOALOGD @ RVA 0x3501E40

void LHKALFIIJKB__KNNAJOALOGD(System_Action_o *AFOFPOOEFHF,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  LHKALFIIJKB_StaticFields *pLVar1;
  
  if ((DAT_04568859 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568859 = 1;
    method = extraout_x1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
    method = extraout_x1_00;
  }
  pLVar1 = LHKALFIIJKB_TypeInfo->static_fields;
  if (pLVar1->FBAFKMAMBCC == false) {
    if (AFOFPOOEFHF != (System_Action_o *)0x0) {
      (*(code *)(AFOFPOOEFHF->fields).super.super.invoke_impl)
                ((AFOFPOOEFHF->fields).super.super.method_code,
                 (AFOFPOOEFHF->fields).super.super.method);
    }
  }
  else {
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
      pLVar1 = LHKALFIIJKB_TypeInfo->static_fields;
    }
    pLVar1->DEAACLMEHIB = AFOFPOOEFHF;
    thunk_FUN_01c20e04(&pLVar1->DEAACLMEHIB,AFOFPOOEFHF);
    LHKALFIIJKB__JPNONJJNIFE(true,method_00);
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LHKALFIIJKB_TypeInfo->static_fields->FBAFKMAMBCC = false;
  return;
}

