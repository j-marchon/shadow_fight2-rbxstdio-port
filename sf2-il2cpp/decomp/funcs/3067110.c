// ACHLOMELAJE$$GOLLEBBHEHE @ RVA 0x3067110

PAMEPBLOLPB_o *
ACHLOMELAJE__GOLLEBBHEHE
          (ACHLOMELAJE_o *__this,PAMEPBLOLPB_o *CJNHFNHJHPE,bool FCAEECAAGGA,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_PAMEPBLOLPB__o *__this_00;
  PAMEPBLOLPB_array *pPVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04565efa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PAMEPBLOLPB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PAMEPBLOLPB>_GetEnumerator__);
    DAT_04565efa = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HDDNEKLMLMF;
  if (__this_00 != (System_Collections_Generic_List_PAMEPBLOLPB__o *)0x0) {
    if (FCAEECAAGGA) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<PAMEPBLOLPB>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_MoveNext__
                          );
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_Dispose__);
          __this_00 = (__this->fields).HDDNEKLMLMF;
          if (__this_00 != (System_Collections_Generic_List_PAMEPBLOLPB__o *)0x0) goto LAB_03167220;
          goto LAB_031672a4;
        }
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (CJNHFNHJHPE == (PAMEPBLOLPB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = System_String__op_Equality
                          ((System_String_o *)local_50.fields._current[7].klass,
                           (CJNHFNHJHPE->fields).NEEIBKGPKBK,(MethodInfo *)0x0);
      } while (!bVar3);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_Dispose__)
      ;
    }
    else {
LAB_03167220:
      lVar2 = Method_System_Collections_Generic_List<PAMEPBLOLPB>_Add__;
      pPVar4 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pPVar4 == (PAMEPBLOLPB_array *)0x0) goto LAB_031672a4;
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pPVar4->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pPVar4->m_Items[(int)uVar1] = CJNHFNHJHPE;
        thunk_FUN_01c20e04(pPVar4->m_Items + (int)uVar1,CJNHFNHJHPE);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)CJNHFNHJHPE,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    return CJNHFNHJHPE;
  }
LAB_031672a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

