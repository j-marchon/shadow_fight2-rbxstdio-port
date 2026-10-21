// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanTable.COHEJNJBHAI$$MoveNext @ RVA 0x313B104

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_COHEJNJBHAI__MoveNext
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_COHEJNJBHAI_o *__this,
               MethodInfo *method)

{
  int32_t iVar1;
  byte bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *__this_01;
  CBPENMDOJDB_o *ADHJMIOENHG;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  int iVar5;
  DLOALGNBPNL_o *pDVar6;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *pGVar7;
  Il2CppObject **ppIVar8;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *__this_02;
  UnityEngine_WaitForSecondsRealtime_o **ppUVar9;
  UnityEngine_Rect_o UVar10;
  
  if ((DAT_0456672a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_get_Item__);
    FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    FUN_01bab630(&StringLiteral_6436);
    DAT_0456672a = 1;
    method = extraout_x1;
  }
  iVar5 = (__this->fields).__1__state;
  __this_02 = (__this->fields).__4__this;
  if (iVar5 == 1) {
    (__this->fields).__1__state = -1;
    goto LAB_0323b314;
  }
  if (iVar5 != 0) {
    return false;
  }
  (__this->fields).__1__state = -1;
  if ((((__this_02 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *)0x0) &&
       (pDVar6 = (__this_02->fields).DGGLBIIIEBM, pDVar6 != (DLOALGNBPNL_o *)0x0)) &&
      (pGVar7 = (pDVar6->fields).EHBNKDHKJNI,
      pGVar7 != (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0)) &&
     (pNVar3 = (__this_02->fields).PDHMLFAMNCO, pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0)) {
    Nekki_SF2_GUI_SimpleScroll__ReservePool
              (pNVar3,(pGVar7->fields).count,StringLiteral_6436,(MethodInfo *)0x0);
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    (__this->fields)._portion_5__2 = LPGPNBGHDBD_TypeInfo->static_fields->FPAFPJONEFP;
    (__this->fields)._counter_5__3 = 0;
    pNVar3 = (__this_02->fields).PDHMLFAMNCO;
    if ((pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
       (pUVar4 = (pNVar3->fields).super.m_Viewport, pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar10 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
      (__this->fields)._viewportWidth_5__4 = UVar10.fields.m_Width;
      __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                  thunk_FUN_01bda818(UVar10.fields.m_XMin,UVar10.fields.m_YMin,UVar10.fields.m_Width
                                     ,UVar10.fields.m_Height,
                                     UnityEngine_WaitForSecondsRealtime_TypeInfo);
      UnityEngine_WaitForSecondsRealtime___ctor(__this_00,0.016666668,(MethodInfo *)0x0);
      ppUVar9 = &(__this->fields)._delay_5__5;
      *ppUVar9 = __this_00;
      thunk_FUN_01c20e04(ppUVar9,__this_00);
      iVar5 = 0;
      (__this->fields)._row_5__6 = 0;
      method = extraout_x1_00;
      while (((__this_02 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *)0x0 &&
              (pDVar6 = (__this_02->fields).DGGLBIIIEBM, pDVar6 != (DLOALGNBPNL_o *)0x0)) &&
             (pGVar7 = (pDVar6->fields).EHBNKDHKJNI,
             pGVar7 != (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0))) {
        if ((pGVar7->fields).count <= iVar5) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__DNNPDIPCCEN(__this_02,method);
          return false;
        }
        pNVar3 = (__this_02->fields).PDHMLFAMNCO;
        if ((pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) ||
           (__this_01 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *)
                        Nekki_SF2_GUI_SimpleScroll__AddItemFromPool
                                  (pNVar3,false,StringLiteral_6436,(MethodInfo *)0x0),
           __this_01 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *)0x0)) break;
        bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_TypeInfo->_2).naturalAligment;
        if (((__this_01->klass->_2).naturalAligment < bVar2) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_TypeInfo)) break;
        pUVar4 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                           ((Nekki_SF2_GUI_BaseScrollItem_o *)__this_01,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetSizeDeltaX
                  (pUVar4,(__this->fields)._viewportWidth_5__4,(MethodInfo *)0x0);
        pDVar6 = (__this_02->fields).DGGLBIIIEBM;
        if ((pDVar6 == (DLOALGNBPNL_o *)0x0) ||
           (pGVar7 = (pDVar6->fields).EHBNKDHKJNI,
           pGVar7 == (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0)) break;
        ADHJMIOENHG = (CBPENMDOJDB_o *)
                      Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar7,
                                 (__this->fields)._row_5__6,
                                 Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_get_Item__
                                );
                    /* try { // try from 0323b2ec to 0333b47b has its CatchHandler @ 0323b2ec
                       catch() { ... } // from try @ 0323b2ec with catch @ 0323b2ec
                       catch() { ... } // from try @ 0323b5c0 with catch @ 0323b2ec
                       catch() { ... } // from try @ 0323b668 with catch @ 0323b2ec
                       catch() { ... } // from try @ 0323b670 with catch @ 0323b2ec
                       catch() { ... } // from try @ 0323b730 with catch @ 0323b2ec */
        Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell__Init
                  (__this_01,ADHJMIOENHG,((__this->fields)._row_5__6 & 1U) == 0,(MethodInfo *)0x0);
        iVar5 = (__this->fields)._counter_5__3 + 1;
        (__this->fields)._counter_5__3 = iVar5;
        method = extraout_x1_01;
        if ((__this->fields)._portion_5__2 <= iVar5) {
          if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar1 = LPGPNBGHDBD_TypeInfo->static_fields->FPAFPJONEFP;
          ppIVar8 = &(__this->fields).__2__current;
          *ppIVar8 = (Il2CppObject *)(__this->fields)._delay_5__5;
          (__this->fields)._portion_5__2 = iVar1;
          (__this->fields)._counter_5__3 = 0;
          thunk_FUN_01c20e04(ppIVar8);
          (__this->fields).__1__state = 1;
          return true;
        }
LAB_0323b314:
        iVar5 = (__this->fields)._row_5__6 + 1;
        (__this->fields)._row_5__6 = iVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

