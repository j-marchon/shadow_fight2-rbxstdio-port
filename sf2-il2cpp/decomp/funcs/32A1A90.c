// IGJEEGBBNFC$$OACCDFCAIAM @ RVA 0x32A1A90

void IGJEEGBBNFC__OACCDFCAIAM
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *pSVar4;
  System_String_o *pSVar5;
  HJNEOLCKEMD_o *pHVar6;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045673c5 & 1) == 0) {
                    /* try { // try from 033a1ab8 to 034a1abf has its CatchHandler @ 033a1bb4 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_Dispose__
                );
                    /* try { // try from 033a1acc to 034a1ad3 has its CatchHandler @ 033a1af8 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_MoveNext__
                );
                    /* try { // try from 033a1ad8 to 034a1adb has its CatchHandler @ 033a1af0 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_get_Current__
                );
                    /* try { // try from 033a1adc to 034a1b1b has its CatchHandler @ 033a1758 */
                    /* catch() { ... } // from try @ 033a19e4 with catch @ 033a1ae0 */
    FUN_01bab630(&KDCMHPIBCFP_TypeInfo);
                    /* catch() { ... } // from try @ 033a1934 with catch @ 033a1aec */
                    /* catch() { ... } // from try @ 033a1ad8 with catch @ 033a1af0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_GetEnumerator__);
                    /* catch() { ... } // from try @ 033a1990 with catch @ 033a1af4 */
                    /* catch() { ... } // from try @ 033a1acc with catch @ 033a1af8 */
    FUN_01bab630(&MMDDDDFHOLG_TypeInfo);
                    /* catch() { ... } // from try @ 033a1918 with catch @ 033a1b00 */
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 033a1b1c to 034a1b1f has its CatchHandler @ 033a1ba8 */
    DAT_045673c5 = 1;
  }
                    /* try { // try from 033a1b20 to 034a1b5b has its CatchHandler @ 033a1758 */
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
    pHVar6 = (CPECAEHDDDB->fields).EDOEMIDBEGO;
    if (pHVar6 != (HJNEOLCKEMD_o *)0x0) {
      bVar1 = (KDCMHPIBCFP_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033a1b5c to 034a1b5f has its CatchHandler @ 033a1bd8 */
      if (((pHVar6->klass->_2).naturalAligment < bVar1) ||
         ((pHVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)KDCMHPIBCFP_TypeInfo
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pHVar6);
      }
    }
    pSVar4 = (__this->fields).AKMNHHKLCKL;
                    /* try { // try from 033a1b6c to 034a1b83 has its CatchHandler @ 033a1c54 */
    if (pSVar4 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
                    /* try { // try from 033a1b84 to 034a1b87 has its CatchHandler @ 033a1bd4 */
                    /* try { // try from 033a1b88 to 034a1b8f has its CatchHandler @ 033a1bc8 */
                    /* try { // try from 033a1b90 to 034a1b93 has its CatchHandler @ 033a1758 */
                    /* try { // try from 033a1b94 to 034a1b97 has its CatchHandler @ 033a1bc0 */
                    /* try { // try from 033a1b98 to 034a1b9b has its CatchHandler @ 033a1bbc */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
                    /* try { // try from 033a1b9c to 034a1b9f has its CatchHandler @ 033a1bc0 */
                    /* try { // try from 033a1ba0 to 034a1ba7 has its CatchHandler @ 033a1c54 */
                    /* catch() { ... } // from try @ 033a1b1c with catch @ 033a1ba8
                       try { // try from 033a1ba8 to 034a1bfb has its CatchHandler @ 033a1758 */
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
LAB_033a1bb0:
                    /* catch() { ... } // from try @ 033a1ab8 with catch @ 033a1bb4 */
                    /* catch() { ... } // from try @ 033a1a84 with catch @ 033a1bb8 */
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_MoveNext__
                        );
      pIVar2 = local_60.fields._current;
                    /* catch() { ... } // from try @ 033a1b98 with catch @ 033a1bbc */
      if (bVar3) {
                    /* catch() { ... } // from try @ 033a1b94 with catch @ 033a1bc0
                       catch() { ... } // from try @ 033a1b9c with catch @ 033a1bc0 */
        if (pHVar6 == (HJNEOLCKEMD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch() { ... } // from try @ 033a18f8 with catch @ 033a1bc4 */
                    /* catch() { ... } // from try @ 033a1b88 with catch @ 033a1bc8 */
                    /* catch() { ... } // from try @ 033a1a18 with catch @ 033a1bcc */
                    /* catch() { ... } // from try @ 033a18d4 with catch @ 033a1bd0 */
                    /* catch() { ... } // from try @ 033a1b84 with catch @ 033a1bd4 */
        bVar3 = System_String__op_Equality
                          ((System_String_o *)pHVar6[1].klass,StringLiteral_1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033a1b5c with catch @ 033a1bd8 */
        if (!bVar3) goto LAB_033a1be4;
                    /* catch() { ... } // from try @ 033a18c4 with catch @ 033a1bdc */
        if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        goto LAB_033a1c04;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_Dispose__
                );
      if (pHVar6 != (HJNEOLCKEMD_o *)0x0) {
        pSVar5 = (pHVar6->fields)._HFALHOCIDCH_k__BackingField;
                    /* catch() { ... } // from try @ 033a1bfc with catch @ 033a1c28 */
        if ((pSVar5 != (System_String_o *)0x0) &&
           (bVar3 = System_String__op_Inequality(pSVar5,StringLiteral_1,(MethodInfo *)0x0), bVar3))
        {
                    /* try { // try from 033a1c38 to 034a1c3f has its CatchHandler @ 033a1c54 */
          pSVar5 = (pHVar6->fields)._HFALHOCIDCH_k__BackingField;
                    /* try { // try from 033a1c40 to 034a1c4b has its CatchHandler @ 033a1758 */
          if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033a1c4c to 034a1c53 has its CatchHandler @ 033a1c54 */
            thunk_FUN_01ba7564();
          }
                    /* catch() { ... } // from try @ 033a1b6c with catch @ 033a1c54
                       catch() { ... } // from try @ 033a1ba0 with catch @ 033a1c54
                       catch() { ... } // from try @ 033a1c38 with catch @ 033a1c54
                       catch() { ... } // from try @ 033a1c4c with catch @ 033a1c54 */
          pSVar4 = MMDDDDFHOLG__HNBACDMIHHO(pSVar5,(MethodInfo *)0x0);
          if (pSVar4 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_78,(System_Collections_Generic_List_object__o *)pSVar4,
                       Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_GetEnumerator__
                      );
            local_60.fields._index = local_78.fields._index;
            local_60.fields._version = local_78.fields._version;
            local_60.fields._list = local_78.fields._list;
            local_60.fields._current = local_78.fields._current;
LAB_033a1c88:
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_60,
                               Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_MoveNext__
                              );
            pIVar2 = local_60.fields._current;
            if (bVar3) {
              if ((pHVar6[1].klass != (HJNEOLCKEMD_c *)0x0) &&
                 (bVar3 = System_String__Equals
                                    ((System_String_o *)pHVar6[1].klass,
                                     string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0),
                 !bVar3)) goto LAB_033a1cc8;
              if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              goto LAB_033a1cc0;
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_Dispose__
                      );
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_033a1be4:
                    /* catch() { ... } // from try @ 033a1894 with catch @ 033a1be4 */
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (pIVar2[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033a1bfc to 034a1bff has its CatchHandler @ 033a1c28 */
  bVar3 = System_String__op_Equality
                    ((System_String_o *)pHVar6[1].klass,
                     *(System_String_o **)((long)pIVar2[2].monitor + 0x20),(MethodInfo *)0x0);
                    /* try { // try from 033a1c00 to 034a1c37 has its CatchHandler @ 033a1758 */
  if (bVar3) {
LAB_033a1c04:
    *(undefined1 *)&pIVar2[1].klass = 1;
  }
  goto LAB_033a1bb0;
LAB_033a1cc8:
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (pIVar2[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (pHVar6[1].klass == (HJNEOLCKEMD_c *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar3 = System_String__Equals
                    ((System_String_o *)pHVar6[1].klass,
                     *(System_String_o **)((long)pIVar2[2].monitor + 0x20),(MethodInfo *)0x0);
  if (bVar3) {
LAB_033a1cc0:
    *(undefined1 *)&pIVar2[1].klass = 1;
  }
  goto LAB_033a1c88;
}

