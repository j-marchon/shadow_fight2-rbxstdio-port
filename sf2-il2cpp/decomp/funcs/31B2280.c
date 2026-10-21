// IFFFKKMMKFO$$LLCONNGHGKD @ RVA 0x31B2280

void IFFFKKMMKFO__LLCONNGHGKD(IFFFKKMMKFO_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  int32_t iVar1;
  GKLPDMLELJF_o **ppGVar2;
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar3;
  System_DateTime_o SVar4;
  
  if ((DAT_04566b87 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566b87 = 1;
  }
  if (HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) {
    iVar1 = (HEHMPFLAEGE->fields).PFJPLCAIGJH;
    ppGVar2 = &(__this->fields)._IPNPNPOLCFO_k__BackingField;
    *ppGVar2 = HEHMPFLAEGE;
    (__this->fields).IEONGHCHNNA = iVar1;
    thunk_FUN_01c20e04(ppGVar2,HEHMPFLAEGE);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      iVar3 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
      (__this->fields)._FPBBMLACBJE_k__BackingField = iVar3 == (HEHMPFLAEGE->fields).ANAJGHJEEOC;
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      SVar4 = System_DateTime__get_Now((MethodInfo *)0x0);
      (__this->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData =
           (uint64_t)SVar4.fields._dateData;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

