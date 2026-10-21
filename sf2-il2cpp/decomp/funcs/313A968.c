// NJNCPNBIPCD$$HJGHHJEKPKD @ RVA 0x313A968

/* WARNING: Removing unreachable block (ram,0x0323aca4) */

System_String_o *
NJNCPNBIPCD__HJGHHJEKPKD(NJNCPNBIPCD_o *__this,System_String_o *ALHDMEKMLPH,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_Text_StringBuilder_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_01;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  System_String_o *pSVar7;
  KJNCNBJIJPC_o *pKVar8;
  System_Collections_Generic_IEnumerator_T__c *pSVar9;
  ulong uVar10;
  int32_t *piVar11;
  undefined8 local_58;
  
  if ((DAT_04566725 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<IHMIMECHIAN>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_GetEnumerator__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_47);
    FUN_01bab630(&StringLiteral_425);
    FUN_01bab630(&StringLiteral_392);
    FUN_01bab630(&StringLiteral_16531);
    DAT_04566725 = 1;
  }
  local_58 = (Il2CppMethodPointer)0x0;
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append(__this_00,ALHDMEKMLPH,(MethodInfo *)0x0);
    pKVar8 = (__this->fields).LEDBMKOBNDM;
    if ((pKVar8 != (KJNCNBJIJPC_o *)0x0) &&
       (__this_01 = (pKVar8->fields).EACBGCPPLBO,
       __this_01 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0)) {
      pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                          Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_GetEnumerator__
                         );
      if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        pSVar9 = pSVar4->klass;
        uVar1._0_1_ = (pSVar9->_2).rank;
        uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) {
          piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar5 = pSVar9->vtable + *piVar11;
              goto LAB_0323aae8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0)
        ;
LAB_0323aae8:
        uVar10 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
        if ((uVar10 & 1) == 0) {
          if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) goto LAB_0323ac68;
          pSVar9 = pSVar4->klass;
          uVar3._0_1_ = (pSVar9->_2).rank;
          uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar3;
          if (uVar10 == 0) goto LAB_0323ac40;
          piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
          goto LAB_0323ac28;
        }
        pSVar9 = pSVar4->klass;
        uVar2._0_1_ = (pSVar9->_2).rank;
        uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar2;
        if (uVar10 != 0) {
          piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IEnumerator<IHMIMECHIAN>_TypeInfo) {
              pVVar5 = pSVar9->vtable + *piVar11;
              goto LAB_0323ab44;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar5 = (VirtualInvokeData *)
                 FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<IHMIMECHIAN>_TypeInfo,0)
        ;
LAB_0323ab44:
        lVar6 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
        System_Text_StringBuilder__Append(__this_00,StringLiteral_47,(MethodInfo *)0x0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        local_58._4_4_ = *(undefined4 *)(lVar6 + 0x1c);
        pSVar7 = System_Int32__ToString((int)&local_58 + 4,(MethodInfo *)0x0);
        pSVar7 = System_String__Concat(StringLiteral_16531,pSVar7,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(__this_00,pSVar7,(MethodInfo *)0x0);
        local_58 = (Il2CppMethodPointer)CONCAT44(local_58._4_4_,*(float *)(lVar6 + 0x24));
        pSVar7 = System_Single__ToString(*(float *)(lVar6 + 0x24),(MethodInfo *)&local_58);
        pSVar7 = System_String__Concat(StringLiteral_392,pSVar7,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(__this_00,pSVar7,(MethodInfo *)0x0);
        local_58 = (Il2CppMethodPointer)CONCAT44(*(undefined4 *)(lVar6 + 0x18),(undefined4)local_58)
        ;
        pSVar7 = System_Int32__ToString((int)&local_58 + 4,(MethodInfo *)0x0);
        pSVar7 = System_String__Concat(StringLiteral_425,pSVar7,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(__this_00,pSVar7,(MethodInfo *)0x0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0323ac28:
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar5 = pSVar9->vtable + *piVar11;
      goto LAB_0323ac5c;
    }
  }
LAB_0323ac40:
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_0323ac5c:
  (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
LAB_0323ac68:
  pSVar7 = (System_String_o *)
           (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
  return pSVar7;
}

