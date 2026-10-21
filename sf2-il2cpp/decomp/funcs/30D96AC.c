// Nekki.SF2.GUI.TableView$$LBGGFHONFIG @ RVA 0x30D96AC

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_TableView__LBGGFHONFIG
          (Nekki_SF2_GUI_TableView_o *__this,Nekki_SF2_GUI_TableViewCell_o *HBHBCBJANIC,
          int32_t JDEFJPHCNMM,bool IEBOPHEHOFH,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  KELJDKIIHMM_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_RectTransform_o *__this_01;
  int iVar4;
  MethodInfo *method_00;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar5;
  UnityEngine_Events_UnityEvent_int__o *pUVar6;
  float value;
  
  if ((DAT_04566344 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_DPFEFNDJCIG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_JIOHAMAMGPF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_LDMJLCHMDAP__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<int>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_RemoveListener__);
    DAT_04566344 = 1;
  }
  if (HBHBCBJANIC != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
    Nekki_SF2_GUI_TableViewCell__set_RowNumber(HBHBCBJANIC,JDEFJPHCNMM,(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_Events_UnityEvent_int__o *)(HBHBCBJANIC->fields).DidHighlightEvent;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<int>_TypeInfo);
    UnityEngine_Events_UnityAction<int>___ctor();
    if (pUVar6 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
      UnityEngine_Events_UnityEvent<int>__RemoveListener
                (pUVar6,pUVar2,Method_UnityEngine_Events_UnityEvent<int>_RemoveListener__);
      pUVar6 = (UnityEngine_Events_UnityEvent_int__o *)(HBHBCBJANIC->fields).DidHighlightEvent;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<int>_TypeInfo);
      UnityEngine_Events_UnityAction<int>___ctor();
      if (pUVar6 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
        UnityEngine_Events_UnityEvent<int>__AddListener
                  (pUVar6,pUVar2,Method_UnityEngine_Events_UnityEvent<int>_AddListener__);
        pUVar6 = (UnityEngine_Events_UnityEvent_int__o *)(HBHBCBJANIC->fields).DidSelectEvent;
        pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction<int>_TypeInfo);
        UnityEngine_Events_UnityAction<int>___ctor();
        if (pUVar6 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
          UnityEngine_Events_UnityEvent<int>__RemoveListener
                    (pUVar6,pUVar2,Method_UnityEngine_Events_UnityEvent<int>_RemoveListener__);
          pUVar6 = (UnityEngine_Events_UnityEvent_int__o *)(HBHBCBJANIC->fields).DidSelectEvent;
          pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction<int>_TypeInfo);
          UnityEngine_Events_UnityAction<int>___ctor();
          if (pUVar6 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
            UnityEngine_Events_UnityEvent<int>__AddListener
                      (pUVar6,pUVar2,Method_UnityEngine_Events_UnityEvent<int>_AddListener__);
            pUVar6 = (UnityEngine_Events_UnityEvent_int__o *)(HBHBCBJANIC->fields).DoubleClickEvent;
            pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction<int>_TypeInfo);
            UnityEngine_Events_UnityAction<int>___ctor();
            if (pUVar6 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
              UnityEngine_Events_UnityEvent<int>__RemoveListener
                        (pUVar6,pUVar2,Method_UnityEngine_Events_UnityEvent<int>_RemoveListener__);
              pUVar6 = (UnityEngine_Events_UnityEvent_int__o *)
                       (HBHBCBJANIC->fields).DoubleClickEvent;
              pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction<int>_TypeInfo);
              UnityEngine_Events_UnityAction<int>___ctor();
              if (pUVar6 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
                UnityEngine_Events_UnityEvent<int>__AddListener
                          (pUVar6,pUVar2,Method_UnityEngine_Events_UnityEvent<int>_AddListener__);
                __this_00 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
                if (__this_00 != (KELJDKIIHMM_o *)0x0) {
                  KELJDKIIHMM__MCMKOONDIEO(__this_00,JDEFJPHCNMM,HBHBCBJANIC,(MethodInfo *)0x0);
                  pUVar3 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)HBHBCBJANIC,(MethodInfo *)0x0);
                  if (IEBOPHEHOFH) {
                    pNVar5 = (__this->fields).IDIMFLMKDMD;
                    if (((pNVar5 == (Nekki_SF2_GUI_TableViewScroll_o *)0x0) ||
                        (__this_01 = (pNVar5->fields).super.m_Content,
                        __this_01 == (UnityEngine_RectTransform_o *)0x0)) ||
                       (iVar1 = UnityEngine_Transform__get_childCount
                                          ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0),
                       pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_031d9974;
                    iVar4 = iVar1 + -1;
                  }
                  else {
                    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_031d9974;
                    iVar4 = 0;
                  }
                  method_00 = (MethodInfo *)0x0;
                  UnityEngine_Transform__SetSiblingIndex(pUVar3,iVar4,(MethodInfo *)0x0);
                  iVar4 = (__this->fields).tableViewOrientation;
                  pUVar3 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)HBHBCBJANIC,(MethodInfo *)0x0);
                  value = Nekki_SF2_GUI_TableView__PositionForRow(__this,JDEFJPHCNMM,method_00);
                  if (iVar4 == 0) {
                    UnityEngine_TransformExtensions__SetLocalPositionY
                              (pUVar3,-value,(MethodInfo *)0x0);
                  }
                  else {
                    UnityEngine_TransformExtensions__SetLocalPositionX
                              (pUVar3,value,(MethodInfo *)0x0);
                  }
                  return HBHBCBJANIC;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031d9974:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

