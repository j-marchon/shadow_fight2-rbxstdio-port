// Nekki.SF2.GUI.Dialogs.SettingsDialog$$NMDMDBFMCKK @ RVA 0x3484D80

void Nekki_SF2_GUI_Dialogs_SettingsDialog__NMDMDBFMCKK
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,int64_t HOKBHLPPCAH,
               MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  PKHMIGFEJCL_o *pPVar2;
  System_Action_bool__o *BLMFLPJJMPF;
  UniRx_SerialDisposable_o *__this_00;
  DBNEEHGBCJD_o *NFDKMBAGHPD;
  
  if ((DAT_04568392 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsDialog_BELHPICEHOB__);
    DAT_04568392 = 1;
  }
  if ((__this->fields).MNIAKMGIEHL != false) {
    return;
  }
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar2 = (pNVar1->fields).QuestParameters, pPVar2 != (PKHMIGFEJCL_o *)0x0)) {
    (pPVar2->fields).POJBNHBGEBH = (__this->fields).CEEIJODIBOM;
    thunk_FUN_01c20e04();
    __this_00 = (__this->fields).LIFKALBPENI;
    if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable
                (__this_00,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      (__this->fields).MNIAKMGIEHL = true;
      NFDKMBAGHPD = (__this->fields).CEEIJODIBOM;
      BLMFLPJJMPF = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      NGFEKJBMGEB__OPFMHDIBOKE(NFDKMBAGHPD,BLMFLPJJMPF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

