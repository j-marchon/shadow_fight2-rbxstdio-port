// LCAOAAFEOAG$$GIMAJOGGBHM @ RVA 0x35BC2B0

void LCAOAAFEOAG__GIMAJOGGBHM(LCAOAAFEOAG_o *__this,MKFAKELPPAC_o *FDIKDMNIKLC,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  System_IObservable_bool__o *source;
  System_Func_T__bool__o *predicate;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  System_Lazy_object__o *pSVar2;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *in_x4;
  UniRx_SingleAssignmentDisposable_o *__this_00;
  MKFAKELPPAC_o *pMVar4;
  MKFAKELPPAC_o **ppMVar5;
  
  if ((DAT_04568ee1 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6605);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6606);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_Func<bool,_bool>_TypeInfo);
    FUN_01bab630(&Method_LCAOAAFEOAG_EJCCNALLMGH__);
    FUN_01bab630(&Method_LCAOAAFEOAG_OAIAFKMMCFB__);
    FUN_01bab630(&Method_System_Lazy<TJPrivacyPolicy>_get_Value__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04568ee1 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6605,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6606,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar1,(MethodInfo *)0x0);
  ppMVar5 = &(__this->fields).FOIMNIOLPDJ;
  *ppMVar5 = FDIKDMNIKLC;
  thunk_FUN_01c20e04(ppMVar5,FDIKDMNIKLC);
  __this_00 = (__this->fields).ILKHAMGIJDL;
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source = UniRx_Observable__EveryApplicationPause((MethodInfo *)0x0);
  predicate = (System_Func_T__bool__o *)thunk_FUN_01bda818(System_Func<bool,_bool>_TypeInfo);
  System_Func<bool,_bool>___ctor();
  source_00 = UniRx_Observable__Where<bool>
                        ((System_IObservable_T__o *)source,predicate,
                         Method_UniRx_Observable_Where<bool>__);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  value = UniRx_ObservableExtensions__Subscribe<bool>
                    (source_00,onNext,Method_UniRx_ObservableExtensions_Subscribe<bool>__);
  if (__this_00 != (UniRx_SingleAssignmentDisposable_o *)0x0) {
    UniRx_SingleAssignmentDisposable__set_Disposable(__this_00,value,(MethodInfo *)0x0);
    pSVar2 = (System_Lazy_object__o *)(__this->fields).BPCBAGNBHAK;
    if (pSVar2 != (System_Lazy_object__o *)0x0) {
      pIVar3 = System_Lazy<object>__get_Value
                         (pSVar2,Method_System_Lazy<TJPrivacyPolicy>_get_Value__);
      if (pIVar3 != (Il2CppObject *)0x0) {
        TapjoyUnity_TJPrivacyPolicy__SetUserConsent
                  ((TapjoyUnity_TJPrivacyPolicy_o *)pIVar3,1,(MethodInfo *)0x0);
        pSVar2 = (System_Lazy_object__o *)(__this->fields).BPCBAGNBHAK;
        if ((pSVar2 != (System_Lazy_object__o *)0x0) &&
           (pIVar3 = System_Lazy<object>__get_Value
                               (pSVar2,Method_System_Lazy<TJPrivacyPolicy>_get_Value__),
           pIVar3 != (Il2CppObject *)0x0)) {
          TapjoyUnity_TJPrivacyPolicy__SetSubjectToGDPR
                    ((TapjoyUnity_TJPrivacyPolicy_o *)pIVar3,1,(MethodInfo *)0x0);
          pMVar4 = (__this->fields).FOIMNIOLPDJ;
          pSVar1 = LCAOAAFEOAG_EFNELLKNPAH__GEDLNHGEGNI((MethodInfo *)0x0);
          LCAOAAFEOAG__NBGBOMAFCCO(__this,pMVar4,1,pSVar1,in_x4);
          pMVar4 = (__this->fields).FOIMNIOLPDJ;
          pSVar1 = LCAOAAFEOAG_EFNELLKNPAH__HJMCJEDIHNM((MethodInfo *)0x0);
          LCAOAAFEOAG__NBGBOMAFCCO(__this,pMVar4,2,pSVar1,in_x4);
          pMVar4 = (__this->fields).FOIMNIOLPDJ;
          pSVar1 = LCAOAAFEOAG_EFNELLKNPAH__JLOAIBNGOCG((MethodInfo *)0x0);
          LCAOAAFEOAG__NBGBOMAFCCO(__this,pMVar4,3,pSVar1,in_x4);
          pMVar4 = (__this->fields).FOIMNIOLPDJ;
          pSVar1 = LCAOAAFEOAG_EFNELLKNPAH__MPJDELCDBAM((MethodInfo *)0x0);
          LCAOAAFEOAG__NBGBOMAFCCO(__this,pMVar4,4,pSVar1,in_x4);
          pMVar4 = (__this->fields).FOIMNIOLPDJ;
          pSVar1 = LCAOAAFEOAG_EFNELLKNPAH__NJNHKBINBGF((MethodInfo *)0x0);
          LCAOAAFEOAG__NBGBOMAFCCO(__this,pMVar4,5,pSVar1,in_x4);
          pMVar4 = (__this->fields).FOIMNIOLPDJ;
          pSVar1 = LCAOAAFEOAG_EFNELLKNPAH__BEHOOCHMHHB((MethodInfo *)0x0);
          LCAOAAFEOAG__NBGBOMAFCCO(__this,pMVar4,6,pSVar1,in_x4);
          LCAOAAFEOAG__BJJDNKDJJEG(__this,method_00);
          method_01 = extraout_x1;
          if (DAT_04568eeb == '\0') {
            FUN_01bab630(&TapjoyUnity_Tapjoy_TypeInfo);
            DAT_04568eeb = '\x01';
            method_01 = extraout_x1_00;
          }
          if (TapjoyUnity_Tapjoy_TypeInfo->static_fields->_isConnected != false) {
            LCAOAAFEOAG__CAMGFFOCGKM(__this,method_01);
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

