// MGNPHCAAEIO$$MIMCOKNNKOM @ RVA 0x340A8A0

void MGNPHCAAEIO__MIMCOKNNKOM(System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  bool bVar1;
  int32_t length;
  JMDPBFOCHHP_o *__this;
  JMDPBFOCHHP_ODJJOAOCFKO_o *pJVar2;
  MethodInfo *extraout_x1;
  System_String_o *pSVar3;
  
  if ((DAT_0456805b & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_1377);
    DAT_0456805b = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (__this != (JMDPBFOCHHP_o *)0x0) {
    pJVar2 = JMDPBFOCHHP__DOKLIOAMCCO(__this,CNIELFLIKJB,(MethodInfo *)0x0);
    if (pJVar2 != (JMDPBFOCHHP_ODJJOAOCFKO_o *)0x0) {
      pSVar3 = (pJVar2->fields).KPDPJONADPJ;
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar3,(MethodInfo *)0x0);
      if (!bVar1) {
        if (pSVar3 != (System_String_o *)0x0) {
          length = System_String__IndexOf(pSVar3,StringLiteral_1377,(MethodInfo *)0x0);
          pSVar3 = System_String__Substring(pSVar3,0,length,(MethodInfo *)0x0);
          if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo);
          }
          AMHFFFODDOC__MMHFNAEHAKC(pSVar3,(MethodInfo *)0x0);
          return;
        }
        goto LAB_0350a99c;
      }
    }
    return;
  }
LAB_0350a99c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

