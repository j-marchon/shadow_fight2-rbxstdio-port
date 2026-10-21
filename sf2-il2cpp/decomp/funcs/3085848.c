// Nekki.SF2.GUI.Fight.ActivePerkItem$$Init @ RVA 0x3085848

void Nekki_SF2_GUI_Fight_ActivePerkItem__Init
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,
               MethodInfo *method)

{
  bool bVar1;
  MMDDDDFHOLG_DOCBHLNBECF_o **ppMVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  System_String_o **ppSVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_Vector2_o value;
  
  if ((DAT_04566020 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566020 = 1;
  }
  ppMVar2 = &(__this->fields)._EKIGEJEMNNN_k__BackingField;
  *ppMVar2 = CPECAEHDDDB;
  thunk_FUN_01c20e04(ppMVar2,CPECAEHDDDB);
  if (CPECAEHDDDB == (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) goto LAB_03185a94;
  ppSVar3 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
  *ppSVar3 = (CPECAEHDDDB->fields).KPDPJONADPJ;
  thunk_FUN_01c20e04(ppSVar3);
  (__this->fields)._MIONCODGPCM_k__BackingField = false;
  (__this->fields)._HDLIFLCFFMI_k__BackingField = 0.0;
  (__this->fields)._AMJLLCEPGIE_k__BackingField = true;
  (__this->fields)._PBMMCACCKNJ_k__BackingField = false;
  (__this->fields).BLOOBCKMPEO = true;
  if (DAT_045660f5 == '\0') {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_045660f5 = '\x01';
  }
  (__this->fields)._DPAPNHPIMMC_k__BackingField =
       OCAJCDIOMKB_TypeInfo->static_fields->_DPAPNHPIMMC_k__BackingField;
  Nekki_SF2_GUI_Fight_ActivePerkItem__set_ShowExpiration
            (__this,(CPECAEHDDDB->fields).FOFFKEAJPAF,method);
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
  }
  else if (__this_00->klass != UnityEngine_RectTransform_TypeInfo) {
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_03185a94;
    __this_00 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__AddComponent<object>
                          (__this_01,Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
  }
  pNVar4 = (__this->fields)._icon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._icon;
    if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03185a94;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              (pNVar4,(CPECAEHDDDB->fields).KPDPJONADPJ,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._icon;
    if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03185a94;
    (*(pNVar4->klass->vtable)._45_SetNativeSize.methodPtr)
              (pNVar4,(pNVar4->klass->vtable)._45_SetNativeSize.method);
    pNVar4 = (__this->fields)._icon;
    if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03185a94;
    Nekki_SF2_GUI_ResolutionImage__set_Alpha(pNVar4,0.0,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._icon;
    if (((pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
        (__this_02 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar4,(MethodInfo *)0x0),
        __this_02 == (UnityEngine_RectTransform_o *)0x0)) ||
       (value = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_03185a94;
    UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields)._expiration;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar4 = (__this->fields)._expiration;
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_Alpha
              (pNVar4,(__this->fields)._DPAPNHPIMMC_k__BackingField,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._expiration;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      UnityEngine_UI_Image__set_fillAmount((UnityEngine_UI_Image_o *)pNVar4,0.0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03185a94:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

