// Nekki.SF2.GUI.Profile.PerkCell$$OnDestroy @ RVA 0x353F580

void Nekki_SF2_GUI_Profile_PerkCell__OnDestroy
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_PerkSubItem_o *pNVar1;
  
  Nekki_SF2_GUI_TableViewCell__OnDestroy((Nekki_SF2_GUI_TableViewCell_o *)__this,(MethodInfo *)0x0);
  pNVar1 = (__this->fields)._LeftSubItem;
  if (pNVar1 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
    SFButton__RemoveAllEventListener((SFButton_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._RightSubItem;
    if (pNVar1 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
      SFButton__RemoveAllEventListener((SFButton_o *)pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

