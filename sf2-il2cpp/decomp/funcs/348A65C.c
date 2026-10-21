// HNHFLBKDDHP$$GIMAJOGGBHM @ RVA 0x348A65C

/* WARNING: Removing unreachable block (ram,0x0358a8f8) */

void HNHFLBKDDHP__GIMAJOGGBHM(HNHFLBKDDHP_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  Il2CppObject *__this_00;
  System_Type_o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_IEnumerable_IDLLNHJCLIF__c *pSVar7;
  long lVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  System_Collections_Generic_IEnumerable_IDLLNHJCLIF__o *pSVar12;
  undefined1 auVar13 [16];
  
  auVar13._8_8_ = method;
  auVar13._0_8_ = __this;
  if ((DAT_045683d6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<IDLLNHJCLIF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<IDLLNHJCLIF>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    auVar13 = FUN_01bab630(&StringLiteral_5993);
    DAT_045683d6 = 1;
  }
  pSVar12 = (__this->fields).PDNHEGDLGJA;
  if (pSVar12 == (System_Collections_Generic_IEnumerable_IDLLNHJCLIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar13._0_8_,auVar13._8_8_);
  }
  pSVar7 = pSVar12->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<IDLLNHJCLIF>_TypeInfo) {
        pVVar2 = pSVar7->vtable + *piVar10;
        goto LAB_0358a72c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar12,System_Collections_Generic_IEnumerable<IDLLNHJCLIF>_TypeInfo,0);
LAB_0358a72c:
  plVar3 = (long *)(*pVVar2->methodPtr)(pSVar12,pVVar2->method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0358a7b4;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0358a7b4:
    uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_0358a8a4;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_IDLLNHJCLIF__c **)(piVar11 + -2) ==
            System_Collections_Generic_IEnumerator<IDLLNHJCLIF>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0358a810;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01b81914(plVar3,System_Collections_Generic_IEnumerator<IDLLNHJCLIF>_TypeInfo,0);
LAB_0358a810:
    __this_00 = (Il2CppObject *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar5 = System_Object__GetType(__this_00,(MethodInfo *)0x0);
    if (pSVar5 == (System_Type_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar6 = (System_String_o *)
             (*(pSVar5->klass->vtable)._8_unknown.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._8_unknown.method);
    pSVar6 = System_String__Concat(StringLiteral_5993,pSVar6,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0358a8c0;
    }
  }
LAB_0358a8a4:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0358a8c0:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

