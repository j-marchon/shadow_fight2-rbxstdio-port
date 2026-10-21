// Nekki.SF2.GUI.Pvp.PhaseItem$$Show @ RVA 0x30B0A54

void Nekki_SF2_GUI_Pvp_PhaseItem__Show(Nekki_SF2_GUI_Pvp_PhaseItem_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    __this_01 = (__this->fields).icon;
    if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      UnityEngine_UI_Image__set_sprite
                ((UnityEngine_UI_Image_o *)__this_01,(__this->fields).ActiveIcon,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x031b0a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._9_UpdateContent.methodPtr)
                (__this,(__this->klass->vtable)._9_UpdateContent.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

