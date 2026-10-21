// NGKBNOEJLPH$$OGCEOCDCAHC @ RVA 0x3496618

/* WARNING: Removing unreachable block (ram,0x03596808) */
/* WARNING: Removing unreachable block (ram,0x035968d8) */

int32_t NGKBNOEJLPH__OGCEOCDCAHC(NGKBNOEJLPH_o *__this,MethodInfo *method)

{
  Il2CppObject *value;
  bool bVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *pSVar3;
  int index;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456844b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_set_Item__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_0456844b = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045684c0 == '\0') {
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_045684c0 = '\x01';
    method = extraout_x1_01;
  }
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo,method);
  }
  pSVar3 = (__this->fields).JOMJAAIPNPH;
  if (pSVar3 == (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00 = OCMLPCKBHPN_TypeInfo->static_fields->JICHPIOKKMD;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_GetEnumerator__);
  index = 0;
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_MoveNext__
                      );
    value = local_80.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_Dispose__
                );
      return index;
    }
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      if (!bVar1) break;
      if ((System_String_o *)value == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(System_String_Fields *)((long)value + 0x10) == (System_String_Fields)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = ECENNHNBAME__CBJGGDFAACP
                        ((ECENNHNBAME_o *)*(System_String_Fields *)((long)value + 0x10),
                         (System_String_o *)local_a0.fields._current,(MethodInfo *)0x0);
    } while (!bVar2);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    if (!bVar1) {
      pSVar3 = (__this->fields).JOMJAAIPNPH;
      if (pSVar3 == (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__set_Item
                ((System_Collections_Generic_List_object__o *)pSVar3,index,value,
                 Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_set_Item__);
      index = index + 1;
    }
  } while( true );
}

