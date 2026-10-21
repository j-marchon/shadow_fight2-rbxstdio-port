// MainMenuRaidRatingPanel$$HMOFDGEDBCL @ RVA 0x32BD62C

void MainMenuRaidRatingPanel__HMOFDGEDBCL(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *pKVar1;
  DCHAJIMIFHP_o *__this_00;
  PLIIGOCLJDL_o *__this_01;
  System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE;
  EEOMEMBBGNA_o *__this_02;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE_00;
  
  if ((DAT_045674a5 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_KFBJGJHEIHC__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_NLBPEFENJIK__);
    DAT_045674a5 = 1;
  }
  pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((pKVar1 != (KKLJIDJBFEI_o *)0x0) &&
     (__this_00 = (pKVar1->fields).super.FNHOHLGNHGN, __this_00 != (DCHAJIMIFHP_o *)0x0)) {
    DCHAJIMIFHP__GMNFJKHEJLO(__this_00,(Il2CppObject *)__this,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_JCFJFJCKLKG__o *)
                  thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (PLIIGOCLJDL_o *)0x0) {
      PLIIGOCLJDL__IJMELLFDCDD(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_02 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      CJNHFNHJHPE_00 =
           (System_Action_OJEHKJHEBID__o *)thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (EEOMEMBBGNA_o *)0x0) {
        EEOMEMBBGNA__OKAMOFKHOLK(__this_02,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

