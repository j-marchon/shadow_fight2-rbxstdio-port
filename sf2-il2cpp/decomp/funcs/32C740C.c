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

