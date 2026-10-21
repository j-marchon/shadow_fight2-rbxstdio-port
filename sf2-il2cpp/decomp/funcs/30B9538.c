// Nekki.SF2.GUI.TextPic$$get_FittingBoundsRectTransform @ RVA 0x30B9538

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_TextPic__get_FittingBoundsRectTransform
          (Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *pUVar4;
  MethodInfo *extraout_x1;
  int index;
  Nekki_SF2_GUI_StrikeThroughTextLine_o *pNVar5;
  int iVar6;
  
  if ((DAT_04566212 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566212 = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields).KALCEPKCEPP;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
LAB_031b9628:
    pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    return pUVar4;
  }
  pNVar5 = (__this->fields).KALCEPKCEPP;
  if (pNVar5 != (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0) {
    iVar6 = 0;
    index = 0;
    while (pUVar3 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
          pUVar3 != (UnityEngine_Transform_o *)0x0) {
      iVar2 = UnityEngine_Transform__get_childCount(pUVar3,(MethodInfo *)0x0);
      pNVar5 = (__this->fields).KALCEPKCEPP;
      if (iVar2 <= index) {
        if (pNVar5 != (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0) {
          pUVar4 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
          if ((pUVar4 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar4->klass != UnityEngine_RectTransform_TypeInfo)) {
            pUVar4 = (UnityEngine_RectTransform_o *)0x0;
          }
          return pUVar4;
        }
        break;
      }
      if ((((pNVar5 == (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0) ||
           (pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
          (pUVar3 = UnityEngine_Transform__GetChild(pUVar3,index,(MethodInfo *)0x0),
          pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) break;
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      if (bVar1) {
        if (0 < iVar6) goto LAB_031b9628;
        iVar6 = iVar6 + 1;
      }
      pNVar5 = (__this->fields).KALCEPKCEPP;
      index = index + 1;
      if (pNVar5 == (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

