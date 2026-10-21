// Nekki.SF2.GUI.Fight.ActivePerkItem$$Render @ RVA 0x3086090

void Nekki_SF2_GUI_Fight_ActivePerkItem__Render
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_01;
  MMDDDDFHOLG_DOCBHLNBECF_o *pMVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  float value;
  
  if ((DAT_04566025 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566025 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_ActivePerkItem__ILDINJDFELD(__this,method);
  Nekki_SF2_GUI_Fight_ActivePerkItem__GPFDBPGPKFM(__this,method_00);
  method_01 = extraout_x1_00;
  if ((__this->fields).DPJBDOHCFJK != false) {
    pNVar4 = (__this->fields)._expiration;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_01 = extraout_x1_01;
    if (bVar2) {
      pMVar3 = (__this->fields)._EKIGEJEMNNN_k__BackingField;
      value = 0.0;
      if ((pMVar3 != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
         (iVar1 = (pMVar3->fields).CMPJANOIJAF, iVar1 != 0)) {
        value = (float)(pMVar3->fields).AEPIFFHAKJG / (float)iVar1;
      }
      pNVar4 = (__this->fields)._expiration;
      if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031861e8;
      UnityEngine_UI_Image__set_fillAmount((UnityEngine_UI_Image_o *)pNVar4,value,(MethodInfo *)0x0)
      ;
      method_01 = extraout_x1_02;
    }
  }
  if ((__this->fields)._AMJLLCEPGIE_k__BackingField != false) {
    if ((__this->fields).BLOOBCKMPEO == false) {
      Nekki_SF2_GUI_Fight_ActivePerkItem__GDDMJKMINFB(__this,method_01);
    }
    else {
      Nekki_SF2_GUI_Fight_ActivePerkItem__GNIMIJEOILI(__this,method_01);
    }
    if ((__this->fields).DPJBDOHCFJK != false) {
      pNVar4 = (__this->fields)._expiration;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        pNVar4 = (__this->fields)._expiration;
        if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_031861e8:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Nekki_SF2_GUI_ResolutionImage__set_Alpha
                  (pNVar4,(__this->fields)._DPAPNHPIMMC_k__BackingField *
                          (__this->fields)._HDLIFLCFFMI_k__BackingField,(MethodInfo *)0x0);
      }
    }
    if ((__this->fields)._HDLIFLCFFMI_k__BackingField == 0.0) {
      (__this->fields)._PBMMCACCKNJ_k__BackingField = true;
      (__this->fields)._AMJLLCEPGIE_k__BackingField = false;
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

