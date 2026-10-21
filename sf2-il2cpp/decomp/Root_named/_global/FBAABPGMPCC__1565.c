// TypeDefIndex 1565
// Namespace: 
// public class FBAABPGMPCC : GOCLIOIANDK<FBAABPGMPCC, JNDFOKIMHPB>, JNDFOKIMHPB, IDisposable
// Fields:
//   private readonly SerialDisposable IDBDJDHDKGG; // 0x10
//   private readonly Subject<KHODJHFHCDE> NIFBGEKEBGF; // 0x18
//   private readonly NKEPNPALKMO MKMKEFBPBMF; // 0x20
//   private readonly HPNCDKOBCON KMGLHNICAIH; // 0x28
//   private readonly AAPGCAPGBLG APEEANDPFCG; // 0x30
//   private readonly HCOEEOMMEFL GLNMNHFKGCO; // 0x38

// ===== private IEnumerable<PackSettings> HJBOAHBLHHF(PackType AFDBEEENAHK)  [RVA 0x31ACE30]
// FBAABPGMPCC$$HJBOAHBLHHF @ RVA 0x31ACE30

System_Collections_Generic_IEnumerable_PackSettings__o *
FBAABPGMPCC__HJBOAHBLHHF(FBAABPGMPCC_o *__this,int32_t AFDBEEENAHK,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_Collections_Generic_IEnumerable_PackSettings__o *pSVar3;
  NKEPNPALKMO_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  NKEPNPALKMO_o *pNVar7;
  
  if ((DAT_04566b55 & 1) == 0) {
    FUN_01bab630(&NKEPNPALKMO_TypeInfo);
    DAT_04566b55 = 1;
  }
  pNVar7 = (__this->fields).MKMKEFBPBMF;
  if (pNVar7 == (NKEPNPALKMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pNVar4 = pNVar7->klass;
  uVar1._0_1_ = (pNVar4->_2).rank;
  uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)NKEPNPALKMO_TypeInfo) {
        pVVar2 = pNVar4->vtable + (*piVar6 + 1);
        goto LAB_032acec0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pNVar7,NKEPNPALKMO_TypeInfo,1);
LAB_032acec0:
                    /* WARNING: Could not recover jumptable at 0x032aced4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar3 = (System_Collections_Generic_IEnumerable_PackSettings__o *)
           (*pVVar2->methodPtr)(pNVar7,(ulong)(uint)AFDBEEENAHK,pVVar2->method);
  return pSVar3;
}


// ===== public void NHFHOLBGIHI(KAKGABBLHGP HHCLIDIIJMI, Action<KHODJHFHCDE> BLMFLPJJMPF)  [RVA 0x31ACEDC]
// FBAABPGMPCC$$NHFHOLBGIHI @ RVA 0x31ACEDC

void FBAABPGMPCC__NHFHOLBGIHI
               (FBAABPGMPCC_o *__this,KAKGABBLHGP_o *HHCLIDIIJMI,
               System_Action_KHODJHFHCDE__o *BLMFLPJJMPF,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_IObservable_KHODJHFHCDE__o *source;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  System_Action_KHODJHFHCDE__o *method_00;
  UniRx_SerialDisposable_o *__this_01;
  
  method_00 = BLMFLPJJMPF;
  if ((DAT_04566b56 & 1) == 0) {
    FUN_01bab630(&System_Action<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&Method_FBAABPGMPCC_MAJLIEBBIJM_EOMHBOCLDAD__);
    FUN_01bab630(&FBAABPGMPCC_MAJLIEBBIJM_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<KHODJHFHCDE>__);
    DAT_04566b56 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FBAABPGMPCC_MAJLIEBBIJM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)BLMFLPJJMPF;
    thunk_FUN_01c20e04(__this_00 + 1,BLMFLPJJMPF);
    __this_01 = (__this->fields).IDBDJDHDKGG;
    source = FBAABPGMPCC__BJHCDNCMKAC(__this,HHCLIDIIJMI,(MethodInfo *)method_00);
    onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<KHODJHFHCDE>_TypeInfo);
    System_Action<object>___ctor();
    value = UniRx_ObservableExtensions__Subscribe<object>
                      ((System_IObservable_T__o *)source,onNext,
                       Method_UniRx_ObservableExtensions_Subscribe<KHODJHFHCDE>__);
    if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IObservable<KHODJHFHCDE> EJLMIBHJDFF()  [RVA 0x31AD134]
// FBAABPGMPCC$$EJLMIBHJDFF @ RVA 0x31AD134

System_IObservable_KHODJHFHCDE__o *
FBAABPGMPCC__EJLMIBHJDFF(FBAABPGMPCC_o *__this,MethodInfo *method)

{
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  UniRx_Subject_KHODJHFHCDE__o *source;
  
  if ((DAT_04566b57 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Observable_AsObservable<KHODJHFHCDE>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04566b57 = 1;
    method = extraout_x1;
  }
  source = (__this->fields).NIFBGEKEBGF;
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  pSVar1 = UniRx_Observable__AsObservable<object>
                     ((System_IObservable_T__o *)source,
                      Method_UniRx_Observable_AsObservable<KHODJHFHCDE>__);
  return (System_IObservable_KHODJHFHCDE__o *)pSVar1;
}


// ===== private List<PackSettings> GFNIOPDJEBP(IReadOnlyList<PackType> LFADLKGPBHC)  [RVA 0x31AD1A4]
// FBAABPGMPCC$$GFNIOPDJEBP @ RVA 0x31AD1A4

System_Collections_Generic_List_PackSettings__o *
FBAABPGMPCC__GFNIOPDJEBP
          (FBAABPGMPCC_o *__this,System_Collections_Generic_IReadOnlyList_PackType__o *LFADLKGPBHC,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  VirtualInvokeData *pVVar4;
  System_Func_TSource__IEnumerable_TResult___o *selector;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar5;
  System_Collections_Generic_List_PackSettings__o *pSVar6;
  System_Collections_Generic_IReadOnlyList_PackType__c *pSVar7;
  NKEPNPALKMO_c *pNVar8;
  ulong uVar9;
  int32_t *piVar10;
  NKEPNPALKMO_o *pNVar11;
  
  if ((DAT_04566b58 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Distinct<PackSettings>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_SelectMany<PackType,_PackSettings>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<PackSettings>__);
    FUN_01bab630(&Method_FBAABPGMPCC_HJBOAHBLHHF__);
    FUN_01bab630(&System_Func<PackType,_IEnumerable<PackSettings>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<PackType>_TypeInfo);
    FUN_01bab630(&NKEPNPALKMO_TypeInfo);
    DAT_04566b58 = 1;
  }
  if (LFADLKGPBHC != (System_Collections_Generic_IReadOnlyList_PackType__o *)0x0) {
    pSVar7 = LFADLKGPBHC->klass;
    uVar1._0_1_ = (pSVar7->_2).rank;
    uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<PackType>_TypeInfo) {
          pVVar4 = pSVar7->vtable + *piVar10;
          goto LAB_032ad274;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar4 = (VirtualInvokeData *)
             FUN_01b81914(LFADLKGPBHC,
                          System_Collections_Generic_IReadOnlyCollection<PackType>_TypeInfo,0);
LAB_032ad274:
    iVar3 = (*pVVar4->methodPtr)(LFADLKGPBHC,pVVar4->method);
    if (iVar3 != 0) {
      selector = (System_Func_TSource__IEnumerable_TResult___o *)
                 thunk_FUN_01bda818(System_Func<PackType,_IEnumerable<PackSettings>>_TypeInfo);
      System_Func<Int32Enum,_object>___ctor();
      pSVar5 = (System_Collections_Generic_IEnumerable_TSource__o *)
               System_Linq_Enumerable__SelectMany<Int32Enum,_object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)LFADLKGPBHC,selector,
                          Method_System_Linq_Enumerable_SelectMany<PackType,_PackSettings>__);
      goto LAB_032ad334;
    }
  }
  pNVar11 = (__this->fields).MKMKEFBPBMF;
  if (pNVar11 == (NKEPNPALKMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pNVar8 = pNVar11->klass;
  uVar2._0_1_ = (pNVar8->_2).rank;
  uVar2._1_1_ = (pNVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar2;
  if (uVar9 != 0) {
    piVar10 = &((pNVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)NKEPNPALKMO_TypeInfo) {
        pVVar4 = pNVar8->vtable + *piVar10;
        goto LAB_032ad328;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pNVar11,NKEPNPALKMO_TypeInfo,0);
LAB_032ad328:
  pSVar5 = (System_Collections_Generic_IEnumerable_TSource__o *)
           (*pVVar4->methodPtr)(pNVar11,pVVar4->method);
LAB_032ad334:
  pSVar5 = System_Linq_Enumerable__Distinct<object>
                     (pSVar5,Method_System_Linq_Enumerable_Distinct<PackSettings>__);
  pSVar6 = (System_Collections_Generic_List_PackSettings__o *)
           System_Linq_Enumerable__ToList<object>
                     (pSVar5,Method_System_Linq_Enumerable_ToList<PackSettings>__);
  return pSVar6;
}


// ===== public void .ctor(NKEPNPALKMO POEJHMCAECN, HPNCDKOBCON MJNAMFDHCPH, AAPGCAPGBLG BMIPCIOPBJB, HCOEEOMMEFL OCOJHGNMOPJ)  [RVA 0x31AD360]
// FBAABPGMPCC$$.ctor @ RVA 0x31AD360

void FBAABPGMPCC___ctor(FBAABPGMPCC_o *__this,NKEPNPALKMO_o *POEJHMCAECN,HPNCDKOBCON_o *MJNAMFDHCPH,
                       AAPGCAPGBLG_o *BMIPCIOPBJB,HCOEEOMMEFL_o *OCOJHGNMOPJ,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_Subject_KHODJHFHCDE__o *__this_01;
  UniRx_Subject_KHODJHFHCDE__o **ppUVar1;
  NKEPNPALKMO_o **ppNVar2;
  HPNCDKOBCON_o **ppHVar3;
  AAPGCAPGBLG_o **ppAVar4;
  HCOEEOMMEFL_o **ppHVar5;
  
  if ((DAT_04566b59 & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>__ctor__);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    FUN_01bab630(&Method_UniRx_Subject<KHODJHFHCDE>__ctor__);
    FUN_01bab630(&UniRx_Subject<KHODJHFHCDE>_TypeInfo);
    DAT_04566b59 = 1;
  }
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo);
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).IDBDJDHDKGG = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (UniRx_Subject_KHODJHFHCDE__o *)
              thunk_FUN_01bda818(UniRx_Subject<KHODJHFHCDE>_TypeInfo);
  UniRx_Subject<object>___ctor
            ((UniRx_Subject_T__o *)__this_01,Method_UniRx_Subject<KHODJHFHCDE>__ctor__);
  ppUVar1 = &(__this->fields).NIFBGEKEBGF;
  *ppUVar1 = __this_01;
  thunk_FUN_01c20e04(ppUVar1,__this_01);
  GOCLIOIANDK<object,_object>___ctor
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>__ctor__);
  ppNVar2 = &(__this->fields).MKMKEFBPBMF;
  *ppNVar2 = POEJHMCAECN;
  thunk_FUN_01c20e04(ppNVar2,POEJHMCAECN);
  ppHVar3 = &(__this->fields).KMGLHNICAIH;
  *ppHVar3 = MJNAMFDHCPH;
  thunk_FUN_01c20e04(ppHVar3,MJNAMFDHCPH);
  ppAVar4 = &(__this->fields).APEEANDPFCG;
  *ppAVar4 = BMIPCIOPBJB;
  thunk_FUN_01c20e04(ppAVar4,BMIPCIOPBJB);
  ppHVar5 = &(__this->fields).GLNMNHFKGCO;
  *ppHVar5 = OCOJHGNMOPJ;
  thunk_FUN_01c20e04(ppHVar5,OCOJHGNMOPJ);
  return;
}


// ===== public IObservable<KHODJHFHCDE> BJHCDNCMKAC(KAKGABBLHGP OKBIKHHKOEN)  [RVA 0x31ACFF8]
// FBAABPGMPCC$$BJHCDNCMKAC @ RVA 0x31ACFF8

System_IObservable_KHODJHFHCDE__o *
FBAABPGMPCC__BJHCDNCMKAC(FBAABPGMPCC_o *__this,KAKGABBLHGP_o *OKBIKHHKOEN,MethodInfo *method)

{
  System_IObservable_KHODJHFHCDE__o *pSVar1;
  
  pSVar1 = (System_IObservable_KHODJHFHCDE__o *)FUN_03f93610(DAT_04566b5a);
  return pSVar1;
}


// ===== public override void Dispose()  [RVA 0x31AD4A4]
// FBAABPGMPCC$$Dispose @ RVA 0x31AD4A4

void FBAABPGMPCC__Dispose(FBAABPGMPCC_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_Subject_KHODJHFHCDE__o *pUVar1;
  
  if ((DAT_04566b5b & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_Dispose__);
    FUN_01bab630(&Method_UniRx_Subject<KHODJHFHCDE>_Dispose__);
    FUN_01bab630(&Method_UniRx_Subject<KHODJHFHCDE>_OnCompleted__);
    DAT_04566b5b = 1;
  }
  GOCLIOIANDK<object,_object>__Dispose
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_Dispose__);
  __this_00 = (__this->fields).IDBDJDHDKGG;
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).NIFBGEKEBGF;
    if (pUVar1 != (UniRx_Subject_KHODJHFHCDE__o *)0x0) {
      UniRx_Subject<object>__OnCompleted
                ((UniRx_Subject_T__o *)pUVar1,Method_UniRx_Subject<KHODJHFHCDE>_OnCompleted__);
      pUVar1 = (__this->fields).NIFBGEKEBGF;
      if (pUVar1 != (UniRx_Subject_KHODJHFHCDE__o *)0x0) {
        UniRx_Subject<object>__Dispose
                  ((UniRx_Subject_T__o *)pUVar1,Method_UniRx_Subject<KHODJHFHCDE>_Dispose__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31AD548]
// FBAABPGMPCC$$.ctor @ RVA 0x31AD548

void FBAABPGMPCC___ctor(FBAABPGMPCC_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_Subject_KHODJHFHCDE__o *__this_01;
  UniRx_Subject_KHODJHFHCDE__o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b5c & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>__ctor__);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    FUN_01bab630(&Method_UniRx_Subject<KHODJHFHCDE>__ctor__);
    FUN_01bab630(&UniRx_Subject<KHODJHFHCDE>_TypeInfo);
    DAT_04566b5c = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo,method)
  ;
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).IDBDJDHDKGG = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (UniRx_Subject_KHODJHFHCDE__o *)
              thunk_FUN_01bda818(UniRx_Subject<KHODJHFHCDE>_TypeInfo);
  UniRx_Subject<object>___ctor
            ((UniRx_Subject_T__o *)__this_01,Method_UniRx_Subject<KHODJHFHCDE>__ctor__);
  ppUVar1 = &(__this->fields).NIFBGEKEBGF;
  *ppUVar1 = __this_01;
  thunk_FUN_01c20e04(ppUVar1,__this_01);
  GOCLIOIANDK<object,_object>___ctor
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>__ctor__);
  return;
}

