// MEJIKMPNBNL$$LFLCFGKPOAK @ RVA 0x32E7EB8

System_Collections_Generic_Dictionary_OOMHDDBCBJP__OOMHDDBCBJP__o *
MEJIKMPNBNL__LFLCFGKPOAK(MEJIKMPNBNL_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_OOMHDDBCBJP__o *pSVar2;
  Il2CppObject *pIVar3;
  System_Predicate_T__o *match;
  Il2CppObject *value;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  Il2CppClass *__this_01;
  Il2CppRGCTXData *str1;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567620 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_MEJIKMPNBNL_OKJOIEBAGHA_LFBLLGKKHHE__);
    FUN_01bab630(&MEJIKMPNBNL_OKJOIEBAGHA_TypeInfo);
    FUN_01bab630(&System_Predicate<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&StringLiteral_493);
    FUN_01bab630(&StringLiteral_5619);
    DAT_04567620 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>__ctor__);
  pSVar2 = (__this->fields).BDCBJJGNPMC;
  if (pSVar2 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
        return (System_Collections_Generic_Dictionary_OOMHDDBCBJP__OOMHDDBCBJP__o *)__this_00;
      }
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda818(MEJIKMPNBNL_OKJOIEBAGHA_TypeInfo);
      System_Object___ctor(pIVar3,(MethodInfo *)0x0);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      pIVar3 = pIVar3 + 1;
      pIVar3->klass = (Il2CppClass *)local_80.fields._current;
      thunk_FUN_01c20e04(pIVar3);
      if (pIVar3->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                        ((System_String_o *)pIVar3->klass->rgctx_data,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = (__this->fields).BDCBJJGNPMC;
        match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<OOMHDDBCBJP>_TypeInfo);
        System_Predicate<object>___ctor();
        if (pSVar2 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        value = System_Collections_Generic_List<object>__Find
                          ((System_Collections_Generic_List_object__o *)pSVar2,match,
                           Method_System_Collections_Generic_List<OOMHDDBCBJP>_Find__);
        __this_01 = pIVar3->klass;
        if (value == (Il2CppObject *)0x0) {
          if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          str1 = __this_01->rgctx_data;
          pSVar4 = OOMHDDBCBJP__LOHPFCGCHNH((OOMHDDBCBJP_o *)__this_01,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat
                             (StringLiteral_5619,(System_String_o *)str1,StringLiteral_493,pSVar4,
                              (MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
        }
        else {
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_Dictionary<object,_object>__Add
                    (__this_00,(Il2CppObject *)__this_01,value,
                     Method_System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>_Add__);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

