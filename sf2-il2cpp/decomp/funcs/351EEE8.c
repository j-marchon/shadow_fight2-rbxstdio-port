// BIELHCFJAMH.FFEMPLJFDEL$$PEHKINONJOM @ RVA 0x351EEE8

void BIELHCFJAMH_FFEMPLJFDEL__PEHKINONJOM
               (BIELHCFJAMH_FFEMPLJFDEL_o *__this,System_Action_bool__o *h,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  CPABHCDGLPI_c *pCVar3;
  ulong uVar4;
  int32_t *piVar5;
  CPABHCDGLPI_o *pCVar6;
  
  if ((DAT_045689ac & 1) == 0) {
    FUN_01bab630(&CPABHCDGLPI_TypeInfo);
    DAT_045689ac = 1;
  }
  pCVar6 = (__this->fields).plugin;
  if (pCVar6 == (CPABHCDGLPI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0361ef90 to 0371ef93 has its CatchHandler @ 0361efb8 */
    FUN_01bab8c8();
  }
  pCVar3 = pCVar6->klass;
  uVar1._0_1_ = (pCVar3->_2).rank;
  uVar1._1_1_ = (pCVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pCVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)CPABHCDGLPI_TypeInfo) {
        pVVar2 = pCVar3->vtable + (*piVar5 + 5);
        goto LAB_0361ef78;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar6,CPABHCDGLPI_TypeInfo,5);
LAB_0361ef78:
                    /* try { // try from 0361ef78 to 0371ef7f has its CatchHandler @ 0361f0ac */
                    /* try { // try from 0361ef80 to 0371ef83 has its CatchHandler @ 0361efd4 */
                    /* try { // try from 0361ef84 to 0371ef87 has its CatchHandler @ 0361efd0 */
                    /* try { // try from 0361ef88 to 0371ef8b has its CatchHandler @ 0361efc4 */
                    /* WARNING: Could not recover jumptable at 0x0361ef8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 0361ef8c to 0371ef8f has its CatchHandler @ 0361e3e4 */
  (*pVVar2->methodPtr)(pCVar6,h,pVVar2->method);
  return;
}

