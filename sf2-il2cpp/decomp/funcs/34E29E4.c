// FIKENOMMMBH$$CMNODHIFJAH @ RVA 0x34E29E4

void FIKENOMMMBH__CMNODHIFJAH
               (System_Collections_Generic_List_HEFOANCOHDC__o *GJBLBEALOBO,
               System_Collections_Generic_List_string__o *NICHJKGBOHB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  JMDPBFOCHHP_o *pJVar5;
  POLAJNLKPAK_o *__this;
  System_String_o *message;
  Il2CppClass *item;
  System_String_array *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568747 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_18332);
    DAT_04568747 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (GJBLBEALOBO == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)GJBLBEALOBO,
             Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    do {
      do {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                          );
        pIVar3 = local_70.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
          return;
        }
      } while (local_70.fields._current == (Il2CppObject *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (pJVar5 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this = (pJVar5->fields).FMPOOGLPALN;
      if (__this == (POLAJNLKPAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = POLAJNLKPAK__IOELKHFHKGO(__this,(System_String_o *)pIVar3[4].klass,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    } while (bVar4);
    if (NICHJKGBOHB == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = pIVar3[4].klass;
    pSVar6 = (NICHJKGBOHB->fields)._items;
    (NICHJKGBOHB->fields)._version = (NICHJKGBOHB->fields)._version + 1;
    if (pSVar6 == (System_String_array *)0x0) break;
    uVar1 = (NICHJKGBOHB->fields)._size;
    if (uVar1 < (uint)pSVar6->max_length) {
      (NICHJKGBOHB->fields)._size = uVar1 + 1;
      pSVar6->m_Items[(int)uVar1] = (System_String_o *)item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)NICHJKGBOHB,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    message = System_String__Concat
                        (StringLiteral_18332,(System_String_o *)pIVar3[4].klass,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

