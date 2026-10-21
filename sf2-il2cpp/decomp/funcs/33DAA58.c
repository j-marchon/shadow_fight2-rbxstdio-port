// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$Init @ RVA 0x33DAA58

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__Init
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Events_UnityAction_o *call_00;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar2;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_01;
  UnityEngine_Events_UnityEvent_o *__this_02;
  UnityEngine_Vector3_o UVar3;
  
  if ((DAT_04567e66 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_Forge_ForgePanel_ILPJLGPGNMC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_Forge_ForgePanel_MPMDFILDNCJ__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__);
    DAT_04567e66 = 1;
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
        __this_01 = (pNVar1->fields).onSelectCell;
        call = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_01 != (Nekki_SF2_GUI_TableView_SelectCellEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,call,
                     Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__);
          pNVar1 = (__this->fields)._TableView;
          if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
            pNVar2 = (pNVar1->fields).IDIMFLMKDMD;
            (pNVar1->fields)._MinScrollVelocity = 100.0;
            if (pNVar2 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
              __this_02 = (pNVar2->fields).onDragBegin;
              call_00 = (UnityEngine_Events_UnityAction_o *)
                        thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(__this_02,call_00,(MethodInfo *)0x0);
                __this_00 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                  UVar3 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
                  (__this->fields).DAJBPIAOPCC = UVar3.fields.x;
                  Util__IHPDCBOFHPA((__this->fields)._renderRoot,false,(MethodInfo *)0x0);
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

