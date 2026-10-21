// NGKBNOEJLPH$$HANCKPLKOGA @ RVA 0x3496DD8

bool NGKBNOEJLPH__HANCKPLKOGA
               (NGKBNOEJLPH_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,int32_t ACCIHBHMFPN,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456844f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    __this = (NGKBNOEJLPH_o *)FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_0456844f = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
    bVar1 = false;
  }
  else {
    if (ACCIHBHMFPN == 1) {
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_045684c4 == '\0') {
        FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
        DAT_045684c4 = '\x01';
      }
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      lVar3 = 0x60;
    }
    else {
      if (ACCIHBHMFPN != 0) goto LAB_03596f94;
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_045684c3 == '\0') {
        FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
        DAT_045684c3 = '\x01';
      }
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      lVar3 = 0x50;
    }
    __this_00 = *(System_Collections_Generic_List_object__o **)
                 ((long)&OCMLPCKBHPN_TypeInfo->static_fields->JONKEOLIMBH + lVar3);
    __this = (NGKBNOEJLPH_o *)0x0;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
LAB_03596f94:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(__this);
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,__this_00,Method_System_Collections_Generic_List<string>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      if (!bVar1) {
        iVar4 = 2;
        goto LAB_03596f68;
      }
      bVar2 = ECENNHNBAME__CBJGGDFAACP
                        (NLEBDPHNIDI,(System_String_o *)local_48.fields._current,(MethodInfo *)0x0);
    } while (!bVar2);
    iVar4 = 7;
LAB_03596f68:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    bVar1 = bVar1 && iVar4 == 7;
  }
  return bVar1;
}

