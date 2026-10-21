// PBHDPJBLDLG$$HAFBJDICOGK @ RVA 0x348FBA8

/* WARNING: Control flow encountered unimplemented instructions */

void PBHDPJBLDLG__HAFBJDICOGK(PBHDPJBLDLG_o *__this,DLOALGNBPNL_o *IMMNELPBGIF,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  GCIFMNHADDF_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this_01;
  HJPEKDOPBHN_c *method_00;
  DLOALGNBPNL_o *extraout_x1;
  System_Collections_Generic_List_KeyValuePair_int__CBPENMDOJDB___o *pSVar2;
  System_Collections_Generic_List_int__o *pSVar3;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar4;
  
  if ((DAT_04568410 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<KeyValuePair<int,_CBPENMDOJDB>>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
    FUN_01bab630(&
                 Method_System_Linq_Enumerable_FirstOrDefault<KeyValuePair<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>>__
                );
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_CBPENMDOJDB>__ctor__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_get_Key__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_CBPENMDOJDB>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_get_Count__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__);
    DAT_04568410 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  pNVar4 = (__this->fields).HJLDGHLININ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,IMMNELPBGIF);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar4 = (__this->fields).HJLDGHLININ;
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
    if ((pNVar4->fields)._BOGAKJOFOEK_k__BackingField != false) {
      return;
    }
    __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (GCIFMNHADDF_o *)0x0) {
      __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)
                  GCIFMNHADDF__BFJGHKKGOJC<object>
                            (__this_00,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0) {
        bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__IsSelected
                          (__this_01,__this,(MethodInfo *)0x0);
        if (!bVar1) {
          halt_unimplemented();
        }
        pSVar2 = (__this->fields).DGGLBIIIEBM;
        if (pSVar2 != (System_Collections_Generic_List_KeyValuePair_int__CBPENMDOJDB___o *)0x0) {
          length = (pSVar2->fields)._size;
          (pSVar2->fields)._size = 0;
          (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0
                               );
          }
          pSVar3 = (__this->fields).JDHINHCBLNC;
          if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
            (pSVar3->fields)._size = 0;
            (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
            method_00 = HJPEKDOPBHN_TypeInfo;
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
            }
            HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)method_00);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
            halt_unimplemented();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

