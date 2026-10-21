// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$IACPDAODGGJ @ RVA 0x3115C94

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__IACPDAODGGJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *MCFPOCKJGBM;
  bool bVar3;
  JMDPBFOCHHP_o *pJVar4;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  OPMDFMOAMKB_o *__this_01;
  MethodInfo *extraout_x1;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar5;
  OPMDFMOAMKB_array *pOVar6;
  int BDFPDPINEIO;
  System_Collections_Generic_List_OPMDFMOAMKB__o *__this_02;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_045665b6 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_JMDPBFOCHHP_BFPCOCFHFHF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_JMDPBFOCHHP_BFPCOCFHFHF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_JMDPBFOCHHP_BFPCOCFHFHF>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<int,_JMDPBFOCHHP_BFPCOCFHFHF>_get_Value__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<OPMDFMOAMKB>_Add__);
    FUN_01bab630(&OPMDFMOAMKB_TypeInfo);
    DAT_045665b6 = 1;
    method = extraout_x1;
  }
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (((pJVar4 != (JMDPBFOCHHP_o *)0x0) &&
      (pJVar5 = (pJVar4->fields)._LGFNDLOCGPB_k__BackingField,
      pJVar5 != (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                  (pJVar5->fields).BCEDGEOHECB,
     __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<int,_object>__GetEnumerator
              (&local_80,__this_00,
               Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_GetEnumerator__
              );
    BDFPDPINEIO = 0;
    while( true ) {
      bVar3 = System_Collections_Generic_Dictionary_Enumerator<int,_object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_Dictionary_Enumerator<int,_JMDPBFOCHHP_BFPCOCFHFHF>_MoveNext__
                        );
      MCFPOCKJGBM = local_80.fields._current.fields.value;
      if (!bVar3) {
        System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_Dictionary_Enumerator<int,_JMDPBFOCHHP_BFPCOCFHFHF>_Dispose__
                  );
        return;
      }
      __this_02 = (__this->fields).AIFLDFNIHBJ;
      __this_01 = (OPMDFMOAMKB_o *)thunk_FUN_01bda818(OPMDFMOAMKB_TypeInfo);
      OPMDFMOAMKB___ctor(__this_01,(JMDPBFOCHHP_BFPCOCFHFHF_o *)MCFPOCKJGBM,BDFPDPINEIO,
                         (MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<OPMDFMOAMKB>_Add__;
      if (__this_02 == (System_Collections_Generic_List_OPMDFMOAMKB__o *)0x0) break;
      pOVar6 = (__this_02->fields)._items;
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pOVar6 == (OPMDFMOAMKB_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (__this_02->fields)._size;
      if (uVar1 < (uint)pOVar6->max_length) {
        (__this_02->fields)._size = uVar1 + 1;
        pOVar6->m_Items[(int)uVar1] = __this_01;
        thunk_FUN_01c20e04(pOVar6->m_Items + (int)uVar1,__this_01);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      BDFPDPINEIO = BDFPDPINEIO + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

