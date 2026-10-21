// BHOHBAAKHOJ$$PGFMFNKGIKF @ RVA 0x33DC784

System_String_o * BHOHBAAKHOJ__PGFMFNKGIKF(BHOHBAAKHOJ_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Text_StringBuilder_o *__this_00;
  GGHCLMEFIGO_o *__this_01;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_02;
  Il2CppObject *__this_03;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  Il2CppClass *CDLPIMJKCHK;
  MethodInfo *in_x3;
  ACHLOMELAJE_o *pAVar4;
  Il2CppClass *CNIELFLIKJB;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567e7b & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<HEFOANCOHDC>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_04567e7b = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
      (__this_01 = (pAVar4->fields).OIDPLCLELEN, __this_01 != (GGHCLMEFIGO_o *)0x0)) &&
     (__this_02 = GGHCLMEFIGO__PDBBGCIHBFL(__this_01,(MethodInfo *)0x0),
     __this_02 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_02,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      pIVar1 = local_70.fields._current;
      if (!bVar2) break;
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      CNIELFLIKJB = local_70.fields._current[1].klass;
      bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)local_70.fields._current[0xb].klass
                         ,Method_DJNBJHPDKDP_OBECCOPBADO<HEFOANCOHDC>__);
      __this_03 = (Il2CppObject *)(ulong)bVar2;
      if (bVar2) {
        CDLPIMJKCHK = (Il2CppClass *)0x0;
      }
      else {
        if (pIVar1[0xb].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_03 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pIVar1[0xb].klass,0,
                               Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
        if (__this_03 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CDLPIMJKCHK = __this_03[4].klass;
      }
      if (__this == (BHOHBAAKHOJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar3 = BHOHBAAKHOJ__CHENJHPJCKE
                         ((BHOHBAAKHOJ_o *)__this_03,(System_String_o *)CNIELFLIKJB,
                          (System_String_o *)CDLPIMJKCHK,in_x3);
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Text_StringBuilder__AppendLine(__this_00,pSVar3,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      pSVar3 = (System_String_o *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

