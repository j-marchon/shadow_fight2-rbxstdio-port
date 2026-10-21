// KKLJIDJBFEI$$BLPKMFJEHPB @ RVA 0x3149BA0

void KKLJIDJBFEI__BLPKMFJEHPB(KKLJIDJBFEI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  PGICCMFLDPI_o *CMBDFLEHOEH;
  CFMDGLMCNIL_o *__this_00;
  NHMNDJDBIIB_o *__this_01;
  
  if ((DAT_045667a0 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<PGICCMFLDPI>__);
    FUN_01bab630(&NHMNDJDBIIB_TypeInfo);
    DAT_045667a0 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    CMBDFLEHOEH = (PGICCMFLDPI_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<PGICCMFLDPI>__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_00 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
    __this_01 = (NHMNDJDBIIB_o *)thunk_FUN_01bda818(NHMNDJDBIIB_TypeInfo);
    NHMNDJDBIIB___ctor(__this_01,CMBDFLEHOEH,(MethodInfo *)0x0);
    if (__this_00 != (CFMDGLMCNIL_o *)0x0) {
      CFMDGLMCNIL__MPFFOIIBAKO(__this_00,(OHPOFOPJIMB_o *)__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

