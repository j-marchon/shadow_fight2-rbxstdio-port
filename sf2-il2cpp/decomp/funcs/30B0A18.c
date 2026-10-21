// Nekki.SF2.GUI.Pvp.PhaseItem$$Hide @ RVA 0x30B0A18

void Nekki_SF2_GUI_Pvp_PhaseItem__Hide(Nekki_SF2_GUI_Pvp_PhaseItem_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields).icon;
    if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      UnityEngine_UI_Image__set_sprite
                ((UnityEngine_UI_Image_o *)__this_01,(__this->fields).InactiveIcon,(MethodInfo *)0x0
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

