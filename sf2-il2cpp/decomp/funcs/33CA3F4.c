// Nekki.SF2.GUI.Pvp.WeaponPvpCell$$LOBFFNCDANO @ RVA 0x33CA3F4

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Pvp_WeaponPvpCell__LOBFFNCDANO
               (Nekki_SF2_GUI_Pvp_WeaponPvpCell_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector2_o UVar5;
  
  if ((DAT_04567e12 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_WeaponPvpCell_LOBFFNCDANO__);
    DAT_04567e12 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._NameLabel;
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_TextPic__remove_OnBoundsUpdated
              ((Nekki_SF2_GUI_TextPic_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._PerkIcon;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      __this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._NameLabel;
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pNVar1 = (__this->fields)._PerkIcon, pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
        fVar3 = (pNVar2->fields).super._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.y;
        __this_01 = UnityEngine_UI_Graphic__get_rectTransform
                              ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UVar5 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._PerkIcon;
          if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (__this_02 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
             __this_02 != (UnityEngine_Transform_o *)0x0)) {
            UVar4 = UnityEngine_Transform__get_localPosition(__this_02,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_Transform_o *)0x0) {
              UVar4.fields.x = (fVar3 + fVar3) * 0.5 + UVar5.fields.x * 0.5 + 5.0;
              UVar4.fields.z = 0.0;
              UnityEngine_Transform__set_localPosition(__this_00,UVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

