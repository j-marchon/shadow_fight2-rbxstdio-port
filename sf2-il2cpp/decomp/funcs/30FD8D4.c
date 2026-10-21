// EJALJLHMDHM$$NDJAJHFFPKP @ RVA 0x30FD8D4

void EJALJLHMDHM__NDJAJHFFPKP(EJALJLHMDHM_o *__this,MethodInfo *method)

{
  System_Action_CFEFALDOEMD__o *CJNHFNHJHPE;
  System_Action_BKLDKOMCOPN__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  DGGBFKNKEAH_o *pDVar1;
  
  if ((DAT_045664a4 & 1) == 0) {
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Action<BKLDKOMCOPN>_TypeInfo);
    FUN_01bab630(&Method_EJALJLHMDHM_IHKHIJONLCM__);
    FUN_01bab630(&Method_EJALJLHMDHM_JCLPLBEJHGM__);
    DAT_045664a4 = 1;
    method = extraout_x1;
  }
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo,method);
    DAT_045655e8 = '\x01';
  }
  pDVar1 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  CJNHFNHJHPE = (System_Action_CFEFALDOEMD__o *)
                thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
  System_Action<object>___ctor();
  if (pDVar1 != (DGGBFKNKEAH_o *)0x0) {
    DGGBFKNKEAH__MJJEHFDLAHD(pDVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar1 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    CJNHFNHJHPE_00 =
         (System_Action_BKLDKOMCOPN__o *)thunk_FUN_01bda818(System_Action<BKLDKOMCOPN>_TypeInfo);
    System_Action<object>___ctor();
    if (pDVar1 != (DGGBFKNKEAH_o *)0x0) {
      DGGBFKNKEAH__AHKPBJGPOMH(pDVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

