// JIBAEMHNBOF$$MJLBCAGDDFG @ RVA 0x30C9508

void JIBAEMHNBOF__MJLBCAGDDFG(JIBAEMHNBOF_o *__this,MethodInfo *method)

{
  int32_t length;
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  JIBAEMHNBOF_CCLKFPLCOEI_o *__this_00;
  System_Func_TSource__bool__o *predicate;
  JIBAEMHNBOF_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *pSVar4;
  KCJCIJHMEJF_c *pKVar5;
  ulong uVar6;
  int32_t *piVar7;
  KCJCIJHMEJF_o *pKVar8;
  JIBAEMHNBOF_CCLKFPLCOEI_Fields *pJVar9;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045662d6 & 1) == 0) {
    FUN_01bab630(&Method_JIBAEMHNBOF_CCLKFPLCOEI_OOBFKMDCNBI__);
    FUN_01bab630(&JIBAEMHNBOF_CCLKFPLCOEI_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JIBAEMHNBOF_HHCLGENAOLA>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JIBAEMHNBOF_HHCLGENAOLA>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JIBAEMHNBOF_HHCLGENAOLA>_get_Current__
                );
    FUN_01bab630(&System_Func<NCCFNKMICGK,_bool>_TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662d6 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields).LIDLGDLCMEE;
  if (pSVar4 != (System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *)0x0) {
    if ((pSVar4->fields)._size == 0) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_045662dd == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_045662dd = '\x01';
      method = extraout_x1_01;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    pKVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
    if (pKVar8 != (KCJCIJHMEJF_o *)0x0) {
      pKVar5 = pKVar8->klass;
      uVar1._0_1_ = (pKVar5->_2).rank;
      uVar1._1_1_ = (pKVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pKVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
            pVVar3 = pKVar5->vtable + (*piVar7 + 9);
            goto LAB_031c9694;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar8,KCJCIJHMEJF_TypeInfo,9);
LAB_031c9694:
      source = (System_Collections_Generic_IEnumerable_TSource__o *)
               (*pVVar3->methodPtr)(pKVar8,pVVar3->method);
      pSVar4 = (__this->fields).LIDLGDLCMEE;
      if (pSVar4 != (System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar4,
                   Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<JIBAEMHNBOF_HHCLGENAOLA>_MoveNext__
                                 ), bVar2) {
          __this_00 = (JIBAEMHNBOF_CCLKFPLCOEI_o *)
                      thunk_FUN_01bda818(JIBAEMHNBOF_CCLKFPLCOEI_TypeInfo);
          JIBAEMHNBOF_CCLKFPLCOEI___ctor(__this_00,(MethodInfo *)0x0);
          if (__this_00 == (JIBAEMHNBOF_CCLKFPLCOEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pJVar9 = &__this_00->fields;
          pJVar9->offerData = (JIBAEMHNBOF_HHCLGENAOLA_o *)local_80.fields._current;
          thunk_FUN_01c20e04(pJVar9);
          predicate = (System_Func_TSource__bool__o *)
                      thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
          method_00 = (MethodInfo *)0x0;
          System_Func<object,_bool>___ctor();
          __this_01 = (JIBAEMHNBOF_o *)
                      System_Linq_Enumerable__FirstOrDefault<object>
                                (source,predicate,
                                 Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
          JIBAEMHNBOF__BGNGHFFFHNA(__this_01,(NCCFNKMICGK_o *)__this_01,pJVar9->offerData,method_00)
          ;
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<JIBAEMHNBOF_HHCLGENAOLA>_Dispose__
                  );
        pSVar4 = (__this->fields).LIDLGDLCMEE;
        if (pSVar4 != (System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *)0x0) {
          length = (pSVar4->fields)._size;
          (pSVar4->fields)._size = 0;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (length < 1) {
            return;
          }
          System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

