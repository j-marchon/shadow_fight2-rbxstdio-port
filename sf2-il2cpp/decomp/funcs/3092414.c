// ACMLELBBNPF$$OKCIMJLPJJD @ RVA 0x3092414

bool ACMLELBBNPF__OKCIMJLPJJD(ACMLELBBNPF_o *__this,OHAHOONNEIC_o *KEFILECBPMF,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  VirtualInvokeData *pVVar4;
  undefined8 uVar5;
  OHAHOONNEIC_c *pOVar6;
  HCOKCPNMKFK_c *pHVar7;
  ulong uVar8;
  int32_t *piVar9;
  HCOKCPNMKFK_o *pHVar10;
  
  if ((DAT_045660af & 1) == 0) {
    FUN_01bab630(&HCOKCPNMKFK_TypeInfo);
    FUN_01bab630(&OHAHOONNEIC_TypeInfo);
    DAT_045660af = 1;
  }
  if (KEFILECBPMF != (OHAHOONNEIC_o *)0x0) {
    pOVar6 = KEFILECBPMF->klass;
    pHVar10 = (__this->fields).BCHLEFPBFHO;
    uVar1._0_1_ = (pOVar6->_2).rank;
    uVar1._1_1_ = (pOVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pOVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)OHAHOONNEIC_TypeInfo) {
          pVVar4 = pOVar6->vtable + *piVar9;
          goto LAB_031924ac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(KEFILECBPMF,OHAHOONNEIC_TypeInfo,0);
LAB_031924ac:
    uVar5 = (*pVVar4->methodPtr)(KEFILECBPMF,pVVar4->method);
    if (pHVar10 != (HCOKCPNMKFK_o *)0x0) {
      pHVar7 = pHVar10->klass;
      uVar2._0_1_ = (pHVar7->_2).rank;
      uVar2._1_1_ = (pHVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar2;
      if (uVar8 != 0) {
        piVar9 = &((pHVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)HCOKCPNMKFK_TypeInfo) {
            pVVar4 = pHVar7->vtable + (*piVar9 + 3);
            goto LAB_03192518;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pHVar10,HCOKCPNMKFK_TypeInfo,3);
LAB_03192518:
                    /* WARNING: Could not recover jumptable at 0x0319252c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pVVar4->methodPtr)(pHVar10,uVar5,pVVar4->method);
      return (bool)uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

