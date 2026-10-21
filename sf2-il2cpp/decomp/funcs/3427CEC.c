// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$IJKMDJGGDKK @ RVA 0x3427CEC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__IJKMDJGGDKK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,float HKEAKFHICAN,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *transform;
  
  __this_00 = (__this->fields)._sandglass;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalRotationZ(transform,HKEAKFHICAN,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

