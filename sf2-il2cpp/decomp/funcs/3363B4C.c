// MMDDDDFHOLG$$BDEJAFHCONL @ RVA 0x3363B4C

MMDDDDFHOLG_DOCBHLNBECF_o *
MMDDDDFHOLG__BDEJAFHCONL
          (System_String_o *FPFPALCKOJI,System_String_o *BCAEOEOGHLP,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_List_object__o *__this;
  System_String_o *__this_00;
  HJNEOLCKEMD_o *pHVar3;
  MMDDDDFHOLG_DOCBHLNBECF_o *pMVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567a9d & 1) == 0) {
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
    DAT_04567a9d = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           MMDDDDFHOLG_TypeInfo->static_fields->NELMGPHMBAN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)BCAEOEOGHLP,
                       Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_ContainsKey__
                      );
    if (bVar1) {
      if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               MMDDDDFHOLG_TypeInfo->static_fields->NELMGPHMBAN;
      if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (__this = (System_Collections_Generic_List_object__o *)
                   System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar2,(Il2CppObject *)BCAEOEOGHLP,
                              Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_get_Item__
                             ), __this == (System_Collections_Generic_List_object__o *)0x0))
      goto LAB_03463d04;
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
        pMVar4 = (MMDDDDFHOLG_DOCBHLNBECF_o *)local_50.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_Dispose__
                    );
          goto LAB_03463cdc;
        }
        if ((MMDDDDFHOLG_DOCBHLNBECF_o *)local_50.fields._current ==
            (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pHVar3 = ((MMDDDDFHOLG_DOCBHLNBECF_Fields *)((long)local_50.fields._current + 0x10))->
                 EDOEMIDBEGO;
        if (pHVar3 == (HJNEOLCKEMD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_00 = (pHVar3->fields)._COIPKAKHDFP_k__BackingField;
        if (__this_00 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = System_String__Equals(__this_00,FPFPALCKOJI,(MethodInfo *)0x0);
      } while (!bVar1);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_Dispose__
                );
    }
    else {
LAB_03463cdc:
      pMVar4 = (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0;
    }
    return pMVar4;
  }
LAB_03463d04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

