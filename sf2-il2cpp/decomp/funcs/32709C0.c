// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$OnDestroy @ RVA 0x32709C0

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  NDPMLPGANCI_o *__this_01;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  System_Action_o *CJNHFNHJHPE_00;
  EEGDOGKBLNG_o *__this_02;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE_01;
  
  if ((DAT_04567222 & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_BHLHBBKAFHH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_GBODNEDLIDF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_JNKINOCEKIE__);
    DAT_04567222 = 1;
  }
  __this_00 = (__this->fields).HBJPBPBIOOB;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                  thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (__this_01 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__ILJKHKMFKAJ(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE_00,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      CJNHFNHJHPE_01 =
           (System_Action_IList_PIADCKMDDAK___o *)
           thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (EEGDOGKBLNG_o *)0x0) {
        EEGDOGKBLNG__GFFGLIEOPGO(__this_02,CJNHFNHJHPE_01,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__OnDestroy
                  ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

