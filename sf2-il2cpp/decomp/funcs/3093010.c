// Nekki.SF2.GUI.Fight.ItemRewardHardmode$$SetScale @ RVA 0x3093010

void Nekki_SF2_GUI_Fight_ItemRewardHardmode__SetScale
               (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *__this,float JKOJPEKLBCI,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o value;
  
  __this_00 = (__this->fields).icon;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar1 = UnityEngine_Transform__get_localScale(__this_01,(MethodInfo *)0x0);
    value.fields.x = UVar1.fields.x * JKOJPEKLBCI;
    value.fields.y = UVar1.fields.y * JKOJPEKLBCI;
    value.fields.z = UVar1.fields.z * JKOJPEKLBCI;
    UnityEngine_Transform__set_localScale(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

