// GJFEBGNFFBA$$BJMKPONFOPK @ RVA 0x3253740

void GJFEBGNFFBA__BJMKPONFOPK(MethodInfo *method)

{
  System_Diagnostics_Stopwatch_o *pSVar1;
  
  if ((DAT_0456714a & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_0456714a = 1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = GJFEBGNFFBA_TypeInfo->static_fields->BBLPIKDNJPI;
  if (pSVar1 != (System_Diagnostics_Stopwatch_o *)0x0) {
    System_Diagnostics_Stopwatch__Reset(pSVar1,(MethodInfo *)0x0);
    pSVar1 = GJFEBGNFFBA_TypeInfo->static_fields->BBLPIKDNJPI;
    if (pSVar1 != (System_Diagnostics_Stopwatch_o *)0x0) {
      System_Diagnostics_Stopwatch__Start(pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

