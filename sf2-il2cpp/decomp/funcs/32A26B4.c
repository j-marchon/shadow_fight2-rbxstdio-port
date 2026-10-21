// IGJEEGBBNFC$$FFNLHOHOELL @ RVA 0x32A26B4

void IGJEEGBBNFC__FFNLHOHOELL
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *DKAENNPDMIH;
  bool bVar2;
  MMDDDDFHOLG_DOCBHLNBECF_o *DKAENNPDMIH_00;
  OLKKAIFGGAK_o *pOVar3;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_00;
  HJNEOLCKEMD_o *pHVar4;
  HJNEOLCKEMD_o *pHVar5;
  HJNEOLCKEMD_c *FPFPALCKOJI;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045673ce & 1) == 0) {
    FUN_01bab630(&ABHILFLLPOD_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_GetEnumerator__);
    FUN_01bab630(&MMDDDDFHOLG_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045673ce = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar5 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar5 != (HJNEOLCKEMD_o *)0x0)) {
    bVar1 = (ABHILFLLPOD_TypeInfo->_2).naturalAligment;
    if (((pHVar5->klass->_2).naturalAligment < bVar1) ||
       ((pHVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)ABHILFLLPOD_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar5);
    }
    a = (pHVar5->fields)._HFALHOCIDCH_k__BackingField;
    if ((a == (System_String_o *)0x0) ||
       (bVar2 = System_String__op_Inequality(a,StringLiteral_1,(MethodInfo *)0x0), !bVar2)) {
      __this_00 = (__this->fields).AKMNHHKLCKL;
      if (__this_00 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0)
      goto LAB_033a28a4;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_MoveNext__
                          );
        DKAENNPDMIH = local_50.fields._current;
        if (!bVar2) break;
        if ((MMDDDDFHOLG_DOCBHLNBECF_o *)local_50.fields._current ==
            (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pHVar4 = ((MMDDDDFHOLG_DOCBHLNBECF_Fields *)((long)local_50.fields._current + 0x10))->
                 EDOEMIDBEGO;
        if (pHVar4 == (HJNEOLCKEMD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__op_Equality
                          ((System_String_o *)pHVar5[1].klass,
                           (pHVar4->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
        if (bVar2) {
          pOVar3 = ((MMDDDDFHOLG_DOCBHLNBECF_Fields *)((long)DKAENNPDMIH + 0x10))->HEMGHNOOJPI;
          if (pOVar3 == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          OLKKAIFGGAK__JPJIJEGHMKL
                    (pOVar3,(MMDDDDFHOLG_DOCBHLNBECF_o *)DKAENNPDMIH,CPECAEHDDDB,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_Dispose__
                );
    }
    else {
      FPFPALCKOJI = pHVar5[1].klass;
      if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      DKAENNPDMIH_00 = MMDDDDFHOLG__BDEJAFHCONL((System_String_o *)FPFPALCKOJI,a,(MethodInfo *)0x0);
      if (DKAENNPDMIH_00 != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
        pOVar3 = (DKAENNPDMIH_00->fields).HEMGHNOOJPI;
        if (pOVar3 == (OLKKAIFGGAK_o *)0x0) goto LAB_033a28a4;
        OLKKAIFGGAK__JPJIJEGHMKL(pOVar3,DKAENNPDMIH_00,CPECAEHDDDB,(MethodInfo *)0x0);
      }
    }
    return;
  }
LAB_033a28a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

