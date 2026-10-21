// GGHCLMEFIGO$$FKOBJFLAANL @ RVA 0x33B4BFC

void GGHCLMEFIGO__FKOBJFLAANL(GGHCLMEFIGO_o *__this,IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t val2;
  int32_t val1;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  ACHLOMELAJE_o *__this_01;
  HOOAAGABMBL_o *__this_02;
  int32_t CJNHFNHJHPE;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 034b4c1c to 035b4c27 has its CatchHandler @ 034b26b0 */
  if ((DAT_04567d6a & 1) == 0) {
                    /* try { // try from 034b4c28 to 035b4c2f has its CatchHandler @ 034b4c30 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
                    /* catch() { ... } // from try @ 034b44d0 with catch @ 034b4c30
                       catch() { ... } // from try @ 034b4548 with catch @ 034b4c30
                       catch() { ... } // from try @ 034b4af8 with catch @ 034b4c30
                       catch() { ... } // from try @ 034b4bb4 with catch @ 034b4c30
                       catch() { ... } // from try @ 034b4c28 with catch @ 034b4c30 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    __this = (GGHCLMEFIGO_o *)FUN_01bab630(&StringLiteral_14587);
    DAT_04567d6a = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (ENHJPOHLMCL != (IGFGDDANEPE_o *)0x0) {
    __this_02 = (ENHJPOHLMCL->fields).PCBECBEFJOI;
    iVar4 = IGFGDDANEPE__LGIMDOAMCNG(ENHJPOHLMCL,(MethodInfo *)0x0);
    if ((__this_02 == (HOOAAGABMBL_o *)0x0) ||
       ((__this_02->fields)._HCHGENFJLHA_k__BackingField == iVar4)) {
      return;
    }
    IGFGDDANEPE__CCOEOCPGJBG(ENHJPOHLMCL,StringLiteral_14587,(MethodInfo *)0x0);
    __this_00 = HOOAAGABMBL__DBONHFEAOEG(__this_02,false,0x7fffffff,(MethodInfo *)0x0);
    __this = (GGHCLMEFIGO_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      bVar2 = false;
      val1 = -0x80000000;
      CJNHFNHJHPE = 0x7fffffff;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_70,
                                Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__
                               ), bVar3) {
        if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_70.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034b4e68 to 035b4e73 has its CatchHandler @ 034b4f94 */
          FUN_01bab8c8();
        }
        val2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                           &(local_70.fields._current[1].klass)->static_fields,(MethodInfo *)0x0);
        if (val2 == iVar4) {
                    /* try { // try from 034b4e3c to 035b4e4f has its CatchHandler @ 034b4fa0 */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
          return;
        }
        bVar2 = (bool)(bVar2 | (iVar4 <= val2 && val2 < CJNHFNHJHPE));
        iVar1 = val2;
        if (iVar4 > val2 || val2 >= CJNHFNHJHPE) {
          iVar1 = CJNHFNHJHPE;
        }
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        val1 = System_Math__Max(val1,val2,(MethodInfo *)0x0);
        CJNHFNHJHPE = iVar1;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__)
      ;
      if (!bVar2) {
        CJNHFNHJHPE = val1;
      }
      IGFGDDANEPE__DJJHOOKLHHL(ENHJPOHLMCL,CJNHFNHJHPE,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
                    /* try { // try from 034b4dec to 035b4e3b has its CatchHandler @ 034b4dec
                       catch() { ... } // from try @ 034b4dec with catch @ 034b4dec
                       catch() { ... } // from try @ 034b4f6c with catch @ 034b4dec
                       catch() { ... } // from try @ 034b4fd0 with catch @ 034b4dec
                       catch() { ... } // from try @ 034b5044 with catch @ 034b4dec */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      __this = (GGHCLMEFIGO_o *)0x0;
      if (__this_01 != (ACHLOMELAJE_o *)0x0) {
        iVar4 = ACHLOMELAJE__EOEAKGGDBFH(__this_01,(MethodInfo *)0x0);
        IGFGDDANEPE__GIIJHCLHFDK(ENHJPOHLMCL,iVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

