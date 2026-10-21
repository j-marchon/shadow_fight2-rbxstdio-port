// TypeDefIndex 2391
// Namespace: 
// [CompilerGenerated]
// private sealed class EBBCMCKFDAE.DFFDAAHFKJJ
// Fields:
//   public KKEKKPIDGBK manager; // 0x10

// ===== public void .ctor()  [RVA 0x3332010]
// EBBCMCKFDAE.DFFDAAHFKJJ$$.ctor @ RVA 0x3332010

void EBBCMCKFDAE_DFFDAAHFKJJ___ctor(EBBCMCKFDAE_DFFDAAHFKJJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void OONMFICEKAG(Action<MPAKDCNMLEG> h)  [RVA 0x3332C14]
// EBBCMCKFDAE.DFFDAAHFKJJ$$OONMFICEKAG @ RVA 0x3332C14

void EBBCMCKFDAE_DFFDAAHFKJJ__OONMFICEKAG
               (EBBCMCKFDAE_DFFDAAHFKJJ_o *__this,System_Action_MPAKDCNMLEG__o *h,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_04567925 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_04567925 = 1;
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
        pVVar2 = pKVar3->vtable + (*piVar5 + 1);
        goto LAB_03432ca4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,1);
LAB_03432ca4:
                    /* WARNING: Could not recover jumptable at 0x03432cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pKVar6,h,pVVar2->method);
  return;
}


// ===== internal void LAPNFHBGNKJ(Action<MPAKDCNMLEG> h)  [RVA 0x3332CC0]
// EBBCMCKFDAE.DFFDAAHFKJJ$$LAPNFHBGNKJ @ RVA 0x3332CC0

void EBBCMCKFDAE_DFFDAAHFKJJ__LAPNFHBGNKJ
               (EBBCMCKFDAE_DFFDAAHFKJJ_o *__this,System_Action_MPAKDCNMLEG__o *h,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_04567926 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_04567926 = 1;
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
        pVVar2 = pKVar3->vtable + (*piVar5 + 0xf);
        goto LAB_03432d50;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xf);
LAB_03432d50:
                    /* WARNING: Could not recover jumptable at 0x03432d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pKVar6,h,pVVar2->method);
  return;
}

