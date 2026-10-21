// KAHMAJKJMBK$$JAFLDLGLANF @ RVA 0x34BFD88

void KAHMAJKJMBK__JAFLDLGLANF(KAHMAJKJMBK_o *__this,MethodInfo *method)

{
  uint length;
  byte bVar1;
  Il2CppObject *GOAHBPBJCKC;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar4;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456860f & 1) == 0) {
    FUN_01bab630(&CCAEOJMALLA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&LNMCGOLABEK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    DAT_0456860f = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields).EOFEIIFFHCN;
  if (pSVar4 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    iVar3 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (0 < iVar3) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar3,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields).PFFILFBOODM;
    if (pSVar4 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      length = (pSVar4->fields)._size;
      method_00 = (MethodInfo *)(ulong)length;
      (pSVar4->fields)._size = 0;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (0 < (int)length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).LJNCACBBIBD;
      if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
        local_60.fields._list = local_78.fields._list;
        local_60.fields._current = local_78.fields._current;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__
                            );
          GOAHBPBJCKC = local_60.fields._current;
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
            return;
          }
          if ((CCAEOJMALLA_o *)local_60.fields._current == (CCAEOJMALLA_o *)0x0) break;
          if ((((CCAEOJMALLA_Fields *)((long)local_60.fields._current + 0x10))->super).super.
              _BDDBFNHFMBC_k__BackingField != false) {
            iVar3 = AJNNHGGLGIF__NHGGBEACKBD
                              ((AJNNHGGLGIF_o *)local_60.fields._current,(MethodInfo *)0x0);
            if (iVar3 == 0x18) {
              bVar1 = (LNMCGOLABEK_TypeInfo->_2).naturalAligment;
              if (((((CCAEOJMALLA_c *)GOAHBPBJCKC->klass)->_2).naturalAligment < bVar1) ||
                 ((((CCAEOJMALLA_c *)GOAHBPBJCKC->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)LNMCGOLABEK_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(GOAHBPBJCKC);
              }
              KAHMAJKJMBK__FPNABLENJEN(__this,(LNMCGOLABEK_o *)GOAHBPBJCKC,method_00);
            }
            else {
              iVar3 = AJNNHGGLGIF__NHGGBEACKBD((AJNNHGGLGIF_o *)GOAHBPBJCKC,(MethodInfo *)0x0);
              if (iVar3 == 0x19) {
                bVar1 = (CCAEOJMALLA_TypeInfo->_2).naturalAligment;
                if (((((CCAEOJMALLA_c *)GOAHBPBJCKC->klass)->_2).naturalAligment < bVar1) ||
                   ((((CCAEOJMALLA_c *)GOAHBPBJCKC->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)CCAEOJMALLA_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(GOAHBPBJCKC);
                }
                KAHMAJKJMBK__MAHDPEFBCOJ(__this,(CCAEOJMALLA_o *)GOAHBPBJCKC,method_00);
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

