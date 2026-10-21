// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$SetBtnFightValueBorders_MS @ RVA 0x3270050

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__SetBtnFightValueBorders_MS
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,int64_t PEOMJHJICCM,
               int64_t GKBCJOEFFCP,MethodInfo *method)

{
  ProgressLabelButton_o *pPVar1;
  float CJNHFNHJHPE;
  
  pPVar1 = (__this->fields)._btnFight;
  if (pPVar1 != (ProgressLabelButton_o *)0x0) {
    ProgressLabelButton__SetProgBarValueBorders
              (pPVar1,(float)PEOMJHJICCM,(float)GKBCJOEFFCP,(MethodInfo *)0x0);
    pPVar1 = (__this->fields)._btnFight;
    if (pPVar1 != (ProgressLabelButton_o *)0x0) {
      CJNHFNHJHPE = ProgressLabelButton__MaxValue(pPVar1,(MethodInfo *)0x0);
      ProgressLabelButton__SetValue(pPVar1,CJNHFNHJHPE,0.0,(System_Action_o *)0x0,(MethodInfo *)0x0)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

