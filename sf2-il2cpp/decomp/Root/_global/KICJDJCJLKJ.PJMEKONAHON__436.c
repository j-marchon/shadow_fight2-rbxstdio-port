// TypeDefIndex 436
// Namespace: 
// [CompilerGenerated]
// private sealed class KICJDJCJLKJ.PJMEKONAHON
// Fields:
//   public KICJDJCJLKJ <>4__this; // 0x10
//   public MPAKDCNMLEG adType; // 0x18

// ===== internal void CGHICJCFLEN(long _)  [RVA 0x348D750]
// KICJDJCJLKJ.PJMEKONAHON$$CGHICJCFLEN @ RVA 0x348D750

void KICJDJCJLKJ_PJMEKONAHON__CGHICJCFLEN
               (KICJDJCJLKJ_PJMEKONAHON_o *__this,int64_t __,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  KICJDJCJLKJ_o *pKVar4;
  KKEKKPIDGBK_c *pKVar5;
  ulong uVar6;
  int32_t *piVar7;
  KKEKKPIDGBK_o *pKVar8;
  undefined1 auVar9 [16];
  
  auVar9._8_8_ = __;
  auVar9._0_8_ = __this;
  if ((DAT_045683f5 & 1) == 0) {
    auVar9 = FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_045683f5 = 1;
  }
  pKVar4 = (__this->fields).__4__this;
  if ((pKVar4 == (KICJDJCJLKJ_o *)0x0) ||
     (pKVar8 = (pKVar4->fields).FOIMNIOLPDJ, pKVar8 == (KKEKKPIDGBK_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar9._0_8_,auVar9._8_8_);
  }
  pKVar5 = pKVar8->klass;
  uVar1 = (__this->fields).adType;
  uVar2._0_1_ = (pKVar5->_2).rank;
  uVar2._1_1_ = (pKVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar2;
  if (uVar6 != 0) {
    piVar7 = &((pKVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
        pVVar3 = pKVar5->vtable + (*piVar7 + 8);
        goto LAB_0358d7e8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar8,KKEKKPIDGBK_TypeInfo,8);
LAB_0358d7e8:
                    /* WARNING: Could not recover jumptable at 0x0358d800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pKVar8,(ulong)uVar1,0,pVVar3->method);
  return;
}


// ===== public void .ctor()  [RVA 0x348CC20]
// KICJDJCJLKJ.PJMEKONAHON$$.ctor @ RVA 0x348CC20

void KICJDJCJLKJ_PJMEKONAHON___ctor(KICJDJCJLKJ_PJMEKONAHON_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

