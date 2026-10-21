// KJLBJAOALEO$$KIIMDDDFKML @ RVA 0x351BDE8

void KJLBJAOALEO__KIIMDDDFKML
               (KJLBJAOALEO_o *__this,
               System_ValueTuple_LevelPlayAdInfo__LevelPlayReward__o OHNNFPGGEFK,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *__this_00;
  UniRx_IScheduler_o *pUVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  UniRx_IScheduler_c *pUVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_0456898f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UniRx_IScheduler_TypeInfo);
    FUN_01bab630(&Method_KJLBJAOALEO_LNPANPEKHGK_HCOEPHNCBJI__);
    FUN_01bab630(&KJLBJAOALEO_LNPANPEKHGK_TypeInfo);
                    /* try { // try from 0361be4c to 0371c16f has its CatchHandler @ 0361be4c
                       catch() { ... } // from try @ 0361be4c with catch @ 0361be4c
                       catch() { ... } // from try @ 0361c19c with catch @ 0361be4c
                       catch() { ... } // from try @ 0361c220 with catch @ 0361be4c
                       catch() { ... } // from try @ 0361c268 with catch @ 0361be4c */
    FUN_01bab630(&UniRx_Scheduler_TypeInfo);
    DAT_0456898f = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KJLBJAOALEO_LNPANPEKHGK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_00[1].monitor = OHNNFPGGEFK.fields.Item1;
    __this_00[2].klass = (Il2CppClass *)OHNNFPGGEFK.fields.Item2;
    thunk_FUN_01c20e04(&__this_00[1].monitor,0);
    if ((UniRx_Scheduler_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = UniRx_Scheduler__get_MainThread((MethodInfo *)0x0);
    uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pUVar2 != (UniRx_IScheduler_o *)0x0) {
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
            goto LAB_0361bf48;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pUVar2,UniRx_IScheduler_TypeInfo,1);
LAB_0361bf48:
                    /* WARNING: Could not recover jumptable at 0x0361bf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(pUVar2,uVar3,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

