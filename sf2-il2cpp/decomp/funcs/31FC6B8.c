// NLPJLHOEAOE$$KFBDPFEFKBE @ RVA 0x31FC6B8

void NLPJLHOEAOE__KFBDPFEFKBE(System_String_o *NNNKLEMIPHP,bool MJDICHGKPGE,MethodInfo *method)

{
  bool bVar1;
  int32_t JLAFGLDIFOC;
  ACHLOMELAJE_o *pAVar2;
  DOPEEDABNEK_o *__this;
  
  if ((DAT_04566df0 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566df0 = 1;
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    if (MJDICHGKPGE) {
      bVar1 = ACHLOMELAJE__GCBKEAIBFLO(pAVar2,NNNKLEMIPHP,true,(MethodInfo *)0x0);
    }
    else {
      bVar1 = ACHLOMELAJE__NLNGAENLEAA(pAVar2,NNNKLEMIPHP,(MethodInfo *)0x0);
    }
    if (!bVar1) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (MJDICHGKPGE) {
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
         (JLAFGLDIFOC = ACHLOMELAJE__EOEAKGGDBFH(pAVar2,(MethodInfo *)0x0),
         __this != (DOPEEDABNEK_o *)0x0)) {
        DOPEEDABNEK__NEKCODFNMLD(__this,NNNKLEMIPHP,JLAFGLDIFOC,(MethodInfo *)0x0);
        return;
      }
    }
    else if (__this != (DOPEEDABNEK_o *)0x0) {
      DOPEEDABNEK__DPDBMKPOOKH(__this,NNNKLEMIPHP,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

