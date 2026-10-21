// Nekki.SF2.GUI.Fight.ActivePerkItem$$HCOFEDDMOEK @ RVA 0x308629C

void Nekki_SF2_GUI_Fight_ActivePerkItem__HCOFEDDMOEK
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_04566026 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566026 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).BLOOBCKMPEO == false) {
    pNVar2 = (__this->fields)._icon;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields)._icon;
      if (pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_ResolutionImage__set_Alpha(pNVar2,1.0,(MethodInfo *)0x0);
      (__this->fields)._HDLIFLCFFMI_k__BackingField = 1.0;
      (__this->fields).BLOOBCKMPEO = true;
      (__this->fields)._AMJLLCEPGIE_k__BackingField = true;
    }
  }
  return;
}

