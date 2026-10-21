// Nekki.SF2.GUI.ResolutionImageAvatar$$SetHighModeScale @ RVA 0x3227F14

void Nekki_SF2_GUI_ResolutionImageAvatar__SetHighModeScale
               (Nekki_SF2_GUI_ResolutionImageAvatar_o *__this,float JKOJPEKLBCI,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o value;
  
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    value.fields.y = JKOJPEKLBCI;
    value.fields.x = JKOJPEKLBCI;
    value.fields.z = 0.0;
    UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

