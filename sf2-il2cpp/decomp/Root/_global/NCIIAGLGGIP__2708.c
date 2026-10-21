// TypeDefIndex 2708
// Namespace: 
// public class NCIIAGLGGIP : HONDOIKDLOD, IDisposable
// Fields:
//   private readonly JNDFOKIMHPB BAKCPKLAEMM; // 0x10
//   private readonly CompositeDisposable BNAIPPCOGPE; // 0x18

// ===== private void IJALIPCBFPD(DBMPKPJGIPI HOKBHLPPCAH)  [RVA 0x33D07BC]
// NCIIAGLGGIP$$IJALIPCBFPD @ RVA 0x33D07BC

void NCIIAGLGGIP__IJALIPCBFPD(NCIIAGLGGIP_o *__this,int32_t HOKBHLPPCAH,MethodInfo *method)

{
  ushort uVar1;
  long lVar2;
  KAKGABBLHGP_o *__this_00;
  VirtualInvokeData *pVVar3;
  long lVar4;
  JNDFOKIMHPB_c *pJVar5;
  ulong uVar6;
  int32_t *piVar7;
  JNDFOKIMHPB_o *pJVar8;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  
  if ((DAT_04567e5e & 1) == 0) {
                    /* try { // try from 034d07e4 to 035d07e7 has its CatchHandler @ 034d07ec */
    FUN_01bab630(&Method_System_Array_Empty<PackType>__,HOKBHLPPCAH);
                    /* try { // try from 034d07e8 to 035d0807 has its CatchHandler @ 034d0670 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034d07e4 with catch @ 034d07ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034d0780 with catch @ 034d07f0
                        */
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    DAT_04567e5e = 1;
  }
                    /* try { // try from 034d0808 to 035d080b has its CatchHandler @ 034d0834 */
  lVar2 = Method_System_Array_Empty<PackType>__;
                    /* try { // try from 034d080c to 035d083b has its CatchHandler @ 034d0670 */
  pJVar8 = (__this->fields).BAKCPKLAEMM;
  lVar4 = *(long *)(Method_System_Array_Empty<PackType>__ + 0x38);
  if (lVar4 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<PackType>__);
    lVar4 = *(long *)(lVar2 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
                    /* catch() { ... } // from try @ 034d0808 with catch @ 034d0834 */
  if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* try { // try from 034d083c to 035d0843 has its CatchHandler @ 034d0858 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034d0844 to 035d084f has its CatchHandler @ 034d0670 */
  lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
                    /* try { // try from 034d0850 to 035d0857 has its CatchHandler @ 034d0858 */
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034d083c with catch @ 034d0858
                       catch(type#2 @ 00000000) { ... } // from try @ 034d0850 with catch @ 034d0858
                        */
    lVar2 = FUN_01b81620();
  }
  LFADLKGPBHC = (Core_Configs_Models_PackType_array *)**(undefined8 **)(lVar2 + 0xb8);
  __this_00 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
  KAKGABBLHGP___ctor(__this_00,true,LFADLKGPBHC,(MethodInfo *)0x0);
  if (pJVar8 == (JNDFOKIMHPB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pJVar5 = pJVar8->klass;
  uVar1._0_1_ = (pJVar5->_2).rank;
  uVar1._1_1_ = (pJVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pJVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)JNDFOKIMHPB_TypeInfo) {
        pVVar3 = pJVar5->vtable + *piVar7;
        goto LAB_034d08d8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pJVar8,JNDFOKIMHPB_TypeInfo,0);
LAB_034d08d8:
                    /* WARNING: Could not recover jumptable at 0x034d08f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pJVar8,__this_00,0,pVVar3->method);
  return;
}


// ===== public void GIMAJOGGBHM()  [RVA 0x33D08F8]
// NCIIAGLGGIP$$GIMAJOGGBHM @ RVA 0x33D08F8

void NCIIAGLGGIP__GIMAJOGGBHM(NCIIAGLGGIP_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *DHMOPKGOBHL;
  System_IObservable_DBMPKPJGIPI__o *source;
  System_Func_DBMPKPJGIPI__bool__o **ppSVar1;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  System_Func_DBMPKPJGIPI__bool__o *predicate;
  
  if ((DAT_04567e5f & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<DBMPKPJGIPI,_bool>_TypeInfo);
    FUN_01bab630(&Method_NCIIAGLGGIP_IJALIPCBFPD__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<DBMPKPJGIPI>__);
                    /* try { // try from 034d0968 to 035d0a5f has its CatchHandler @ 034d0968
                       catch() { ... } // from try @ 034d0968 with catch @ 034d0968
                       catch() { ... } // from try @ 034d0a68 with catch @ 034d0968
                       catch() { ... } // from try @ 034d0abc with catch @ 034d0968
                       catch() { ... } // from try @ 034d0b28 with catch @ 034d0968 */
    FUN_01bab630(&Method_UniRx_Observable_Where<DBMPKPJGIPI>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_NCIIAGLGGIP_<>c_AKKPDDKFHPA__);
    FUN_01bab630(&NCIIAGLGGIP_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    DAT_04567e5f = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529/*"Initialize"*/,(MethodInfo *)0x0);
  DHMOPKGOBHL = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  source = KMFOEBNKLEO__IHOCHPGNEFN(DHMOPKGOBHL,(MethodInfo *)0x0);
  if ((NCIIAGLGGIP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NCIIAGLGGIP_<>c_TypeInfo);
  }
  predicate = NCIIAGLGGIP_<>c_TypeInfo->static_fields->__9__3_0;
  if (predicate == (System_Func_DBMPKPJGIPI__bool__o *)0x0) {
    if ((NCIIAGLGGIP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NCIIAGLGGIP_<>c_TypeInfo);
    }
    predicate = (System_Func_DBMPKPJGIPI__bool__o *)
                thunk_FUN_01bda818(System_Func<DBMPKPJGIPI,_bool>_TypeInfo);
    System_Func<Int32Enum,_bool>___ctor();
    ppSVar1 = &NCIIAGLGGIP_<>c_TypeInfo->static_fields->__9__3_0;
    *ppSVar1 = predicate;
    thunk_FUN_01c20e04(ppSVar1,predicate);
  }
                    /* try { // try from 034d0a60 to 035d0a67 has its CatchHandler @ 034d0aa0 */
                    /* try { // try from 034d0a68 to 035d0ab7 has its CatchHandler @ 034d0968 */
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source_00 = UniRx_Observable__Where<Int32Enum>
                        ((System_IObservable_T__o *)source,(System_Func_T__bool__o *)predicate,
                         Method_UniRx_Observable_Where<DBMPKPJGIPI>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034d0a60 with catch @ 034d0aa0
                        */
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
                    /* try { // try from 034d0ab8 to 035d0abb has its CatchHandler @ 034d0b18 */
                    /* try { // try from 034d0abc to 035d0b1f has its CatchHandler @ 034d0968 */
  System_Action<Int32Enum>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Int32Enum>
                         (source_00,onNext,
                          Method_UniRx_ObservableExtensions_Subscribe<DBMPKPJGIPI>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).BNAIPPCOGPE,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}


// ===== public void .ctor(JNDFOKIMHPB DDLHBHHDFLF)  [RVA 0x33D0AF4]
// NCIIAGLGGIP$$.ctor @ RVA 0x33D0AF4

void NCIIAGLGGIP___ctor(NCIIAGLGGIP_o *__this,JNDFOKIMHPB_o *DDLHBHHDFLF,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  
                    /* catch() { ... } // from try @ 034d0ab8 with catch @ 034d0b18 */
  if ((DAT_04567e60 & 1) == 0) {
                    /* try { // try from 034d0b20 to 035d0b27 has its CatchHandler @ 034d0b3c */
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
                    /* try { // try from 034d0b28 to 035d0b33 has its CatchHandler @ 034d0968 */
    DAT_04567e60 = 1;
  }
                    /* try { // try from 034d0b34 to 035d0b3b has its CatchHandler @ 034d0b3c */
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034d0b20 with catch @ 034d0b3c
                       catch(type#2 @ 00000000) { ... } // from try @ 034d0b34 with catch @ 034d0b3c
                        */
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BAKCPKLAEMM = DDLHBHHDFLF;
  thunk_FUN_01c20e04(&__this->fields,DDLHBHHDFLF);
  return;
}


// ===== public void Dispose()  [RVA 0x33D0B7C]
// NCIIAGLGGIP$$Dispose @ RVA 0x33D0B7C

void NCIIAGLGGIP__Dispose(NCIIAGLGGIP_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  if ((DAT_04567e61 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5422/*"Dispose"*/);
    DAT_04567e61 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422/*"Dispose"*/,(MethodInfo *)0x0);
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

