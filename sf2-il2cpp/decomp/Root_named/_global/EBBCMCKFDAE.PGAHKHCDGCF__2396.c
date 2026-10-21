// TypeDefIndex 2396
// Namespace: 
// [CompilerGenerated]
// private sealed class EBBCMCKFDAE.PGAHKHCDGCF
// Fields:
//   public KKEKKPIDGBK manager; // 0x10

// ===== internal void FCHHJHAALCG(Action<MPAKDCNMLEG> h)  [RVA 0x333321C]
// EBBCMCKFDAE.PGAHKHCDGCF$$FCHHJHAALCG @ RVA 0x333321C

void EBBCMCKFDAE_PGAHKHCDGCF__FCHHJHAALCG
               (EBBCMCKFDAE_PGAHKHCDGCF_o *__this,System_Action_MPAKDCNMLEG__o *h,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_0456792e & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_0456792e = 1;
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
        pVVar2 = pKVar3->vtable + (*piVar5 + 0x10);
        goto LAB_034332ac;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x10);
LAB_034332ac:
                    /* WARNING: Could not recover jumptable at 0x034332c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pKVar6,h,pVVar2->method);
  return;
}


// ===== internal void IBPJJIJDMDE(Action<MPAKDCNMLEG> h)  [RVA 0x33332C8]
// EBBCMCKFDAE.PGAHKHCDGCF$$IBPJJIJDMDE @ RVA 0x33332C8

void EBBCMCKFDAE_PGAHKHCDGCF__IBPJJIJDMDE
               (EBBCMCKFDAE_PGAHKHCDGCF_o *__this,System_Action_MPAKDCNMLEG__o *h,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KKEKKPIDGBK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KKEKKPIDGBK_o *pKVar6;
  
  if ((DAT_0456792f & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    DAT_0456792f = 1;
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
        pVVar2 = pKVar3->vtable + (*piVar5 + 5);
        goto LAB_03433358;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,5);
LAB_03433358:
                    /* WARNING: Could not recover jumptable at 0x0343336c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pKVar6,h,pVVar2->method);
  return;
}


// ===== public void .ctor()  [RVA 0x3332500]
// EBBCMCKFDAE.PGAHKHCDGCF$$.ctor @ RVA 0x3332500

void EBBCMCKFDAE_PGAHKHCDGCF___ctor(EBBCMCKFDAE_PGAHKHCDGCF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

