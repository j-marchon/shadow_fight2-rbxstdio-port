// CJFBGEEIPBA$$IPLHNJCJEIK @ RVA 0x33644E0

/* WARNING: Removing unreachable block (ram,0x034646dc) */

NLFLMJPNOLF_o *
CJFBGEEIPBA__IPLHNJCJEIK(CJFBGEEIPBA_o *__this,int64_t OILECKFDMDB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  NLFLMJPNOLF_o *pNVar6;
  OJEHKJHEBID_o *pOVar7;
  System_Collections_Generic_IEnumerator_T__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04567aad & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_GetEnumerator__);
    DAT_04567aad = 1;
  }
  pOVar7 = (__this->fields).FBILHKCKHEJ;
  if (pOVar7 == (OJEHKJHEBID_o *)0x0) {
    pNVar6 = (NLFLMJPNOLF_o *)0x0;
  }
  else {
    __this_00 = (pOVar7->fields).MJIHCLLODMF;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                        Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_GetEnumerator__
                       );
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
            goto LAB_034645bc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_034645bc:
      uVar9 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if ((uVar9 & 1) == 0) {
        pNVar6 = (NLFLMJPNOLF_o *)0x0;
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
              (Il2CppClass *)System_Collections_Generic_IEnumerator<NLFLMJPNOLF>_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_03464618;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<NLFLMJPNOLF>_TypeInfo,0);
LAB_03464618:
      pNVar6 = (NLFLMJPNOLF_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if (pNVar6 == (NLFLMJPNOLF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while ((pNVar6->fields).OHMDCKEDOGH != OILECKFDMDB);
    if (pSVar4 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
      pSVar8 = pSVar4->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_034646ac;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_034646ac:
      (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    }
  }
  return pNVar6;
}

