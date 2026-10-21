// MGNPHCAAEIO$$BJIAIGCNFDJ @ RVA 0x33FE520

bool MGNPHCAAEIO__BJIAIGCNFDJ(MethodInfo *method)

{
  bool bVar1;
  EGMONPGHHDP_o *__this;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar2;
  MethodInfo *in_x1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04567fce & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 034fe558 to 035fe55f has its CatchHandler @ 034fe6d4 */
                    /* try { // try from 034fe560 to 035fe687 has its CatchHandler @ 034fe14c */
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_16774);
    DAT_04567fce = 1;
    in_x1 = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    in_x1 = extraout_x1_00;
  }
  bVar1 = MGNPHCAAEIO__HDEOLJBKIHJ(true,in_x1);
  if (bVar1) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
    if (__this == (EGMONPGHHDP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pJVar2 = EGMONPGHHDP__OKBKFJKEAAG(__this,(MethodInfo *)0x0);
    if (pJVar2 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
      return true;
    }
    JJPNLEPEAFM__JNDPLPKDPCP
              (StringLiteral_17850,StringLiteral_16774,StringLiteral_9679,StringLiteral_1,
               (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,true,true,
               (MethodInfo *)0x0);
  }
  return false;
}

