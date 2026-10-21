// TypeDefIndex 1282
// Namespace: 
// public class KKFCECOPJJF : NFHJEHCAGBD
// Fields:
//   private readonly IEnumerable<CGLDCCGBNMP> MNHPHAKBCPK; // 0x10

// ===== public void .ctor(IEnumerable<CGLDCCGBNMP> OJCELFBJNJJ)  [RVA 0x314FF50]
// KKFCECOPJJF$$.ctor @ RVA 0x314FF50

void KKFCECOPJJF___ctor(KKFCECOPJJF_o *__this,
                       System_Collections_Generic_IEnumerable_CGLDCCGBNMP__o *OJCELFBJNJJ,
                       MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).MNHPHAKBCPK = OJCELFBJNJJ;
  thunk_FUN_01c20e04(&__this->fields,OJCELFBJNJJ);
  return;
}


// ===== public IObservable<string[]> PEGKGIADJAE()  [RVA 0x314FF80]
// KKFCECOPJJF$$PEGKGIADJAE @ RVA 0x314FF80

System_IObservable_string____o * KKFCECOPJJF__PEGKGIADJAE(KKFCECOPJJF_o *__this,MethodInfo *method)

{
  System_Func_CGLDCCGBNMP__IObservable_string_____o **ppSVar1;
  System_Collections_Generic_IEnumerable_TResult__o *sources;
  System_IObservable_TSource__o *source;
  System_Func_string____bool__o **ppSVar2;
  System_IObservable_T__o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Func_CGLDCCGBNMP__IObservable_string_____o *selector;
  System_Func_string____bool__o *predicate;
  
  if ((DAT_04566800 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<CGLDCCGBNMP,_IObservable<string[]>>__);
    FUN_01bab630(&System_Func<CGLDCCGBNMP,_IObservable<string[]>>_TypeInfo);
    FUN_01bab630(&System_Func<string[],_bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_Concat<string[]>__);
    FUN_01bab630(&Method_UniRx_Observable_Take<string[]>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<string[]>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_KKFCECOPJJF_<>c_FBBKEBJIHAN__);
    FUN_01bab630(&Method_KKFCECOPJJF_<>c_KOAMFENKANC__);
    FUN_01bab630(&KKFCECOPJJF_<>c_TypeInfo);
    DAT_04566800 = 1;
    method = extraout_x1;
  }
  source_00 = (System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).MNHPHAKBCPK;
  if ((KKFCECOPJJF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KKFCECOPJJF_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  selector = KKFCECOPJJF_<>c_TypeInfo->static_fields->__9__2_0;
  if (selector == (System_Func_CGLDCCGBNMP__IObservable_string_____o *)0x0) {
    if ((KKFCECOPJJF_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KKFCECOPJJF_<>c_TypeInfo,method);
    }
    selector = (System_Func_CGLDCCGBNMP__IObservable_string_____o *)
               thunk_FUN_01bda818(System_Func<CGLDCCGBNMP,_IObservable<string[]>>_TypeInfo);
    System_Func<object,_object>___ctor();
    ppSVar1 = &KKFCECOPJJF_<>c_TypeInfo->static_fields->__9__2_0;
    *ppSVar1 = selector;
    thunk_FUN_01c20e04(ppSVar1,selector);
  }
  sources = System_Linq_Enumerable__Select<object,_object>
                      (source_00,(System_Func_TSource__TResult__o *)selector,
                       Method_System_Linq_Enumerable_Select<CGLDCCGBNMP,_IObservable<string[]>>__);
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo);
  }
  source = UniRx_Observable__Concat<object>
                     ((System_Collections_Generic_IEnumerable_IObservable_TSource___o *)sources,
                      Method_UniRx_Observable_Concat<string[]>__);
  if ((KKFCECOPJJF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KKFCECOPJJF_<>c_TypeInfo);
  }
  predicate = KKFCECOPJJF_<>c_TypeInfo->static_fields->__9__2_1;
  if (predicate == (System_Func_string____bool__o *)0x0) {
    if ((KKFCECOPJJF_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KKFCECOPJJF_<>c_TypeInfo);
    }
    predicate = (System_Func_string____bool__o *)
                thunk_FUN_01bda818(System_Func<string[],_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar2 = &KKFCECOPJJF_<>c_TypeInfo->static_fields->__9__2_1;
    *ppSVar2 = predicate;
    thunk_FUN_01c20e04(ppSVar2,predicate);
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = UniRx_Observable__Where<object>
                     ((System_IObservable_T__o *)source,(System_Func_T__bool__o *)predicate,
                      Method_UniRx_Observable_Where<string[]>__);
  pSVar3 = UniRx_Observable__Take<object>(pSVar3,1,Method_UniRx_Observable_Take<string[]>__);
  return (System_IObservable_string____o *)pSVar3;
}

