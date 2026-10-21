// Nekki.SF2.GUI.Fight.ActivePerkItem$$GDDMJKMINFB @ RVA 0x3085B64

void Nekki_SF2_GUI_Fight_ActivePerkItem__GDDMJKMINFB
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  float fVar3;
  
  if ((DAT_04566021 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566021 = 1;
    method = extraout_x1;
  }
  fVar3 = (__this->fields)._HDLIFLCFFMI_k__BackingField;
  if (0.0 < fVar3) {
    if (DAT_045660f6 == '\0') {
      FUN_01bab630(&OCAJCDIOMKB_TypeInfo,method);
      DAT_045660f6 = '\x01';
      fVar3 = (__this->fields)._HDLIFLCFFMI_k__BackingField;
    }
    fVar3 = fVar3 + -1.0 / (OCAJCDIOMKB_TypeInfo->static_fields->_CLAAJDABDPF_k__BackingField).
                           fields.y;
    (__this->fields)._HDLIFLCFFMI_k__BackingField = fVar3;
    if (fVar3 <= 0.0) {
      (__this->fields)._HDLIFLCFFMI_k__BackingField = 0.0;
      (__this->fields)._AMJLLCEPGIE_k__BackingField = false;
    }
    pNVar2 = (__this->fields)._icon;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields)._icon;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_Alpha
                  (pNVar2,(__this->fields)._HDLIFLCFFMI_k__BackingField,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

