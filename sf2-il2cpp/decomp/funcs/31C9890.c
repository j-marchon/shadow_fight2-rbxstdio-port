// CNOGDCKPLMJ$$BLJJKMIEHFG @ RVA 0x31C9890

void CNOGDCKPLMJ__BLJJKMIEHFG(CNOGDCKPLMJ_o *__this,FPPKHNNABAD_o *JOBNGBCPEGO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_01;
  MethodInfo *in_x3;
  MethodInfo *in_x4;
  FPPKHNNABAD_array *pFVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  System_String_o *local_28;
  
  if ((DAT_04566c56 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
    DAT_04566c56 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (JOBNGBCPEGO == (FPPKHNNABAD_o *)0x0) {
LAB_032c9a48:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar3 = FPPKHNNABAD__CMPFBCCGBGK(JOBNGBCPEGO,10,(MethodInfo *)0x0);
  if (bVar3) {
    local_28 = (System_String_o *)0x0;
    __this_00 = (JOBNGBCPEGO->fields).KPFGHBEKJIM;
    if (__this_00 == (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) goto LAB_032c9a48;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    do {
      do {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__
                          );
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
          CNOGDCKPLMJ__KEKFJKEELBH(__this,JOBNGBCPEGO,local_28,in_x3);
          return;
        }
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while (*(int *)((long)&local_50.fields._current[1].klass + 4) != 1);
      in_x3 = (MethodInfo *)&stack0xffffffffffffffd8;
      bVar3 = CNOGDCKPLMJ__NLDHFFIEJDD
                        (__this,(System_String_o *)local_50.fields._current[2].klass,
                         local_50.fields._current[2].monitor,(System_String_o **)in_x3,in_x4);
      lVar2 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__;
    } while (bVar3);
    __this_01 = (__this->fields).OJBDDPNIHAL;
    if (__this_01 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pFVar4 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pFVar4 == (FPPKHNNABAD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_01->fields)._size;
    if (uVar1 < (uint)pFVar4->max_length) {
      (__this_01->fields)._size = uVar1 + 1;
      pFVar4->m_Items[(int)uVar1] = JOBNGBCPEGO;
      thunk_FUN_01c20e04(pFVar4->m_Items + (int)uVar1,JOBNGBCPEGO);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)JOBNGBCPEGO,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
  }
  return;
}

