// EEGDOGKBLNG$$OHDDLJKGLGA @ RVA 0x306EB48

int32_t EEGDOGKBLNG__OHDDLJKGLGA
                  (EEGDOGKBLNG_o *__this,System_String_o *FLMDPLPNBFC,MethodInfo *method)

{
  int32_t iVar1;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar2;
  MethodInfo *method_00;
  
  if ((DAT_04565f4f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565f4f = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (__this_00 != (JMDPBFOCHHP_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pJVar2 = JMDPBFOCHHP__FPPDGOEOJCH(__this_00,FLMDPLPNBFC,(MethodInfo *)0x0);
    if (pJVar2 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) {
      iVar1 = EEGDOGKBLNG__OHCGFHJNEGO(__this,FLMDPLPNBFC,method_00);
      return iVar1;
    }
    iVar1 = EEGDOGKBLNG__APFFEAJBAEK(__this,FLMDPLPNBFC,method_00);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

