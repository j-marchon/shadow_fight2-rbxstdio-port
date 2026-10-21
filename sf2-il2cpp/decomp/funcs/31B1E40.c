// Nekki.SF2.GUI.Profile.TrickContent$$Awake @ RVA 0x31B1E40

void Nekki_SF2_GUI_Profile_TrickContent__Awake
               (Nekki_SF2_GUI_Profile_TrickContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o UVar1;
  
  __this_00 = (__this->fields)._DescriptionLabel;
  if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar1 = UnityEngine_Transform__get_localPosition(__this_01,(MethodInfo *)0x0);
    (__this->fields).KLDFHOEMIPJ.fields.x = UVar1.fields.x;
    (__this->fields).KLDFHOEMIPJ.fields.y = UVar1.fields.y;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

