// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$GetBuyHornsBtn @ RVA 0x326F048

LabelButton_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__GetBuyHornsBtn
          (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *pNVar1;
  
  pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__GetHornsContainer(__this,method);
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0) {
    return (pNVar1->fields)._consumableButton;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

