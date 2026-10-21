// AJMOIOIBPGP$$DKMEDEFELOD @ RVA 0x327402C

/* WARNING: Removing unreachable block (ram,0x0337430c) */

void AJMOIOIBPGP__DKMEDEFELOD(AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *pSVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  POGBKGFBOLC_o *PLJKGEJHILJ;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *in_x4;
  System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__c *pSVar7;
  long lVar8;
  ACHLOMELAJE_o *pAVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  
  if ((DAT_04567239 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_848);
    FUN_01bab630(&StringLiteral_4308);
    DAT_04567239 = 1;
  }
  if (NLFMDIGKNGP == (OPNMPAJKDMI_o *)0x0) {
    return;
  }
  pSVar3 = OPNMPAJKDMI__HOBICLIEIIJ(NLFMDIGKNGP,(MethodInfo *)0x0);
  if (pSVar3 == (System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar7 = pSVar3->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  uVar10 = (ulong)uVar1;
  if (uVar10 != 0) {
    piVar11 = &((pSVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo) {
        pVVar4 = pSVar7->vtable + *piVar11;
        goto LAB_03374110;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  pVVar4 = (VirtualInvokeData *)
           FUN_01b81914(pSVar3,System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo,0);
LAB_03374110:
  plVar5 = (long *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03374190;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03374190:
    uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_033742b4;
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_POGBKGFBOLC__c **)(piVar12 + -2) ==
            System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_033741ec;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01b81914(plVar5,System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo,0);
LAB_033741ec:
    PLJKGEJHILJ = (POGBKGFBOLC_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    pAVar9 = (__this->fields).OKNKKHGBECG;
    if (pAVar9 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (PLJKGEJHILJ == (POGBKGFBOLC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pAVar9->fields).OIDPLCLELEN;
    if (__this_00 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = GGHCLMEFIGO__JNFIBDBHNOA
                          (__this_00,(PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField,
                           (MethodInfo *)0x0);
    if ((__this_01 == (IGFGDDANEPE_o *)0x0) ||
       (iVar2 = IGFGDDANEPE__LDJLMEFOMLG(__this_01,(MethodInfo *)0x0), iVar2 == 0)) {
      JLNPKGGFFDD = System_String__Concat
                              (StringLiteral_4308,(PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField
                               ,StringLiteral_848,(MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
    }
    else {
      AJMOIOIBPGP__HPNAOBPMDMP(__this,NLFMDIGKNGP,PLJKGEJHILJ,__this_01,in_x4);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_033742d0;
    }
  }
LAB_033742b4:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_033742d0:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

