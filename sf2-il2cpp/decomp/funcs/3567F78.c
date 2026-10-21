// CIOBNDOOGIM$$ADMCIAPJFAC @ RVA 0x3567F78

void CIOBNDOOGIM__ADMCIAPJFAC(MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  NDPMLPGANCI_o *__this;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE_00;
  CIOBNDOOGIM_StaticFields *pCVar1;
  
  if ((DAT_04568c05 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_CIOBNDOOGIM_BBPJEPAGOLO__);
    FUN_01bab630(&Method_CIOBNDOOGIM_BHLHBBKAFHH__);
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_04568c05 = 1;
  }
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar1 = CIOBNDOOGIM_TypeInfo->static_fields;
  if (pCVar1->DHKAODBNGNJ != false) {
    if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pCVar1 = CIOBNDOOGIM_TypeInfo->static_fields;
    }
    pCVar1->DHKAODBNGNJ = false;
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
    __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    CJNHFNHJHPE_00 =
         (System_Action_DBMPKPJGIPI__o *)thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (__this != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__ILJKHKMFKAJ(__this,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

