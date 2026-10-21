// EOOEOHKLOFJ.<>c$$DKMLIHEIFNB @ RVA 0x30C7C30

void EOOEOHKLOFJ_<>c__DKMLIHEIFNB
               (EOOEOHKLOFJ___c_o *__this,Il2CppObject *p_result,MethodInfo *method)

{
  ushort uVar1;
  MethodInfo *method_00;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_045662b6 & 1) == 0) {
                    /* try { // try from 031c7c4c to 032c7c73 has its CatchHandler @ 031c7dd0 */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_EOOEOHKLOFJ_MACGEGDGBOI__);
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 031c7c74 to 032c7cfb has its CatchHandler @ 031c7af8 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
    DAT_045662b6 = 1;
  }
  if (p_result != (Il2CppObject *)0x0) {
    if ((p_result->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031c7d34 with catch @ 031c7db0
                       try { // try from 031c7db0 to 032c7deb has its CatchHandler @ 031c7af8 */
      FUN_01babc64(p_result);
    }
    method_00 = (MethodInfo *)thunk_FUN_01bda96c();
    if (*(int *)&method_00->methodPointer == 1) {
      Nekki_SF2_Core_ApplicationController__Quit(method_00);
      return;
    }
    if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PFDCJGIIPLB__BKGENOHNNKM
              ((System_Collections_Generic_ICollection_string__o *)0x0,(MethodInfo *)0x0);
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* try { // try from 031c7cfc to 032c7cff has its CatchHandler @ 031c7d18 */
                    /* try { // try from 031c7d00 to 032c7d03 has its CatchHandler @ 031c7d10 */
                    /* try { // try from 031c7d04 to 032c7d0b has its CatchHandler @ 031c7dd0 */
                    /* catch() { ... } // from try @ 031c7bec with catch @ 031c7d0c
                       try { // try from 031c7d0c to 032c7d33 has its CatchHandler @ 031c7af8 */
                    /* catch() { ... } // from try @ 031c7d00 with catch @ 031c7d10 */
    uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 031c7c04 with catch @ 031c7d14 */
                    /* catch() { ... } // from try @ 031c7bd0 with catch @ 031c7d18
                       catch() { ... } // from try @ 031c7cfc with catch @ 031c7d18 */
    System_Action___ctor();
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
                    /* try { // try from 031c7d34 to 032c7d37 has its CatchHandler @ 031c7db0 */
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 031c7d7c to 032c7daf has its CatchHandler @ 031c7e70 */
            pVVar4 = pPVar5->vtable + (*piVar7 + 2);
            goto LAB_031c7d8c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_031c7d8c:
                    /* WARNING: Could not recover jumptable at 0x031c7da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(0x3dcccccd,pPVar2,uVar3,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

