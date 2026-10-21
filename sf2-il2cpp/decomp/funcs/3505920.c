// FDEOKGMPLBK$$LJGJPNGHGGM @ RVA 0x3505920

void FDEOKGMPLBK__LJGJPNGHGGM(MethodInfo *method)

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
  
  if ((DAT_04568897 & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&System_Action<MPAKDCNMLEG,_int,_int>_TypeInfo);
                    /* try { // try from 0360595c to 03705abf has its CatchHandler @ 0360595c
                       catch() { ... } // from try @ 0360595c with catch @ 0360595c
                       catch() { ... } // from try @ 03605ac8 with catch @ 0360595c
                       catch() { ... } // from try @ 03605b04 with catch @ 0360595c
                       catch() { ... } // from try @ 03605b28 with catch @ 0360595c
                       catch() { ... } // from try @ 03605b68 with catch @ 0360595c */
    FUN_01bab630(&Method_FDEOKGMPLBK_BHCOJOPEOHH__);
    FUN_01bab630(&Method_FDEOKGMPLBK_EFDGBPJANAC__);
    FUN_01bab630(&Method_FDEOKGMPLBK_PLOLMAENPOJ__);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_04568897 = 1;
  }
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
          goto LAB_03605a54;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0xd);
LAB_03605a54:
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
            goto LAB_03605aec;
          }
                    /* try { // try from 03605ac0 to 03705ac7 has its CatchHandler @ 03605b0c */
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
                    /* try { // try from 03605ac8 to 03705aff has its CatchHandler @ 0360595c */
        } while (uVar10 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x18);
LAB_03605aec:
      (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
                    /* try { // try from 03605b00 to 03705b03 has its CatchHandler @ 03605b08 */
      pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03605b04 to 03705b23 has its CatchHandler @ 0360595c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03605b00 with catch @ 03605b08
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03605ac0 with catch @ 03605b0c
                        */
      uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
                    /* try { // try from 03605b24 to 03705b27 has its CatchHandler @ 03605b50 */
      System_Action<Int32Enum>___ctor();
                    /* try { // try from 03605b28 to 03705b5f has its CatchHandler @ 0360595c */
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
                    /* try { // try from 03605b74 to 03705b7b has its CatchHandler @ 03605b7c */
              pVVar8 = pKVar9->vtable + (*piVar11 + 0x10);
              goto LAB_03605b7c;
            }
                    /* catch() { ... } // from try @ 03605b24 with catch @ 03605b50 */
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
                    /* try { // try from 03605b60 to 03705b67 has its CatchHandler @ 03605b7c */
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x10);
                    /* try { // try from 03605b68 to 03705b73 has its CatchHandler @ 0360595c */
LAB_03605b7c:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03605b60 with catch @ 03605b7c
                       catch(type#2 @ 00000000) { ... } // from try @ 03605b74 with catch @ 03605b7c
                        */
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
                goto LAB_03605c0c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,0x14);
LAB_03605c0c:
          (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
          pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
          uVar7 = thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
          System_Action<Int32Enum>___ctor();
          if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
            pKVar9 = pKVar6->klass;
            uVar5._0_1_ = (pKVar9->_2).rank;
            uVar5._1_1_ = (pKVar9->_2).minimumAlignment;
            uVar10 = (ulong)uVar5;
            if (uVar10 != 0) {
              piVar11 = &((pKVar9->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                    (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                  pVVar8 = pKVar9->vtable + (*piVar11 + 1);
                  goto LAB_03605c9c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            pVVar8 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,1);
LAB_03605c9c:
                    /* WARNING: Could not recover jumptable at 0x03605cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pVVar8->methodPtr)(pKVar6,uVar7,pVVar8->method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

