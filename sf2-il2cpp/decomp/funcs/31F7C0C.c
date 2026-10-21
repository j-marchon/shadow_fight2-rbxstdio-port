// NLPJLHOEAOE$$OBFDLNNBOGC @ RVA 0x31F7C0C

void NLPJLHOEAOE__OBFDLNNBOGC(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppObject *LIPGCBPEKFO;
  bool bVar3;
  GCPFDLNAFDF_o *pGVar4;
  VirtualInvokeData *pVVar5;
  BCHFHHHGEIP_o *__this_00;
  System_Collections_Generic_IEnumerable_FJIFBJMMKHG__o *source;
  System_Collections_Generic_List_TSource__o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  DOPEEDABNEK_o *pDVar6;
  HOOAAGABMBL_o *__this_03;
  System_String_o *a;
  NOAPKJBLPND_o *__this_04;
  DEFIPIDEFOO_o *OAOLCGAIILM;
  MethodInfo *extraout_x1;
  GCPFDLNAFDF_c *pGVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  bool local_84 [4];
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566dd1 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<FJIFBJMMKHG>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FJIFBJMMKHG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FJIFBJMMKHG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FJIFBJMMKHG>_get_Current__);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FJIFBJMMKHG>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566dd1 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_84[0] = false;
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  pGVar4 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar4 != (GCPFDLNAFDF_o *)0x0) {
    pGVar7 = pGVar4->klass;
    uVar1._0_1_ = (pGVar7->_2).rank;
    uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pGVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar5 = pGVar7->vtable + (*piVar9 + 4);
          goto LAB_032f7d50;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar4,HFHIKPAKJFG_TypeInfo,4);
LAB_032f7d50:
    __this_00 = (BCHFHHHGEIP_o *)(*pVVar5->methodPtr)(pGVar4,pVVar5->method);
    if (__this_00 != (BCHFHHHGEIP_o *)0x0) {
      source = BCHFHHHGEIP__KKEGCBHMGJI
                         (__this_00,(__this->fields)._PFHJDMOFFOG_k__BackingField,(MethodInfo *)0x0)
      ;
      __this_01 = System_Linq_Enumerable__ToList<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             Method_System_Linq_Enumerable_ToList<FJIFBJMMKHG>__);
      __this_02 = (System_Collections_Generic_HashSet_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_HashSet<HOOAAGABMBL>_TypeInfo);
      System_Collections_Generic_HashSet<object>___ctor
                (__this_02,Method_System_Collections_Generic_HashSet<HOOAAGABMBL>__ctor__);
      if (__this_01 != (System_Collections_Generic_List_TSource__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_a0,(System_Collections_Generic_List_object__o *)__this_01,
                   Method_System_Collections_Generic_List<FJIFBJMMKHG>_GetEnumerator__);
        local_80.fields._index = local_a0.fields._index;
        local_80.fields._version = local_a0.fields._version;
        local_80.fields._list = local_a0.fields._list;
        local_80.fields._current = local_a0.fields._current;
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<FJIFBJMMKHG>_MoveNext__
                                 ), LIPGCBPEKFO = local_80.fields._current, bVar3) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04563eaa == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04563eaa = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if ((FJIFBJMMKHG_o *)LIPGCBPEKFO == (FJIFBJMMKHG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pDVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
          if (pDVar6 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_03 = DOPEEDABNEK__CKKIPBAIEMN
                                (pDVar6,((FJIFBJMMKHG_Fields *)((long)LIPGCBPEKFO + 0x10))->
                                        _COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
          if (__this_03 != (HOOAAGABMBL_o *)0x0) {
            a = HOOAAGABMBL__GFMPCIOBMBJ(__this_03,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality
                              (a,((FJIFBJMMKHG_Fields *)((long)LIPGCBPEKFO + 0x10))->
                                 _DGKHEMIDIFL_k__BackingField,(MethodInfo *)0x0);
            if (!bVar3) {
              if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pGVar4 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
              if (pGVar4 == (GCPFDLNAFDF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pGVar7 = pGVar4->klass;
              uVar2._0_1_ = (pGVar7->_2).rank;
              uVar2._1_1_ = (pGVar7->_2).minimumAlignment;
              uVar8 = (ulong)uVar2;
              if (uVar8 != 0) {
                piVar9 = &((pGVar7->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                      (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
                    pVVar5 = pGVar7->vtable + (*piVar9 + 10);
                    goto LAB_032f7ef0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar4,HFHIKPAKJFG_TypeInfo,10);
LAB_032f7ef0:
              __this_04 = (NOAPKJBLPND_o *)(*pVVar5->methodPtr)(pGVar4,pVVar5->method);
              if (__this_04 == (NOAPKJBLPND_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              OAOLCGAIILM = NOAPKJBLPND__ECLKNKGJKMC
                                      (__this_04,
                                       ((FJIFBJMMKHG_Fields *)((long)LIPGCBPEKFO + 0x10))->
                                       _FNACGIPLEJC_k__BackingField,(MethodInfo *)0x0);
              HOOAAGABMBL__HCLEGBKJBCC
                        (__this_03,(FJIFBJMMKHG_o *)LIPGCBPEKFO,OAOLCGAIILM,local_84,
                         (MethodInfo *)0x0);
              if (local_84[0] != false) {
                if (__this_02 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                System_Collections_Generic_HashSet<object>__Add
                          (__this_02,(Il2CppObject *)__this_03,
                           Method_System_Collections_Generic_HashSet<HOOAAGABMBL>_Add__);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<FJIFBJMMKHG>_Dispose__);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pDVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if (pDVar6 != (DOPEEDABNEK_o *)0x0) {
          DOPEEDABNEK__MOBLJOJLMDN
                    (pDVar6,(System_Collections_Generic_IEnumerable_HOOAAGABMBL__o *)__this_02,0,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

