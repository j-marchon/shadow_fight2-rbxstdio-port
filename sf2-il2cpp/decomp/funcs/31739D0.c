// IBILBKNKKDG$$GIMAJOGGBHM @ RVA 0x31739D0

void IBILBKNKKDG__GIMAJOGGBHM(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  EOJBGBDLBKJ_o *pEVar4;
  VirtualInvokeData *pVVar5;
  NHOILKKCIMI_o *pNVar6;
  NHOILKKCIMI_o **ppNVar7;
  EOJBGBDLBKJ_o **ppEVar8;
  EOJBGBDLBKJ_c *pEVar9;
  ulong uVar10;
  int32_t *piVar11;
  EOJBGBDLBKJ_o *pEVar12;
  
  if ((DAT_04566944 & 1) == 0) {
    FUN_01bab630(&EOJBGBDLBKJ_TypeInfo);
    FUN_01bab630(&IBILBKNKKDG_TypeInfo);
    method = (MethodInfo *)FUN_01bab630(&NHOILKKCIMI_TypeInfo);
    DAT_04566944 = 1;
  }
  if (IBILBKNKKDG_TypeInfo->static_fields->ECCPBJGMNPE != false) {
    return;
  }
  IBILBKNKKDG_TypeInfo->static_fields->ECCPBJGMNPE = true;
  pEVar4 = IBILBKNKKDG__ADLLFHPKFIB(method);
  ppEVar8 = &IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD;
  *ppEVar8 = pEVar4;
  thunk_FUN_01c20e04(ppEVar8,pEVar4);
  pEVar12 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD;
  pEVar4 = (EOJBGBDLBKJ_o *)0x0;
  if (pEVar12 != (EOJBGBDLBKJ_o *)0x0) {
    pEVar9 = pEVar12->klass;
    uVar1._0_1_ = (pEVar9->_2).rank;
    uVar1._1_1_ = (pEVar9->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pEVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
          pVVar5 = pEVar9->vtable + *piVar11;
          goto LAB_03273abc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pEVar12,EOJBGBDLBKJ_TypeInfo,0);
LAB_03273abc:
    (*pVVar5->methodPtr)(pEVar12,pVVar5->method);
    pEVar12 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD;
    pEVar4 = (EOJBGBDLBKJ_o *)0x0;
    if (pEVar12 != (EOJBGBDLBKJ_o *)0x0) {
      pEVar9 = pEVar12->klass;
      uVar2._0_1_ = (pEVar9->_2).rank;
      uVar2._1_1_ = (pEVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar2;
      if (uVar10 != 0) {
        piVar11 = &((pEVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
            pVVar5 = pEVar9->vtable + (*piVar11 + 6);
            goto LAB_03273b28;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pEVar12,EOJBGBDLBKJ_TypeInfo,6);
LAB_03273b28:
      (*pVVar5->methodPtr)(pEVar12,pVVar5->method);
      pEVar12 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD;
      pEVar4 = (EOJBGBDLBKJ_o *)0x0;
      if (pEVar12 != (EOJBGBDLBKJ_o *)0x0) {
        pEVar9 = pEVar12->klass;
        uVar3._0_1_ = (pEVar9->_2).rank;
        uVar3._1_1_ = (pEVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar3;
        if (uVar10 != 0) {
          piVar11 = &((pEVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
              pVVar5 = pEVar9->vtable + (*piVar11 + 3);
              goto LAB_03273b94;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pEVar12,EOJBGBDLBKJ_TypeInfo,3);
LAB_03273b94:
        uVar10 = (*pVVar5->methodPtr)(pEVar12,pVVar5->method);
        if ((uVar10 & 1) == 0) {
          return;
        }
        pEVar4 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD;
      }
    }
  }
  pNVar6 = (NHOILKKCIMI_o *)thunk_FUN_01bda818(NHOILKKCIMI_TypeInfo);
  NHOILKKCIMI___ctor(pNVar6,pEVar4,10,0x7fffffff,(MethodInfo *)0x0);
  ppNVar7 = &IBILBKNKKDG_TypeInfo->static_fields->BAMNHCAKCIG;
  *ppNVar7 = pNVar6;
  thunk_FUN_01c20e04(ppNVar7,pNVar6);
  pNVar6 = IBILBKNKKDG_TypeInfo->static_fields->BAMNHCAKCIG;
  if (pNVar6 == (NHOILKKCIMI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  NHOILKKCIMI__GIMAJOGGBHM(pNVar6,(MethodInfo *)0x0);
  return;
}

