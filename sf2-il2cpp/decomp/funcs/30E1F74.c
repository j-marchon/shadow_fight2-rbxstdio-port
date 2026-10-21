// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$GetCooldownFinishTime @ RVA 0x30E1F74

int64_t Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__GetCooldownFinishTime
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar1;
  
  pNVar1 = (__this->fields)._raidInfoSprite;
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    return (pNVar1->fields).HODAIAEDHBL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

