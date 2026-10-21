// TypeDefIndex 603
// Namespace: 
// public class LCAOAAFEOAG : OCKCFHKADLN, HIAPEMMEAFP, IDisposable
// Fields:
//   private readonly CompositeDisposable JBJKBIMMCIJ; // 0x10
//   private readonly SingleAssignmentDisposable ILKHAMGIJDL; // 0x18
//   private readonly Lazy<TJPrivacyPolicy> BPCBAGNBHAK; // 0x20
//   private readonly Dictionary<MPAKDCNMLEG, FCMAKNBEJDA> POGOKDKJDFO; // 0x28
//   private int FFMGJCFLCIN; // 0x30
//   private MKFAKELPPAC FOIMNIOLPDJ; // 0x38

// ===== private void JFONIHNIHGG(MPAKDCNMLEG BDICLGNGCNA)  [RVA 0x35BC05C]
// LCAOAAFEOAG$$JFONIHNIHGG @ RVA 0x35BC05C

void LCAOAAFEOAG__JFONIHNIHGG(LCAOAAFEOAG_o *__this,int32_t BDICLGNGCNA,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *arg0;
  Il2CppObject *arg1;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  int32_t local_54;
  
  if ((DAT_04568ee0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6601);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6602);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6603);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6604);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    DAT_04568ee0 = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6601,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6602,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6603,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6604,(MethodInfo *)0x0);
  arg0 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  local_54 = BDICLGNGCNA;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(MPAKDCNMLEG_TypeInfo,&local_54);
  pSVar3 = System_String__Format(pSVar3,(Il2CppObject *)arg0,arg1,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
  lVar4 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  plVar8 = (long *)**(undefined8 **)(lVar4 + 0xb8);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar4 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(ODEIOKOJGDM_c **)(piVar7 + -2) == ODEIOKOJGDM_TypeInfo) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_036bc280;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_01b81914(plVar8,ODEIOKOJGDM_TypeInfo,0);
LAB_036bc280:
  (*(code *)*puVar5)(plVar8,0,puVar5[1]);
  return;
}


// ===== public void GIMAJOGGBHM(MKFAKELPPAC FDIKDMNIKLC)  [RVA 0x35BC2B0]
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


// ===== private void CAMGFFOCGKM()  [RVA 0x35BCC3C]
// LCAOAAFEOAG$$CAMGFFOCGKM @ RVA 0x35BCC3C

void LCAOAAFEOAG__CAMGFFOCGKM(LCAOAAFEOAG_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04568ee2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6607);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6608);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568ee2 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6607,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6608,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar1,(MethodInfo *)0x0);
  pSVar1 = PELHIDJOBAB__JGDMBJFKGBO((MethodInfo *)0x0);
  TapjoyUnity_Tapjoy__SetUserID(pSVar1,(MethodInfo *)0x0);
  return;
}


// ===== public bool JMBHICGNMIG()  [RVA 0x35BCBFC]
// LCAOAAFEOAG$$JMBHICGNMIG @ RVA 0x35BCBFC

bool LCAOAAFEOAG__JMBHICGNMIG(LCAOAAFEOAG_o *__this,MethodInfo *method)

{
  if (DAT_04568eeb == '\0') {
    FUN_01bab630(&TapjoyUnity_Tapjoy_TypeInfo);
    DAT_04568eeb = '\x01';
  }
  return TapjoyUnity_Tapjoy_TypeInfo->static_fields->_isConnected;
}


// ===== private void EJCCNALLMGH(bool HOKBHLPPCAH)  [RVA 0x35BCD10]
// LCAOAAFEOAG$$EJCCNALLMGH @ RVA 0x35BCD10

void LCAOAAFEOAG__EJCCNALLMGH(LCAOAAFEOAG_o *__this,bool HOKBHLPPCAH,MethodInfo *method)

{
  int32_t iVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  UniRx_CompositeDisposable_o *__this_00;
  System_Func_Action__Tapjoy_OnConnectSuccessHandler__o **ppSVar3;
  System_Action_Tapjoy_OnConnectSuccessHandler__o **ppSVar4;
  System_IObservable_Unit__o *source;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  ulong extraout_x1;
  ulong uVar5;
  System_Func_Action__Tapjoy_OnConnectSuccessHandler__o *conversion;
  System_Action_Tapjoy_OnConnectSuccessHandler__o *addHandler;
  System_Action_Tapjoy_OnConnectSuccessHandler__o *removeHandler;
  
  uVar5 = (ulong)HOKBHLPPCAH;
  if ((DAT_04568ee7 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo,uVar5);
    FUN_01bab630(&System_Action<Tapjoy_OnConnectSuccessHandler>_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6617);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6618);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<Action,_Tapjoy_OnConnectSuccessHandler>_TypeInfo);
    FUN_01bab630(&Method_LCAOAAFEOAG_JILECJELDML__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<Tapjoy_OnConnectSuccessHandler>__);
    FUN_01bab630(&Method_UniRx_Observable_ObserveOnMainThread<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_LCAOAAFEOAG_<>c_IBDFPNCPKBI__);
    FUN_01bab630(&Method_LCAOAAFEOAG_<>c_JKNIFKCLIMB__);
    FUN_01bab630(&Method_LCAOAAFEOAG_<>c_PHGKEPNGOHD__);
    FUN_01bab630(&LCAOAAFEOAG_<>c_TypeInfo);
    DAT_04568ee7 = 1;
    uVar5 = extraout_x1;
  }
  if (DAT_04568eeb == '\0') {
    FUN_01bab630(&TapjoyUnity_Tapjoy_TypeInfo,uVar5);
    DAT_04568eeb = '\x01';
  }
  if (TapjoyUnity_Tapjoy_TypeInfo->static_fields->_isConnected == false) {
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = UnityEngine_Application__get_internetReachability((MethodInfo *)0x0);
    if (iVar1 != 0) {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6617,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6618,
                 (MethodInfo *)0x0);
      pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
      __this_00 = (__this->fields).JBJKBIMMCIJ;
      if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
        UniRx_CompositeDisposable__Clear(__this_00,(MethodInfo *)0x0);
        if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        conversion = LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_0;
        if (conversion == (System_Func_Action__Tapjoy_OnConnectSuccessHandler__o *)0x0) {
          if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          conversion = (System_Func_Action__Tapjoy_OnConnectSuccessHandler__o *)
                       thunk_FUN_01bda818(
                                         System_Func<Action,_Tapjoy_OnConnectSuccessHandler>_TypeInfo
                                         );
          System_Func<object,_object>___ctor();
          ppSVar3 = &LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_0;
          *ppSVar3 = conversion;
          thunk_FUN_01c20e04(ppSVar3,conversion);
        }
        if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        addHandler = LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_1;
        if (addHandler == (System_Action_Tapjoy_OnConnectSuccessHandler__o *)0x0) {
          if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          addHandler = (System_Action_Tapjoy_OnConnectSuccessHandler__o *)
                       thunk_FUN_01bda818(System_Action<Tapjoy_OnConnectSuccessHandler>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar4 = &LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_1;
          *ppSVar4 = addHandler;
          thunk_FUN_01c20e04(ppSVar4,addHandler);
        }
        if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        removeHandler = LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_2;
        if (removeHandler == (System_Action_Tapjoy_OnConnectSuccessHandler__o *)0x0) {
          if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          removeHandler =
               (System_Action_Tapjoy_OnConnectSuccessHandler__o *)
               thunk_FUN_01bda818(System_Action<Tapjoy_OnConnectSuccessHandler>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar4 = &LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_2;
          *ppSVar4 = removeHandler;
          thunk_FUN_01c20e04(ppSVar4,removeHandler);
        }
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        source = UniRx_Observable__FromEvent<object>
                           ((System_Func_Action__TDelegate__o *)conversion,
                            (System_Action_TDelegate__o *)addHandler,
                            (System_Action_TDelegate__o *)removeHandler,
                            Method_UniRx_Observable_FromEvent<Tapjoy_OnConnectSuccessHandler>__);
        source_00 = UniRx_Observable__ObserveOnMainThread<Unit>
                              ((System_IObservable_T__o *)source,
                               Method_UniRx_Observable_ObserveOnMainThread<Unit>__);
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
        System_Action<Unit>___ctor();
        disposable = (Il2CppObject *)
                     UniRx_ObservableExtensions__Subscribe<Unit>
                               (source_00,onNext,Method_UniRx_ObservableExtensions_Subscribe<Unit>__
                               );
        UniRx_DisposableExtensions__AddTo<object>
                  (disposable,
                   (System_Collections_Generic_ICollection_IDisposable__o *)
                   (__this->fields).JBJKBIMMCIJ,
                   Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
        pSVar2 = LCAOAAFEOAG_EFNELLKNPAH__PFLIGHDLGBM((MethodInfo *)0x0);
        TapjoyUnity_Tapjoy__Connect(pSVar2,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private void JILECJELDML(Unit HOKBHLPPCAH)  [RVA 0x35BCD14]
// LCAOAAFEOAG$$JILECJELDML @ RVA 0x35BCD14

void LCAOAAFEOAG__JILECJELDML(LCAOAAFEOAG_o *__this)

{
  UniRx_CompositeDisposable_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method;
  MethodInfo *method_00;
  
  if ((DAT_04568ee3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6609);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6610);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568ee3 = 1;
  }
  __this_00 = (__this->fields).JBJKBIMMCIJ;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Clear(__this_00,(MethodInfo *)0x0);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6609,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6610,(MethodInfo *)0x0)
    ;
    JLNPKGGFFDD = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
    LCAOAAFEOAG__CAMGFFOCGKM(__this,method);
    LCAOAAFEOAG__PMAJPCDADCA(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HJFEGIDHJDK()  [RVA 0x35BD390]
// LCAOAAFEOAG$$HJFEGIDHJDK @ RVA 0x35BD390

void LCAOAAFEOAG__HJFEGIDHJDK(LCAOAAFEOAG_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  System_String_o *str1;
  
  if ((DAT_04568ee4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6611);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6612);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568ee4 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6611,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6612,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  str1 = LCAOAAFEOAG_EFNELLKNPAH__PFLIGHDLGBM((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar1,(MethodInfo *)0x0);
  return;
}


// ===== private void PMAJPCDADCA()  [RVA 0x35BCDFC]
// LCAOAAFEOAG$$PMAJPCDADCA @ RVA 0x35BCDFC

/* WARNING: Removing unreachable block (ram,0x036bd2a8) */

void LCAOAAFEOAG__PMAJPCDADCA(LCAOAAFEOAG_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_Func_KeyValuePair_MPAKDCNMLEG__FCMAKNBEJDA___bool__o **ppSVar5;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar6;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  undefined8 *puVar9;
  Il2CppObject *arg0;
  System_Type_o *pSVar10;
  Il2CppObject *arg1;
  Il2CppObject *__this_00;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar11;
  long lVar12;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *source;
  System_Func_KeyValuePair_MPAKDCNMLEG__FCMAKNBEJDA___bool__o *predicate;
  undefined1 auVar16 [16];
  undefined4 local_64;
  
  if ((DAT_04568ee5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6613);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6614);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6615);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6616);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>__);
    FUN_01bab630(&System_Func<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>,_bool>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&
                 System_Collections_Generic_IEnumerable<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>_TypeInfo
                );
    FUN_01bab630(&
                 System_Collections_Generic_IEnumerator<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>_TypeInfo
                );
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>_get_Value__
                );
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    FUN_01bab630(&Method_LCAOAAFEOAG_<>c_KEPJHHAMKOP__);
    FUN_01bab630(&LCAOAAFEOAG_<>c_TypeInfo);
    DAT_04568ee5 = 1;
  }
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6613,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6614,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
  source = (__this->fields).POGOKDKJDFO;
  if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  predicate = LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__15_0;
  if (predicate == (System_Func_KeyValuePair_MPAKDCNMLEG__FCMAKNBEJDA___bool__o *)0x0) {
    if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    predicate = (System_Func_KeyValuePair_MPAKDCNMLEG__FCMAKNBEJDA___bool__o *)
                thunk_FUN_01bda818(
                                  System_Func<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>,_bool>_TypeInfo
                                  );
    System_Func<KeyValuePair<Int32Enum,_object>,_bool>___ctor();
    ppSVar5 = &LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__15_0;
    *ppSVar5 = predicate;
    thunk_FUN_01c20e04(ppSVar5,predicate);
  }
  pSVar6 = System_Linq_Enumerable__Where<KeyValuePair<Int32Enum,_object>>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)predicate,
                      Method_System_Linq_Enumerable_Where<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>__)
  ;
  if (pSVar6 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar11 = pSVar6->klass;
  uVar1._0_1_ = (pSVar11->_2).rank;
  uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
  uVar13 = (ulong)uVar1;
  if (uVar13 != 0) {
    piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
          (Il2CppClass *)
          System_Collections_Generic_IEnumerable<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>_TypeInfo) {
        pVVar7 = pSVar11->vtable + *piVar14;
        goto LAB_036bd058;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  pVVar7 = (VirtualInvokeData *)
           FUN_01b81914(pSVar6,
                        System_Collections_Generic_IEnumerable<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>_TypeInfo
                        ,0);
LAB_036bd058:
  plVar8 = (long *)(*pVVar7->methodPtr)(pSVar6,pVVar7->method);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar12 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_036bd0d8;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_036bd0d8:
    uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar12 = *plVar8;
                    /* try { // try from 036bd218 to 037bd2ab has its CatchHandler @ 036bd218
                       catch() { ... } // from try @ 036bd218 with catch @ 036bd218
                       catch() { ... } // from try @ 036bd2c4 with catch @ 036bd218
                       catch() { ... } // from try @ 036bd30c with catch @ 036bd218
                       catch() { ... } // from try @ 036bd33c with catch @ 036bd218 */
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_036bd24c;
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_KeyValuePair_MPAKDCNMLEG__FCMAKNBEJDA___c **)
             (piVar15 + -2) ==
            System_Collections_Generic_IEnumerator<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>_TypeInfo)
        {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_036bd13c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01b81914(plVar8,
                          System_Collections_Generic_IEnumerator<KeyValuePair<MPAKDCNMLEG,_FCMAKNBEJDA>>_TypeInfo
                          ,0);
LAB_036bd13c:
    auVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    __this_00 = auVar16._8_8_;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6615,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6616,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    local_64 = auVar16._0_4_;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(MPAKDCNMLEG_TypeInfo,&local_64);
    if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar10 = System_Object__GetType(__this_00,(MethodInfo *)0x0);
    if (pSVar10 == (System_Type_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    arg1 = (Il2CppObject *)
           (*(pSVar10->klass->vtable)._8_unknown.methodPtr)
                     (pSVar10,(pSVar10->klass->vtable)._8_unknown.method);
    pSVar4 = System_String__Format(pSVar4,arg0,arg1,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
    (*__this_00->klass->vtable[9].methodPtr)
              (__this_00,auVar16._0_8_ & 0xffffffff,__this_00->klass->vtable[9].method);
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_036bd268;
    }
  }
LAB_036bd24c:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_036bd268:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


// ===== public void Dispose()  [RVA 0x35BD470]
// LCAOAAFEOAG$$Dispose @ RVA 0x35BD470

void LCAOAAFEOAG__Dispose(LCAOAAFEOAG_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_SingleAssignmentDisposable_o *__this_01;
  
  __this_00 = (__this->fields).JBJKBIMMCIJ;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).ILKHAMGIJDL;
    if (__this_01 != (UniRx_SingleAssignmentDisposable_o *)0x0) {
      UniRx_SingleAssignmentDisposable__Dispose(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35BD4A0]
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


// ===== public void BJJDNKDJJEG()  [RVA 0x35BC7E0]
// LCAOAAFEOAG$$BJJDNKDJJEG @ RVA 0x35BC7E0

void LCAOAAFEOAG__BJJDNKDJJEG(LCAOAAFEOAG_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  UniRx_CompositeDisposable_o *__this_00;
  System_Func_Action__Tapjoy_OnConnectSuccessHandler__o **ppSVar3;
  System_Action_Tapjoy_OnConnectSuccessHandler__o **ppSVar4;
  System_IObservable_Unit__o *source;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  MethodInfo *extraout_x1;
  System_Func_Action__Tapjoy_OnConnectSuccessHandler__o *conversion;
  System_Action_Tapjoy_OnConnectSuccessHandler__o *addHandler;
  System_Action_Tapjoy_OnConnectSuccessHandler__o *removeHandler;
  
  if ((DAT_04568ee7 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Tapjoy_OnConnectSuccessHandler>_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6617);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6618);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<Action,_Tapjoy_OnConnectSuccessHandler>_TypeInfo);
    FUN_01bab630(&Method_LCAOAAFEOAG_JILECJELDML__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<Tapjoy_OnConnectSuccessHandler>__);
    FUN_01bab630(&Method_UniRx_Observable_ObserveOnMainThread<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_LCAOAAFEOAG_<>c_IBDFPNCPKBI__);
    FUN_01bab630(&Method_LCAOAAFEOAG_<>c_JKNIFKCLIMB__);
    FUN_01bab630(&Method_LCAOAAFEOAG_<>c_PHGKEPNGOHD__);
    FUN_01bab630(&LCAOAAFEOAG_<>c_TypeInfo);
    DAT_04568ee7 = 1;
    method = extraout_x1;
  }
  if (DAT_04568eeb == '\0') {
    FUN_01bab630(&TapjoyUnity_Tapjoy_TypeInfo,method);
    DAT_04568eeb = '\x01';
  }
  if (TapjoyUnity_Tapjoy_TypeInfo->static_fields->_isConnected == false) {
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = UnityEngine_Application__get_internetReachability((MethodInfo *)0x0);
    if (iVar1 != 0) {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6617,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6618,
                 (MethodInfo *)0x0);
      pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
      __this_00 = (__this->fields).JBJKBIMMCIJ;
      if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
        UniRx_CompositeDisposable__Clear(__this_00,(MethodInfo *)0x0);
        if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        conversion = LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_0;
        if (conversion == (System_Func_Action__Tapjoy_OnConnectSuccessHandler__o *)0x0) {
          if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          conversion = (System_Func_Action__Tapjoy_OnConnectSuccessHandler__o *)
                       thunk_FUN_01bda818(
                                         System_Func<Action,_Tapjoy_OnConnectSuccessHandler>_TypeInfo
                                         );
          System_Func<object,_object>___ctor();
          ppSVar3 = &LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_0;
          *ppSVar3 = conversion;
          thunk_FUN_01c20e04(ppSVar3,conversion);
        }
        if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        addHandler = LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_1;
        if (addHandler == (System_Action_Tapjoy_OnConnectSuccessHandler__o *)0x0) {
          if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          addHandler = (System_Action_Tapjoy_OnConnectSuccessHandler__o *)
                       thunk_FUN_01bda818(System_Action<Tapjoy_OnConnectSuccessHandler>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar4 = &LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_1;
          *ppSVar4 = addHandler;
          thunk_FUN_01c20e04(ppSVar4,addHandler);
        }
        if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        removeHandler = LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_2;
        if (removeHandler == (System_Action_Tapjoy_OnConnectSuccessHandler__o *)0x0) {
          if ((LCAOAAFEOAG_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          removeHandler =
               (System_Action_Tapjoy_OnConnectSuccessHandler__o *)
               thunk_FUN_01bda818(System_Action<Tapjoy_OnConnectSuccessHandler>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar4 = &LCAOAAFEOAG_<>c_TypeInfo->static_fields->__9__11_2;
          *ppSVar4 = removeHandler;
          thunk_FUN_01c20e04(ppSVar4,removeHandler);
        }
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        source = UniRx_Observable__FromEvent<object>
                           ((System_Func_Action__TDelegate__o *)conversion,
                            (System_Action_TDelegate__o *)addHandler,
                            (System_Action_TDelegate__o *)removeHandler,
                            Method_UniRx_Observable_FromEvent<Tapjoy_OnConnectSuccessHandler>__);
        source_00 = UniRx_Observable__ObserveOnMainThread<Unit>
                              ((System_IObservable_T__o *)source,
                               Method_UniRx_Observable_ObserveOnMainThread<Unit>__);
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
        System_Action<Unit>___ctor();
        disposable = (Il2CppObject *)
                     UniRx_ObservableExtensions__Subscribe<Unit>
                               (source_00,onNext,Method_UniRx_ObservableExtensions_Subscribe<Unit>__
                               );
        UniRx_DisposableExtensions__AddTo<object>
                  (disposable,
                   (System_Collections_Generic_ICollection_IDisposable__o *)
                   (__this->fields).JBJKBIMMCIJ,
                   Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
        pSVar2 = LCAOAAFEOAG_EFNELLKNPAH__PFLIGHDLGBM((MethodInfo *)0x0);
        TapjoyUnity_Tapjoy__Connect(pSVar2,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private bool OAIAFKMMCFB(bool KEFILECBPMF)  [RVA 0x35BD644]
// LCAOAAFEOAG$$OAIAFKMMCFB @ RVA 0x35BD644

bool LCAOAAFEOAG__OAIAFKMMCFB(LCAOAAFEOAG_o *__this,bool KEFILECBPMF,MethodInfo *method)

{
  if (KEFILECBPMF) {
    return false;
  }
  if (DAT_04568eeb == '\0') {
    FUN_01bab630(&TapjoyUnity_Tapjoy_TypeInfo);
    DAT_04568eeb = '\x01';
  }
  return TapjoyUnity_Tapjoy_TypeInfo->static_fields->_isConnected == false;
}


// ===== private void NBGBOMAFCCO(MKFAKELPPAC FDIKDMNIKLC, MPAKDCNMLEG ACCIHBHMFPN, string FBOIFHNBMGA)  [RVA 0x35BC644]
// LCAOAAFEOAG$$NBGBOMAFCCO @ RVA 0x35BC644

void LCAOAAFEOAG__NBGBOMAFCCO
               (LCAOAAFEOAG_o *__this,MKFAKELPPAC_o *FDIKDMNIKLC,int32_t ACCIHBHMFPN,
               System_String_o *FBOIFHNBMGA,MethodInfo *method)

{
  bool bVar1;
  KHFOHGKPBFN_o *__this_00;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *__this_01;
  System_Action_MPAKDCNMLEG__o **ppSVar4;
  System_Action_MPAKDCNMLEG__o *pSVar5;
  System_Action_MPAKDCNMLEG__c *pSVar6;
  
  if ((DAT_04568ee8 & 1) == 0) {
    FUN_01bab630(&System_Action<MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>_Add__);
    FUN_01bab630(&KHFOHGKPBFN_TypeInfo);
    FUN_01bab630(&Method_LCAOAAFEOAG_JFONIHNIHGG__);
    DAT_04568ee8 = 1;
  }
  bVar1 = OMMDIMHOHLK__GOLOABAFEJA(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = (KHFOHGKPBFN_o *)thunk_FUN_01bda818(KHFOHGKPBFN_TypeInfo);
  KHFOHGKPBFN___ctor(__this_00,(OCKCFHKADLN_o *)__this,FBOIFHNBMGA,(MethodInfo *)0x0);
  if (__this_00 != (KHFOHGKPBFN_o *)0x0) {
    ppSVar4 = &(__this_00->fields).super.EDPLNAAICPE;
    pSVar5 = *ppSVar4;
    pSVar2 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<MPAKDCNMLEG>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    pSVar2 = System_Delegate__Combine((System_Delegate_o *)pSVar5,pSVar2,(MethodInfo *)0x0);
    pSVar6 = System_Action<MPAKDCNMLEG>_TypeInfo;
    if (pSVar2 == (System_Delegate_o *)0x0) {
      lVar3 = 0;
      *ppSVar4 = (System_Action_MPAKDCNMLEG__o *)0x0;
    }
    else {
      pSVar5 = (System_Action_MPAKDCNMLEG__o *)
               thunk_FUN_01bda71c(pSVar2,System_Action<MPAKDCNMLEG>_TypeInfo);
      if (pSVar5 == (System_Action_MPAKDCNMLEG__o *)0x0) {
LAB_036bc774:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2,pSVar6);
      }
      *ppSVar4 = pSVar5;
      pSVar6 = System_Action<MPAKDCNMLEG>_TypeInfo;
      lVar3 = thunk_FUN_01bda71c(pSVar2,System_Action<MPAKDCNMLEG>_TypeInfo);
      if (lVar3 == 0) goto LAB_036bc774;
    }
    thunk_FUN_01c20e04(ppSVar4,lVar3);
    if (FDIKDMNIKLC != (MKFAKELPPAC_o *)0x0) {
      MKFAKELPPAC__FOFNKPNEADK(FDIKDMNIKLC,(FCMAKNBEJDA_o *)__this_00,ACCIHBHMFPN,(MethodInfo *)0x0)
      ;
      __this_01 = (__this->fields).POGOKDKJDFO;
      if (__this_01 != (System_Collections_Generic_Dictionary_MPAKDCNMLEG__FCMAKNBEJDA__o *)0x0) {
        System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,ACCIHBHMFPN,
                   (Il2CppObject *)__this_00,
                   Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_FCMAKNBEJDA>_Add__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

