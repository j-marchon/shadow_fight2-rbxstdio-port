// OLKKAIFGGAK.OJHIDJPICJN$$BCKHIHGPFEF @ RVA 0x34F8E74

/* WARNING: Removing unreachable block (ram,0x035f9054) */
/* WARNING: Removing unreachable block (ram,0x035f9128) */

void OLKKAIFGGAK_OJHIDJPICJN__BCKHIHGPFEF
               (OLKKAIFGGAK_OJHIDJPICJN_o *__this,
               System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD,MethodInfo *method)

{
  Il2CppObject *item;
  bool bVar1;
  int32_t BKFOLMBMFNP;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568812 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__);
    DAT_04568812 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if (ELAGKBMJCOD == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
             Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    item = local_80.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__)
      ;
      return;
    }
    if ((KJFPGDFNFCL_o *)local_80.fields._current == (KJFPGDFNFCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = (((KJFPGDFNFCL_o *)((long)local_80.fields._current + 0x48))->fields).KFFGGNGPNLO;
    if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (pSVar3[3].klass == (System_String_c *)0x0) break;
    if (*(char *)&((pSVar3[3].klass)->_1).name != '\0') {
      pSVar2 = (__this->fields).KIHPMHHBCKM;
      if (pSVar2 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method = Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__;
      bVar1 = System_Collections_Generic_List<object>__Remove
                        ((System_Collections_Generic_List_object__o *)pSVar2,
                         local_80.fields._current,
                         (MethodInfo_26E62D4 *)
                         Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__);
      pSVar3 = (((KJFPGDFNFCL_o *)((long)item + 0x48))->fields).KFFGGNGPNLO;
      if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(bVar1);
      }
    }
    if (pSVar3->fields == (System_String_Fields)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)pSVar3->fields,
               Method_System_Collections_Generic_List<KJFPGDFNFCL>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_MoveNext__
                             ), bVar1) {
      if ((KJFPGDFNFCL_o *)local_a0.fields._current == (KJFPGDFNFCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      BKFOLMBMFNP = KJFPGDFNFCL__NHGGBEACKBD
                              ((KJFPGDFNFCL_o *)local_a0.fields._current,(MethodInfo *)0x0);
      pSVar2 = OLKKAIFGGAK_OJHIDJPICJN__CENMCPCOAGF(__this,BKFOLMBMFNP,method);
      if (pSVar2 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method = Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,item,
                 (MethodInfo_26E62D4 *)Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__)
      ;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_Dispose__);
    pSVar2 = (__this->fields).JGHBKJJEOBO;
    if (pSVar2 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method = Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__;
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)pSVar2,item,
               (MethodInfo_26E62D4 *)Method_System_Collections_Generic_List<ECENNHNBAME>_Remove__);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

