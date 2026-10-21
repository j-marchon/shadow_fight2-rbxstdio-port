// IBILBKNKKDG$$HBFCADLMGIN @ RVA 0x3173CF8

void IBILBKNKKDG__HBFCADLMGIN(System_String_o *MPMJDINCJNH,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  EOJBGBDLBKJ_c *pEVar4;
  ulong uVar5;
  int32_t *piVar6;
  EOJBGBDLBKJ_o *pEVar7;
  
  if ((DAT_04566946 & 1) == 0) {
    FUN_01bab630(&EOJBGBDLBKJ_TypeInfo);
    FUN_01bab630(&IBILBKNKKDG_TypeInfo);
    DAT_04566946 = 1;
  }
  bVar2 = System_String__IsNullOrWhiteSpace(MPMJDINCJNH,(MethodInfo *)0x0);
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
        pVVar3 = pEVar4->vtable + (*piVar6 + 1);
        goto LAB_03273dbc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pEVar7,EOJBGBDLBKJ_TypeInfo,1);
LAB_03273dbc:
                    /* WARNING: Could not recover jumptable at 0x03273dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pEVar7,MPMJDINCJNH,pVVar3->method);
  return;
}

