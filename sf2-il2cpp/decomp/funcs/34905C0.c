// PBHDPJBLDLG.LIBPCCPNJOK$$MoveNext @ RVA 0x34905C0

bool PBHDPJBLDLG_LIBPCCPNJOK__MoveNext(PBHDPJBLDLG_LIBPCCPNJOK_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  System_Collections_Generic_List_KeyValuePair_int__CBPENMDOJDB___o *pSVar5;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar6;
  Il2CppObject **ppIVar7;
  PBHDPJBLDLG_o *__this_01;
  UnityEngine_WaitForSecondsRealtime_o **ppUVar8;
  
  if ((DAT_04568412 & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_get_Count__
                );
    FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    FUN_01bab630(&StringLiteral_13879);
    DAT_04568412 = 1;
  }
  iVar2 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    goto LAB_03590704;
  }
  if (iVar2 != 0) {
    return false;
  }
  (__this->fields).__1__state = -1;
  if (((__this_01 != (PBHDPJBLDLG_o *)0x0) &&
      (pSVar5 = (__this_01->fields).DGGLBIIIEBM,
      pSVar5 != (System_Collections_Generic_List_KeyValuePair_int__CBPENMDOJDB___o *)0x0)) &&
     (pNVar4 = (__this_01->fields).PDHMLFAMNCO, pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0)) {
    in_x2 = StringLiteral_13879;
    Nekki_SF2_GUI_SimpleScroll__ReservePool
              (pNVar4,(pSVar5->fields)._size,(System_String_o *)StringLiteral_13879,
               (MethodInfo *)0x0);
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar3 = LPGPNBGHDBD_TypeInfo->static_fields->FPAFPJONEFP;
    (__this->fields)._hasDelayed_5__4 = false;
    (__this->fields)._portion_5__2 = iVar3;
    (__this->fields)._counter_5__3 = 0;
    __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(__this_00,0.016666668,(MethodInfo *)0x0);
    ppUVar8 = &(__this->fields)._delay_5__5;
    *ppUVar8 = __this_00;
    thunk_FUN_01c20e04(ppUVar8,__this_00);
    method_00 = (MethodInfo *)0x0;
    (__this->fields)._row_5__6 = 0;
    while( true ) {
      if ((__this_01 == (PBHDPJBLDLG_o *)0x0) ||
         (pSVar5 = (__this_01->fields).DGGLBIIIEBM,
         pSVar5 == (System_Collections_Generic_List_KeyValuePair_int__CBPENMDOJDB___o *)0x0))
      goto LAB_035907c8;
      if ((pSVar5->fields)._size <= (int32_t)method_00) break;
      pNVar6 = (__this_01->fields).HJLDGHLININ;
      if (pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) goto LAB_035907c8;
      if ((pNVar6->fields)._BOGAKJOFOEK_k__BackingField != false) {
        PBHDPJBLDLG__DNNPDIPCCEN(__this_01,method_00);
        return false;
      }
      PBHDPJBLDLG__NEMMCPJICCF(__this_01,(int32_t)method_00,in_x2);
      iVar2 = (__this->fields)._counter_5__3 + 1;
      (__this->fields)._counter_5__3 = iVar2;
      if ((__this->fields)._portion_5__2 <= iVar2) {
        (__this->fields)._hasDelayed_5__4 = true;
        if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar3 = LPGPNBGHDBD_TypeInfo->static_fields->FPAFPJONEFP;
        ppIVar7 = &(__this->fields).__2__current;
        *ppIVar7 = (Il2CppObject *)(__this->fields)._delay_5__5;
        (__this->fields)._portion_5__2 = iVar3;
        (__this->fields)._counter_5__3 = 0;
        thunk_FUN_01c20e04(ppIVar7);
        (__this->fields).__1__state = 1;
        return true;
      }
LAB_03590704:
      uVar1 = (__this->fields)._row_5__6 + 1;
      method_00 = (MethodInfo *)(ulong)uVar1;
      (__this->fields)._row_5__6 = uVar1;
    }
    PBHDPJBLDLG__DNNPDIPCCEN(__this_01,method_00);
    pNVar6 = (__this_01->fields).HJLDGHLININ;
    if (pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
      if ((pNVar6->fields)._BOGAKJOFOEK_k__BackingField != false) {
        return false;
      }
      if ((__this->fields)._hasDelayed_5__4 != false) {
        return false;
      }
      pNVar4 = (__this_01->fields).PDHMLFAMNCO;
      if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__TeleportContentToPos
                  (pNVar4,(__this_01->fields).FBCMJLLICNC,(MethodInfo *)0x0);
        return false;
      }
    }
  }
LAB_035907c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

