// NLCLFNMIEJC$$GGEDMGGBCHN @ RVA 0x31DB624

System_Collections_Generic_List_OPHDIHJPHDE__o *
NLCLFNMIEJC__GGEDMGGBCHN(Core_Configs_Models_LocalDailyConfig_o *PCMFDDODKED,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *__this;
  VirtualInvokeData *pVVar5;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Int32_array *pSVar6;
  System_Collections_Generic_IReadOnlyList_LocalDailyQuestInfo__o *source_00;
  System_Func_LocalDailyQuestInfo__int__o **ppSVar7;
  System_Linq_IOrderedEnumerable_TSource__o *source_01;
  System_Collections_Generic_List_TSource__o *NMMKGIMBHFF;
  System_Action_T__o *CPECAEHDDDB;
  System_String_o *pSVar8;
  MethodInfo *extraout_x1;
  System_Collections_Generic_IReadOnlyDictionary_int__List_LocalDailyQuestInfo___c *pSVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_Collections_Generic_IReadOnlyDictionary_int__List_LocalDailyQuestInfo___o *pSVar12;
  System_Func_LocalDailyQuestInfo__int__o *keySelector;
  int32_t local_34;
  
  if ((DAT_04566d15 & 1) == 0) {
    FUN_01bab630(&System_Action<LocalDailyQuestInfo>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<LocalDailyQuestInfo>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<LocalDailyQuestInfo>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderBy<LocalDailyQuestInfo,_int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<LocalDailyQuestInfo>__);
    FUN_01bab630(&System_Func<LocalDailyQuestInfo,_int>_TypeInfo);
    FUN_01bab630(&
                 System_Collections_Generic_IReadOnlyDictionary<int,_List<LocalDailyQuestInfo>>_TypeInfo
                );
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPHDIHJPHDE>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&Method_NLCLFNMIEJC_OCDPFLPEGDO_NKGBPHDHEPA__);
    FUN_01bab630(&NLCLFNMIEJC_OCDPFLPEGDO_TypeInfo);
    FUN_01bab630(&Method_NLCLFNMIEJC_<>c_ICINMCJLNIA__);
    FUN_01bab630(&NLCLFNMIEJC_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_8585);
    DAT_04566d15 = 1;
    method = extraout_x1;
  }
  local_34 = 0;
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(NLCLFNMIEJC_OCDPFLPEGDO_TypeInfo,method);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  __this = (Il2CppClass *)thunk_FUN_01bda818(System_Collections_Generic_List<OPHDIHJPHDE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<OPHDIHJPHDE>__ctor__);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4 = pIVar4 + 1;
    pIVar4->klass = __this;
    thunk_FUN_01c20e04(pIVar4,__this);
    if ((PCMFDDODKED != (Core_Configs_Models_LocalDailyConfig_o *)0x0) &&
       (pSVar12 = (PCMFDDODKED->fields)._LocalDailyQuestsInfoBySequence_k__BackingField,
       pSVar12 !=
       (System_Collections_Generic_IReadOnlyDictionary_int__List_LocalDailyQuestInfo___o *)0x0)) {
      pSVar9 = pSVar12->klass;
      uVar1._0_1_ = (pSVar9->_2).rank;
      uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)
              System_Collections_Generic_IReadOnlyDictionary<int,_List<LocalDailyQuestInfo>>_TypeInfo
             ) {
            pVVar5 = pSVar9->vtable + (*piVar11 + 3);
            goto LAB_032db7e0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar12,
                            System_Collections_Generic_IReadOnlyDictionary<int,_List<LocalDailyQuestInfo>>_TypeInfo
                            ,3);
LAB_032db7e0:
      source = (System_Collections_Generic_IEnumerable_TSource__o *)
               (*pVVar5->methodPtr)(pSVar12,pVVar5->method);
      pSVar6 = System_Linq_Enumerable__ToArray<int>
                         (source,Method_System_Linq_Enumerable_ToArray<int>__);
      if (pSVar6 != (System_Int32_array *)0x0) {
        if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        uVar3 = LIIFLGALGNK__HLMBDJOGONJ((int32_t)pSVar6->max_length,(MethodInfo *)0x0);
        if (uVar3 < (uint)pSVar6->max_length) {
          local_34 = pSVar6->m_Items[(int)uVar3];
          source_00 = Core_Configs_Models_LocalDailyConfigExtension__GetLocalDailyQuestInfos
                                (PCMFDDODKED,local_34,(MethodInfo *)0x0);
          bVar2 = System_Linq_Enumerable__Any<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                             Method_System_Linq_Enumerable_Any<LocalDailyQuestInfo>__);
          if (bVar2) {
            if ((NLCLFNMIEJC_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            keySelector = NLCLFNMIEJC_<>c_TypeInfo->static_fields->__9__0_0;
            if (keySelector == (System_Func_LocalDailyQuestInfo__int__o *)0x0) {
              if ((NLCLFNMIEJC_<>c_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              keySelector = (System_Func_LocalDailyQuestInfo__int__o *)
                            thunk_FUN_01bda818(System_Func<LocalDailyQuestInfo,_int>_TypeInfo);
              System_Func<object,_int>___ctor();
              ppSVar7 = &NLCLFNMIEJC_<>c_TypeInfo->static_fields->__9__0_0;
              *ppSVar7 = keySelector;
              thunk_FUN_01c20e04(ppSVar7,keySelector);
            }
            source_01 = System_Linq_Enumerable__OrderBy<object,_int>
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                                   (System_Func_TSource__TKey__o *)keySelector,
                                   Method_System_Linq_Enumerable_OrderBy<LocalDailyQuestInfo,_int>__
                                  );
            NMMKGIMBHFF = System_Linq_Enumerable__ToList<object>
                                    ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                                     Method_System_Linq_Enumerable_ToList<LocalDailyQuestInfo>__);
            CPECAEHDDDB = (System_Action_T__o *)
                          thunk_FUN_01bda818(System_Action<LocalDailyQuestInfo>_TypeInfo);
            System_Action<object>___ctor();
            DFPABHGJPJJ__NHDPECDJBGO<object>
                      ((System_Collections_Generic_IEnumerable_T__o *)NMMKGIMBHFF,CPECAEHDDDB,
                       Method_DFPABHGJPJJ_NHDPECDJBGO<LocalDailyQuestInfo>__);
          }
          else {
            pSVar8 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
            pSVar8 = System_String__Concat(StringLiteral_8585,pSVar8,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
          }
          return (System_Collections_Generic_List_OPHDIHJPHDE__o *)pIVar4->klass;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

