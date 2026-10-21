// EEGDOGKBLNG$$JMMFCMIIDHL @ RVA 0x306FCAC

void EEGDOGKBLNG__JMMFCMIIDHL
               (EEGDOGKBLNG_o *__this,System_String_o *KGLJICLJHEL,bool PKGIGLFCIBK,
               MethodInfo *method)

{
  AJOGJBFNELI_o *__this_00;
  System_String_o **ppSVar1;
  
  if ((DAT_04565f77 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565f77 = 1;
  }
  ppSVar1 = &(__this->fields).HONOOAELMFJ;
  *ppSVar1 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar1,KGLJICLJHEL);
  if (!PKGIGLFCIBK) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
  if (__this_00 != (AJOGJBFNELI_o *)0x0) {
    AJOGJBFNELI__JMMFCMIIDHL(__this_00,*ppSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

