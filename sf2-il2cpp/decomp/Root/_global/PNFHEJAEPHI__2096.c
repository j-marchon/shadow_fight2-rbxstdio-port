// TypeDefIndex 2096
// Namespace: 
// public abstract class PNFHEJAEPHI : FCMAKNBEJDA
// Fields:
//   protected readonly CompositeDisposable CAEFEOBGDEH; // 0x50
//   protected bool HNIADPLNEII; // 0x58

// ===== private void IJACNLMKEPB()  [RVA 0x32C6F58]
// PNFHEJAEPHI$$IJACNLMKEPB @ RVA 0x32C6F58

void PNFHEJAEPHI__IJACNLMKEPB(PNFHEJAEPHI_o *__this,MethodInfo *method)

{
  System_Action_MPAKDCNMLEG__o *pSVar1;
  
                    /* try { // try from 033c6f58 to 034c6f97 has its CatchHandler @ 033c6e10 */
  if ((DAT_045674ee & 1) == 0) {
    FUN_01bab630(&StringLiteral_9836/*"OnAdClosed"*/);
    DAT_045674ee = 1;
  }
                    /* try { // try from 033c6f98 to 034c6f9f has its CatchHandler @ 033c6fb0 */
  FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)__this,StringLiteral_9836/*"OnAdClosed"*/,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).super.EDPLNAAICPE;
                    /* try { // try from 033c6fa0 to 034c6fc7 has its CatchHandler @ 033c6e10 */
  if (pSVar1 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c6f54 with catch @ 033c6fa4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c6ef0 with catch @ 033c6fa8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c6f98 with catch @ 033c6fb0
                        */
                    /* WARNING: Could not recover jumptable at 0x033c6fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* try { // try from 033c6fc8 to 034c6fcb has its CatchHandler @ 033c6fec */
  return;
}


// ===== private void HBELIHEAKBB()  [RVA 0x32C6FCC]
// PNFHEJAEPHI$$HBELIHEAKBB @ RVA 0x32C6FCC

void PNFHEJAEPHI__HBELIHEAKBB(PNFHEJAEPHI_o *__this,MethodInfo *method)

{
  System_Action_MPAKDCNMLEG__o *pSVar1;
  
                    /* try { // try from 033c6fcc to 034c6ff3 has its CatchHandler @ 033c6e10 */
  if ((DAT_045674ef & 1) == 0) {
                    /* catch() { ... } // from try @ 033c6fc8 with catch @ 033c6fec */
                    /* try { // try from 033c6ff4 to 034c6ffb has its CatchHandler @ 033c7010 */
    FUN_01bab630(&StringLiteral_9840/*"OnAdLoaded"*/);
                    /* try { // try from 033c6ffc to 034c7007 has its CatchHandler @ 033c6e10 */
    DAT_045674ef = 1;
  }
                    /* try { // try from 033c7008 to 034c700f has its CatchHandler @ 033c7010 */
  FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)__this,StringLiteral_9840/*"OnAdLoaded"*/,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c6ff4 with catch @ 033c7010
                       catch(type#2 @ 00000000) { ... } // from try @ 033c7008 with catch @ 033c7010
                        */
  pSVar1 = (__this->fields).super.NEKJNNBFECK;
  (__this->fields).HNIADPLNEII = false;
  if (pSVar1 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033c7034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
               (pSVar1->fields).super.super.method);
    return;
  }
  return;
}


// ===== protected void .ctor()  [RVA 0x32C7044]
// PNFHEJAEPHI$$.ctor @ RVA 0x32C7044

void PNFHEJAEPHI___ctor(PNFHEJAEPHI_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045674f0 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_045674f0 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).CAEFEOBGDEH;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  FCMAKNBEJDA___ctor((FCMAKNBEJDA_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected void LAJOGIIJIEO(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x32C70B0]
// PNFHEJAEPHI$$LAJOGIIJIEO @ RVA 0x32C70B0

void PNFHEJAEPHI__LAJOGIIJIEO
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
  
  if ((DAT_045674f1 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UniRx_IScheduler_TypeInfo);
    FUN_01bab630(&Method_PNFHEJAEPHI_IJACNLMKEPB__);
    FUN_01bab630(&UniRx_Scheduler_TypeInfo);
    DAT_045674f1 = 1;
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
        goto LAB_033c71b0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pUVar2,UniRx_IScheduler_TypeInfo,1);
LAB_033c71b0:
                    /* WARNING: Could not recover jumptable at 0x033c71c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pUVar2,uVar3,pVVar4->method);
  return;
}


// ===== protected void DOKBCLHIPEA(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x32C71CC]
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


// ===== public override bool OLHHONOHBMB()  [RVA 0x32C72E8]
// PNFHEJAEPHI$$OLHHONOHBMB @ RVA 0x32C72E8

bool PNFHEJAEPHI__OLHHONOHBMB(PNFHEJAEPHI_o *__this,MethodInfo *method)

{
  return true;
}


// ===== protected void PCALMGLCBKG(LevelPlayAdInfo HFGGOHIPLKB)  [RVA 0x32C72F0]
// PNFHEJAEPHI$$PCALMGLCBKG @ RVA 0x32C72F0

void PNFHEJAEPHI__PCALMGLCBKG
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
  
                    /* try { // try from 033c730c to 034c7417 has its CatchHandler @ 033c730c
                       catch() { ... } // from try @ 033c730c with catch @ 033c730c
                       catch() { ... } // from try @ 033c7488 with catch @ 033c730c
                       catch() { ... } // from try @ 033c74d4 with catch @ 033c730c
                       catch() { ... } // from try @ 033c750c with catch @ 033c730c
                       catch() { ... } // from try @ 033c7540 with catch @ 033c730c */
  if ((DAT_045674f3 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UniRx_IScheduler_TypeInfo);
    FUN_01bab630(&Method_PNFHEJAEPHI_HBELIHEAKBB__);
    FUN_01bab630(&UniRx_Scheduler_TypeInfo);
    DAT_045674f3 = 1;
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
        goto LAB_033c73f0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pUVar2,UniRx_IScheduler_TypeInfo,1);
LAB_033c73f0:
                    /* WARNING: Could not recover jumptable at 0x033c7404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pUVar2,uVar3,pVVar4->method);
  return;
}


// ===== protected void EILMLNFCAAK(ValueTuple<LevelPlayAdInfo, LevelPlayAdError> KNKPIPDHAOG)  [RVA 0x32C740C]
// PNFHEJAEPHI$$EILMLNFCAAK @ RVA 0x32C740C

void PNFHEJAEPHI__EILMLNFCAAK
               (PNFHEJAEPHI_o *__this,
               System_ValueTuple_LevelPlayAdInfo__LevelPlayAdError__o KNKPIPDHAOG,MethodInfo *method
               )

{
  ushort uVar1;
  Il2CppObject *__this_00;
  UniRx_IScheduler_o *pUVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  UniRx_IScheduler_c *pUVar5;
  ulong uVar6;
  int32_t *piVar7;
  
                    /* try { // try from 033c7418 to 034c741f has its CatchHandler @ 033c74f8 */
                    /* try { // try from 033c7438 to 034c743b has its CatchHandler @ 033c74d8 */
  if ((DAT_045674f4 & 1) == 0) {
                    /* try { // try from 033c7440 to 034c7447 has its CatchHandler @ 033c74dc */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 033c7450 to 034c7453 has its CatchHandler @ 033c74e0 */
    FUN_01bab630(&UniRx_IScheduler_TypeInfo);
    FUN_01bab630(&Method_PNFHEJAEPHI_OCJAJNLFNCO_NJDHEOKAMJB__);
                    /* try { // try from 033c7460 to 034c746f has its CatchHandler @ 033c74f4 */
    FUN_01bab630(&PNFHEJAEPHI_OCJAJNLFNCO_TypeInfo);
    FUN_01bab630(&UniRx_Scheduler_TypeInfo);
                    /* try { // try from 033c7478 to 034c7487 has its CatchHandler @ 033c74f0 */
    DAT_045674f4 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(PNFHEJAEPHI_OCJAJNLFNCO_TypeInfo);
                    /* try { // try from 033c7488 to 034c74c7 has its CatchHandler @ 033c730c */
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_00[1].monitor = KNKPIPDHAOG.fields.Item1;
                    /* try { // try from 033c74c8 to 034c74cb has its CatchHandler @ 033c74ec */
                    /* try { // try from 033c74cc to 034c74cf has its CatchHandler @ 033c74e8 */
    __this_00[2].klass = (Il2CppClass *)KNKPIPDHAOG.fields.Item2;
                    /* try { // try from 033c74d0 to 034c74d3 has its CatchHandler @ 033c74e4 */
    thunk_FUN_01c20e04(&__this_00[1].monitor,0);
                    /* try { // try from 033c74d4 to 034c7507 has its CatchHandler @ 033c730c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c7438 with catch @ 033c74d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c7440 with catch @ 033c74dc
                        */
    if ((UniRx_Scheduler_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c7450 with catch @ 033c74e0
                        */
      thunk_FUN_01ba7564();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c74d0 with catch @ 033c74e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c74cc with catch @ 033c74e8
                        */
    pUVar2 = UniRx_Scheduler__get_MainThread((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c74c8 with catch @ 033c74ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c7478 with catch @ 033c74f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c7460 with catch @ 033c74f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c7418 with catch @ 033c74f8
                        */
    uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 033c7508 to 034c750b has its CatchHandler @ 033c7530 */
                    /* try { // try from 033c750c to 034c7537 has its CatchHandler @ 033c730c */
    System_Action___ctor();
    if (pUVar2 != (UniRx_IScheduler_o *)0x0) {
      pUVar5 = pUVar2->klass;
      uVar1._0_1_ = (pUVar5->_2).rank;
      uVar1._1_1_ = (pUVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 033c7508 with catch @ 033c7530 */
        piVar7 = &((pUVar5->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 033c7538 to 034c753f has its CatchHandler @ 033c7554 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)UniRx_IScheduler_TypeInfo) {
            pVVar4 = pUVar5->vtable + (*piVar7 + 1);
            goto LAB_033c756c;
          }
                    /* try { // try from 033c7540 to 034c754b has its CatchHandler @ 033c730c */
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
                    /* try { // try from 033c754c to 034c7553 has its CatchHandler @ 033c7554 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c7538 with catch @ 033c7554
                       catch(type#2 @ 00000000) { ... } // from try @ 033c754c with catch @ 033c7554
                        */
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pUVar2,UniRx_IScheduler_TypeInfo,1);
LAB_033c756c:
                    /* WARNING: Could not recover jumptable at 0x033c7588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(pUVar2,uVar3,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool CDEIMFELDHP()  [RVA 0x32C7598]
// PNFHEJAEPHI$$CDEIMFELDHP @ RVA 0x32C7598

bool PNFHEJAEPHI__CDEIMFELDHP(PNFHEJAEPHI_o *__this,MethodInfo *method)

{
  return (__this->fields).HNIADPLNEII;
}


// ===== protected void LNLEFANOIDH(LevelPlayAdError BAPELFMECBI)  [RVA 0x32C75A0]
// PNFHEJAEPHI$$LNLEFANOIDH @ RVA 0x32C75A0

void PNFHEJAEPHI__LNLEFANOIDH
               (PNFHEJAEPHI_o *__this,Unity_Services_LevelPlay_LevelPlayAdError_o *BAPELFMECBI,
               MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *__this_00;
  UniRx_IScheduler_o *pUVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  UniRx_IScheduler_c *pUVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_045674f5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_PNFHEJAEPHI_HGGJEIBEHPF_DNKODIPDBBF__);
    FUN_01bab630(&PNFHEJAEPHI_HGGJEIBEHPF_TypeInfo);
    FUN_01bab630(&UniRx_IScheduler_TypeInfo);
    FUN_01bab630(&UniRx_Scheduler_TypeInfo);
    DAT_045674f5 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(PNFHEJAEPHI_HGGJEIBEHPF_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_00[1].monitor = BAPELFMECBI;
    thunk_FUN_01c20e04(&__this_00[1].monitor,BAPELFMECBI);
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
            goto LAB_033c76f8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pUVar2,UniRx_IScheduler_TypeInfo,1);
LAB_033c76f8:
                    /* WARNING: Could not recover jumptable at 0x033c7714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(pUVar2,uVar3,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Dispose()  [RVA 0x32C7724]
// PNFHEJAEPHI$$Dispose @ RVA 0x32C7724

void PNFHEJAEPHI__Dispose(PNFHEJAEPHI_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  __this_00 = (__this->fields).CAEFEOBGDEH;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OBFBBCGKHMG()  [RVA 0x32C7740]
// PNFHEJAEPHI$$OBFBBCGKHMG @ RVA 0x32C7740

/* WARNING: Type propagation algorithm not settling */

void PNFHEJAEPHI__OBFBBCGKHMG(PNFHEJAEPHI_o *__this,MethodInfo *method)

{
  System_Action_MPAKDCNMLEG__o *pSVar1;
  
  if ((DAT_045674f6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9841/*"OnAdOpened"*/);
    DAT_045674f6 = 1;
  }
  FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)__this,StringLiteral_9841/*"OnAdOpened"*/,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).super.IIEIOOACJJL;
  if (pSVar1 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033c77a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
               (pSVar1->fields).super.super.method);
    return;
  }
  return;
}

