// TypeDefIndex 2481
// Namespace: 
// [CompilerGenerated]
// private sealed class CLDGCKOKINJ.MPBHCOJJGBM
// Fields:
//   public CFOCLEDKNKL fileDownloader; // 0x10

// ===== public void .ctor()  [RVA 0x337303C]
// CLDGCKOKINJ.MPBHCOJJGBM$$.ctor @ RVA 0x337303C

void CLDGCKOKINJ_MPBHCOJJGBM___ctor(CLDGCKOKINJ_MPBHCOJJGBM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void GAHAPJGKEHK(Action<OHAHOONNEIC> h)  [RVA 0x3373044]
// CLDGCKOKINJ.MPBHCOJJGBM$$GAHAPJGKEHK @ RVA 0x3373044

void CLDGCKOKINJ_MPBHCOJJGBM__GAHAPJGKEHK
               (CLDGCKOKINJ_MPBHCOJJGBM_o *__this,System_Action_OHAHOONNEIC__o *h,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  CFOCLEDKNKL_c *pCVar3;
  ulong uVar4;
  int32_t *piVar5;
  CFOCLEDKNKL_o *pCVar6;
  
  if ((DAT_04567b39 & 1) == 0) {
    FUN_01bab630(&CFOCLEDKNKL_TypeInfo);
    DAT_04567b39 = 1;
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
        pVVar2 = pCVar3->vtable + (*piVar5 + 1);
        goto LAB_034730d4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar6,CFOCLEDKNKL_TypeInfo,1);
LAB_034730d4:
                    /* WARNING: Could not recover jumptable at 0x034730e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pCVar6,h,pVVar2->method);
  return;
}


// ===== internal void PFKPLMJHMIN(Action<OHAHOONNEIC> h)  [RVA 0x33730F0]
// CLDGCKOKINJ.MPBHCOJJGBM$$PFKPLMJHMIN @ RVA 0x33730F0

void CLDGCKOKINJ_MPBHCOJJGBM__PFKPLMJHMIN
               (CLDGCKOKINJ_MPBHCOJJGBM_o *__this,System_Action_OHAHOONNEIC__o *h,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  CFOCLEDKNKL_c *pCVar3;
  ulong uVar4;
  int32_t *piVar5;
  CFOCLEDKNKL_o *pCVar6;
  
  if ((DAT_04567b3a & 1) == 0) {
    FUN_01bab630(&CFOCLEDKNKL_TypeInfo);
    DAT_04567b3a = 1;
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
        pVVar2 = pCVar3->vtable + (*piVar5 + 4);
        goto LAB_03473180;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar6,CFOCLEDKNKL_TypeInfo,4);
LAB_03473180:
                    /* WARNING: Could not recover jumptable at 0x03473194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pCVar6,h,pVVar2->method);
  return;
}

