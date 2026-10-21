// PNHGEFAOFFE$$GLFEHJCJOPD @ RVA 0x3180878

/* WARNING: Removing unreachable block (ram,0x03280ea4) */
/* WARNING: Removing unreachable block (ram,0x03280ef0) */

UnityEngine_Purchasing_ProductDefinition_array *
PNHGEFAOFFE__GLFEHJCJOPD(PNHGEFAOFFE_o *__this,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_ProductDefinition__o *__this_01;
  DOPEEDABNEK_o *__this_02;
  System_Collections_Generic_IList_HOOAAGABMBL__o *pSVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  GCPFDLNAFDF_o *pGVar9;
  DADDKDFBPIJ_T__o *__this_03;
  System_Collections_Generic_IEnumerable_T__o *pSVar10;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  UnityEngine_Purchasing_ProductDefinition_array *pUVar11;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Collections_Generic_IList_HOOAAGABMBL__c *pSVar12;
  long lVar13;
  GCPFDLNAFDF_c *pGVar14;
  System_Collections_Generic_IEnumerable_T__c *pSVar15;
  ulong uVar16;
  int32_t *piVar17;
  int *piVar18;
  System_String_o *pSVar19;
  PNHGEFAOFFE_JFHHPCCHLEN_o local_50;
  
  if ((DAT_045669ba & 1) == 0) {
    FUN_01bab630(&Method_DADDKDFBPIJ<FJIFBJMMKHG>_NECJEABEOOH__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Distinct<ProductDefinition>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<ProductDefinition>__);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<FJIFBJMMKHG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<FJIFBJMMKHG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ProductDefinition>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ProductDefinition>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PNHGEFAOFFE_TypeInfo);
    DAT_045669ba = 1;
    method = extraout_x1;
  }
  local_50.fields.products = (System_Collections_Generic_List_ProductDefinition__o *)0x0;
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo,method);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_00,Method_System_Collections_Generic_HashSet<string>__ctor__);
  local_50.fields.productIDs = (System_Collections_Generic_HashSet_string__o *)__this_00;
  thunk_FUN_01c20e04(&local_50,__this_00);
  __this_01 = (System_Collections_Generic_List_ProductDefinition__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ProductDefinition>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ProductDefinition>__ctor__);
  local_50.fields.products = __this_01;
  thunk_FUN_01c20e04(&local_50.fields.products,__this_01);
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
  __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((__this_02 != (DOPEEDABNEK_o *)0x0) &&
     (pSVar5 = DOPEEDABNEK__PALAACDCFON(__this_02,(MethodInfo *)0x0),
     pSVar5 != (System_Collections_Generic_IList_HOOAAGABMBL__o *)0x0)) {
    pSVar12 = pSVar5->klass;
    uVar2._0_1_ = (pSVar12->_2).rank;
    uVar2._1_1_ = (pSVar12->_2).minimumAlignment;
    uVar16 = (ulong)uVar2;
    if (uVar16 != 0) {
      piVar17 = &((pSVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo) {
          pVVar6 = pSVar12->vtable + *piVar17;
          goto LAB_03280a9c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    pVVar6 = (VirtualInvokeData *)
             FUN_01b81914(pSVar5,System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo,0);
LAB_03280a9c:
    plVar7 = (long *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar13 = *plVar7;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar18 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03280b1c;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03280b1c:
      uVar16 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar16 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_03280c1c;
        lVar13 = *plVar7;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 == 0) goto LAB_03280bf4;
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_03280bdc;
      }
      lVar13 = *plVar7;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_HOOAAGABMBL__c **)(piVar18 + -2) ==
              System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03280b78;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01b81914(plVar7,System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo,0);
LAB_03280b78:
      lVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar19 = *(System_String_o **)(lVar13 + 0x70);
      cVar1 = *(char *)(lVar13 + 0x68);
      if ((PNHGEFAOFFE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(PNHGEFAOFFE_TypeInfo);
      }
      PNHGEFAOFFE__MOOKIMGDOMN(pSVar19,cVar1 != '\0',&local_50,in_x3);
    } while( true );
  }
  goto LAB_03280eec;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_03280e58:
    if (*(System_IDisposable_c **)(piVar18 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_03280e8c;
    }
  }
LAB_03280e70:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03280e8c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03280e98:
  source = System_Linq_Enumerable__Distinct<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)local_50.fields.products,
                      Method_System_Linq_Enumerable_Distinct<ProductDefinition>__);
  pUVar11 = (UnityEngine_Purchasing_ProductDefinition_array *)
            System_Linq_Enumerable__ToArray<object>
                      (source,Method_System_Linq_Enumerable_ToArray<ProductDefinition>__);
  return pUVar11;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_03280bdc:
    if (*(System_IDisposable_c **)(piVar18 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_03280c10;
    }
  }
LAB_03280bf4:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03280c10:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03280c1c:
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar9 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar9 != (GCPFDLNAFDF_o *)0x0) {
    pGVar14 = pGVar9->klass;
    uVar3._0_1_ = (pGVar14->_2).rank;
    uVar3._1_1_ = (pGVar14->_2).minimumAlignment;
    uVar16 = (ulong)uVar3;
    if (uVar16 != 0) {
      piVar17 = &((pGVar14->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar6 = pGVar14->vtable + (*piVar17 + 4);
          goto LAB_03280ca0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pGVar9,HFHIKPAKJFG_TypeInfo,4);
LAB_03280ca0:
    __this_03 = (DADDKDFBPIJ_T__o *)(*pVVar6->methodPtr)(pGVar9,pVVar6->method);
    if ((__this_03 != (DADDKDFBPIJ_T__o *)0x0) &&
       (pSVar10 = DADDKDFBPIJ<object>__NECJEABEOOH
                            (__this_03,Method_DADDKDFBPIJ<FJIFBJMMKHG>_NECJEABEOOH__),
       pSVar10 != (System_Collections_Generic_IEnumerable_T__o *)0x0)) {
      pSVar15 = pSVar10->klass;
      uVar4._0_1_ = (pSVar15->_2).rank;
      uVar4._1_1_ = (pSVar15->_2).minimumAlignment;
      uVar16 = (ulong)uVar4;
      if (uVar16 != 0) {
        piVar17 = &((pSVar15->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<FJIFBJMMKHG>_TypeInfo) {
            pVVar6 = pSVar15->vtable + *piVar17;
            goto LAB_03280d1c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(pSVar10,System_Collections_Generic_IEnumerable<FJIFBJMMKHG>_TypeInfo,0);
LAB_03280d1c:
      plVar7 = (long *)(*pVVar6->methodPtr)(pSVar10,pVVar6->method);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar13 = *plVar7;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar18 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03280d94;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03280d94:
        uVar16 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar16 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_03280e98;
          lVar13 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar16 == 0) goto LAB_03280e70;
          piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_03280e58;
        }
        lVar13 = *plVar7;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_FJIFBJMMKHG__c **)(piVar18 + -2) ==
                System_Collections_Generic_IEnumerator<FJIFBJMMKHG>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03280df0;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01b81914(plVar7,System_Collections_Generic_IEnumerator<FJIFBJMMKHG>_TypeInfo,0)
        ;
LAB_03280df0:
        lVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar19 = *(System_String_o **)(lVar13 + 0x40);
        cVar1 = *(char *)(lVar13 + 0x99);
        if ((PNHGEFAOFFE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(PNHGEFAOFFE_TypeInfo);
        }
        PNHGEFAOFFE__MOOKIMGDOMN(pSVar19,cVar1 != '\0',&local_50,in_x3);
      } while( true );
    }
  }
LAB_03280eec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

