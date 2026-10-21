// IJCLCKIJJDH.<>c$$PGAHFAOBNKD @ RVA 0x3530EC8

int32_t IJCLCKIJJDH_<>c__PGAHFAOBNKD
                  (IJCLCKIJJDH___c_o *__this,MFBFOBDKLBC_o *a,MFBFOBDKLBC_o *b,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  int32_t iVar3;
  VirtualInvokeData *pVVar4;
  MFBFOBDKLBC_c *pMVar5;
  ulong uVar6;
  int32_t *piVar7;
  undefined4 local_24;
  
  if ((DAT_04568a5c & 1) == 0) {
    __this = (IJCLCKIJJDH___c_o *)FUN_01bab630(&MFBFOBDKLBC_TypeInfo);
    DAT_04568a5c = 1;
  }
  local_24 = 0;
  if (a != (MFBFOBDKLBC_o *)0x0) {
    pMVar5 = a->klass;
    uVar1._0_1_ = (pMVar5->_2).rank;
    uVar1._1_1_ = (pMVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pMVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)MFBFOBDKLBC_TypeInfo) {
          pVVar4 = pMVar5->vtable + (*piVar7 + 1);
          goto LAB_03630f5c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(a,MFBFOBDKLBC_TypeInfo,1);
LAB_03630f5c:
    __this = (IJCLCKIJJDH___c_o *)(*pVVar4->methodPtr)(a,pVVar4->method);
    local_24 = SUB84(__this,0);
    if (b != (MFBFOBDKLBC_o *)0x0) {
      pMVar5 = b->klass;
      uVar2._0_1_ = (pMVar5->_2).rank;
      uVar2._1_1_ = (pMVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar2;
      if (uVar6 != 0) {
        piVar7 = &((pMVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)MFBFOBDKLBC_TypeInfo) {
            pVVar4 = pMVar5->vtable + (*piVar7 + 1);
            goto LAB_03630fc0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(b,MFBFOBDKLBC_TypeInfo,1);
LAB_03630fc0:
      iVar3 = (*pVVar4->methodPtr)(b,pVVar4->method);
      iVar3 = System_Int32__CompareTo((int32_t)&local_24,iVar3,(MethodInfo *)0x0);
      return iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

