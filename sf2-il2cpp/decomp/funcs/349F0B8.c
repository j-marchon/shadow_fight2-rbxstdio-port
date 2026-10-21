// Nekki.SF2.GUI.Map.MapPanel$$FELAHGOCMMN @ RVA 0x349F0B8

void Nekki_SF2_GUI_Map_MapPanel__FELAHGOCMMN
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Scroll_o *pNVar1;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  Nekki_SF2_GUI_ItemsScroll_o *pNVar3;
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *__this_00;
  
  if ((DAT_04568488 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapPanel_IKFENPJLMIA__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_AddListener__);
    DAT_04568488 = 1;
  }
  pNVar1 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
    Nekki_SF2_GUI_Shop_Scroll__Init(pNVar1,(__this->fields).ECEJKFAFODM,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._IENOFGNDANH_k__BackingField;
    if (pNVar1 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)pNVar1,
                 (__this->fields)._LGKLAOCDMGF_k__BackingField == false,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).ECEJKFAFODM;
      if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
        __this_00 = (pNVar2->fields).onSelectItem;
        call = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<BaseScrollItem>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_00 != (Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,
                     Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_AddListener__);
          pNVar1 = (__this->fields)._IENOFGNDANH_k__BackingField;
          if ((pNVar1 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) &&
             (pNVar3 = (pNVar1->fields)._itemsScroll, pNVar3 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0))
          {
            (pNVar3->fields)._MinScrollVelocity = 500.0;
            (pNVar3->fields)._AutoscrollDuration = 0.25;
            pNVar2 = (pNVar1->fields).ECEJKFAFODM;
            if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
              (pNVar2->fields).Spacing = 0.0;
              Nekki_SF2_GUI_Shop_Scroll__ScrollToBegin(pNVar1,(MethodInfo *)0x0);
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

