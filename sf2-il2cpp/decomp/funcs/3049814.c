// EGMONPGHHDP$$PJKNOEOGFNM @ RVA 0x3049814

bool EGMONPGHHDP__PJKNOEOGFNM(EGMONPGHHDP_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *extraout_x1;
  System_String_o *BJEEDJEKAMF;
  JMDPBFOCHHP_JMEJFGKJNEA_o *pJVar2;
  
  if ((DAT_04565e07 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565e07 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  pJVar2 = (__this->fields)._BJALAALAIDH_k__BackingField;
  if (pJVar2 == (JMDPBFOCHHP_JMEJFGKJNEA_o *)0x0) {
    BJEEDJEKAMF = (System_String_o *)0x0;
  }
  else {
    BJEEDJEKAMF = (pJVar2->fields).GDAPNIKAOJK;
  }
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    iVar1 = EEGDOGKBLNG__APFFEAJBAEK(__this_00,BJEEDJEKAMF,(MethodInfo *)0x0);
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

