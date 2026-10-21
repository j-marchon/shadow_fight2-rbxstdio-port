// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$LACIIBLENDJ @ RVA 0x32B9B00

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__LACIIBLENDJ
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,int32_t ELACKBJPMNB,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MenuItemButton__o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_RectTransform_o *pUVar2;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  UnityEngine_UI_ScrollRect_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Rect_o UVar9;
  
  if ((DAT_0456747c & 1) == 0) {
                    /* try { // try from 033b9b38 to 034b9ce7 has its CatchHandler @ 033b9b38
                       catch() { ... } // from try @ 033b9b38 with catch @ 033b9b38
                       catch() { ... } // from try @ 033b9f64 with catch @ 033b9b38
                       catch() { ... } // from try @ 033ba07c with catch @ 033b9b38
                       catch() { ... } // from try @ 033ba084 with catch @ 033b9b38
                       catch() { ... } // from try @ 033ba1a8 with catch @ 033b9b38 */
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_ENOLJOGNFFL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_IHGOEKHFNPO__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456747c = 1;
  }
  pUVar3 = (__this->fields)._scroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._buttons;
    if (((__this_00 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) &&
        (__this_01 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_00,0,
                                Method_System_Collections_Generic_List<MenuItemButton>_get_Item__),
        __this_01 != (UnityEngine_Component_o *)0x0)) &&
       (pUVar2 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__GetComponent<object>
                           (__this_01,Method_UnityEngine_Component_GetComponent<RectTransform>__),
       pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._scroll;
      if ((pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (pUVar2 = (pUVar3->fields).m_Content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._scroll;
        if ((pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
           (pUVar2 = (pUVar3->fields).m_Viewport, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          fVar7 = ((float)ELACKBJPMNB + -0.5) * UVar8.fields.m_Height;
          UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          fVar5 = UVar9.fields.m_Height - UVar8.fields.m_Height;
          fVar4 = fVar5;
          if (fVar7 <= fVar5) {
            fVar4 = fVar7;
          }
          fVar6 = fVar4;
          if (fVar7 < 0.0) {
            fVar6 = 0.0;
          }
          getter = (DG_Tweening_Core_DOGetter_float__o *)
                   thunk_FUN_01bda818(fVar4,0,UVar8.fields.m_Width,
                                      DG_Tweening_Core_DOGetter<float>_TypeInfo);
          DG_Tweening_Core_DOGetter<float>___ctor();
          setter = (DG_Tweening_Core_DOSetter_float__o *)
                   thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
          DG_Tweening_Core_DOSetter<float>___ctor();
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 033b9ce8 to 034b9d0f has its CatchHandler @ 033ba0ec */
          DG_Tweening_DOTween__To(getter,setter,1.0 - fVar6 / fVar5,0.1,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

