// LHKALFIIJKB$$PADAJCPPCBJ @ RVA 0x34FDF28

void LHKALFIIJKB__PADAJCPPCBJ(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Action_o *pSVar2;
  
  if ((DAT_04568836 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_04568836 = 1;
    method = extraout_x1;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = LHKALFIIJKB_TypeInfo->static_fields->DEAACLMEHIB;
  if (pSVar2 != (System_Action_o *)0x0) {
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
      pSVar2 = LHKALFIIJKB_TypeInfo->static_fields->DEAACLMEHIB;
      if (pSVar2 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    method = extraout_x1_01;
  }
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo,method);
  }
                    /* try { // try from 035fdfb8 to 036fe19b has its CatchHandler @ 035fdfb8
                       catch() { ... } // from try @ 035fdfb8 with catch @ 035fdfb8
                       catch() { ... } // from try @ 035fe224 with catch @ 035fdfb8
                       catch() { ... } // from try @ 035fe2ec with catch @ 035fdfb8
                       catch() { ... } // from try @ 035fe314 with catch @ 035fdfb8
                       catch() { ... } // from try @ 035fe348 with catch @ 035fdfb8 */
  ppSVar1 = &LHKALFIIJKB_TypeInfo->static_fields->DEAACLMEHIB;
  *ppSVar1 = (System_Action_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}

