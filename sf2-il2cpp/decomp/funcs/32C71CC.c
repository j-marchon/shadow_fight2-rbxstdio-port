// PNFHEJAEPHI$$DOKBCLHIPEA @ RVA 0x32C71CC

void PNFHEJAEPHI__DOKBCLHIPEA
               (PNFHEJAEPHI_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *HFGGOHIPLKB,
               MethodInfo *method)

{
  ushort uVar1;
  UniRx_IScheduler_o *pUVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  Unity_Services_LevelPlay_LevelPlayAdInfo_o *extraout_x1;
  UniRx_IScheduler_c *pUVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_045674f2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UniRx_IScheduler_TypeInfo);
    FUN_01bab630(&Method_PNFHEJAEPHI_OBFBBCGKHMG__);
    FUN_01bab630(&UniRx_Scheduler_TypeInfo);
    DAT_045674f2 = 1;
    HFGGOHIPLKB = extraout_x1;
  }
  if ((UniRx_Scheduler_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Scheduler_TypeInfo,HFGGOHIPLKB);
  }
  pUVar2 = UniRx_Scheduler__get_MainThread((MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pUVar2 == (UniRx_IScheduler_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar5 = pUVar2->klass;
  uVar1._0_1_ = (pUVar5->_2).rank;
  uVar1._1_1_ = (pUVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pUVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)UniRx_IScheduler_TypeInfo) {
        pVVar4 = pUVar5->vtable + (*piVar7 + 1);
        goto LAB_033c72cc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pUVar2,UniRx_IScheduler_TypeInfo,1);
LAB_033c72cc:
                    /* WARNING: Could not recover jumptable at 0x033c72e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pUVar2,uVar3,pVVar4->method);
  return;
}

