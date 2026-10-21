// EHCCNKFIPPA$$GIENGNEGHPJ @ RVA 0x331CC5C

/* WARNING: Removing unreachable block (ram,0x0341cdcc) */

void EHCCNKFIPPA__GIENGNEGHPJ(EHCCNKFIPPA_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PHDCILJMEHO__o *__this_00;
  System_String_Fields __this_01;
  MethodInfo *extraout_x1;
  System_String_o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567823 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
    DAT_04567823 = 1;
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
  __this_00 = (__this->fields)._BPHPMGBCNOO_k__BackingField;
  if (__this_00 == (System_Collections_Generic_List_PHDCILJMEHO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
  local_60.fields._index = local_98.fields._index;
  local_60.fields._version = local_98.fields._version;
  local_60.fields._list = local_98.fields._list;
  local_60.fields._current = local_98.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__)
      ;
      return;
    }
    if ((NJPBBPOABKP_o *)local_60.fields._current == (NJPBBPOABKP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = ((NJPBBPOABKP_Fields *)((long)local_60.fields._current + 0x10))->
             _COIPKAKHDFP_k__BackingField;
    if (pSVar2 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = pSVar2[10].fields;
    if (__this_01 == (System_String_Fields)0x0) break;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__
                             ), bVar1) {
      if ((NJPBBPOABKP_o *)local_80.fields._current == (NJPBBPOABKP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      NJPBBPOABKP__GIENGNEGHPJ((NJPBBPOABKP_o *)local_80.fields._current,__this,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

