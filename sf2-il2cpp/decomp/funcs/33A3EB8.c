// KGFBAIBBNNH$$AKNJNKNGCDI @ RVA 0x33A3EB8

TMPro_TMP_FontAsset_o *
KGFBAIBBNNH__AKNJNKNGCDI(KGFBAIBBNNH_COLDHKDCOAB_o *param_1,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  TMPro_TMP_FontAsset_o *pTVar7;
  undefined8 uVar8;
  Il2CppClass *pIVar9;
  int iVar10;
  ulong uVar11;
  int32_t *piVar12;
  
                    /* try { // try from 034a3ebc to 035a3ebf has its CatchHandler @ 034a3f30 */
  if ((DAT_04567cd7 & 1) == 0) {
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567cd7 = 1;
  }
  iVar10 = (param_1->fields).fontType;
  if (iVar10 == 2) {
    pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_034a40a8;
                    /* try { // try from 034a3fcc to 035a3fd7 has its CatchHandler @ 034a3b94 */
    pIVar9 = pIVar5->klass;
    uVar3._0_1_ = (pIVar9->_2).rank;
    uVar3._1_1_ = (pIVar9->_2).minimumAlignment;
                    /* try { // try from 034a3fd8 to 035a3fdf has its CatchHandler @ 034a3fe0 */
    uVar11 = (ulong)uVar3;
                    /* catch() { ... } // from try @ 034a3e38 with catch @ 034a3fe0
                       catch() { ... } // from try @ 034a3efc with catch @ 034a3fe0
                       catch() { ... } // from try @ 034a3fa4 with catch @ 034a3fe0
                       catch() { ... } // from try @ 034a3fd8 with catch @ 034a3fe0 */
    if (uVar11 != 0) {
                    /* try { // try from 034a3fe4 to 035a4083 has its CatchHandler @ 034a3fe4
                       catch() { ... } // from try @ 034a3fe4 with catch @ 034a3fe4
                       catch() { ... } // from try @ 034a41d8 with catch @ 034a3fe4
                       catch() { ... } // from try @ 034a4288 with catch @ 034a3fe4
                       catch() { ... } // from try @ 034a4338 with catch @ 034a3fe4
                       catch() { ... } // from try @ 034a43e0 with catch @ 034a3fe4
                       catch() { ... } // from try @ 034a4480 with catch @ 034a3fe4 */
      piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                    /* try { // try from 034a4084 to 035a409b has its CatchHandler @ 034a434c */
          iVar10 = *piVar12 + 2;
          goto LAB_034a408c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    uVar8 = 2;
  }
  else {
                    /* try { // try from 034a3efc to 035a3f2f has its CatchHandler @ 034a3fe0 */
    if (iVar10 == 1) {
                    /* try { // try from 034a3f5c to 035a3f5f has its CatchHandler @ 034a3f6c */
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* catch() { ... } // from try @ 034a3f5c with catch @ 034a3f6c */
      if (pIVar5 == (Il2CppObject *)0x0) goto LAB_034a40a8;
      pIVar9 = pIVar5->klass;
      uVar2._0_1_ = (pIVar9->_2).rank;
      uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar11 = (ulong)uVar2;
      if (uVar11 != 0) {
        piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
            iVar10 = *piVar12 + 0xc;
            goto LAB_034a408c;
          }
          uVar11 = uVar11 - 1;
                    /* try { // try from 034a3fa4 to 035a3fcb has its CatchHandler @ 034a3fe0 */
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      uVar8 = 0xc;
    }
    else {
      if (iVar10 == 0) {
        pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        if (pIVar5 == (Il2CppObject *)0x0) {
LAB_034a40a8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034a40a8 to 035a40bf has its CatchHandler @ 034a4348 */
          FUN_01bab8c8();
        }
        pIVar9 = pIVar5->klass;
        uVar1._0_1_ = (pIVar9->_2).rank;
        uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar11 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 034a3ebc with catch @ 034a3f30
                       try { // try from 034a3f30 to 035a3f5b has its CatchHandler @ 034a3b94 */
        if (uVar11 != 0) {
          piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
                    /* catch() { ... } // from try @ 034a3d08 with catch @ 034a3f40
                       catch() { ... } // from try @ 034a3dbc with catch @ 034a3f40 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)DFLJPJMIMHI_TypeInfo) goto LAB_034a406c;
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
      }
      else {
        pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        if (pIVar5 == (Il2CppObject *)0x0) goto LAB_034a40a8;
        pIVar9 = pIVar5->klass;
        uVar4._0_1_ = (pIVar9->_2).rank;
        uVar4._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar11 = (ulong)uVar4;
        if (uVar11 != 0) {
          piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)DFLJPJMIMHI_TypeInfo) goto LAB_034a406c;
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
      }
      uVar8 = 3;
    }
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,DFLJPJMIMHI_TypeInfo,uVar8);
  goto LAB_034a4094;
LAB_034a406c:
  iVar10 = *piVar12 + 3;
LAB_034a408c:
  pVVar6 = pIVar9->vtable + iVar10;
LAB_034a4094:
                    /* WARNING: Could not recover jumptable at 0x034a40a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar7 = (TMPro_TMP_FontAsset_o *)(*pVVar6->methodPtr)(pIVar5,pVVar6->method);
  return pTVar7;
}

