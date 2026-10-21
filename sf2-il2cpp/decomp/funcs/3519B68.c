// Nekki.SF2.GUI.Fight.IconAndText$$SetIcon @ RVA 0x3519B68

void Nekki_SF2_GUI_Fight_IconAndText__SetIcon
               (Nekki_SF2_GUI_Fight_IconAndText_o *__this,System_String_o *LOHCEAICEBN,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImageLE_o *pNVar2;
  
  if ((DAT_04568969 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568969 = 1;
  }
  pNVar2 = (__this->fields).icon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    pNVar2 = (__this->fields).icon;
    if (pNVar2 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar2,LOHCEAICEBN,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  Nekki_SF2_GUI_Fight_IconAndText__HMOMDLHAJJE(__this,method_00);
  return;
}

