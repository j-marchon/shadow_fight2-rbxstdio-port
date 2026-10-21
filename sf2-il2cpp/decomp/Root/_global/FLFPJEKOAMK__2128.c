// TypeDefIndex 2128
// Namespace: 
// public class FLFPJEKOAMK : IMPJOEHKNBA, IDisposable
// Fields:
//   private readonly HCOKCPNMKFK BCHLEFPBFHO; // 0x10
//   private readonly MJPJANJNDCI<BuildSettingsConfig> GECGNMALJLF; // 0x18
//   private readonly GCPFDLNAFDF BDALHPIDKOK; // 0x20
//   private readonly AAPGCAPGBLG APEEANDPFCG; // 0x28
//   private readonly HCOEEOMMEFL GLNMNHFKGCO; // 0x30
//   private readonly SerialDisposable AEKMHAIMLKI; // 0x38
//   private readonly Subject<bool> DOPGFNMCDEA; // 0x40
//   private readonly OCGKEHHBDOA BALICAHDKEJ; // 0x48
//   private bool MBNLPLLJIPB; // 0x50

// ===== public void NKLGCNHLBAF()  [RVA 0x32CE408]
// FLFPJEKOAMK$$NKLGCNHLBAF @ RVA 0x32CE408

void FLFPJEKOAMK__NKLGCNHLBAF(FLFPJEKOAMK_o *__this,MethodInfo *method)

{
  OCGKEHHBDOA_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567538 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14580/*"Update configs is already in progress!"*/);
    DAT_04567538 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).BALICAHDKEJ;
  if (__this_00 != (OCGKEHHBDOA_o *)0x0) {
    if ((__this_00->fields).super.HGOFNNBNBGK != false) {
      KFJJHMDIFIG__AFEFCBEAJIN((Il2CppObject *)__this,StringLiteral_14580/*"Update configs is already in progress!"*/,(MethodInfo *)0x0);
      return;
    }
    OCGKEHHBDOA__NKLGCNHLBAF(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public IObservable<bool> KBFGMPBOELJ()  [RVA 0x32CE478]
// FLFPJEKOAMK$$KBFGMPBOELJ @ RVA 0x32CE478

System_IObservable_bool__o * FLFPJEKOAMK__KBFGMPBOELJ(FLFPJEKOAMK_o *__this,MethodInfo *method)

{
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  UniRx_Subject_bool__o *source;
  
  if ((DAT_04567539 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Observable_AsObservable<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04567539 = 1;
    method = extraout_x1;
  }
  source = (__this->fields).DOPGFNMCDEA;
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  pSVar1 = UniRx_Observable__AsObservable<bool>
                     ((System_IObservable_T__o *)source,Method_UniRx_Observable_AsObservable<bool>__
                     );
  return (System_IObservable_bool__o *)pSVar1;
}


// ===== private UniTask IEBGBDIPDBI(CancellationToken OFPGGGAKOAE)  [RVA 0x32CE4E8]
// FLFPJEKOAMK$$IEBGBDIPDBI @ RVA 0x32CE4E8

UniRx_Async_UniTask_o
FLFPJEKOAMK__IEBGBDIPDBI
          (FLFPJEKOAMK_o *__this,System_Threading_CancellationToken_o OFPGGGAKOAE,MethodInfo *method
          )

{
  UniRx_Async_UniTask_o UVar1;
  MethodInfo *method_00;
  MethodInfo_1E3A86C *in_x3;
  UniRx_Async_UniTaskCompletionSource_o *pUVar2;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_o __this_00;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_o __this_01;
  System_Action_c *local_90;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Fields UStack_88;
  FLFPJEKOAMK_o *pFStack_78;
  System_Threading_CancellationToken_Fields local_70;
  intptr_t iStack_68;
  intptr_t local_60;
  intptr_t iStack_58;
  intptr_t iStack_50;
  intptr_t iStack_48;
  
  if ((DAT_0456753a & 1) == 0) {
    FUN_01bab630(&
                 Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Start<FLFPJEKOAMK_FDECPNIEMAA>__
                );
    DAT_0456753a = 1;
  }
  iStack_58 = 0;
  local_60 = 0;
  iStack_48 = 0;
  iStack_50 = 0;
  pFStack_78 = (FLFPJEKOAMK_o *)0x0;
  iStack_68 = 0;
  local_70._source = (System_Threading_CancellationTokenSource_o *)0x0;
  UStack_88 = (UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Fields)ZEXT816(0);
  local_90 = (System_Action_c *)0x0;
  UStack_88 = (UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Fields)
              UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__Create((MethodInfo *)0x0);
  pUVar2 = (UniRx_Async_UniTaskCompletionSource_o *)((ulong)&local_90 | 8);
  thunk_FUN_01c20e04(pUVar2,0);
  pFStack_78 = __this;
  thunk_FUN_01c20e04(&pFStack_78,__this);
  local_70 = OFPGGGAKOAE.fields._source;
  thunk_FUN_01c20e04(&local_70,0);
  local_90 = (System_Action_c *)CONCAT44(local_90._4_4_,0xffffffff);
  __this_00.fields.moveNext = (System_Action_o *)&local_90;
  __this_00.fields.promise = pUVar2;
  method_00 = 
  Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Start<FLFPJEKOAMK_FDECPNIEMAA>__;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__Start<FLFPJEKOAMK_FDECPNIEMAA>
            (__this_00,
             (FLFPJEKOAMK_FDECPNIEMAA_o *)
             Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Start<FLFPJEKOAMK_FDECPNIEMAA>__
             ,in_x3);
  __this_01.fields.moveNext = (System_Action_o *)0x0;
  __this_01.fields.promise = pUVar2;
  UVar1 = UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__get_Task(__this_01,method_00);
                    /* try { // try from 033ce5a8 to 034ce693 has its CatchHandler @ 033ce5a8
                       catch() { ... } // from try @ 033ce5a8 with catch @ 033ce5a8
                       catch() { ... } // from try @ 033ce6bc with catch @ 033ce5a8
                       catch() { ... } // from try @ 033ce6ec with catch @ 033ce5a8
                       catch() { ... } // from try @ 033ce718 with catch @ 033ce5a8
                       catch() { ... } // from try @ 033ce758 with catch @ 033ce5a8 */
  return (UniRx_Async_UniTask_o)UVar1.fields.awaiter;
}


// ===== private void FGNINNOOCCL(bool IBEBJHMKFGE)  [RVA 0x32CE5BC]
// FLFPJEKOAMK$$FGNINNOOCCL @ RVA 0x32CE5BC

void FLFPJEKOAMK__FGNINNOOCCL(FLFPJEKOAMK_o *__this,bool IBEBJHMKFGE,MethodInfo *method)

{
  UniRx_Subject_bool__o *__this_00;
  
  if ((DAT_0456753b & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Subject<bool>_OnNext__);
    DAT_0456753b = 1;
  }
  __this_00 = (__this->fields).DOPGFNMCDEA;
  (__this->fields).MBNLPLLJIPB = true;
  if (__this_00 != (UniRx_Subject_bool__o *)0x0) {
    UniRx_Subject<bool>__OnNext(__this_00,IBEBJHMKFGE,Method_UniRx_Subject<bool>_OnNext__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(HCOKCPNMKFK IEADDGPDHIF, MJPJANJNDCI<BuildSettingsConfig> BBKEDDKBJKF, GCPFDLNAFDF NMMFNFPCNHC, AAPGCAPGBLG BMIPCIOPBJB, HCOEEOMMEFL OCOJHGNMOPJ)  [RVA 0x32CE61C]
// FLFPJEKOAMK$$.ctor @ RVA 0x32CE61C

void FLFPJEKOAMK___ctor(FLFPJEKOAMK_o *__this,HCOKCPNMKFK_o *IEADDGPDHIF,
                       MJPJANJNDCI_BuildSettingsConfig__o *BBKEDDKBJKF,GCPFDLNAFDF_o *NMMFNFPCNHC,
                       AAPGCAPGBLG_o *BMIPCIOPBJB,HCOEEOMMEFL_o *OCOJHGNMOPJ,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_SerialDisposable_o **ppUVar1;
  UniRx_Subject_bool__o *__this_01;
  UniRx_Subject_bool__o **ppUVar2;
  MJPJANJNDCI_BuildSettingsConfig__o **ppMVar3;
  GCPFDLNAFDF_o **ppGVar4;
  AAPGCAPGBLG_o **ppAVar5;
  HCOEEOMMEFL_o **ppHVar6;
  System_Func_CancellationToken__UniTask__o *KGONKIHKBNP;
  OCGKEHHBDOA_o *__this_02;
  OCGKEHHBDOA_o **ppOVar7;
  
  if ((DAT_0456753c & 1) == 0) {
    FUN_01bab630(&Method_FLFPJEKOAMK_IEBGBDIPDBI__);
    FUN_01bab630(&System_Func<CancellationToken,_UniTask>_TypeInfo);
                    /* try { // try from 033ce694 to 034ce69b has its CatchHandler @ 033ce6fc */
    FUN_01bab630(&OCGKEHHBDOA_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    FUN_01bab630(&Method_UniRx_Subject<bool>__ctor__);
                    /* try { // try from 033ce6b8 to 034ce6bb has its CatchHandler @ 033ce6f8 */
                    /* try { // try from 033ce6bc to 034ce6e3 has its CatchHandler @ 033ce5a8 */
    FUN_01bab630(&UniRx_Subject<bool>_TypeInfo);
    DAT_0456753c = 1;
  }
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo);
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).AEKMHAIMLKI;
  *ppUVar1 = __this_00;
                    /* try { // try from 033ce6e4 to 034ce6e7 has its CatchHandler @ 033ce6f4 */
                    /* try { // try from 033ce6e8 to 034ce6eb has its CatchHandler @ 033ce6f0 */
  thunk_FUN_01c20e04(ppUVar1,__this_00);
                    /* try { // try from 033ce6ec to 034ce713 has its CatchHandler @ 033ce5a8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ce6e8 with catch @ 033ce6f0
                        */
  __this_01 = (UniRx_Subject_bool__o *)thunk_FUN_01bda818(UniRx_Subject<bool>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ce6e4 with catch @ 033ce6f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ce6b8 with catch @ 033ce6f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ce694 with catch @ 033ce6fc
                        */
  UniRx_Subject<bool>___ctor(__this_01,Method_UniRx_Subject<bool>__ctor__);
  ppUVar2 = &(__this->fields).DOPGFNMCDEA;
  *ppUVar2 = __this_01;
  thunk_FUN_01c20e04(ppUVar2,__this_01);
                    /* try { // try from 033ce714 to 034ce717 has its CatchHandler @ 033ce740 */
                    /* try { // try from 033ce718 to 034ce74f has its CatchHandler @ 033ce5a8 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BCHLEFPBFHO = IEADDGPDHIF;
  thunk_FUN_01c20e04(&__this->fields,IEADDGPDHIF);
  ppMVar3 = &(__this->fields).GECGNMALJLF;
  *ppMVar3 = BBKEDDKBJKF;
  thunk_FUN_01c20e04(ppMVar3,BBKEDDKBJKF);
  ppGVar4 = &(__this->fields).BDALHPIDKOK;
                    /* catch() { ... } // from try @ 033ce714 with catch @ 033ce740 */
  *ppGVar4 = NMMFNFPCNHC;
  thunk_FUN_01c20e04(ppGVar4,NMMFNFPCNHC);
  ppAVar5 = &(__this->fields).APEEANDPFCG;
                    /* try { // try from 033ce750 to 034ce757 has its CatchHandler @ 033ce76c */
  *ppAVar5 = BMIPCIOPBJB;
                    /* try { // try from 033ce758 to 034ce763 has its CatchHandler @ 033ce5a8 */
  thunk_FUN_01c20e04(ppAVar5,BMIPCIOPBJB);
  ppHVar6 = &(__this->fields).GLNMNHFKGCO;
  *ppHVar6 = OCOJHGNMOPJ;
                    /* try { // try from 033ce764 to 034ce76b has its CatchHandler @ 033ce76c */
  thunk_FUN_01c20e04(ppHVar6,OCOJHGNMOPJ);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ce750 with catch @ 033ce76c
                       catch(type#2 @ 00000000) { ... } // from try @ 033ce764 with catch @ 033ce76c
                        */
  KGONKIHKBNP = (System_Func_CancellationToken__UniTask__o *)
                thunk_FUN_01bda818(System_Func<CancellationToken,_UniTask>_TypeInfo);
  System_Func<CancellationToken,_UniTask>___ctor();
  __this_02 = (OCGKEHHBDOA_o *)thunk_FUN_01bda818(OCGKEHHBDOA_TypeInfo);
  OCGKEHHBDOA___ctor(__this_02,KGONKIHKBNP,(System_Action_Exception__o *)0x0,(MethodInfo *)0x0);
  ppOVar7 = &(__this->fields).BALICAHDKEJ;
  *ppOVar7 = __this_02;
  thunk_FUN_01c20e04(ppOVar7,__this_02);
  return;
}


// ===== public void Dispose()  [RVA 0x32CE7DC]
// FLFPJEKOAMK$$Dispose @ RVA 0x32CE7DC

void FLFPJEKOAMK__Dispose(FLFPJEKOAMK_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_Subject_bool__o *pUVar1;
  
  if ((DAT_0456753d & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Subject<bool>_Dispose__);
    FUN_01bab630(&Method_UniRx_Subject<bool>_OnCompleted__);
    DAT_0456753d = 1;
  }
  __this_00 = (__this->fields).AEKMHAIMLKI;
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).DOPGFNMCDEA;
    if (pUVar1 != (UniRx_Subject_bool__o *)0x0) {
      UniRx_Subject<bool>__OnCompleted(pUVar1,Method_UniRx_Subject<bool>_OnCompleted__);
      pUVar1 = (__this->fields).DOPGFNMCDEA;
      if (pUVar1 != (UniRx_Subject_bool__o *)0x0) {
        UniRx_Subject<bool>__Dispose(pUVar1,Method_UniRx_Subject<bool>_Dispose__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

