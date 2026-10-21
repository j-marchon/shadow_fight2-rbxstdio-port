// NGKBNOEJLPH$$KECJFOANCJP @ RVA 0x3497584

bool NGKBNOEJLPH__KECJFOANCJP(NGKBNOEJLPH_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  OPNFCOGALLI_o *pOVar3;
  JADGCGOJLJB_o *pJVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  int iVar5;
  ECENNHNBAME_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568453 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
                    /* try { // try from 035975e0 to 0369777f has its CatchHandler @ 035975e0
                       catch() { ... } // from try @ 035975e0 with catch @ 035975e0
                       catch() { ... } // from try @ 0359786c with catch @ 035975e0
                       catch() { ... } // from try @ 035978ac with catch @ 035975e0
                       catch() { ... } // from try @ 035978ec with catch @ 035975e0
                       catch() { ... } // from try @ 0359791c with catch @ 035975e0 */
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04568453 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045684c6 == '\0') {
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_045684c6 = '\x01';
    method = extraout_x1_01;
  }
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo,method);
  }
  pSVar2 = OCMLPCKBHPN_TypeInfo->static_fields->PLAGPPCMOCG;
  if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          bVar1) {
      pOVar3 = (__this->fields).LGJKGLINMGP;
      if (pOVar3 == (OPNFCOGALLI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pJVar4 = OPNFCOGALLI__HIMFHBJAEMJ
                         (pOVar3,(System_String_o *)local_60.fields._current,(MethodInfo *)0x0);
      if (pJVar4 != (JADGCGOJLJB_o *)0x0) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
        return false;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    pOVar3 = (__this->fields).LGJKGLINMGP;
    if (pOVar3 != (OPNFCOGALLI_o *)0x0) {
      if ((pOVar3->fields).AANDHIFMLHC == false) {
        return false;
      }
      __this_00 = (__this->fields).JDEONPMMCEL;
      if (__this_00 == (ECENNHNBAME_o *)0x0) {
        return false;
      }
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_045684c7 == '\0') {
        FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
        DAT_045684c7 = '\x01';
      }
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = OCMLPCKBHPN_TypeInfo->static_fields->BKECCEEAGMH;
      if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)pSVar2,
                   Method_System_Collections_Generic_List<string>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
        local_60.fields._list = local_78.fields._list;
        local_60.fields._current = local_78.fields._current;
        do {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
          if (!bVar1) {
            iVar5 = 9;
            goto LAB_03597794;
          }
          bVar1 = ECENNHNBAME__CBJGGDFAACP
                            (__this_00,(System_String_o *)local_60.fields._current,(MethodInfo *)0x0
                            );
        } while (!bVar1);
        iVar5 = 4;
LAB_03597794:
                    /* try { // try from 0359779c to 036977a3 has its CatchHandler @ 035978c4 */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
                    /* try { // try from 03597780 to 03697787 has its CatchHandler @ 035978c8 */
        return iVar5 == 9;
                    /* try { // try from 035977a8 to 036977af has its CatchHandler @ 035978bc */
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

