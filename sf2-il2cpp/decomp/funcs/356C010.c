// Nekki.SF2.GUI.Menu.MainMenu$$BLBMLOBNODO @ RVA 0x356C010

void Nekki_SF2_GUI_Menu_MainMenu__BLBMLOBNODO
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = *(UnityEngine_Component_o **)&(__this->fields).TopMenuDefaultInteraction;
  if ((__this_00 != (UnityEngine_Component_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

