// MMDDDDFHOLG$$EBELLMAHLEE @ RVA 0x3363124

bool MMDDDDFHOLG__EBELLMAHLEE
               (System_String_o *FPFPALCKOJI,System_String_o *BCAEOEOGHLP,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_List_object__o *__this;
  System_String_o *__this_00;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567a96 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_get_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_GetEnumerator__);
    FUN_01bab630(&MMDDDDFHOLG_TypeInfo);
    DAT_04567a96 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           MMDDDDFHOLG_TypeInfo->static_fields->NELMGPHMBAN;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar3,(Il2CppObject *)BCAEOEOGHLP,
                       Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_ContainsKey__
                      );
    if (bVar1) {
      if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               MMDDDDFHOLG_TypeInfo->static_fields->NELMGPHMBAN;
      if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (__this = (System_Collections_Generic_List_object__o *)
                   System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar3,(Il2CppObject *)BCAEOEOGHLP,
                              Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_get_Item__
                             ), __this == (System_Collections_Generic_List_object__o *)0x0))
      goto LAB_034632e0;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,__this,
                 Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_MoveNext__
                          );
        if (!bVar1) {
          iVar4 = 2;
          goto LAB_034632a0;
        }
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_50.fields._current[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_00 = *(System_String_o **)((long)local_50.fields._current[2].monitor + 0x20);
        if (__this_00 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(__this_00,FPFPALCKOJI,(MethodInfo *)0x0);
      } while (!bVar2);
      iVar4 = 5;
LAB_034632a0:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_Dispose__
                );
      bVar1 = bVar1 && iVar4 == 5;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_034632e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

