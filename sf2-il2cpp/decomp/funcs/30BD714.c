// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$JMPLJLIDLEG @ RVA 0x30BD714

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__JMPLJLIDLEG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  int32_t LDIJJJNLEII;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_0456625b & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_0456625b = 1;
  }
  pNVar1 = (__this->fields)._seasFinNewDanContent;
  if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._seasFinNewDanContent;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LDIJJJNLEII = LIIFLGALGNK__HLMBDJOGONJ(2,7,(MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__Init(pNVar1,LDIJJJNLEII,(MethodInfo *)0x0);
      (__this->fields).GHNIJFGJPKJ =
           (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)
           (__this->fields)._seasFinNewDanContent;
      thunk_FUN_01c20e04(&(__this->fields).GHNIJFGJPKJ);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

