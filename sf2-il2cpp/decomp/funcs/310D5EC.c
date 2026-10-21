// Nekki.SF2.GUI.Shop.ItemsPanel$$Free @ RVA 0x310D5EC

void Nekki_SF2_GUI_Shop_ItemsPanel__Free(Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_T0__o *pUVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar4;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  
  if ((DAT_0456655d & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_DBICODDPEAG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_EHPMHOHOPGA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_ELGDDCNOLJL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_PPJKNGDPLOM__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_RemoveListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>_RemoveListener__);
    DAT_0456655d = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._TableView;
  if (pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    __this_00 = (pNVar3->fields).onSelectCell;
    pUVar1 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo,method);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_00 != (Nekki_SF2_GUI_TableView_SelectCellEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<object>__RemoveListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar1,
                 Method_UnityEngine_Events_UnityEvent<TableViewCell>_RemoveListener__);
      pNVar3 = (__this->fields)._TableView;
      if ((pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
         (pNVar4 = (pNVar3->fields).IDIMFLMKDMD, pNVar4 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0))
      {
        pUVar5 = (pNVar4->fields).onDragBegin;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__RemoveListener(pUVar5,pUVar2,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._TableView;
          if ((pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
             (pNVar4 = (pNVar3->fields).IDIMFLMKDMD,
             pNVar4 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0)) {
            pUVar5 = (pNVar4->fields).onDragEnd;
            pUVar2 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__RemoveListener(pUVar5,pUVar2,(MethodInfo *)0x0);
              pNVar3 = (__this->fields)._TableView;
              if ((pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
                 (pNVar4 = (pNVar3->fields).IDIMFLMKDMD,
                 pNVar4 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0)) {
                __this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                            (pNVar4->fields).super.m_OnValueChanged;
                pUVar1 = (UnityEngine_Events_UnityAction_T0__o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
                UnityEngine_Events_UnityAction<Vector2>___ctor();
                if (__this_01 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
                  UnityEngine_Events_UnityEvent<Vector2>__RemoveListener
                            (__this_01,pUVar1,
                             Method_UnityEngine_Events_UnityEvent<Vector2>_RemoveListener__);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

