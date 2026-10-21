// CAAJMGKIPIE$$IHDDNNEMAJE @ RVA 0x3003A0C

System_Collections_Generic_List_string__o *
CAAJMGKIPIE__IHDDNNEMAJE
          (CAAJMGKIPIE_o *__this,System_Collections_Generic_List_OANGEOLKMJG__o *FAFKNGFMFAJ,
          MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  OANGEOLKMJG_o *pOVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_o *item;
  System_Collections_Generic_List_ObscuredString__o *pSVar7;
  System_String_array *pSVar8;
  OANGEOLKMJG_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04565b30 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANGEOLKMJG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANGEOLKMJG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANGEOLKMJG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OANGEOLKMJG>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04565b30 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_98.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_98.fields._index = 0;
  local_98.fields._version = 0;
  local_98.fields._current = (Il2CppObject *)0x0;
  if (FAFKNGFMFAJ != (System_Collections_Generic_List_OANGEOLKMJG__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b0,(System_Collections_Generic_List_object__o *)FAFKNGFMFAJ,
               Method_System_Collections_Generic_List<OANGEOLKMJG>_GetEnumerator__);
    local_80.fields._index = local_b0.fields._index;
    local_80.fields._version = local_b0.fields._version;
    local_80.fields._list = local_b0.fields._list;
    local_80.fields._current = local_b0.fields._current;
    pOVar3 = (OANGEOLKMJG_o *)0x0;
    while (__this_02 = pOVar3,
          bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<OANGEOLKMJG>_MoveNext__
                            ), __this_00 = local_80.fields._current, bVar4) {
      if ((OANGEOLKMJG_o *)local_80.fields._current == (OANGEOLKMJG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar7 = ((OANGEOLKMJG_Fields *)((long)local_80.fields._current + 0x10))->FMFKGEJLDGO;
      if (pSVar7 == (System_Collections_Generic_List_ObscuredString__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pOVar3 = __this_02;
      if (((0 < (pSVar7->fields)._size) &&
          (bVar4 = OANGEOLKMJG__DGCODECJJCC
                             ((OANGEOLKMJG_o *)local_80.fields._current,(MethodInfo *)0x0), bVar4))
         && (pOVar3 = (OANGEOLKMJG_o *)__this_00, __this_02 != (OANGEOLKMJG_o *)0x0)) {
        iVar5 = OANGEOLKMJG__FPLGFNJEMDP(__this_02,(MethodInfo *)0x0);
        iVar6 = OANGEOLKMJG__FPLGFNJEMDP((OANGEOLKMJG_o *)__this_00,(MethodInfo *)0x0);
        pOVar3 = __this_02;
        if (iVar5 <= iVar6) {
          pOVar3 = (OANGEOLKMJG_o *)__this_00;
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<OANGEOLKMJG>_Dispose__);
    if (__this_02 == (OANGEOLKMJG_o *)0x0) {
      return (System_Collections_Generic_List_string__o *)0x0;
    }
    pSVar7 = (__this_02->fields).FMFKGEJLDGO;
    if (pSVar7 != (System_Collections_Generic_List_ObscuredString__o *)0x0) {
      iVar5 = (pSVar7->fields)._size;
      __this_01 = (System_Collections_Generic_List_string__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)__this_01,iVar5,
                 Method_System_Collections_Generic_List<string>__ctor__);
      pSVar7 = (__this_02->fields).FMFKGEJLDGO;
      if (pSVar7 != (System_Collections_Generic_List_ObscuredString__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar7,
                   Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
        while( true ) {
          bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_98,
                             Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__
                            );
          if (!bVar4) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_98,
                       Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__);
            return __this_01;
          }
          item = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                           ((CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)
                            local_98.fields._current,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
          if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) break;
          pSVar8 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pSVar8 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pSVar8->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pSVar8->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
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

