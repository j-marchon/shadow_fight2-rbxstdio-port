// TypeDefIndex 2482
// Namespace: 
// [CompilerGenerated]
// private sealed class CLDGCKOKINJ.FHGCAEEFCGL
// Fields:
//   public CFOCLEDKNKL fileDownloader; // 0x10

// ===== internal void DAIFGCNEKDE(Action<OHAHOONNEIC> h)  [RVA 0x337319C]
// CLDGCKOKINJ.FHGCAEEFCGL$$DAIFGCNEKDE @ RVA 0x337319C

void CLDGCKOKINJ_FHGCAEEFCGL__DAIFGCNEKDE
               (CLDGCKOKINJ_FHGCAEEFCGL_o *__this,System_Action_OHAHOONNEIC__o *h,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  CFOCLEDKNKL_c *pCVar3;
  ulong uVar4;
  int32_t *piVar5;
  CFOCLEDKNKL_o *pCVar6;
  
  if ((DAT_04567b3b & 1) == 0) {
    FUN_01bab630(&CFOCLEDKNKL_TypeInfo);
    DAT_04567b3b = 1;
  }
  pCVar6 = (__this->fields).fileDownloader;
  if (pCVar6 == (CFOCLEDKNKL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar3 = pCVar6->klass;
  uVar1._0_1_ = (pCVar3->_2).rank;
  uVar1._1_1_ = (pCVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pCVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)CFOCLEDKNKL_TypeInfo) {
        pVVar2 = pCVar3->vtable + (*piVar5 + 5);
        goto LAB_0347322c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar6,CFOCLEDKNKL_TypeInfo,5);
LAB_0347322c:
                    /* WARNING: Could not recover jumptable at 0x03473240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pCVar6,h,pVVar2->method);
  return;
}


// ===== internal void BKPJABMNPCK(Action<OHAHOONNEIC> h)  [RVA 0x3373248]
// CLDGCKOKINJ.FHGCAEEFCGL$$BKPJABMNPCK @ RVA 0x3373248

void CLDGCKOKINJ_FHGCAEEFCGL__BKPJABMNPCK
               (CLDGCKOKINJ_FHGCAEEFCGL_o *__this,System_Action_OHAHOONNEIC__o *h,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  CFOCLEDKNKL_c *pCVar3;
  ulong uVar4;
  int32_t *piVar5;
  CFOCLEDKNKL_o *pCVar6;
  
  if ((DAT_04567b3c & 1) == 0) {
    FUN_01bab630(&CFOCLEDKNKL_TypeInfo);
    DAT_04567b3c = 1;
  }
  pCVar6 = (__this->fields).fileDownloader;
  if (pCVar6 == (CFOCLEDKNKL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar3 = pCVar6->klass;
  uVar1._0_1_ = (pCVar3->_2).rank;
  uVar1._1_1_ = (pCVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pCVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)CFOCLEDKNKL_TypeInfo) {
        pVVar2 = pCVar3->vtable + (*piVar5 + 2);
        goto LAB_034732d8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar6,CFOCLEDKNKL_TypeInfo,2);
                    /* try { // try from 034732c4 to 035734d7 has its CatchHandler @ 034732c4
                       catch() { ... } // from try @ 034732c4 with catch @ 034732c4
                       catch() { ... } // from try @ 03473868 with catch @ 034732c4
                       catch() { ... } // from try @ 0347394c with catch @ 034732c4
                       catch() { ... } // from try @ 03473954 with catch @ 034732c4
                       catch() { ... } // from try @ 03473aa8 with catch @ 034732c4 */
LAB_034732d8:
                    /* WARNING: Could not recover jumptable at 0x034732ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pCVar6,h,pVVar2->method);
  return;
}


// ===== public void .ctor()  [RVA 0x3372F00]
// CLDGCKOKINJ.FHGCAEEFCGL$$.ctor @ RVA 0x3372F00

void CLDGCKOKINJ_FHGCAEEFCGL___ctor(CLDGCKOKINJ_FHGCAEEFCGL_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03472ea4 with catch @ 03472f00 */
                    /* catch() { ... } // from try @ 03472bf4 with catch @ 03472f04 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

