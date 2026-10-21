// KGFBAIBBNNH$$PJJEHJMAIIH @ RVA 0x33A3D28

bool KGFBAIBBNNH__PJJEHJMAIIH
               (bool ODGMEOCIGGA,float COIHIJIIEAA,float *HPACPFLKHPK,MethodInfo *method)

{
  float *pfVar1;
  ushort uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  Il2CppClass *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  float *pfVar9;
  float fVar10;
  
                    /* try { // try from 034a3d30 to 035a3dbb has its CatchHandler @ 034a3b94 */
  if ((DAT_04567cd6 & 1) == 0) {
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04567cd6 = 1;
  }
  if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  if (bVar3) {
    *HPACPFLKHPK = 0.0;
  }
  else {
    pfVar1 = HPACPFLKHPK;
    pfVar9 = (float *)0x0;
    if (!ODGMEOCIGGA) {
                    /* try { // try from 034a3dbc to 035a3dc3 has its CatchHandler @ 034a3f40 */
      pfVar1 = (float *)0x0;
      pfVar9 = HPACPFLKHPK;
    }
                    /* try { // try from 034a3dc4 to 035a3dcb has its CatchHandler @ 034a3ea0 */
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 034a3c5c with catch @ 034a3dcc
                       try { // try from 034a3dcc to 035a3deb has its CatchHandler @ 034a3b94 */
    pIVar6 = pIVar4->klass;
    uVar2._0_1_ = (pIVar6->_2).rank;
    uVar2._1_1_ = (pIVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (ODGMEOCIGGA) {
      if (uVar2 != 0) {
                    /* try { // try from 034a3dec to 035a3def has its CatchHandler @ 034a3e70 */
        piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
            pVVar5 = pIVar6->vtable + (*piVar8 + 5);
            goto LAB_034a3e60;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,DFLJPJMIMHI_TypeInfo,5);
LAB_034a3e60:
      fVar10 = (float)(*pVVar5->methodPtr)(pIVar4,pVVar5->method);
      fVar10 = fVar10 * COIHIJIIEAA;
      pfVar9 = pfVar1;
                    /* catch() { ... } // from try @ 034a3dec with catch @ 034a3e70
                       try { // try from 034a3e70 to 035a3ebb has its CatchHandler @ 034a3b94 */
    }
    else {
      if (uVar2 != 0) {
        piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                    /* catch() { ... } // from try @ 034a3c48 with catch @ 034a3e80 */
            pVVar5 = pIVar6->vtable + (*piVar8 + 8);
            goto LAB_034a3e88;
          }
          uVar7 = uVar7 - 1;
                    /* try { // try from 034a3e38 to 035a3e6f has its CatchHandler @ 034a3fe0 */
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,DFLJPJMIMHI_TypeInfo,8);
LAB_034a3e88:
                    /* catch() { ... } // from try @ 034a3c24 with catch @ 034a3e90 */
      fVar10 = (float)(*pVVar5->methodPtr)(pIVar4,pVVar5->method);
    }
    *pfVar9 = fVar10;
  }
                    /* catch() { ... } // from try @ 034a3ca4 with catch @ 034a3ea0
                       catch() { ... } // from try @ 034a3dc4 with catch @ 034a3ea0 */
  return (bool)(~bVar3 & 1);
}

