// BHNHMJNIAII$$MEMCLBNDLGC @ RVA 0x34B83B4

/* WARNING: Removing unreachable block (ram,0x035b8644) */

void BHNHMJNIAII__MEMCLBNDLGC
               (System_Collections_Generic_IEnumerable_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_IEnumerable_string__c *pSVar6;
  long lVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = FPEHEJBLCAO;
  if ((DAT_045685a6 & 1) == 0) {
    FUN_01bab630(&BHNHMJNIAII_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_Remove__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<string>_TypeInfo);
    auVar11 = FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_045685a6 = 1;
  }
  if (FPEHEJBLCAO == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
  }
  pSVar6 = FPEHEJBLCAO->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<string>_TypeInfo) {
        pVVar2 = pSVar6->vtable + *piVar9;
        goto LAB_035b8480;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(FPEHEJBLCAO,System_Collections_Generic_IEnumerable<string>_TypeInfo,0);
LAB_035b8480:
  plVar3 = (long *)(*pVVar2->methodPtr)(FPEHEJBLCAO,pVVar2->method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_035b8508;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_035b8508:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_035b85f0;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_string__c **)(piVar10 + -2) ==
            System_Collections_Generic_IEnumerator<string>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_035b8564;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01b81914(plVar3,System_Collections_Generic_IEnumerator<string>_TypeInfo,0);
LAB_035b8564:
    pSVar5 = (System_String_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((BHNHMJNIAII_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pSVar5 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             BHNHMJNIAII_TypeInfo->static_fields->HFAKMNMMBLD;
    pSVar5 = System_String__ToLower(pSVar5,(MethodInfo *)0x0);
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<object,_object>__Remove
              (__this,(Il2CppObject *)pSVar5,
               Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_Remove__);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar10 = piVar10 + 4;
    if (uVar8 == 0) break;
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_035b860c;
    }
  }
LAB_035b85f0:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_035b860c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

