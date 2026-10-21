// AJMOIOIBPGP$$OAAFHCFBAHD @ RVA 0x3274D84

/* WARNING: Removing unreachable block (ram,0x033752d0) */

void AJMOIOIBPGP__OAAFHCFBAHD(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Func_OPNMPAJKDMI__bool__o **ppSVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar4;
  System_Func_OPNMPAJKDMI__int__o **ppSVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  OPNMPAJKDMI_o *NLFMDIGKNGP;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar9;
  System_Linq_IOrderedEnumerable_TSource__c *pSVar10;
  long lVar11;
  ulong uVar12;
  int32_t *piVar13;
  int *piVar14;
  System_Collections_Generic_List_OPNMPAJKDMI__o *pSVar15;
  OPNMPAJKDMI_o **ppOVar16;
  System_Func_OPNMPAJKDMI__bool__o *pSVar17;
  System_Func_TSource__TKey__o *keySelector;
  System_Func_OPNMPAJKDMI__int__o *keySelector_00;
  
  if ((DAT_0456723f & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<OPNMPAJKDMI>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderBy<OPNMPAJKDMI,_int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ThenBy<OPNMPAJKDMI,_int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__);
    FUN_01bab630(&System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
    FUN_01bab630(&System_Func<OPNMPAJKDMI,_int>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_DGHANLOIPMJ__);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_HFJGNMLABHB__);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_KHOKGFMMEBI__);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_PBNALJBCMMB__);
    FUN_01bab630(&AJMOIOIBPGP_<>c_TypeInfo);
    DAT_0456723f = 1;
    method = extraout_x1;
  }
  pSVar15 = (__this->fields).KMBLPHNJINH;
  if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AJMOIOIBPGP_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar17 = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_3;
  if (pSVar17 == (System_Func_OPNMPAJKDMI__bool__o *)0x0) {
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AJMOIOIBPGP_<>c_TypeInfo,method);
    }
    pSVar17 = (System_Func_OPNMPAJKDMI__bool__o *)
              thunk_FUN_01bda818(System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar3 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_3;
    *ppSVar3 = pSVar17;
    thunk_FUN_01c20e04(ppSVar3,pSVar17);
  }
  pMVar9 = Method_System_Linq_Enumerable_Any<OPNMPAJKDMI>__;
  bVar2 = System_Linq_Enumerable__Any<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar15,
                     (System_Func_TSource__bool__o *)pSVar17,
                     (MethodInfo_1E97778 *)Method_System_Linq_Enumerable_Any<OPNMPAJKDMI>__);
  if (!bVar2) {
    ppOVar16 = &(__this->fields).BAAIACCFAPH;
    if ((*ppOVar16 != (OPNMPAJKDMI_o *)0x0) &&
       (bVar2 = AJMOIOIBPGP__MGIGFDAFEMD(__this,*ppOVar16,pMVar9), bVar2)) {
      *ppOVar16 = (OPNMPAJKDMI_o *)0x0;
      thunk_FUN_01c20e04(ppOVar16,0);
      return;
    }
    pSVar15 = (__this->fields).KMBLPHNJINH;
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar17 = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_4;
    if (pSVar17 == (System_Func_OPNMPAJKDMI__bool__o *)0x0) {
      if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar17 = (System_Func_OPNMPAJKDMI__bool__o *)
                thunk_FUN_01bda818(System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar3 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_4;
      *ppSVar3 = pSVar17;
      thunk_FUN_01c20e04(ppSVar3,pSVar17);
    }
    source = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar15,
                        (System_Func_TSource__bool__o *)pSVar17,
                        Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__);
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AJMOIOIBPGP_<>c_TypeInfo);
    }
    keySelector = (System_Func_TSource__TKey__o *)AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_5
    ;
    if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
      if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(AJMOIOIBPGP_<>c_TypeInfo);
      }
      FUN_03f93648(AJMOIOIBPGP_<>c_TypeInfo->static_fields);
      return;
    }
    pSVar4 = System_Linq_Enumerable__OrderBy<object,_int>
                       (source,keySelector,Method_System_Linq_Enumerable_OrderBy<OPNMPAJKDMI,_int>__
                       );
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AJMOIOIBPGP_<>c_TypeInfo);
    }
    keySelector_00 = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_6;
    if (keySelector_00 == (System_Func_OPNMPAJKDMI__int__o *)0x0) {
      if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(AJMOIOIBPGP_<>c_TypeInfo);
      }
      keySelector_00 =
           (System_Func_OPNMPAJKDMI__int__o *)
           thunk_FUN_01bda818(System_Func<OPNMPAJKDMI,_int>_TypeInfo);
      System_Func<object,_int>___ctor();
      ppSVar5 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__23_6;
      *ppSVar5 = keySelector_00;
      thunk_FUN_01c20e04(ppSVar5,keySelector_00);
    }
    pMVar9 = Method_System_Linq_Enumerable_ThenBy<OPNMPAJKDMI,_int>__;
    pSVar4 = System_Linq_Enumerable__ThenBy<object,_int>
                       (pSVar4,(System_Func_TSource__TKey__o *)keySelector_00,
                        (MethodInfo_1EAD878 *)
                        Method_System_Linq_Enumerable_ThenBy<OPNMPAJKDMI,_int>__);
    if (pSVar4 == (System_Linq_IOrderedEnumerable_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar10 = pSVar4->klass;
    uVar1._0_1_ = (pSVar10->_2).rank;
    uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<OPNMPAJKDMI>_TypeInfo) {
          pVVar6 = pSVar10->vtable + *piVar13;
          goto LAB_03375160;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pMVar9 = (MethodInfo *)0x0;
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_03375160:
    plVar7 = (long *)(*pVVar6->methodPtr)(pSVar4,pVVar6->method);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_033751d0;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      pMVar9 = (MethodInfo *)0x0;
      puVar8 = (undefined8 *)FUN_01b81914(plVar7);
LAB_033751d0:
      uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar12 & 1) == 0) break;
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_OPNMPAJKDMI__c **)(piVar14 + -2) ==
              System_Collections_Generic_IEnumerator<OPNMPAJKDMI>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0337522c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      pMVar9 = (MethodInfo *)0x0;
      puVar8 = (undefined8 *)FUN_01b81914(plVar7);
LAB_0337522c:
      NLFMDIGKNGP = (OPNMPAJKDMI_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      bVar2 = AJMOIOIBPGP__MGIGFDAFEMD(__this,NLFMDIGKNGP,pMVar9);
    } while (!bVar2);
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_033752a4;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_033752a4:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
  }
  return;
}

