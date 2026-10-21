// IBILBKNKKDG$$EHAJCBIIBKB @ RVA 0x317380C

void IBILBKNKKDG__EHAJCBIIBKB(System_String_o *NFDKMBAGHPD,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  EOJBGBDLBKJ_c *pEVar4;
  ulong uVar5;
  int32_t *piVar6;
  EOJBGBDLBKJ_o *pEVar7;
  
  if ((DAT_04566942 & 1) == 0) {
    FUN_01bab630(&EOJBGBDLBKJ_TypeInfo);
    FUN_01bab630(&IBILBKNKKDG_TypeInfo);
    DAT_04566942 = 1;
  }
  bVar2 = System_String__IsNullOrWhiteSpace(NFDKMBAGHPD,(MethodInfo *)0x0);
  if ((bVar2) ||
     (pEVar7 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD, pEVar7 == (EOJBGBDLBKJ_o *)0x0)) {
    return;
  }
  pEVar4 = pEVar7->klass;
  uVar1._0_1_ = (pEVar4->_2).rank;
  uVar1._1_1_ = (pEVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pEVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
        pVVar3 = pEVar4->vtable + (*piVar6 + 2);
        goto LAB_032738d0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pEVar7,EOJBGBDLBKJ_TypeInfo,2);
LAB_032738d0:
                    /* WARNING: Could not recover jumptable at 0x032738e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pEVar7,NFDKMBAGHPD,pVVar3->method);
  return;
}

