// EEGDOGKBLNG$$CBFAEPDJDNL @ RVA 0x306F584

/* WARNING: Removing unreachable block (ram,0x0316f750) */

void EEGDOGKBLNG__CBFAEPDJDNL(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  MethodInfo *extraout_x1;
  KAMBBJFPLGM_o *pKVar7;
  System_Collections_Generic_IEnumerator_T__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04565f55 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__);
    DAT_04565f55 = 1;
    method = extraout_x1;
  }
  pKVar7 = (__this->fields).MLAAJICBOAD;
  if (pKVar7 == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  __this_00 = (pKVar7->fields).AKFPFIHIHOC;
  if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                     ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                      Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__)
  ;
  if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar8 = pSVar4->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar8->vtable + *piVar10;
          goto LAB_0316f658;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0316f658:
    uVar9 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar9 & 1) == 0) {
      if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
        return;
      }
      pSVar8 = pSVar4->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 == 0) goto LAB_0316f70c;
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      break;
    }
    pSVar8 = pSVar4->klass;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo) {
          pVVar5 = pSVar8->vtable + *piVar10;
          goto LAB_0316f6b4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo,0);
LAB_0316f6b4:
    lVar6 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    *(undefined4 *)(lVar6 + 0x20) = 0;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar5 = pSVar8->vtable + *piVar10;
      goto LAB_0316f728;
    }
  }
LAB_0316f70c:
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_0316f728:
  (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  return;
}

