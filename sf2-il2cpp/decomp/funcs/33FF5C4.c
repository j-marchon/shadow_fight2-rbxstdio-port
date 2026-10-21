// MGNPHCAAEIO$$MPGHOPABJNB @ RVA 0x33FF5C4

bool MGNPHCAAEIO__MPGHOPABJNB(MethodInfo *method)

{
  bool bVar1;
  EEGDOGKBLNG_o *__this;
  ACHLOMELAJE_o *pAVar2;
  LPAPAMPGDFN_o *pLVar3;
  
  if ((DAT_04567fdb & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567fdb = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
    bVar1 = false;
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 == (ACHLOMELAJE_o *)0x0) goto LAB_034ff74c;
    if ((pAVar2->fields).FCEBIJCGJOL == false) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this == (EEGDOGKBLNG_o *)0x0) {
LAB_034ff74c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = EEGDOGKBLNG__NMFKMEFIIMP(__this,(MethodInfo *)0x0);
      if (!bVar1) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
           (pLVar3 = (pAVar2->fields).LMCDOMHENMC, pLVar3 != (LPAPAMPGDFN_o *)0x0)) {
          return (bool)((byte)~(byte)((uint)(pLVar3->fields).AMIMEMOELHE >> 0x18) >> 7);
        }
        goto LAB_034ff74c;
      }
    }
    bVar1 = true;
  }
  return bVar1;
}

