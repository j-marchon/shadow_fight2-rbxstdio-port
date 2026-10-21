// NGKBNOEJLPH$$PDAGBPHALDN @ RVA 0x349C89C

bool NGKBNOEJLPH__PDAGBPHALDN(NGKBNOEJLPH_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_00;
  OPNFCOGALLI_o *pOVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568462 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04568462 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pOVar3 = (__this->fields).LGJKGLINMGP;
  if (pOVar3 != (OPNFCOGALLI_o *)0x0) {
    bVar1 = false;
    if ((NLEBDPHNIDI != (ECENNHNBAME_o *)0x0) && ((pOVar3->fields).AANDHIFMLHC != false)) {
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_045684cd == '\0') {
        FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
        DAT_045684cd = '\x01';
      }
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = OCMLPCKBHPN_TypeInfo->static_fields->EDLGDPAGJHN;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0359c9f8;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<string>_GetEnumerator__);
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
        if (!bVar1) {
          iVar4 = 2;
          goto LAB_0359c9c8;
        }
        bVar2 = ECENNHNBAME__CBJGGDFAACP
                          (NLEBDPHNIDI,(System_String_o *)local_38.fields._current,(MethodInfo *)0x0
                          );
      } while (!bVar2);
      iVar4 = 5;
LAB_0359c9c8:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_38,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      bVar1 = bVar1 && iVar4 == 5;
    }
    return bVar1;
  }
LAB_0359c9f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

