// Nekki.SF2.GUI.Map.MapButtonsPanel$$HideEventButtonNotificator @ RVA 0x3593FC8

void Nekki_SF2_GUI_Map_MapButtonsPanel__HideEventButtonNotificator
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButton_o *__this_00;
  
  __this_00 = (__this->fields).APPEDOFGLKO;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
    Nekki_SF2_GUI_Map_MapButton__set_NotificatorEnabled(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

