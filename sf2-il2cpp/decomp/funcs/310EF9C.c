// Nekki.SF2.GUI.Shop.ItemsPanel$$Init @ RVA 0x310EF9C

void Nekki_SF2_GUI_Shop_ItemsPanel__Init(Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar4;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  
  if ((DAT_0456656d & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_DBICODDPEAG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_EHPMHOHOPGA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_ELGDDCNOLJL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_PPJKNGDPLOM__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
    DAT_0456656d = 1;
  }
  pNVar1 = (__this->fields)._TableView;
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    (pNVar1->fields).KFCHMBGIPJK = (__this->fields)._CellPrefab;
    thunk_FUN_01c20e04();
    pNVar1 = (__this->fields)._TableView;
    if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__Init
                (pNVar1,(CPFMNHBNOEN_o *)__this,(MLIIECFHJAM_o *)__this,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._TableView;
      if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
        __this_00 = (pNVar1->fields).onSelectCell;
        pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_00 != (Nekki_SF2_GUI_TableView_SelectCellEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar2,
                     Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__);
          pNVar1 = (__this->fields)._TableView;
          if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
            pNVar4 = (pNVar1->fields).IDIMFLMKDMD;
            (pNVar1->fields)._MinScrollVelocity = 100.0;
            if (pNVar4 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
              pUVar5 = (pNVar4->fields).onDragBegin;
              pUVar3 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar5,pUVar3,(MethodInfo *)0x0);
                pNVar1 = (__this->fields)._TableView;
                if ((pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
                   (pNVar4 = (pNVar1->fields).IDIMFLMKDMD,
                   pNVar4 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0)) {
                  pUVar5 = (pNVar4->fields).onDragEnd;
                  pUVar3 = (UnityEngine_Events_UnityAction_o *)
                           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar5,pUVar3,(MethodInfo *)0x0);
                    pNVar1 = (__this->fields)._TableView;
                    if ((pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
                       (pNVar4 = (pNVar1->fields).IDIMFLMKDMD,
                       pNVar4 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0)) {
                      __this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                                  (pNVar4->fields).super.m_OnValueChanged;
                      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
                      UnityEngine_Events_UnityAction<Vector2>___ctor();
                      if (__this_01 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
                        UnityEngine_Events_UnityEvent<Vector2>__AddListener
                                  (__this_01,pUVar2,
                                   Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
                        return;
                      }
                    }
                  }
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

