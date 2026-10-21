// CLFCKIFNGHA$$GMENDOGOHMH @ RVA 0x3455328

void CLFCKIFNGHA__GMENDOGOHMH(System_String_o *AFKICLAFDKC,bool CNADELPLGPE,MethodInfo *method)

{
  IAGNPGHOAIC_o *IEKGHPACLPF;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  method_00 = (MethodInfo *)(ulong)CNADELPLGPE;
  if ((DAT_045682c3 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    DAT_045682c3 = 1;
    method_00 = extraout_x1;
  }
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  IEKGHPACLPF = CLFCKIFNGHA__GJJHPEFOHON(AFKICLAFDKC,method_00);
  if (IEKGHPACLPF != (IAGNPGHOAIC_o *)0x0) {
    if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CLFCKIFNGHA__GMENDOGOHMH(IEKGHPACLPF,CNADELPLGPE,method);
    return;
  }
  return;
}

