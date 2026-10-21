// Nekki.SF2.GUI.Map.BattlePrize$$MLANLCMGNJF @ RVA 0x3219278

void Nekki_SF2_GUI_Map_BattlePrize__MLANLCMGNJF
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,MethodInfo *method)

{
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Transform_o *transform;
  MethodInfo *extraout_x1;
  MOAHCJAFGNJ_DMJGKEDFAGF_o *pMVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Rect_o UVar7;
  
  if ((DAT_04566ee7 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    DAT_04566ee7 = 1;
    method = extraout_x1;
  }
  (__this->fields).LFJGFLNMBMC = (__this->fields).LFJGFLNMBMC + 1;
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MOAHCJAFGNJ_TypeInfo,method);
  }
  pMVar3 = MOAHCJAFGNJ_TypeInfo->static_fields->PIECBLBNNOP;
  if ((pMVar3 != (MOAHCJAFGNJ_DMJGKEDFAGF_o *)0x0) &&
     (pUVar1 = (__this->fields)._layoutGroup,
     pUVar1 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0)) {
    fVar4 = (pMVar3->fields).PLOLIDEDOEF;
    fVar5 = (pMVar3->fields).JDOIGKKGGDA;
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar1,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this,
                          Method_UnityEngine_Component_GetComponent<RectTransform>__);
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._layoutGroup;
        if (pUVar1 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
          fVar5 = cosf(fVar5 * (float)(__this->fields).LFJGFLNMBMC);
          transform = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionX
                    (transform,
                     fVar4 * ((UVar6.fields.m_Width - UVar7.fields.m_Width) / (fVar4 + fVar4)) *
                     fVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

