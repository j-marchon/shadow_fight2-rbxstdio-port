// LCAOAAFEOAG$$.ctor @ RVA 0x35BD4A0

void LCAOAAFEOAG___ctor(LCAOAAFEOAG_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_SingleAssignmentDisposable_o *__this_01;
  UniRx_SingleAssignmentDisposable_o **ppUVar1;
  System_Func_T__o *valueFactory;
  System_Lazy_object__o *__this_02;
  System_Lazy_TJPrivacyPolicy__o **ppSVar2;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *__this_03;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o **ppSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568ee6 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>_TypeInfo);
    FUN_01bab630(&System_Func<TJPrivacyPolicy>_TypeInfo);
    FUN_01bab630(&Method_System_Lazy<TJPrivacyPolicy>__ctor__);
    FUN_01bab630(&System_Lazy<TJPrivacyPolicy>_TypeInfo);
    FUN_01bab630(&UniRx_SingleAssignmentDisposable_TypeInfo);
    FUN_01bab630(&Method_TapjoyUnity_TJPrivacyPolicy_GetPrivacyPolicy__);
    DAT_04568ee6 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).JBJKBIMMCIJ = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (UniRx_SingleAssignmentDisposable_o *)
              thunk_FUN_01bda818(UniRx_SingleAssignmentDisposable_TypeInfo);
  UniRx_SingleAssignmentDisposable___ctor(__this_01,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).ILKHAMGIJDL;
  *ppUVar1 = __this_01;
  thunk_FUN_01c20e04(ppUVar1,__this_01);
  valueFactory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<TJPrivacyPolicy>_TypeInfo);
  System_Func<object>___ctor();
  __this_02 = (System_Lazy_object__o *)thunk_FUN_01bda818(System_Lazy<TJPrivacyPolicy>_TypeInfo);
  System_Lazy<object>___ctor(__this_02,valueFactory,Method_System_Lazy<TJPrivacyPolicy>__ctor__);
  ppSVar2 = &(__this->fields).BPCBAGNBHAK;
  *ppSVar2 = (System_Lazy_TJPrivacyPolicy__o *)__this_02;
  thunk_FUN_01c20e04(ppSVar2,__this_02);
  __this_03 = (System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>__ctor__);
  ppSVar3 = &(__this->fields).POGOKDKJDFO;
  *ppSVar3 = __this_03;
  thunk_FUN_01c20e04(ppSVar3,__this_03);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

