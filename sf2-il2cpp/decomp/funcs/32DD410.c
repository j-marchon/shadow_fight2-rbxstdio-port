// LJBDMDHNKFM$$GIMAJOGGBHM @ RVA 0x32DD410

void LJBDMDHNKFM__GIMAJOGGBHM(LJBDMDHNKFM_o *__this,MethodInfo *method)

{
  System_Action_array *DLOFGOGAGAA;
  System_Action_o *pSVar1;
  
  if ((DAT_045675d1 & 1) == 0) {
    FUN_01bab630(&System_Action___TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_LJBDMDHNKFM_EDMKBCNKKCH__);
    FUN_01bab630(&Method_LJBDMDHNKFM_EPEEGNGDGMH__);
    DAT_045675d1 = 1;
  }
  DLOFGOGAGAA = (System_Action_array *)FUN_01bab718(System_Action___TypeInfo,2);
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (DLOFGOGAGAA != (System_Action_array *)0x0) {
    if ((int)DLOFGOGAGAA->max_length != 0) {
      DLOFGOGAGAA->m_Items[0] = pSVar1;
      thunk_FUN_01c20e04(DLOFGOGAGAA->m_Items,pSVar1);
      pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (1 < (uint)DLOFGOGAGAA->max_length) {
        DLOFGOGAGAA->m_Items[1] = pSVar1;
        thunk_FUN_01c20e04(DLOFGOGAGAA->m_Items + 1,pSVar1);
        IKBGLDJFIJH__BOLHJAOMBCB((IKBGLDJFIJH_o *)__this,DLOFGOGAGAA,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

