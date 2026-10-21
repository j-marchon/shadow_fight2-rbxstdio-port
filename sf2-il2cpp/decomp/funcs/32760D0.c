// AJMOIOIBPGP$$GALNCDEFJMG @ RVA 0x32760D0

/* WARNING: Removing unreachable block (ram,0x03376424) */

void AJMOIOIBPGP__GALNCDEFJMG(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Func_OPNMPAJKDMI__bool__o **ppSVar3;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  OPNMPAJKDMI_o *NLFMDIGKNGP;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  System_Collections_Generic_List_OPNMPAJKDMI__o *source;
  System_Func_OPNMPAJKDMI__bool__o *predicate;
  
  if ((DAT_04567245 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__);
    FUN_01bab630(&System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_ECOAJGJAGNO__);
    FUN_01bab630(&AJMOIOIBPGP_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_4309);
    FUN_01bab630(&StringLiteral_4310);
    DAT_04567245 = 1;
    method = extraout_x1;
  }
  bVar2 = AJMOIOIBPGP__CDFDLPCIFCC(__this,method);
  if (bVar2) {
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_4310,(MethodInfo *)0x0);
    return;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_4309,(MethodInfo *)0x0);
  source = (__this->fields).KALGMNLLLNO;
  if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  predicate = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__27_0;
  if (predicate == (System_Func_OPNMPAJKDMI__bool__o *)0x0) {
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    predicate = (System_Func_OPNMPAJKDMI__bool__o *)
                thunk_FUN_01bda818(System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar3 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__27_0;
    *ppSVar3 = predicate;
    thunk_FUN_01c20e04(ppSVar3,predicate);
  }
  method_00 = Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__;
  pSVar4 = System_Linq_Enumerable__Where<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)predicate,
                      (MethodInfo_1EB190C *)Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__);
  if (pSVar4 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar8 = pSVar4->klass;
  uVar1._0_1_ = (pSVar8->_2).rank;
  uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
  uVar10 = (ulong)uVar1;
  if (uVar10 != 0) {
    piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OPNMPAJKDMI>_TypeInfo) {
        pVVar5 = pSVar8->vtable + *piVar11;
        goto LAB_033762b4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  method_00 = (MethodInfo *)0x0;
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_033762b4:
  plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03376324;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    method_00 = (MethodInfo *)0x0;
    puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_03376324:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar10 & 1) == 0) break;
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_OPNMPAJKDMI__c **)(piVar12 + -2) ==
            System_Collections_Generic_IEnumerator<OPNMPAJKDMI>_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03376380;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    method_00 = (MethodInfo *)0x0;
    puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_03376380:
    NLFMDIGKNGP = (OPNMPAJKDMI_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    AJMOIOIBPGP__DKMEDEFELOD(__this,NLFMDIGKNGP,method_00);
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_033763f8;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_033763f8:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return;
}

