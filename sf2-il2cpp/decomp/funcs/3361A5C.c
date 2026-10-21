// MMDDDDFHOLG$$DGLJCGNHLIG @ RVA 0x3361A5C

/* WARNING: Removing unreachable block (ram,0x03461c14) */

void MMDDDDFHOLG__DGLJCGNHLIG(MMDDDDFHOLG_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_01;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_02;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567a87 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGJEEGBBNFC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
    FUN_01bab630(&MMDDDDFHOLG_TypeInfo);
    DAT_04567a87 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MMDDDDFHOLG_TypeInfo,method);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
              MMDDDDFHOLG_TypeInfo->static_fields->HIHPADFEPFO;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_int>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_int>_Clear__);
    __this_01 = (__this->fields).PNGAKAPODKB;
    if (__this_01 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
      local_60.fields._index = local_98.fields._index;
      local_60.fields._version = local_98.fields._version;
      local_60.fields._list = local_98.fields._list;
      local_60.fields._current = local_98.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_60,
                     Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
          return;
        }
        if ((IGJEEGBBNFC_o *)local_60.fields._current == (IGJEEGBBNFC_o *)0x0) break;
        __this_02 = ((IGJEEGBBNFC_Fields *)((long)local_60.fields._current + 0x10))->FNEKKIBOEKE;
        if (__this_02 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)__this_02,
                   Method_System_Collections_Generic_List<IGJEEGBBNFC>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_MoveNext__
                                 ), bVar1) {
          if ((IGJEEGBBNFC_o *)local_80.fields._current == (IGJEEGBBNFC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          IGJEEGBBNFC__AHJBAPBFEDD((IGJEEGBBNFC_o *)local_80.fields._current,true,(MethodInfo *)0x0)
          ;
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<IGJEEGBBNFC>_Dispose__);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

