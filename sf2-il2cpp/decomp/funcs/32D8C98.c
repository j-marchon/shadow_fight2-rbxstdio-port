// NOMBKAHPOHM$$CONOMLLANKE @ RVA 0x32D8C98

void NOMBKAHPOHM__CONOMLLANKE(NOMBKAHPOHM_o *__this,bool LAHOGJFGKBL,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  FPPKHNNABAD_o *__this_01;
  UnityEngine_Events_UnityAction_T0__o *call;
  Il2CppClass *item;
  ACHLOMELAJE_o *pAVar4;
  GGHCLMEFIGO_o *pGVar5;
  System_String_o *pSVar6;
  GGHCLMEFIGO_OLAINNIFOGG_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045675a4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_NOMBKAHPOHM_JCCJCOCADKI__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<IGFGDDANEPE>_AddListener__);
    DAT_045675a4 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
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
  if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
     (pGVar5 = (pAVar4->fields).OIDPLCLELEN, pGVar5 != (GGHCLMEFIGO_o *)0x0)) {
    lVar1 = 0x40;
    if (!LAHOGJFGKBL) {
      lVar1 = 0x38;
    }
    __this_00 = *(System_Collections_Generic_List_object__o **)((long)&pGVar5->klass + lVar1);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,__this_00,
                 Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                          );
        lVar1 = Method_System_Collections_Generic_List<string>_Add__;
        if (!bVar3) break;
        if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = (__this->fields).NDBPOFMECGL;
        if (__this_01 == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = local_70.fields._current[1].klass;
        pSVar6 = (__this_01->fields)._COIPKAKHDFP_k__BackingField;
        *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) =
             *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) + 1;
        if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField;
        if (uVar2 < *(uint *)&pSVar6[1].klass) {
          *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField = uVar2 + 1;
          (&pSVar6[1].monitor)[(int)uVar2] = item;
          thunk_FUN_01c20e04(&pSVar6[1].monitor + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__)
      ;
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
      if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
         (pGVar5 = (pAVar4->fields).OIDPLCLELEN, pGVar5 != (GGHCLMEFIGO_o *)0x0)) {
        __this_02 = (pGVar5->fields).JCCJCOCADKI;
        call = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<IGFGDDANEPE>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_02 != (GGHCLMEFIGO_OLAINNIFOGG_o *)0x0) {
                    /* try { // try from 033d8f0c to 034d90a7 has its CatchHandler @ 033d8f0c
                       catch() { ... } // from try @ 033d8f0c with catch @ 033d8f0c
                       catch() { ... } // from try @ 033d91ec with catch @ 033d8f0c
                       catch() { ... } // from try @ 033d9290 with catch @ 033d8f0c
                       catch() { ... } // from try @ 033d9298 with catch @ 033d8f0c
                       catch() { ... } // from try @ 033d9358 with catch @ 033d8f0c */
          UnityEngine_Events_UnityEvent<object>__AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,call,
                     Method_UnityEngine_Events_UnityEvent<IGFGDDANEPE>_AddListener__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

