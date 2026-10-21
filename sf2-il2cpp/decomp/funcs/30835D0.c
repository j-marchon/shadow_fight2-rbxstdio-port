// KFCFGKEHPNK$$KAFBLLCOIFP @ RVA 0x30835D0

/* WARNING: Removing unreachable block (ram,0x03183804) */

bool KFCFGKEHPNK__KAFBLLCOIFP(OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  EEGDOGKBLNG_o *__this;
  int64_t iVar5;
  System_Collections_Generic_IEnumerator_T__o *pSVar6;
  VirtualInvokeData *pVVar7;
  long lVar8;
  MethodInfo *extraout_x1;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_00;
  System_Collections_Generic_IEnumerator_T__c *pSVar9;
  ulong uVar10;
  int32_t *piVar11;
  
  if ((DAT_0456600a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__);
    DAT_0456600a = 1;
    method = extraout_x1;
  }
  if (PBNPKBJKFHE != (OJEHKJHEBID_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this != (EEGDOGKBLNG_o *)0x0) {
      iVar5 = EEGDOGKBLNG__APCMGOCHMGC(__this,(MethodInfo *)0x0);
      __this_00 = (PBNPKBJKFHE->fields).MABPCBMOECE;
      if (__this_00 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
        pSVar6 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                            Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__
                           );
        if (pSVar6 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          pSVar9 = pSVar6->klass;
          uVar1._0_1_ = (pSVar9->_2).rank;
          uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar1;
          if (uVar10 != 0) {
            piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                pVVar7 = pSVar9->vtable + *piVar11;
                goto LAB_031836e4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar7 = (VirtualInvokeData *)
                   FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_031836e4:
          bVar4 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
          if ((bVar4 & 1) == 0) {
            bVar4 = 0;
            break;
          }
          pSVar9 = pSVar6->klass;
          uVar2._0_1_ = (pSVar9->_2).rank;
          uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar2;
          if (uVar10 != 0) {
            piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo) {
                pVVar7 = pSVar9->vtable + *piVar11;
                goto LAB_03183744;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar7 = (VirtualInvokeData *)
                   FUN_01b81914(pSVar6,System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo,
                                0);
LAB_03183744:
          lVar8 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        } while (*(long *)(lVar8 + 0x18) != iVar5);
        if (pSVar6 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
          pSVar9 = pSVar6->klass;
          uVar3._0_1_ = (pSVar9->_2).rank;
          uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar3;
          if (uVar10 != 0) {
            piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)System_IDisposable_TypeInfo) {
                pVVar7 = pSVar9->vtable + *piVar11;
                goto LAB_031837d4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_IDisposable_TypeInfo,0);
LAB_031837d4:
          (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
        }
        goto LAB_031837e4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar4 = 0;
LAB_031837e4:
  return (bool)(bVar4 & 1);
}

