// LHOMEBJDFLD$$GJPGOHOAMEJ @ RVA 0x30235E8

void LHOMEBJDFLD__GJPGOHOAMEJ(LHOMEBJDFLD_o *__this,MethodInfo *method)

{
  int iVar1;
  JMDPBFOCHHP_o *__this_00;
  HJEODECHNDG_o *pHVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c71 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565c71 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).JPKAGHPLAJP + 1;
  (__this->fields).JPKAGHPLAJP = iVar1;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((__this_00 != (JMDPBFOCHHP_o *)0x0) &&
     (pHVar2 = JMDPBFOCHHP__KAPJBGIIHAA(__this_00,(MethodInfo *)0x0), pHVar2 != (HJEODECHNDG_o *)0x0
     )) {
    if ((pHVar2->fields)._AILJEMBFDKM_k__BackingField <= iVar1) {
      (__this->fields).JPKAGHPLAJP = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

