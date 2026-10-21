// NFFDIPBFJHP$$IHDPANHELNM @ RVA 0x32BB0B8

void NFFDIPBFJHP__IHDPANHELNM(NFFDIPBFJHP_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  NLBPJNEGNNM_o *FGHHCGFBDKF;
  CFMDGLMCNIL_o *__this_00;
  BAOGEGACLOH_o *__this_01;
  GLPEFEEGCPM_o *CJNHFNHJHPE;
  
  if ((DAT_0456748f & 1) == 0) {
    FUN_01bab630(&BAOGEGACLOH_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<NLBPJNEGNNM>__);
    DAT_0456748f = 1;
  }
  if ((IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) &&
     (FGHHCGFBDKF = (NLBPJNEGNNM_o *)
                    KEFHDOHHHML__PFNEPJAFEDF<object>
                              (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<NLBPJNEGNNM>__),
     FGHHCGFBDKF != (NLBPJNEGNNM_o *)0x0)) {
    CJNHFNHJHPE = (FGHHCGFBDKF->fields).IIIJBPAFNNF;
    if (CJNHFNHJHPE != (GLPEFEEGCPM_o *)0x0) {
      (__this->fields)._OHJMKJNDJPN_k__BackingField = CJNHFNHJHPE;
      thunk_FUN_01c20e04(&__this->fields,CJNHFNHJHPE);
      NFFDIPBFJHP__PFMBOAKNNOI(__this,CJNHFNHJHPE,method);
      NFFDIPBFJHP__BOJEECFKPBD(__this,CJNHFNHJHPE,method);
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
    __this_01 = (BAOGEGACLOH_o *)thunk_FUN_01bda818(BAOGEGACLOH_TypeInfo);
    BAOGEGACLOH___ctor(__this_01,FGHHCGFBDKF,(MethodInfo *)0x0);
    if (__this_00 != (CFMDGLMCNIL_o *)0x0) {
      CFMDGLMCNIL__MPFFOIIBAKO(__this_00,(OHPOFOPJIMB_o *)__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

