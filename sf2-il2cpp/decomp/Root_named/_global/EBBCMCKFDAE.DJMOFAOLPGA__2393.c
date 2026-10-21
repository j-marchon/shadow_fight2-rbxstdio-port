// TypeDefIndex 2393
// Namespace: 
// [CompilerGenerated]
// private sealed class EBBCMCKFDAE.DJMOFAOLPGA
// Fields:
//   public KKEKKPIDGBK manager; // 0x10

// ===== internal void KCAKPNGNPEM(Action<MPAKDCNMLEG, int, int> h)  [RVA 0x3332EC4]
// EBBCMCKFDAE.DJMOFAOLPGA$$KCAKPNGNPEM @ RVA 0x3332EC4

void EBBCMCKFDAE_DJMOFAOLPGA__KCAKPNGNPEM
               (EBBCMCKFDAE_DJMOFAOLPGA_o *__this,System_Action_MPAKDCNMLEG__int__int__o *h,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_04567929 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_04567929 = 1;
  }
  pKVar6 = (__this->fields).manager;
  if (pKVar6 == (KKEKKPIDGBK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
        pVVar2 = pKVar3->vtable + (*piVar5 + 0xe);
        goto LAB_03432f54;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xe);
LAB_03432f54:
                    /* WARNING: Could not recover jumptable at 0x03432f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pKVar6,h,pVVar2->method);
  return;
}


// ===== internal void AOEMPKKDDHH(Action<MPAKDCNMLEG, int, int> h)  [RVA 0x3332F70]
// EBBCMCKFDAE.DJMOFAOLPGA$$AOEMPKKDDHH @ RVA 0x3332F70

void EBBCMCKFDAE_DJMOFAOLPGA__AOEMPKKDDHH
               (EBBCMCKFDAE_DJMOFAOLPGA_o *__this,System_Action_MPAKDCNMLEG__int__int__o *h,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_0456792a & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_0456792a = 1;
  }
  pKVar6 = (__this->fields).manager;
  if (pKVar6 == (KKEKKPIDGBK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
        pVVar2 = pKVar3->vtable + (*piVar5 + 0xd);
        goto LAB_03433000;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xd);
LAB_03433000:
                    /* WARNING: Could not recover jumptable at 0x03433014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pKVar6,h,pVVar2->method);
  return;
}


// ===== public void .ctor()  [RVA 0x33326EC]
// EBBCMCKFDAE.DJMOFAOLPGA$$.ctor @ RVA 0x33326EC

void EBBCMCKFDAE_DJMOFAOLPGA___ctor(EBBCMCKFDAE_DJMOFAOLPGA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

