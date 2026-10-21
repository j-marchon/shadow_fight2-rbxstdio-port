// KKLJIDJBFEI$$JIIOPKNDBBJ @ RVA 0x3144824

void KKLJIDJBFEI__JIIOPKNDBBJ(KKLJIDJBFEI_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
                    /* try { // try from 03244830 to 03344853 has its CatchHandler @ 03244964 */
  if ((DAT_0456679e & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456679e = 1;
  }
  ppSVar7 = &(__this->fields).FDLECCPIBFI;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032448f8 to 033448fb has its CatchHandler @ 03244a48 */
    FUN_01bab8c8();
  }
                    /* try { // try from 03244864 to 0334486b has its CatchHandler @ 0324497c */
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
                    /* try { // try from 03244878 to 0334488f has its CatchHandler @ 03244a8c */
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 03244894 to 033448a3 has its CatchHandler @ 03244990 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_032448d0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 032448a4 to 033448db has its CatchHandler @ 03244030 */
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_032448d0:
                    /* try { // try from 032448dc to 033448df has its CatchHandler @ 03244a94 */
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
                    /* try { // try from 032448e0 to 033448e3 has its CatchHandler @ 03244a88 */
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
                    /* try { // try from 032448e4 to 033448e7 has its CatchHandler @ 03244a80 */
                    /* try { // try from 032448e8 to 033448eb has its CatchHandler @ 03244a7c */
                    /* try { // try from 032448ec to 033448ef has its CatchHandler @ 03244a74 */
                    /* try { // try from 032448f0 to 033448f3 has its CatchHandler @ 03244a64 */
                    /* try { // try from 032448f4 to 033448f7 has its CatchHandler @ 03244a50 */
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}

