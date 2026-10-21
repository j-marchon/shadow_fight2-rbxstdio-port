// FEPCHKMAIBL$$LJGJPNGHGGM @ RVA 0x32C41B8

void FEPCHKMAIBL__LJGJPNGHGGM(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  KKEKKPIDGBK_o *pKVar6;
  undefined8 uVar7;
  VirtualInvokeData *pVVar8;
  KKEKKPIDGBK_c *pKVar9;
  ulong uVar10;
  int32_t *piVar11;
  
                    /* try { // try from 033c41b8 to 034c41db has its CatchHandler @ 033c40d4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4188 with catch @ 033c41bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c41b4 with catch @ 033c41c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4168 with catch @ 033c41c4
                        */
  if ((DAT_045674e6 & 1) == 0) {
                    /* try { // try from 033c41dc to 034c41df has its CatchHandler @ 033c4208 */
                    /* try { // try from 033c41e0 to 034c4217 has its CatchHandler @ 033c40d4 */
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&System_Action<MPAKDCNMLEG,_int,_int>_TypeInfo);
    FUN_01bab630(&Method_FEPCHKMAIBL_BHCOJOPEOHH__);
    FUN_01bab630(&Method_FEPCHKMAIBL_EFDGBPJANAC__);
                    /* catch() { ... } // from try @ 033c41dc with catch @ 033c4208 */
    FUN_01bab630(&Method_FEPCHKMAIBL_PLOLMAENPOJ__);
                    /* try { // try from 033c4218 to 034c421f has its CatchHandler @ 033c4234 */
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
                    /* try { // try from 033c4220 to 034c422b has its CatchHandler @ 033c40d4 */
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
                    /* try { // try from 033c422c to 034c4233 has its CatchHandler @ 033c4234 */
    DAT_045674e6 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c4218 with catch @ 033c4234
                       catch(type#2 @ 00000000) { ... } // from try @ 033c422c with catch @ 033c4234
                        */
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
  uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG,_int,_int>_TypeInfo);
  System_Action<Int32Enum,_int,_int>___ctor();
  if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
    pKVar9 = pKVar6->klass;
    uVar1._0_1_ = (pKVar9->_2).rank;
    uVar1._1_1_ = (pKVar9->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
          pVVar8 = pKVar9->vtable + (*piVar11 + 0xd);
          goto LAB_033c42ec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xd);
LAB_033c42ec:
    (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
    pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
    uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
      pKVar9 = pKVar6->klass;
      uVar2._0_1_ = (pKVar9->_2).rank;
      uVar2._1_1_ = (pKVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar2;
      if (uVar10 != 0) {
        piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
            pVVar8 = pKVar9->vtable + (*piVar11 + 0x18);
            goto LAB_033c4384;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x18);
LAB_033c4384:
      (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
      pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 033c439c to 034c4477 has its CatchHandler @ 033c439c
                       catch() { ... } // from try @ 033c439c with catch @ 033c439c
                       catch() { ... } // from try @ 033c44fc with catch @ 033c439c
                       catch() { ... } // from try @ 033c453c with catch @ 033c439c
                       catch() { ... } // from try @ 033c4570 with catch @ 033c439c
                       catch() { ... } // from try @ 033c45a4 with catch @ 033c439c */
      uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
        pKVar9 = pKVar6->klass;
        uVar3._0_1_ = (pKVar9->_2).rank;
        uVar3._1_1_ = (pKVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar3;
        if (uVar10 != 0) {
          piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
              pVVar8 = pKVar9->vtable + (*piVar11 + 0x10);
              goto LAB_033c4414;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x10);
LAB_033c4414:
        (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
        pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
        uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
        System_Action<Int32Enum>___ctor();
        if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
          pKVar9 = pKVar6->klass;
          uVar4._0_1_ = (pKVar9->_2).rank;
          uVar4._1_1_ = (pKVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar4;
          if (uVar10 != 0) {
            piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                pVVar8 = pKVar9->vtable + (*piVar11 + 0x14);
                goto LAB_033c44a4;
              }
                    /* try { // try from 033c4478 to 034c447f has its CatchHandler @ 033c455c */
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x14);
                    /* try { // try from 033c4490 to 034c4497 has its CatchHandler @ 033c4554 */
LAB_033c44a4:
          (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
          pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 033c44c0 to 034c44c3 has its CatchHandler @ 033c4540 */
                    /* try { // try from 033c44c4 to 034c44d3 has its CatchHandler @ 033c4558 */
          uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
          System_Action<Int32Enum>___ctor();
                    /* try { // try from 033c44e0 to 034c44eb has its CatchHandler @ 033c454c */
          if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
            pKVar9 = pKVar6->klass;
            uVar5._0_1_ = (pKVar9->_2).rank;
            uVar5._1_1_ = (pKVar9->_2).minimumAlignment;
            uVar10 = (ulong)uVar5;
                    /* try { // try from 033c44f0 to 034c44fb has its CatchHandler @ 033c4548 */
            if (uVar10 != 0) {
              piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
              do {
                    /* try { // try from 033c44fc to 034c4533 has its CatchHandler @ 033c439c */
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                    (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                  pVVar8 = pKVar9->vtable + (*piVar11 + 1);
                  goto LAB_033c4534;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,1);
LAB_033c4534:
                    /* try { // try from 033c4534 to 034c4537 has its CatchHandler @ 033c4550 */
                    /* try { // try from 033c4538 to 034c453b has its CatchHandler @ 033c4544 */
                    /* try { // try from 033c453c to 034c456b has its CatchHandler @ 033c439c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c44c0 with catch @ 033c4540
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4538 with catch @ 033c4544
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c44f0 with catch @ 033c4548
                        */
                    /* WARNING: Could not recover jumptable at 0x033c454c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c44e0 with catch @ 033c454c
                        */
            (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4534 with catch @ 033c4550
                        */
  FUN_01bab8c8();
}

