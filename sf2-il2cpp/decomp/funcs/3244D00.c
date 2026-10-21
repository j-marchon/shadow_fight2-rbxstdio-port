// CHDGOFBHAFI$$BHHNJDDGDHF @ RVA 0x3244D00

bool CHDGOFBHAFI__BHHNJDDGDHF(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  NODLJPNGNBG_o *pNVar4;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *extraout_x1;
  AADKBCFCLKK_o *IHODMKCBNKJ;
  
  if ((DAT_045670af & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045670af = 1;
    method = extraout_x1;
  }
  IHODMKCBNKJ = (__this->fields).AABMLCNHHPN;
  if (IHODMKCBNKJ == (AADKBCFCLKK_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_03344dac;
    iVar3 = EEGDOGKBLNG__NJNJAECEPCP(__this_00,(MethodInfo *)0x0);
    bVar2 = iVar3 == 3;
  }
  else {
    pNVar4 = CHDGOFBHAFI__AFHLHFMLNEO
                       ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                        (IHODMKCBNKJ->fields).MPAIPMANDEO,method);
    if (pNVar4 == (NODLJPNGNBG_o *)0x0) {
LAB_03344dac:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (pNVar4->fields).PFJPLCAIGJH;
    bVar2 = OOBBAGLCFPF__FLMDOPMDKID(IHODMKCBNKJ,(MethodInfo *)0x0);
    bVar2 = iVar1 != 3 && !bVar2;
  }
  return (bool)((__this->fields).KIAJFCGANAH | bVar2);
}

