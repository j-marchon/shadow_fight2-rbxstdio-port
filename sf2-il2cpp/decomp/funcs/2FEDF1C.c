// KCJMBDCBIIF$$JJOJLFCDCJO @ RVA 0x2FEDF1C

/* WARNING: Removing unreachable block (ram,0x030ee15c) */

DLOALGNBPNL_o *
KCJMBDCBIIF__JJOJLFCDCJO(KCJMBDCBIIF_o *__this,OJKCDJCBOBL_o *HAMLBIJCOHB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  DLOALGNBPNL_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  int64_t PBNPKBJKFHE;
  CBPENMDOJDB_o *item;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *__this_02;
  System_Collections_Generic_IEnumerator_T__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04565a4a & 1) == 0) {
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<long>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_GetEnumerator__);
    DAT_04565a4a = 1;
  }
  __this_00 = (DLOALGNBPNL_o *)thunk_FUN_01bda818(DLOALGNBPNL_TypeInfo);
  DLOALGNBPNL___ctor(__this_00,(MethodInfo *)0x0);
  if ((HAMLBIJCOHB == (OJKCDJCBOBL_o *)0x0) ||
     (__this_01 = (HAMLBIJCOHB->fields).OHMDCKEDOGH,
     __this_01 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = Google_Protobuf_Collections_RepeatedField<long>__GetEnumerator
                     (__this_01,
                      Method_Google_Protobuf_Collections_RepeatedField<long>_GetEnumerator__);
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
          goto LAB_030ee03c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_030ee03c:
    uVar7 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar7 & 1) == 0) {
      if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
        return __this_00;
      }
      pSVar6 = pSVar4->klass;
      uVar3._0_1_ = (pSVar6->_2).rank;
      uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar3;
      if (uVar7 == 0) goto LAB_030ee108;
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      break;
    }
    pSVar6 = pSVar4->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<long>_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_030ee098;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_030ee098:
    PBNPKBJKFHE = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    item = KCJMBDCBIIF__ILBKEICPFNC(__this,PBNPKBJKFHE,method);
    if (item != (CBPENMDOJDB_o *)0x0) {
      if (__this_00 == (DLOALGNBPNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_02 = (__this_00->fields).EHBNKDHKJNI;
      if (__this_02 == (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method = Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Add__;
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,(Il2CppObject *)item,
                 (MethodInfo_295E688 *)
                 Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Add__);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar5 = pSVar6->vtable + *piVar8;
      goto LAB_030ee124;
    }
  }
LAB_030ee108:
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_030ee124:
  (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  return __this_00;
}

