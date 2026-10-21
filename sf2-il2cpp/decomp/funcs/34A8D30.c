// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_IsSelectionCooldown @ RVA 0x34A8D30

bool Nekki_SF2_GUI_Profile_UserPerksPanel__get_IsSelectionCooldown
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  float fVar2;
  float fVar3;
  
  pNVar1 = (__this->fields)._TableView;
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    fVar2 = Nekki_SF2_GUI_TableView__get_DistanceToTarget(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._TableView;
    if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      fVar3 = Nekki_SF2_GUI_TableView__CurrentRowSize(pNVar1,(MethodInfo *)0x0);
                    /* try { // try from 035a8d70 to 036a8d97 has its CatchHandler @ 035a8dac */
      return fVar3 * 0.25 < fVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

