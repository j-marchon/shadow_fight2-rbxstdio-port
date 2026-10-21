// LHKALFIIJKB$$MDNKBEAMMFO @ RVA 0x34FC7EC

void LHKALFIIJKB__MDNKBEAMMFO(MethodInfo *method)

{
  LHKALFIIJKB_c *pLVar1;
  System_Action_o **ppSVar2;
  System_Action_o *pSVar3;
  
  if ((DAT_0456882d & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_0456882d = 1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568907 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568907 = '\x01';
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pLVar1 = LHKALFIIJKB_TypeInfo;
  LHKALFIIJKB_TypeInfo->static_fields->_DPINOOGOIGD_k__BackingField = false;
  if (DAT_04568906 == '\0') {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568906 = '\x01';
    pLVar1 = LHKALFIIJKB_TypeInfo;
  }
  if ((pLVar1->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pLVar1 = LHKALFIIJKB_TypeInfo;
  }
  pSVar3 = pLVar1->static_fields->BPDJGLJFDGC;
  pLVar1->static_fields->_IKKBHKLDJLD_k__BackingField = true;
  if (pSVar3 != (System_Action_o *)0x0) {
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
    pLVar1 = LHKALFIIJKB_TypeInfo;
  }
  if ((pLVar1->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pLVar1 = LHKALFIIJKB_TypeInfo;
  }
  ppSVar2 = &pLVar1->static_fields->BPDJGLJFDGC;
  *ppSVar2 = (System_Action_o *)0x0;
  thunk_FUN_01c20e04(ppSVar2,0);
  return;
}

