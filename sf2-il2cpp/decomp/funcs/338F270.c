// Nekki.SF2.GUI.Profile.AchievementSubItem$$ResetOpacity @ RVA 0x338F270

void Nekki_SF2_GUI_Profile_AchievementSubItem__ResetOpacity
               (Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *exists;
  
  if ((DAT_04567c0b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c0b = 1;
    method = extraout_x1;
  }
  exists = (__this->fields).super._icon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if (bVar1) {
    LJLLAKHOFFF__IFBBIDIEBEL
              ((UnityEngine_UI_Graphic_o *)(__this->fields).super._icon,
               (__this->fields).super.GJFHNJFGBKE,(MethodInfo *)0x0);
    return;
  }
  return;
}

