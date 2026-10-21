// CJFBGEEIPBA$$DMJNFPEFGNH @ RVA 0x3364C2C

void CJFBGEEIPBA__DMJNFPEFGNH(CJFBGEEIPBA_o *__this,MethodInfo *method)

{
  bool bVar1;
  CFMDGLMCNIL_o *pCVar2;
  OHPOFOPJIMB_o *KCPFFLHCCIN;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567ac6 & 1) == 0) {
    FUN_01bab630(&BNFLOPOMMFN_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567ac6 = 1;
    method = extraout_x1;
  }
  bVar1 = CJFBGEEIPBA__EDBDHGCEMEA(__this,method);
  if (!bVar1) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar2 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
  if (pCVar2 != (CFMDGLMCNIL_o *)0x0) {
    bVar1 = CFMDGLMCNIL__JGKFPAAOBOO(pCVar2,2,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    KCPFFLHCCIN = (OHPOFOPJIMB_o *)thunk_FUN_01bda818(BNFLOPOMMFN_TypeInfo);
    BNFLOPOMMFN___ctor((BNFLOPOMMFN_o *)KCPFFLHCCIN,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar2 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
    if (pCVar2 != (CFMDGLMCNIL_o *)0x0) {
      CFMDGLMCNIL__MPFFOIIBAKO(pCVar2,KCPFFLHCCIN,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

