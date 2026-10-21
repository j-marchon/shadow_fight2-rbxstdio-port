// TypeDefIndex 2390
// Namespace: 
// [CompilerGenerated]
// private sealed class EBBCMCKFDAE.NDDEOMDNCDP
// Fields:
//   public KKEKKPIDGBK manager; // 0x10

// ===== internal void CBNMOCEIBAB(Action<MPAKDCNMLEG> h)  [RVA 0x3332ABC]
// EBBCMCKFDAE.NDDEOMDNCDP$$CBNMOCEIBAB @ RVA 0x3332ABC

void EBBCMCKFDAE_NDDEOMDNCDP__CBNMOCEIBAB
               (EBBCMCKFDAE_NDDEOMDNCDP_o *__this,System_Action_MPAKDCNMLEG__o *h,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_04567923 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_04567923 = 1;
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
        pVVar2 = pKVar3->vtable + (*piVar5 + 0x14);
        goto LAB_03432b4c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x14);
LAB_03432b4c:
                    /* WARNING: Could not recover jumptable at 0x03432b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pKVar6,h,pVVar2->method);
  return;
}


// ===== public void .ctor()  [RVA 0x3332828]
// EBBCMCKFDAE.NDDEOMDNCDP$$.ctor @ RVA 0x3332828

void EBBCMCKFDAE_NDDEOMDNCDP___ctor(EBBCMCKFDAE_NDDEOMDNCDP_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void GEKPINLBMEJ(Action<MPAKDCNMLEG> h)  [RVA 0x3332B68]
// EBBCMCKFDAE.NDDEOMDNCDP$$GEKPINLBMEJ @ RVA 0x3332B68

void EBBCMCKFDAE_NDDEOMDNCDP__GEKPINLBMEJ
               (EBBCMCKFDAE_NDDEOMDNCDP_o *__this,System_Action_MPAKDCNMLEG__o *h,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_04567924 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_04567924 = 1;
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
        pVVar2 = pKVar3->vtable + (*piVar5 + 0x16);
        goto LAB_03432bf8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x16);
LAB_03432bf8:
                    /* WARNING: Could not recover jumptable at 0x03432c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pKVar6,h,pVVar2->method);
  return;
}

