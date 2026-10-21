// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell.AHGJCHALMGM$$BLDOJKNFHPC @ RVA 0x3029B00

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM__BLDOJKNFHPC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *pNVar1;
  
  pNVar1 = (__this->fields).__4__this;
  if (((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)0x0) &&
      (__this_00 = (pNVar1->fields)._TaskRefreshADViewsLabel,
      __this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

