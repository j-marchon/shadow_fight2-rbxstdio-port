// CHDGOFBHAFI$$PGFAHOMKNBL @ RVA 0x3246674

bool CHDGOFBHAFI__PGFAHOMKNBL(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NODLJPNGNBG_o *pNVar3;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *extraout_x1;
  AADKBCFCLKK_o *pAVar4;
  
  if ((DAT_045670be & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045670be = 1;
    method = extraout_x1;
  }
  pAVar4 = (__this->fields).AABMLCNHHPN;
  if (pAVar4 == (AADKBCFCLKK_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_03346718;
    iVar2 = EEGDOGKBLNG__NJNJAECEPCP(__this_00,(MethodInfo *)0x0);
    bVar1 = iVar2 == 3;
  }
  else {
    pNVar3 = CHDGOFBHAFI__AFHLHFMLNEO
                       ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                        (pAVar4->fields).MPAIPMANDEO,method);
    if (pNVar3 == (NODLJPNGNBG_o *)0x0) {
LAB_03346718:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (pNVar3->fields).PFJPLCAIGJH != 3;
  }
  return (bool)((__this->fields).KIAJFCGANAH == false & (bVar1 ^ 1U));
}

