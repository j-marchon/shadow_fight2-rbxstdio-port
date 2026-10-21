// Nekki.SF2.GUI.Profile.ProfileScene$$HFBCLPBICGN @ RVA 0x339655C

void Nekki_SF2_GUI_Profile_ProfileScene__HFBCLPBICGN
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,
               Nekki_SF2_GUI_Profile_SealsTableViewCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_InfoPanel_o *__this_00;
  
  if ((AHICPBEJIKJ != (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *)0x0) &&
     (__this_00 = (__this->fields)._RightPanel,
     __this_00 != (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0)) {
    Nekki_SF2_GUI_Profile_InfoPanel__Refresh
              (__this_00,(AHICPBEJIKJ->fields)._AHFHJKDMDMO_k__BackingField,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

