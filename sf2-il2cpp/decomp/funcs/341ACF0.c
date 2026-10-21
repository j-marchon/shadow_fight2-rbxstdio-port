// HEFOANCOHDC$$BHGINKNAHEG @ RVA 0x341ACF0

/* WARNING: Removing unreachable block (ram,0x0351aed8) */

void HEFOANCOHDC__BHGINKNAHEG
               (HEFOANCOHDC_o *__this,System_Collections_Generic_List_NJPBBPOABKP__o *HPACPFLKHPK,
               int32_t ACCIHBHMFPN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_NJPBBPOABKP__o *__this_00;
  System_Collections_Generic_List_NKPJLEMPIKD__o *__this_01;
  NJPBBPOABKP_array *pNVar5;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045680c9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NKPJLEMPIKD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
    DAT_045680c9 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).EMNOFACFIBF;
  if (__this_00 == (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
  local_70.fields._index = local_a8.fields._index;
  local_70.fields._version = local_a8.fields._version;
  local_70.fields._list = local_a8.fields._list;
  local_70.fields._current = local_a8.fields._current;
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__);
    item = local_70.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__)
      ;
      return;
    }
    if ((NJPBBPOABKP_o *)local_70.fields._current == (NJPBBPOABKP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = ((NJPBBPOABKP_Fields *)((long)local_70.fields._current + 0x10))->
                _NAGALBFLGCA_k__BackingField;
    if (__this_01 == (System_Collections_Generic_List_NKPJLEMPIKD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<NKPJLEMPIKD>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_MoveNext__);
      if (!bVar3) goto LAB_0351aec4;
      if ((NJPBBPOABKP_o *)local_90.fields._current == (NJPBBPOABKP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar4 = NKPJLEMPIKD__NHGGBEACKBD((NKPJLEMPIKD_o *)local_90.fields._current,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<NJPBBPOABKP>_Add__;
    } while (iVar4 != ACCIHBHMFPN);
    if (HPACPFLKHPK == (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar5 = (HPACPFLKHPK->fields)._items;
    (HPACPFLKHPK->fields)._version = (HPACPFLKHPK->fields)._version + 1;
    if (pNVar5 == (NJPBBPOABKP_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (HPACPFLKHPK->fields)._size;
    if (uVar1 < (uint)pNVar5->max_length) {
      (HPACPFLKHPK->fields)._size = uVar1 + 1;
      pNVar5->m_Items[(int)uVar1] = (NJPBBPOABKP_o *)item;
      thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
LAB_0351aec4:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_Dispose__);
  } while( true );
}

