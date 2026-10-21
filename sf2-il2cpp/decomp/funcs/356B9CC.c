// Nekki.SF2.GUI.Menu.MainMenu$$CloseMenu @ RVA 0x356B9CC

void Nekki_SF2_GUI_Menu_MainMenu__CloseMenu
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,float PNEIGGOFIOA,MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = (__this->fields)._backgroundPicture;
  if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
    Nekki_SF2_GUI_Menu_MenuScroll__Collapse
              ((Nekki_SF2_GUI_Menu_MenuScroll_o *)__this_00,PNEIGGOFIOA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

