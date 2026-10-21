// TypeDefIndex 2392
// Namespace: 
// [CompilerGenerated]
// private sealed class EBBCMCKFDAE.PCGBDPNKNHC
// Fields:
//   public KKEKKPIDGBK manager; // 0x10

// ===== public void .ctor()  [RVA 0x33323C4]
// EBBCMCKFDAE.PCGBDPNKNHC$$.ctor @ RVA 0x33323C4

void EBBCMCKFDAE_PCGBDPNKNHC___ctor(EBBCMCKFDAE_PCGBDPNKNHC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void NOMOPLBOGDD(Action<MPAKDCNMLEG> h)  [RVA 0x3332D6C]
// EBBCMCKFDAE.PCGBDPNKNHC$$NOMOPLBOGDD @ RVA 0x3332D6C

void EBBCMCKFDAE_PCGBDPNKNHC__NOMOPLBOGDD
               (EBBCMCKFDAE_PCGBDPNKNHC_o *__this,System_Action_MPAKDCNMLEG__o *h,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_04567927 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_04567927 = 1;
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
        pVVar2 = pKVar3->vtable + (*piVar5 + 0x11);
        goto LAB_03432dfc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x11);
LAB_03432dfc:
                    /* WARNING: Could not recover jumptable at 0x03432e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pKVar6,h,pVVar2->method);
  return;
}


// ===== internal void EOFJFGIGCJA(Action<MPAKDCNMLEG> h)  [RVA 0x3332E18]
// EBBCMCKFDAE.PCGBDPNKNHC$$EOFJFGIGCJA @ RVA 0x3332E18

void EBBCMCKFDAE_PCGBDPNKNHC__EOFJFGIGCJA
               (EBBCMCKFDAE_PCGBDPNKNHC_o *__this,System_Action_MPAKDCNMLEG__o *h,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_04567928 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_04567928 = 1;
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
        pVVar2 = pKVar3->vtable + (*piVar5 + 0x18);
        goto LAB_03432ea8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x18);
LAB_03432ea8:
                    /* WARNING: Could not recover jumptable at 0x03432ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pKVar6,h,pVVar2->method);
  return;
}

