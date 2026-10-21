// Nekki.SF2.GUI.Dialogs.LotteryDialog$$CFAECCGMCDA @ RVA 0x328BA24

void Nekki_SF2_GUI_Dialogs_LotteryDialog__CFAECCGMCDA
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  CloseButton_o *__this_00;
  
  __this_00 = (__this->fields).BtnQuit;
  if (__this_00 != (CloseButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this_00,true,(MethodInfo *)0x0);
    (__this->fields).super.IsIgnoreBack = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

