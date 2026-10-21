// LHKALFIIJKB$$AKJIEMOLNCN @ RVA 0x34FFE94

bool LHKALFIIJKB__AKJIEMOLNCN(System_String_o *ANFFJMOAGKD,MethodInfo *method)

{
  bool bVar1;
  MGAGKCEDNNN_c *method_00;
  System_String_o *LFGKEPCBPKF;
  GCFHEEKPCPJ_o *__this;
  
  if ((DAT_0456884a & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&MGAGKCEDNNN_TypeInfo);
    DAT_0456884a = 1;
  }
  bVar1 = System_String__IsNullOrEmpty(ANFFJMOAGKD,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if ((MGAGKCEDNNN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (GCFHEEKPCPJ_o *)MGAGKCEDNNN_TypeInfo->static_fields->EGHMLJDHLPK;
  method_00 = MGAGKCEDNNN_TypeInfo;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGAGKCEDNNN_c *)thunk_FUN_01ba7564(LHKALFIIJKB_TypeInfo);
  }
  LFGKEPCBPKF = LHKALFIIJKB__FPOJCJJJGAD((MethodInfo *)method_00);
  if (__this != (GCFHEEKPCPJ_o *)0x0) {
    bVar1 = GCFHEEKPCPJ__PGLHACKJLMF
                      (__this,LFGKEPCBPKF,ANFFJMOAGKD,(System_String_o *)0x0,5,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

