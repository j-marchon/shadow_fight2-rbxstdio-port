// BHNHMJNIAII$$MEMCLBNDLGC @ RVA 0x34B8700

void BHNHMJNIAII__MEMCLBNDLGC(IEJKLPPLHMO_o *EFENHAFFBAG,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  IEJKLPPLHMO_c *pIVar3;
  ulong uVar4;
  int32_t *piVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = EFENHAFFBAG;
  if ((DAT_045685a7 & 1) == 0) {
    FUN_01bab630(&BHNHMJNIAII_TypeInfo);
    auVar6 = FUN_01bab630(&IEJKLPPLHMO_TypeInfo);
    DAT_045685a7 = 1;
  }
  if (EFENHAFFBAG == (IEJKLPPLHMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
  }
  pIVar3 = EFENHAFFBAG->klass;
  uVar1._0_1_ = (pIVar3->_2).rank;
  uVar1._1_1_ = (pIVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pIVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)IEJKLPPLHMO_TypeInfo) {
        pVVar2 = pIVar3->vtable + (*piVar5 + 1);
        goto LAB_035b879c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(EFENHAFFBAG,IEJKLPPLHMO_TypeInfo,1);
LAB_035b879c:
  auVar6 = (*pVVar2->methodPtr)(EFENHAFFBAG,pVVar2->method);
  method_00 = auVar6._8_8_;
  if ((BHNHMJNIAII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHNHMJNIAII_TypeInfo);
    method_00 = extraout_x1;
  }
  BHNHMJNIAII__MEMCLBNDLGC(auVar6._0_8_,method_00);
  return;
}

