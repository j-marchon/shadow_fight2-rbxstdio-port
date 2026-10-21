// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$SetRefreshButtonVisible @ RVA 0x3026E14

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__SetRefreshButtonVisible
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pNVar1 = (__this->fields)._taskRefreshBtn;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 03126e40 to 03226efb has its CatchHandler @ 03126e40
                       catch() { ... } // from try @ 03126e40 with catch @ 03126e40
                       catch() { ... } // from try @ 03126f70 with catch @ 03126e40
                       catch() { ... } // from try @ 03126fc0 with catch @ 03126e40
                       catch() { ... } // from try @ 03126fec with catch @ 03126e40
                       catch() { ... } // from try @ 0312701c with catch @ 03126e40 */
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._taskRefreshBtn;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

