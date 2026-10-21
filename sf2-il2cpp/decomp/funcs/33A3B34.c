// KGFBAIBBNNH$$NMLDADBENEN @ RVA 0x33A3B34

UnityEngine_Font_o * KGFBAIBBNNH__NMLDADBENEN(KGFBAIBBNNH_PMECFLPOKLN_o *param_1,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  UnityEngine_Font_o *pUVar7;
  undefined8 uVar8;
  Il2CppClass *pIVar9;
  int iVar10;
  ulong uVar11;
  int32_t *piVar12;
  
  if ((DAT_04567cd5 & 1) == 0) {
                    /* try { // try from 034a3b54 to 035a3b7b has its CatchHandler @ 034a3b90 */
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567cd5 = 1;
  }
  iVar10 = (param_1->fields).fontType;
  if (iVar10 == 2) {
    pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_034a3d24;
                    /* try { // try from 034a3c48 to 035a3c5b has its CatchHandler @ 034a3e80 */
    pIVar9 = pIVar5->klass;
    uVar3._0_1_ = (pIVar9->_2).rank;
    uVar3._1_1_ = (pIVar9->_2).minimumAlignment;
    uVar11 = (ulong)uVar3;
                    /* try { // try from 034a3c5c to 035a3c67 has its CatchHandler @ 034a3dcc */
    if (uVar11 != 0) {
      piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
          iVar10 = *piVar12 + 4;
          goto LAB_034a3d08;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    uVar8 = 4;
  }
  else {
                    /* try { // try from 034a3b7c to 035a3b87 has its CatchHandler @ 034a3748 */
    if (iVar10 == 1) {
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      if (pIVar5 == (Il2CppObject *)0x0) goto LAB_034a3d24;
      pIVar9 = pIVar5->klass;
      uVar2._0_1_ = (pIVar9->_2).rank;
      uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar11 = (ulong)uVar2;
      if (uVar11 != 0) {
        piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
            iVar10 = *piVar12 + 10;
            goto LAB_034a3d08;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
                    /* try { // try from 034a3c24 to 035a3c3b has its CatchHandler @ 034a3e90 */
        } while (uVar11 != 0);
      }
      uVar8 = 10;
    }
    else {
      if (iVar10 == 0) {
                    /* try { // try from 034a3b88 to 035a3b8f has its CatchHandler @ 034a3b90 */
                    /* catch() { ... } // from try @ 034a39e8 with catch @ 034a3b90
                       catch() { ... } // from try @ 034a3aac with catch @ 034a3b90
                       catch() { ... } // from try @ 034a3b54 with catch @ 034a3b90
                       catch() { ... } // from try @ 034a3b88 with catch @ 034a3b90 */
        pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* try { // try from 034a3b94 to 035a3c23 has its CatchHandler @ 034a3b94
                       catch() { ... } // from try @ 034a3b94 with catch @ 034a3b94
                       catch() { ... } // from try @ 034a3d30 with catch @ 034a3b94
                       catch() { ... } // from try @ 034a3dcc with catch @ 034a3b94
                       catch() { ... } // from try @ 034a3e70 with catch @ 034a3b94
                       catch() { ... } // from try @ 034a3f30 with catch @ 034a3b94
                       catch() { ... } // from try @ 034a3fcc with catch @ 034a3b94 */
        if (pIVar5 == (Il2CppObject *)0x0) {
LAB_034a3d24:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar9 = pIVar5->klass;
        uVar1._0_1_ = (pIVar9->_2).rank;
        uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar11 = (ulong)uVar1;
        if (uVar11 != 0) {
          piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)DFLJPJMIMHI_TypeInfo) goto LAB_034a3ce8;
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
      }
      else {
        pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        if (pIVar5 == (Il2CppObject *)0x0) goto LAB_034a3d24;
        pIVar9 = pIVar5->klass;
        uVar4._0_1_ = (pIVar9->_2).rank;
        uVar4._1_1_ = (pIVar9->_2).minimumAlignment;
                    /* try { // try from 034a3ca4 to 035a3ccb has its CatchHandler @ 034a3ea0 */
        uVar11 = (ulong)uVar4;
        if (uVar11 != 0) {
          piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)DFLJPJMIMHI_TypeInfo) goto LAB_034a3ce8;
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
      }
      uVar8 = 1;
    }
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,DFLJPJMIMHI_TypeInfo,uVar8);
  goto LAB_034a3d10;
LAB_034a3ce8:
  iVar10 = *piVar12 + 1;
LAB_034a3d08:
                    /* try { // try from 034a3d08 to 035a3d2f has its CatchHandler @ 034a3f40 */
  pVVar6 = pIVar9->vtable + iVar10;
LAB_034a3d10:
                    /* WARNING: Could not recover jumptable at 0x034a3d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar7 = (UnityEngine_Font_o *)(*pVVar6->methodPtr)(pIVar5,pVVar6->method);
  return pUVar7;
}

