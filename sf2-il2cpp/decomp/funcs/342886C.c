// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$DKGKMOKJLHM @ RVA 0x342886C

float Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__DKGKMOKJLHM
                (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  
  __this_00 = (__this->fields)._sandglass;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar3 = UnityEngine_Transform__get_localEulerAngles(__this_01,(MethodInfo *)0x0);
    fVar2 = UVar3.fields.z;
    fVar1 = fVar2 + -360.0;
    if (fVar2 <= 180.0) {
      fVar1 = fVar2;
    }
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

