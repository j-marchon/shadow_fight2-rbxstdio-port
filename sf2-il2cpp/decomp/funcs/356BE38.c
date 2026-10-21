// Nekki.SF2.GUI.Menu.MainMenu$$DisableScrollForever @ RVA 0x356BE38

void Nekki_SF2_GUI_Menu_MainMenu__DisableScrollForever
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Image_o *__this_01;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_01 = (__this->fields)._backgroundPicture;
  (__this->fields).NMKOOKOKJMP = false;
  if ((__this_01 != (UnityEngine_UI_Image_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

