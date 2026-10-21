// HMKGDNALGCC$$NDNPGAKJLHM @ RVA 0x32CDF3C

void HMKGDNALGCC__NDNPGAKJLHM(HMKGDNALGCC_o *__this,MethodInfo *method)

{
  ushort uVar1;
  long lVar2;
  VirtualInvokeData *pVVar3;
  MethodInfo *extraout_x1;
  long lVar4;
  HMKGDNALGCC_c *pHVar5;
  ulong uVar6;
  int32_t *piVar7;
  undefined8 uVar8;
  
  if ((DAT_04567535 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&HMKGDNALGCC_TypeInfo);
    DAT_04567535 = 1;
    method = extraout_x1;
  }
  lVar2 = Method_System_Array_Empty<string>__;
  lVar4 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar4 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__,method);
    lVar4 = *(long *)(lVar2 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  pHVar5 = __this->klass;
  uVar8 = **(undefined8 **)(lVar2 + 0xb8);
  uVar1._0_1_ = (pHVar5->_2).rank;
  uVar1._1_1_ = (pHVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pHVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)HMKGDNALGCC_TypeInfo) {
        pVVar3 = pHVar5->vtable + (*piVar7 + 2);
        goto LAB_033ce024;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(__this,HMKGDNALGCC_TypeInfo,2);
LAB_033ce024:
                    /* WARNING: Could not recover jumptable at 0x033ce038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(__this,uVar8,pVVar3->method);
  return;
}

