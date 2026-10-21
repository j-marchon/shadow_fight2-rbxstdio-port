// HintButton$$BBIEOKCGDGD @ RVA 0x2FF2628

void HintButton__BBIEOKCGDGD(HintButton_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_T__o *pSVar5;
  undefined8 uVar6;
  System_Collections_Generic_List_FBBNEILNOKK__o *pSVar7;
  System_Object_array *pSVar8;
  undefined1 auVar9 [16];
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  auVar9._8_8_ = method;
  auVar9._0_8_ = __this;
  if ((DAT_04565a7a & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FBBNEILNOKK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FBBNEILNOKK>_Clear__);
    auVar9 = FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    DAT_04565a7a = 1;
  }
  uVar6 = auVar9._0_8_;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pSVar7 = (__this->fields).EKJNLACDGKC;
  if (pSVar7 != (System_Collections_Generic_List_FBBNEILNOKK__o *)0x0) {
    (pSVar7->fields)._size = 0;
    (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
    pSVar5 = (System_Collections_Generic_List_T__o *)(__this->fields)._DefaultHintIDs;
    uVar6 = 0;
    if (pSVar5 != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                (&local_78,pSVar5,
                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                            );
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
            return;
          }
          iVar4 = (int32_t)local_60.fields._current;
          if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = ECNCJPCKOLN__IDEEKLMIOOD(iVar4,(MethodInfo *)0x0);
        } while (!bVar3);
        pSVar5 = (System_Collections_Generic_List_T__o *)(__this->fields).EKJNLACDGKC;
        if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar4 = ECNCJPCKOLN__IDDDPCFIALP(iVar4,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<FBBNEILNOKK>_Add__;
        if (pSVar5 == (System_Collections_Generic_List_T__o *)0x0) break;
        pSVar8 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pSVar8 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar5->fields)._size;
        if (uVar1 < (uint)pSVar8->max_length) {
          (pSVar5->fields)._size = uVar1 + 1;
          *(int32_t *)((long)pSVar8->m_Items + (long)(int)uVar1 * 4) = iVar4;
        }
        else {
          System_Collections_Generic_List<Int32Enum>__AddWithResize
                    (pSVar5,iVar4,
                     *(MethodInfo_26C9F28 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar6,auVar9._8_8_);
}

