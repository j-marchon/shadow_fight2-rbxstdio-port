// KIKKFANOJDC$$FBBKEBJIHAN @ RVA 0x352F1A0

System_IDisposable_o *
KIKKFANOJDC__FBBKEBJIHAN
          (KIKKFANOJDC_o *__this,System_IObserver_string____o *ENHLEPICPGK,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_String_array *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_IObserver_string____c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  
                    /* try { // try from 0362f1b8 to 0372f1bb has its CatchHandler @ 0362f1c0 */
                    /* try { // try from 0362f1bc to 0372f1df has its CatchHandler @ 0362f0e8 */
  method_00 = (MethodInfo *)ENHLEPICPGK;
  if ((DAT_04568a4b & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362f1b8 with catch @ 0362f1c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362f190 with catch @ 0362f1c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362f17c with catch @ 0362f1c8
                        */
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&System_IObserver<string[]>_TypeInfo);
    DAT_04568a4b = 1;
    method_00 = extraout_x1;
  }
                    /* try { // try from 0362f1e0 to 0372f1e3 has its CatchHandler @ 0362f20c */
                    /* try { // try from 0362f1e4 to 0372f21b has its CatchHandler @ 0362f0e8 */
  pSVar3 = KIKKFANOJDC__PKANHLOKBAO(__this,method_00);
  if (ENHLEPICPGK == (System_IObserver_string____o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = ENHLEPICPGK->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 0362f1e0 with catch @ 0362f20c */
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_IObserver<string[]>_TypeInfo) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0362f21c with catch @ 0362f238
                       catch(type#2 @ 00000000) { ... } // from try @ 0362f230 with catch @ 0362f238
                        */
        pVVar4 = pSVar5->vtable + *piVar7;
        goto LAB_0362f244;
      }
                    /* try { // try from 0362f21c to 0372f223 has its CatchHandler @ 0362f238 */
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
                    /* try { // try from 0362f224 to 0372f22f has its CatchHandler @ 0362f0e8 */
    } while (uVar6 != 0);
  }
                    /* try { // try from 0362f230 to 0372f237 has its CatchHandler @ 0362f238 */
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(ENHLEPICPGK,System_IObserver<string[]>_TypeInfo,0);
LAB_0362f244:
  (*pVVar4->methodPtr)(ENHLEPICPGK,pSVar3,pVVar4->method);
  pSVar5 = ENHLEPICPGK->klass;
  uVar2._0_1_ = (pSVar5->_2).rank;
  uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar2;
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_IObserver<string[]>_TypeInfo) {
        pVVar4 = pSVar5->vtable + (*piVar7 + 2);
        goto LAB_0362f2ac;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(ENHLEPICPGK,System_IObserver<string[]>_TypeInfo,2);
LAB_0362f2ac:
  (*pVVar4->methodPtr)(ENHLEPICPGK,pVVar4->method);
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return UniRx_Disposable_TypeInfo->static_fields->Empty;
}

