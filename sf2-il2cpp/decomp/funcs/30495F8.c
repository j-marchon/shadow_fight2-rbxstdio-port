// EGMONPGHHDP$$GIENGNEGHPJ @ RVA 0x30495F8

void EGMONPGHHDP__GIENGNEGHPJ(EGMONPGHHDP_o *__this,MethodInfo *method)

{
  JMDPBFOCHHP_o *pJVar1;
  FKDLCJJOGIP_o *__this_00;
  System_Action_o *pSVar2;
  EEGDOGKBLNG_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565dfc & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_EGMONPGHHDP_MEDCMFMKLED__);
    FUN_01bab630(&Method_EGMONPGHHDP_OGPINCKBAKE__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565dfc = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar1 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar1 != (JMDPBFOCHHP_o *)0x0) {
    (__this->fields)._BJALAALAIDH_k__BackingField = (pJVar1->fields)._NFFDCNIMBHK_k__BackingField;
    thunk_FUN_01c20e04();
    __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
      FKDLCJJOGIP__AJLLLOFFOHF(__this_00,pSVar2,(MethodInfo *)0x0);
      __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
        EEGDOGKBLNG__DNJPBDHOMOI(__this_01,pSVar2,(MethodInfo *)0x0);
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MGNPHCAAEIO_TypeInfo->static_fields->BIJJALJHKCD = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

