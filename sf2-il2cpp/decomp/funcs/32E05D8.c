// DOPEEDABNEK$$LADIJNFDOJJ @ RVA 0x32E05D8

void DOPEEDABNEK__LADIJNFDOJJ
               (System_String_o *ALHDMEKMLPH,
               System_Collections_Generic_IList_HOOAAGABMBL__o *GHAAKPDHIJJ,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  HOOAAGABMBL_o *__this;
  System_Collections_Generic_IList_HOOAAGABMBL__c *pSVar8;
  ulong uVar9;
  ulong uVar10;
  int32_t *piVar11;
  int iVar12;
  undefined8 local_48;
  
  if ((DAT_045675f0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&StringLiteral_47);
    FUN_01bab630(&StringLiteral_383);
    FUN_01bab630(&StringLiteral_645);
    DAT_045675f0 = 1;
  }
  local_48 = 0;
  if (GHAAKPDHIJJ != (System_Collections_Generic_IList_HOOAAGABMBL__o *)0x0) {
    pSVar8 = GHAAKPDHIJJ->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo) {
          pVVar6 = pSVar8->vtable + *piVar11;
          goto LAB_033e06c4;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    pVVar6 = (VirtualInvokeData *)
             FUN_01b81914(GHAAKPDHIJJ,System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo,0
                         );
LAB_033e06c4:
    uVar4 = (*pVVar6->methodPtr)(GHAAKPDHIJJ,pVVar6->method);
    local_48 = CONCAT44(uVar4,(int)local_48);
    pSVar7 = System_Int32__ToString((int)&local_48 + 4,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat
                       (ALHDMEKMLPH,StringLiteral_383,pSVar7,StringLiteral_47,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
    iVar12 = 0;
    do {
      local_48 = CONCAT44(local_48._4_4_,iVar12);
      pSVar8 = GHAAKPDHIJJ->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo) {
            pVVar6 = pSVar8->vtable + *piVar11;
            goto LAB_033e0780;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(GHAAKPDHIJJ,System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo
                            ,0);
LAB_033e0780:
      iVar5 = (*pVVar6->methodPtr)(GHAAKPDHIJJ,pVVar6->method);
      uVar9 = local_48;
      if (iVar5 <= iVar12) {
        return;
      }
      pSVar8 = GHAAKPDHIJJ->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar10 = (ulong)uVar3;
      if (uVar10 != 0) {
        piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo) {
            pVVar6 = pSVar8->vtable + *piVar11;
            goto LAB_033e07e4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(GHAAKPDHIJJ,System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo,0);
LAB_033e07e4:
      __this = (HOOAAGABMBL_o *)(*pVVar6->methodPtr)(GHAAKPDHIJJ,uVar9 & 0xffffffff,pVVar6->method);
      pSVar7 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat(StringLiteral_645,pSVar7,StringLiteral_47,(MethodInfo *)0x0);
      if (__this == (HOOAAGABMBL_o *)0x0) break;
      pSVar7 = HOOAAGABMBL__OEHBFNHBFEO
                         (__this,pSVar7,StringLiteral_47,StringLiteral_47,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      iVar12 = (int)local_48 + 1;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

