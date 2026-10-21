// KCJMBDCBIIF$$PKJGPLAAKNJ @ RVA 0x2FEE568

/* WARNING: Removing unreachable block (ram,0x030ee744) */

void KCJMBDCBIIF__PKJGPLAAKNJ(KCJMBDCBIIF_o *__this,DLOALGNBPNL_o *PIMBGGLBFAA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  CBPENMDOJDB_o *PBNPKBJKFHE;
  System_Collections_Generic_IEnumerator_T__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04565a4b & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<CBPENMDOJDB>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_GetEnumerator__);
    DAT_04565a4b = 1;
  }
  if ((PIMBGGLBFAA == (DLOALGNBPNL_o *)0x0) ||
     (__this_00 = (PIMBGGLBFAA->fields).EHBNKDHKJNI,
     __this_00 == (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                     ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                      Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_GetEnumerator__)
  ;
  if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar6 = pSVar4->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_030ee64c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_030ee64c:
    uVar7 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar7 & 1) == 0) break;
    pSVar6 = pSVar4->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<CBPENMDOJDB>_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_030ee6a8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_030ee6a8:
    PBNPKBJKFHE = (CBPENMDOJDB_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    KCJMBDCBIIF__EBJKIHCKLKJ(__this,PBNPKBJKFHE,method);
  } while( true );
  if (pSVar4 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
    pSVar6 = pSVar4->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar3;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_030ee718;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_030ee718:
    (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  }
  return;
}

