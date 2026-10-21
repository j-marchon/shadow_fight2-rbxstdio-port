// ACHLOMELAJE$$KFNHLKJEGCO @ RVA 0x305F53C

void ACHLOMELAJE__KFNHLKJEGCO(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_int__uint___o *__this_00;
  System_Collections_Generic_List_ObscuredUInt__o *__this_01;
  MethodInfo *extraout_x1;
  CNKPEGNHNGO_o *pCVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_array *pCVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields item;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04565eb2 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_uint>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_uint>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_uint>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredUInt>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_uint>>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565eb2 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pCVar4 = MGNPHCAAEIO_TypeInfo->static_fields->DLPAONNJNMA;
  if ((pCVar4 == (CNKPEGNHNGO_o *)0x0) ||
     (__this_00 = (pCVar4->fields).HLIELGNFGLF,
     __this_00 == (System_Collections_Generic_List_MGNDHCBAPEN_int__uint___o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_uint>>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_uint>>_MoveNext__
                      );
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_uint>>_Dispose__
                );
      return;
    }
    if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = (CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO
                     (*(uint32_t *)((long)&local_50.fields._current[1].klass + 4),(MethodInfo *)0x0)
    ;
    lVar2 = Method_System_Collections_Generic_List<ObscuredUInt>_Add__;
    __this_01 = (__this->fields).BPDLLDECMMN;
    if (__this_01 == (System_Collections_Generic_List_ObscuredUInt__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pCVar5 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pCVar5 == (CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_array *)0x0) break;
    uVar1 = (__this_01->fields)._size;
    if (uVar1 < (uint)pCVar5->max_length) {
      (__this_01->fields)._size = uVar1 + 1;
      pCVar5->m_Items[(int)uVar1].fields = item;
    }
    else {
      System_Collections_Generic_List<ObscuredUInt>__AddWithResize
                (__this_01,(CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o)item,
                 *(MethodInfo_26E7728 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

