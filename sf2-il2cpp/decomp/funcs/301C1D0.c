// GGAFBEMCEIN$$GFAHOLHMPOM @ RVA 0x301C1D0

void GGAFBEMCEIN__GFAHOLHMPOM(GGAFBEMCEIN_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Action_bool__c *pSVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  PBAKFOBIHEG_o *pPVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *extraout_x1;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  GGAFBEMCEIN_Fields *pGVar10;
  System_Action_bool__o *pSVar11;
  System_Collections_IEnumerator_o *pSVar12;
  NHJCFGACFDF_StaticFields *pNVar13;
  
                    /* try { // try from 0311c1ec to 0321c2c3 has its CatchHandler @ 0311baf0 */
  if ((DAT_04565c18 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_GGAFBEMCEIN_FFHKBMDDKBI__);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_15478);
    DAT_04565c18 = 1;
    method = extraout_x1;
  }
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NHJCFGACFDF_TypeInfo,method);
  }
  pSVar11 = NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI;
  pSVar3 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  pSVar3 = System_Delegate__Remove((System_Delegate_o *)pSVar11,pSVar3,(MethodInfo *)0x0);
  pSVar2 = System_Action<bool>_TypeInfo;
  pSVar11 = (System_Action_bool__o *)0x0;
  if (pSVar3 != (System_Delegate_o *)0x0) {
    pSVar11 = (System_Action_bool__o *)thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
    if (pSVar11 == (System_Action_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar3,pSVar2);
    }
  }
  NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI = pSVar11;
  pSVar2 = System_Action<bool>_TypeInfo;
                    /* try { // try from 0311c2c4 to 0321c30b has its CatchHandler @ 0311c388 */
  pNVar13 = NHJCFGACFDF_TypeInfo->static_fields;
  if (pSVar3 == (System_Delegate_o *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar3,pSVar2);
    }
  }
  thunk_FUN_01c20e04(pNVar13,lVar4);
  pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pGVar10 = &__this->fields;
  pSVar12 = pGVar10->NLNJKHHHELM;
  if (pPVar5 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0311c310 to 0321c313 has its CatchHandler @ 0311c37c */
  pPVar7 = pPVar5->klass;
  uVar1._0_1_ = (pPVar7->_2).rank;
  uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
                    /* try { // try from 0311c318 to 0321c31b has its CatchHandler @ 0311c370 */
                    /* try { // try from 0311c320 to 0321c323 has its CatchHandler @ 0311c36c */
  uVar8 = (ulong)uVar1;
                    /* try { // try from 0311c328 to 0321c333 has its CatchHandler @ 0311c384 */
  if (uVar8 != 0) {
                    /* try { // try from 0311c338 to 0321c33b has its CatchHandler @ 0311c35c */
    piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 0311c340 to 0321c343 has its CatchHandler @ 0311c358 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* catch() { ... } // from try @ 0311c080 with catch @ 0311c364 */
                    /* catch() { ... } // from try @ 0311c180 with catch @ 0311c368 */
                    /* catch() { ... } // from try @ 0311c320 with catch @ 0311c36c */
                    /* catch() { ... } // from try @ 0311c318 with catch @ 0311c370 */
        pVVar6 = pPVar7->vtable + (*piVar9 + 1);
        goto LAB_0311c374;
      }
                    /* try { // try from 0311c348 to 0321c34b has its CatchHandler @ 0311c350 */
      uVar8 = uVar8 - 1;
                    /* try { // try from 0311c34c to 0321c3a7 has its CatchHandler @ 0311baf0 */
      piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 0311c348 with catch @ 0311c350 */
    } while (uVar8 != 0);
  }
                    /* catch() { ... } // from try @ 0311c108 with catch @ 0311c354 */
                    /* catch() { ... } // from try @ 0311c340 with catch @ 0311c358 */
                    /* catch() { ... } // from try @ 0311c338 with catch @ 0311c35c */
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,1);
                    /* catch() { ... } // from try @ 0311c10c with catch @ 0311c360 */
LAB_0311c374:
                    /* catch() { ... } // from try @ 0311c0a8 with catch @ 0311c374 */
                    /* catch() { ... } // from try @ 0311c0c0 with catch @ 0311c378 */
                    /* catch() { ... } // from try @ 0311c310 with catch @ 0311c37c */
                    /* catch() { ... } // from try @ 0311c1b8 with catch @ 0311c380 */
                    /* catch() { ... } // from try @ 0311c328 with catch @ 0311c384 */
                    /* catch() { ... } // from try @ 0311c2c4 with catch @ 0311c388 */
  (*pVVar6->methodPtr)(pPVar5,pSVar12,pVVar6->method);
                    /* catch() { ... } // from try @ 0311c084 with catch @ 0311c38c */
                    /* catch() { ... } // from try @ 0311c05c with catch @ 0311c390 */
                    /* catch() { ... } // from try @ 0311c02c with catch @ 0311c394 */
  pGVar10->NLNJKHHHELM = (System_Collections_IEnumerator_o *)0x0;
                    /* catch() { ... } // from try @ 0311bfd0 with catch @ 0311c398 */
  thunk_FUN_01c20e04(pGVar10,0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0311c3a8 to 0321c3ab has its CatchHandler @ 0311ccc8 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0311c3ac to 0321c5eb has its CatchHandler @ 0311baf0 */
  UnityEngine_Debug__Log(StringLiteral_15478,(MethodInfo *)0x0);
  return;
}

