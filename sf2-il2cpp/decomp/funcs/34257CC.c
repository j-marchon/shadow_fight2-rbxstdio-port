// BNFLOPOMMFN$$IKDPMKOIDMP @ RVA 0x34257CC

void BNFLOPOMMFN__IKDPMKOIDMP(BNFLOPOMMFN_o *__this,MethodInfo *method)

{
  EEOMEMBBGNA_o *pEVar1;
  CJFBGEEIPBA_o *pCVar2;
  NLFLMJPNOLF_o *NLOFDAJCIML;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568106 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568106 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if ((pEVar1 != (EEOMEMBBGNA_o *)0x0) &&
     (pCVar2 = (pEVar1->fields).GMNJEBCECDA, pCVar2 != (CJFBGEEIPBA_o *)0x0)) {
    CJFBGEEIPBA__HOMIFFIACAC(pCVar2,(MethodInfo *)0x0);
    pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    if ((pEVar1 != (EEOMEMBBGNA_o *)0x0) &&
       (pCVar2 = (pEVar1->fields).GMNJEBCECDA, pCVar2 != (CJFBGEEIPBA_o *)0x0)) {
      NLOFDAJCIML = CJFBGEEIPBA__PCKHIBMJKJG(pCVar2,(MethodInfo *)0x0);
      if ((NLOFDAJCIML != (NLFLMJPNOLF_o *)0x0) && ((NLOFDAJCIML->fields).BHAOPCFDKCG == false)) {
        JJPNLEPEAFM__LKDGKEJFPLL(NLOFDAJCIML,(MethodInfo *)0x0);
      }
      OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

