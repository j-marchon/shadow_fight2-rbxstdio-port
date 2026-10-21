// JIBAEMHNBOF$$JILPBOBHBJH @ RVA 0x30CB600

void JIBAEMHNBOF__JILPBOBHBJH(JIBAEMHNBOF_o *__this,NCCFNKMICGK_o *NLFMDIGKNGP,MethodInfo *method)

{
  int32_t length;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  JIBAEMHNBOF_PJCFOJCHHHH_o *__this_00;
  System_Predicate_T__o *match;
  JIBAEMHNBOF_HHCLGENAOLA_o *__this_01;
  VirtualInvokeData *pVVar7;
  long lVar8;
  System_String_o *pSVar9;
  JIBAEMHNBOF_HHCLGENAOLA_array *pJVar10;
  NCCFNKMICGK_c *pNVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *pSVar14;
  System_String_o **ppSVar15;
  JIBAEMHNBOF_PJCFOJCHHHH_Fields *pJVar16;
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_02;
  NCCFNKMICGK_o *pNVar17;
  
  if ((DAT_045662d7 & 1) == 0) {
    FUN_01bab630(&JIBAEMHNBOF_HHCLGENAOLA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_Find__);
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    FUN_01bab630(&Method_JIBAEMHNBOF_PJCFOJCHHHH_OKEGDDNIIOA__);
    FUN_01bab630(&JIBAEMHNBOF_PJCFOJCHHHH_TypeInfo);
    FUN_01bab630(&System_Predicate<JIBAEMHNBOF_HHCLGENAOLA>_TypeInfo);
    DAT_045662d7 = 1;
  }
  __this_00 = (JIBAEMHNBOF_PJCFOJCHHHH_o *)thunk_FUN_01bda818(JIBAEMHNBOF_PJCFOJCHHHH_TypeInfo);
  JIBAEMHNBOF_PJCFOJCHHHH___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (JIBAEMHNBOF_PJCFOJCHHHH_o *)0x0) {
    pJVar16 = &__this_00->fields;
    pJVar16->offer = NLFMDIGKNGP;
    thunk_FUN_01c20e04(pJVar16,NLFMDIGKNGP);
    if (pJVar16->offer == (NCCFNKMICGK_o *)0x0) {
      return;
    }
    pSVar14 = (__this->fields).LIDLGDLCMEE;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<JIBAEMHNBOF_HHCLGENAOLA>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar14 != (System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *)0x0) {
      __this_01 = (JIBAEMHNBOF_HHCLGENAOLA_o *)
                  System_Collections_Generic_List<object>__Find
                            ((System_Collections_Generic_List_object__o *)pSVar14,match,
                             Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_Find__)
      ;
      if (__this_01 == (JIBAEMHNBOF_HHCLGENAOLA_o *)0x0) {
        __this_01 = (JIBAEMHNBOF_HHCLGENAOLA_o *)
                    thunk_FUN_01bda818(JIBAEMHNBOF_HHCLGENAOLA_TypeInfo);
        JIBAEMHNBOF_HHCLGENAOLA___ctor(__this_01,(MethodInfo *)0x0);
        pNVar17 = pJVar16->offer;
        if (pNVar17 == (NCCFNKMICGK_o *)0x0) goto LAB_031cbaa4;
        pNVar11 = pNVar17->klass;
        uVar1._0_1_ = (pNVar11->_2).rank;
        uVar1._1_1_ = (pNVar11->_2).minimumAlignment;
        uVar12 = (ulong)uVar1;
        if (uVar12 != 0) {
          piVar13 = &((pNVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
              pVVar7 = pNVar11->vtable + (*piVar13 + 2);
              goto LAB_031cb7bc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pNVar17,NCCFNKMICGK_TypeInfo,2);
LAB_031cb7bc:
        pSVar9 = (System_String_o *)(*pVVar7->methodPtr)(pNVar17,pVVar7->method);
        if (__this_01 == (JIBAEMHNBOF_HHCLGENAOLA_o *)0x0) goto LAB_031cbaa4;
        (__this_01->fields).FCENJIHACAA = pSVar9;
        thunk_FUN_01c20e04();
        lVar8 = Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_Add__;
        pSVar14 = (__this->fields).LIDLGDLCMEE;
        if (pSVar14 == (System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *)0x0)
        goto LAB_031cbaa4;
        pJVar10 = (pSVar14->fields)._items;
        (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
        if (pJVar10 == (JIBAEMHNBOF_HHCLGENAOLA_array *)0x0) goto LAB_031cbaa4;
        uVar6 = (pSVar14->fields)._size;
        if (uVar6 < (uint)pJVar10->max_length) {
          (pSVar14->fields)._size = uVar6 + 1;
          pJVar10->m_Items[(int)uVar6] = __this_01;
          thunk_FUN_01c20e04(pJVar10->m_Items + (int)uVar6,__this_01);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)__this_01,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
      __this_02 = (__this_01->fields).JJEDHODDHMF;
      if (__this_02 != (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
        length = (__this_02->fields)._size;
        (__this_02->fields)._size = 0;
        (__this_02->fields)._version = (__this_02->fields)._version + 1;
        if (0 < length) {
          System_Array__Clear((System_Array_o *)(__this_02->fields)._items,0,length,
                              (MethodInfo *)0x0);
          __this_02 = (__this_01->fields).JJEDHODDHMF;
        }
        pNVar17 = pJVar16->offer;
        if (pNVar17 != (NCCFNKMICGK_o *)0x0) {
          pNVar11 = pNVar17->klass;
          uVar2._0_1_ = (pNVar11->_2).rank;
          uVar2._1_1_ = (pNVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar2;
          if (uVar12 != 0) {
            piVar13 = &((pNVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                pVVar7 = pNVar11->vtable + (*piVar13 + 8);
                goto LAB_031cb8d0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pNVar17,NCCFNKMICGK_TypeInfo,8);
LAB_031cb8d0:
          lVar8 = (*pVVar7->methodPtr)(pNVar17,pVVar7->method);
          if ((lVar8 != 0) && (__this_02 != (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0))
          {
            System_Collections_Generic_List<object>__AddRange
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       *(System_Collections_Generic_IEnumerable_T__o **)(lVar8 + 0x248),
                       Method_System_Collections_Generic_List<LEGDPJHPEOB>_AddRange__);
            pNVar17 = pJVar16->offer;
            if (pNVar17 != (NCCFNKMICGK_o *)0x0) {
              pNVar11 = pNVar17->klass;
              uVar3._0_1_ = (pNVar11->_2).rank;
              uVar3._1_1_ = (pNVar11->_2).minimumAlignment;
              uVar12 = (ulong)uVar3;
              if (uVar12 != 0) {
                piVar13 = &((pNVar11->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                      (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                    pVVar7 = pNVar11->vtable + (*piVar13 + 8);
                    goto LAB_031cb954;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              pVVar7 = (VirtualInvokeData *)FUN_01b81914(pNVar17,NCCFNKMICGK_TypeInfo,8);
LAB_031cb954:
              lVar8 = (*pVVar7->methodPtr)(pNVar17,pVVar7->method);
              if ((lVar8 != 0) && (*(GEIHBHEDJJM_o **)(lVar8 + 0x260) != (GEIHBHEDJJM_o *)0x0)) {
                pSVar9 = GEIHBHEDJJM__CNKOOLDMAGC
                                   (*(GEIHBHEDJJM_o **)(lVar8 + 0x260),(MethodInfo *)0x0);
                (__this_01->fields).ENBNOOPELIP = pSVar9;
                thunk_FUN_01c20e04();
                pNVar17 = pJVar16->offer;
                if (pNVar17 != (NCCFNKMICGK_o *)0x0) {
                  pNVar11 = pNVar17->klass;
                  uVar4._0_1_ = (pNVar11->_2).rank;
                  uVar4._1_1_ = (pNVar11->_2).minimumAlignment;
                  uVar12 = (ulong)uVar4;
                  if (uVar12 != 0) {
                    piVar13 = &((pNVar11->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                        pVVar7 = pNVar11->vtable + (*piVar13 + 8);
                        goto LAB_031cb9dc;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  pVVar7 = (VirtualInvokeData *)FUN_01b81914(pNVar17,NCCFNKMICGK_TypeInfo,8);
LAB_031cb9dc:
                  lVar8 = (*pVVar7->methodPtr)(pNVar17,pVVar7->method);
                  if ((lVar8 != 0) && (*(GEIHBHEDJJM_o **)(lVar8 + 0x250) != (GEIHBHEDJJM_o *)0x0))
                  {
                    pSVar9 = GEIHBHEDJJM__CNKOOLDMAGC
                                       (*(GEIHBHEDJJM_o **)(lVar8 + 0x250),(MethodInfo *)0x0);
                    (__this_01->fields).OFNEAFGINLC = pSVar9;
                    thunk_FUN_01c20e04();
                    pNVar17 = pJVar16->offer;
                    if (pNVar17 != (NCCFNKMICGK_o *)0x0) {
                      pNVar11 = pNVar17->klass;
                      uVar5._0_1_ = (pNVar11->_2).rank;
                      uVar5._1_1_ = (pNVar11->_2).minimumAlignment;
                      uVar12 = (ulong)uVar5;
                      if (uVar12 != 0) {
                        piVar13 = &((pNVar11->_1).interfaceOffsets)->offset;
                        do {
                          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                              (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                            pVVar7 = pNVar11->vtable + (*piVar13 + 8);
                            goto LAB_031cba64;
                          }
                          uVar12 = uVar12 - 1;
                          piVar13 = piVar13 + 4;
                        } while (uVar12 != 0);
                      }
                      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pNVar17,NCCFNKMICGK_TypeInfo,8);
LAB_031cba64:
                      lVar8 = (*pVVar7->methodPtr)(pNVar17,pVVar7->method);
                      if ((lVar8 != 0) && (*(GEIHBHEDJJM_o **)(lVar8 + 600) != (GEIHBHEDJJM_o *)0x0)
                         ) {
                        pSVar9 = GEIHBHEDJJM__CNKOOLDMAGC
                                           (*(GEIHBHEDJJM_o **)(lVar8 + 600),(MethodInfo *)0x0);
                        ppSVar15 = &(__this_01->fields).DEELCMCEILO;
                        *ppSVar15 = pSVar9;
                        thunk_FUN_01c20e04(ppSVar15,pSVar9);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031cbaa4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

