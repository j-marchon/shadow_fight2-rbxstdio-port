// KGFBAIBBNNH$$MAJPEEKDPJJ @ RVA 0x33A40AC

bool KGFBAIBBNNH__MAJPEEKDPJJ(int32_t KFOONNANLKN,float *HPACPFLKHPK,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  Il2CppClass *pIVar5;
  ulong uVar6;
  int32_t *piVar7;
  float fVar8;
  
                    /* try { // try from 034a40d0 to 035a40db has its CatchHandler @ 034a4290 */
  if ((DAT_04567cd8 & 1) == 0) {
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04567cd8 = 1;
  }
                    /* try { // try from 034a4118 to 035a413f has its CatchHandler @ 034a435c */
  if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  fVar8 = 0.0;
  if ((bVar2) ||
     (bVar2 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__), !bVar2)) {
    bVar2 = false;
  }
  else {
    pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar5 = pIVar3->klass;
    uVar1._0_1_ = (pIVar5->_2).rank;
    uVar1._1_1_ = (pIVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pIVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
          pVVar4 = pIVar5->vtable + (*piVar7 + 9);
          goto LAB_034a41bc;
        }
                    /* try { // try from 034a4188 to 035a41af has its CatchHandler @ 034a4350 */
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar3,DFLJPJMIMHI_TypeInfo,9);
LAB_034a41bc:
    fVar8 = (float)(*pVVar4->methodPtr)(pIVar3,pVVar4->method);
    fVar8 = fVar8 * (float)KFOONNANLKN;
                    /* try { // try from 034a41d0 to 035a41d7 has its CatchHandler @ 034a4288 */
    bVar2 = true;
  }
  *HPACPFLKHPK = fVar8;
                    /* try { // try from 034a41d8 to 035a426f has its CatchHandler @ 034a3fe4 */
  return bVar2;
}

