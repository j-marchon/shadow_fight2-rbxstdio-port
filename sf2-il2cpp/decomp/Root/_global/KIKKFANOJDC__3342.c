// TypeDefIndex 3342
// Namespace: 
// public class KIKKFANOJDC : CGLDCCGBNMP
// Fields:
//   private readonly MJPJANJNDCI<CdnMirrorsConfig> OAOMFCGPCBP; // 0x10

// ===== public IObservable<string[]> PEGKGIADJAE()  [RVA 0x352F0E8]
// KIKKFANOJDC$$PEGKGIADJAE @ RVA 0x352F0E8

System_IObservable_string____o * KIKKFANOJDC__PEGKGIADJAE(KIKKFANOJDC_o *__this,MethodInfo *method)

{
  System_Func_IObserver_T___IDisposable__o *subscribe;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0362f0e8 to 0372f17b has its CatchHandler @ 0362f0e8
                       catch() { ... } // from try @ 0362f0e8 with catch @ 0362f0e8
                       catch() { ... } // from try @ 0362f198 with catch @ 0362f0e8
                       catch() { ... } // from try @ 0362f1bc with catch @ 0362f0e8
                       catch() { ... } // from try @ 0362f1e4 with catch @ 0362f0e8
                       catch() { ... } // from try @ 0362f224 with catch @ 0362f0e8 */
  if ((DAT_04568a4a & 1) == 0) {
    FUN_01bab630(&System_Func<IObserver<string[]>,_IDisposable>_TypeInfo);
    FUN_01bab630(&Method_KIKKFANOJDC_FBBKEBJIHAN__);
    FUN_01bab630(&Method_UniRx_Observable_Create<string[]>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04568a4a = 1;
    method = extraout_x1;
  }
  subscribe = (System_Func_IObserver_T___IDisposable__o *)
              thunk_FUN_01bda818(System_Func<IObserver<string[]>,_IDisposable>_TypeInfo,method);
  System_Func<object,_object>___ctor();
                    /* try { // try from 0362f17c to 0372f183 has its CatchHandler @ 0362f1c8 */
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0362f190 to 0372f197 has its CatchHandler @ 0362f1c4 */
                    /* try { // try from 0362f198 to 0372f1b7 has its CatchHandler @ 0362f0e8 */
  pSVar1 = UniRx_Observable__Create<object>(subscribe,Method_UniRx_Observable_Create<string[]>__);
  return (System_IObservable_string____o *)pSVar1;
}


// ===== private IDisposable FBBKEBJIHAN(IObserver<string[]> ENHLEPICPGK)  [RVA 0x352F1A0]
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


// ===== public void .ctor(MJPJANJNDCI<CdnMirrorsConfig> HLFCHMCOPID)  [RVA 0x352F47C]
// KIKKFANOJDC$$.ctor @ RVA 0x352F47C

void KIKKFANOJDC___ctor(KIKKFANOJDC_o *__this,MJPJANJNDCI_CdnMirrorsConfig__o *HLFCHMCOPID,
                       MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).OAOMFCGPCBP = HLFCHMCOPID;
  thunk_FUN_01c20e04(&__this->fields,HLFCHMCOPID);
  return;
}


// ===== private string[] PKANHLOKBAO()  [RVA 0x352F2E8]
// KIKKFANOJDC$$PKANHLOKBAO @ RVA 0x352F2E8

System_String_array * KIKKFANOJDC__PKANHLOKBAO(KIKKFANOJDC_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_String_o *pSVar2;
  VirtualInvokeData *pVVar3;
  long lVar4;
  undefined8 *puVar5;
  MethodInfo *extraout_x1;
  MJPJANJNDCI_CdnMirrorsConfig__c *pMVar6;
  long lVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  MJPJANJNDCI_CdnMirrorsConfig__o *pMVar11;
  long *plVar12;
  System_String_array *local_28;
  
  if ((DAT_04568a4c & 1) == 0) {
    FUN_01bab630(&FBEOLJNHGNE_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<string,_string[]>_TypeInfo);
    FUN_01bab630(&MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo);
    DAT_04568a4c = 1;
    method = extraout_x1;
  }
  local_28 = (System_String_array *)0x0;
  if ((FBEOLJNHGNE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FBEOLJNHGNE_TypeInfo,method);
  }
  pSVar2 = FBEOLJNHGNE__ILPOBELFLKP((MethodInfo *)0x0);
  pMVar11 = (__this->fields).OAOMFCGPCBP;
  if (pMVar11 != (MJPJANJNDCI_CdnMirrorsConfig__o *)0x0) {
    pMVar6 = pMVar11->klass;
    uVar1._0_1_ = (pMVar6->_2).rank;
    uVar1._1_1_ = (pMVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pMVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo) {
          pVVar3 = pMVar6->vtable + *piVar9;
          goto LAB_0362f3b4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pMVar11,MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo,0);
LAB_0362f3b4:
    lVar4 = (*pVVar3->methodPtr)(pMVar11,pVVar3->method);
    if (((lVar4 != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (plVar12 = *(long **)(*(long *)(lVar4 + 0x28) + 0x10), plVar12 != (long *)0x0)) {
      lVar7 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IReadOnlyDictionary_string__string____c **)(piVar10 + -2)
              == System_Collections_Generic_IReadOnlyDictionary<string,_string[]>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0362f430;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01b81914(plVar12,
                            System_Collections_Generic_IReadOnlyDictionary<string,_string[]>_TypeInfo
                            ,1);
LAB_0362f430:
      uVar8 = (*(code *)*puVar5)(plVar12,pSVar2,&local_28,puVar5[1]);
      if (((local_28 == (System_String_array *)0x0) || ((uVar8 & 1) == 0)) ||
         (local_28->max_length == 0)) {
        if (*(long *)(lVar4 + 0x28) == 0) goto LAB_0362f478;
        local_28 = *(System_String_array **)(*(long *)(lVar4 + 0x28) + 0x18);
      }
      return local_28;
    }
  }
LAB_0362f478:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

