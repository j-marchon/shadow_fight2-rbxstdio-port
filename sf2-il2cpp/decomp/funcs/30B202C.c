// FEPPOONJCGI$$DOCPOJKODOE @ RVA 0x30B202C

void FEPPOONJCGI__DOCPOJKODOE(FEPPOONJCGI_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  Il2CppObject *__this_00;
  bool bVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *MDEBDNLAEKA;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  PANJAHAFBMD_o *__this_02;
  MGNPHCAAEIO_FGHBAEIKNBF_o *__this_03;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *CIADJOAENAM;
  ACHLOMELAJE_o *__this_04;
  MethodInfo *extraout_x1;
  System_String_o *item;
  MethodInfo *in_x2;
  MethodInfo *in_x3;
  System_String_array *pSVar7;
  MGNPHCAAEIO_ONAGKGIEEGI_o *pMVar8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_045661e4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                );
                    /* try { // try from 031b2084 to 032b20b3 has its CatchHandler @ 031b283c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
                    /* try { // try from 031b20c8 to 032b20cf has its CatchHandler @ 031b27f4 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14951);
                    /* try { // try from 031b20e4 to 032b20ef has its CatchHandler @ 031b27e8 */
    DAT_045661e4 = 1;
    method = extraout_x1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
                    /* try { // try from 031b2104 to 032b210b has its CatchHandler @ 031b27f8 */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
                    /* try { // try from 031b2124 to 032b212f has its CatchHandler @ 031b27dc */
  pMVar8 = MGNPHCAAEIO_TypeInfo->static_fields->PHHNGOGNMAG;
  MDEBDNLAEKA = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)MDEBDNLAEKA,
             Method_System_Collections_Generic_List<string>__ctor__);
  if ((pMVar8 != (MGNPHCAAEIO_ONAGKGIEEGI_o *)0x0) &&
     (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (pMVar8->fields).HPJKPNJHGMF,
     __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_b8,__this_01,
               Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__);
                    /* try { // try from 031b2170 to 032b219b has its CatchHandler @ 031b2828 */
    bVar6 = false;
    local_90.fields._version = local_b8.fields._version;
    local_90.fields._index = local_b8.fields._index;
    local_90.fields._dictionary = local_b8.fields._dictionary;
    local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
    local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
    local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_b8.fields._36_4_;
    while( true ) {
      bVar5 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                        );
      __this_00 = local_90.fields._current.fields.value;
      lVar4 = Method_System_Collections_Generic_List<string>_Add__;
      if (!bVar5) break;
      if ((LKPNOBFEAKD_o *)local_90.fields._current.fields.value == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (0 < ((LKPNOBFEAKD_Fields *)((long)local_90.fields._current.fields.value + 0x10))->
              KAFNDKOPMDH) {
        if (MDEBDNLAEKA == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = ((LKPNOBFEAKD_Fields *)((long)local_90.fields._current.fields.value + 0x10))->
               JIJLBFGKNJK;
        pSVar7 = (MDEBDNLAEKA->fields)._items;
        (MDEBDNLAEKA->fields)._version = (MDEBDNLAEKA->fields)._version + 1;
        if (pSVar7 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar3 = (MDEBDNLAEKA->fields)._size;
        if (uVar3 < (uint)pSVar7->max_length) {
                    /* try { // try from 031b21dc to 032b2203 has its CatchHandler @ 031b23e4 */
          (MDEBDNLAEKA->fields)._size = uVar3 + 1;
          pSVar7->m_Items[(int)uVar3] = item;
          thunk_FUN_01c20e04();
        }
        else {
          in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)MDEBDNLAEKA,(Il2CppObject *)item,
                     (MethodInfo_26E4DAC *)in_x2);
        }
        __this_02 = FEPPOONJCGI__HALKOOLIBED
                              (__this,((LKPNOBFEAKD_Fields *)((long)__this_00 + 0x10))->JIJLBFGKNJK,
                               in_x2);
        if (__this_02 == (PANJAHAFBMD_o *)0x0) {
          uVar3 = ((LKPNOBFEAKD_Fields *)((long)__this_00 + 0x10))->KAFNDKOPMDH;
          in_x2 = (MethodInfo *)(ulong)uVar3;
          FEPPOONJCGI__LMEMHLHEKIB
                    (__this,((LKPNOBFEAKD_Fields *)((long)__this_00 + 0x10))->JIJLBFGKNJK,uVar3,
                     in_x3);
        }
        else {
          iVar1 = (__this_02->fields).GAMONLCHOKL;
          iVar2 = ((LKPNOBFEAKD_Fields *)((long)__this_00 + 0x10))->KAFNDKOPMDH;
          bVar6 = System_String__op_Equality
                            (((LKPNOBFEAKD_Fields *)((long)__this_00 + 0x10))->BGHFADDGPAD,
                             StringLiteral_14951,(MethodInfo *)0x0);
          iVar2 = iVar2 + iVar1;
                    /* try { // try from 031b2240 to 032b226b has its CatchHandler @ 031b23dc */
          if (1 < iVar2 && bVar6) {
            iVar2 = 1;
          }
          in_x2 = (MethodInfo *)0x0;
          PANJAHAFBMD__ANDPGPBNPBC(__this_02,iVar2,(MethodInfo *)0x0);
        }
        bVar6 = true;
      }
      LKPNOBFEAKD__CJDAFEOKEMC((LKPNOBFEAKD_o *)__this_00,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
              );
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_03 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
    if (__this_03 != (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) {
                    /* try { // try from 031b22b0 to 032b22e3 has its CatchHandler @ 031b23e0 */
      CIADJOAENAM = MGNPHCAAEIO_FGHBAEIKNBF__EBKMLNCHIEP(__this_03,MDEBDNLAEKA,(MethodInfo *)0x0);
      MGNPHCAAEIO__MDBHECKGNBO(CIADJOAENAM,(MethodInfo *)0x0);
      if (bVar6) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 031b22fc to 032b236b has its CatchHandler @ 031b2830 */
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_04 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this_04 == (ACHLOMELAJE_o *)0x0) goto LAB_031b2358;
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_04,false,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_031b2358:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

