// Nekki.SF2.GUI.ItemsScroll$$Init @ RVA 0x30D0A48

void Nekki_SF2_GUI_ItemsScroll__Init(Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar4;
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *__this_00;
  UnityEngine_RectTransform_o **ppUVar5;
  Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o *__this_01;
  
  if ((DAT_045662ff & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_ItemsScroll_NDEKHPPANMF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ItemsScroll_NPBFAJABJLH__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_AddListener__);
    DAT_045662ff = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields).scrollContent;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields).scrollContent;
    if (pNVar4 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      __this_00 = (pNVar4->fields).onSelectItem;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<BaseScrollItem>_TypeInfo);
      UnityEngine_Events_UnityAction<object>___ctor();
      if (__this_00 != (Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__AddListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar2,
                   Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_AddListener__);
        pNVar4 = (__this->fields).scrollContent;
        pUVar3 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pNVar4 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
          if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar3->klass != UnityEngine_RectTransform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pUVar3);
          }
          ppUVar5 = &(pNVar4->fields)._Center_k__BackingField;
          *ppUVar5 = pUVar3;
          thunk_FUN_01c20e04(ppUVar5,pUVar3);
          pNVar4 = (__this->fields).scrollContent;
          if (pNVar4 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
            __this_01 = (pNVar4->fields).onClickItem;
            pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction<BaseScrollItem>_TypeInfo);
            UnityEngine_Events_UnityAction<object>___ctor();
            if (__this_01 != (Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent<object>__AddListener
                        ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar2,
                         Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_AddListener__);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

