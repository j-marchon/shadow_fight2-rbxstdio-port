// TypeDefIndex 907
// Namespace: 
// public class KIOBDEIAMOO : MKFAKELPPAC
// Fields:
//   private readonly CompositeDisposable BNAIPPCOGPE; // 0x70

// ===== protected override void GIMAJOGGBHM()  [RVA 0x309745C]
// KIOBDEIAMOO$$GIMAJOGGBHM @ RVA 0x309745C

void KIOBDEIAMOO__GIMAJOGGBHM(KIOBDEIAMOO_o *__this,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  FEIHEGKPCBH_o *__this_00;
  KHKFAMNELAM_o *__this_01;
  KHKFAMNELAM_o **ppKVar4;
  System_Action_Action_LevelPlayConfiguration___o **ppSVar5;
  System_IObservable_T__o *pSVar6;
  System_Action_T__o *pSVar7;
  Il2CppObject *pIVar8;
  System_Action_Action_LevelPlayInitError___o **ppSVar9;
  System_String_o *pSVar10;
  System_String_o *str3;
  System_Action_Action_LevelPlayConfiguration___o *addHandler;
  System_Action_Action_LevelPlayInitError___o *addHandler_00;
  System_Action_Action_LevelPlayConfiguration___o *removeHandler;
  System_Action_Action_LevelPlayInitError___o *removeHandler_00;
  System_String_o *str1;
  
  if ((DAT_045660eb & 1) == 0) {
    FUN_01bab630(&System_Action<Action<LevelPlayConfiguration>>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayConfiguration>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayInitError>_TypeInfo);
    FUN_01bab630(&System_Action<Action<LevelPlayInitError>>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6664);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6665);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6666);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6667);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6668);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6669);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&FEIHEGKPCBH_TypeInfo);
    FUN_01bab630(&IronSourceAdQuality_TypeInfo);
    FUN_01bab630(&Method_KIOBDEIAMOO_GAJBEIKKCHH__);
    FUN_01bab630(&Method_KIOBDEIAMOO_PICELOJMHIK__);
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlay_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<LevelPlayConfiguration>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<LevelPlayInitError>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<LevelPlayConfiguration>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<LevelPlayInitError>__);
    FUN_01bab630(&Method_UniRx_Observable_ObserveOnMainThread<LevelPlayConfiguration>__);
    FUN_01bab630(&Method_UniRx_Observable_ObserveOnMainThread<LevelPlayInitError>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&KIOBDEIAMOO_PAMLCCDLNHF_TypeInfo);
    FUN_01bab630(&Method_KIOBDEIAMOO_<>c_BEDDKHEOMPA__);
    FUN_01bab630(&Method_KIOBDEIAMOO_<>c_LDMEHMEHANK__);
    FUN_01bab630(&Method_KIOBDEIAMOO_<>c_MIGBHIIKNKK__);
    FUN_01bab630(&Method_KIOBDEIAMOO_<>c_OGEDAKAADIE__);
    FUN_01bab630(&KIOBDEIAMOO_<>c_TypeInfo);
    DAT_045660eb = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6664,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6665,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  MKFAKELPPAC__DHAAGKPHJLA((MKFAKELPPAC_o *)__this,pSVar3,(MethodInfo *)0x0);
  pSVar3 = KIOBDEIAMOO_AOGMBGAJKOD__FBCCIDDHLPP((MethodInfo *)0x0);
  __this_00 = (FEIHEGKPCBH_o *)thunk_FUN_01bda818(FEIHEGKPCBH_TypeInfo);
  FEIHEGKPCBH___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (KHKFAMNELAM_o *)thunk_FUN_01bda818(KIOBDEIAMOO_PAMLCCDLNHF_TypeInfo);
  KIOBDEIAMOO_PAMLCCDLNHF___ctor((KIOBDEIAMOO_PAMLCCDLNHF_o *)__this_01,(MethodInfo *)0x0);
  if (__this_00 != (FEIHEGKPCBH_o *)0x0) {
    ppKVar4 = &(__this_00->fields).CALAIBHEAFK;
    *ppKVar4 = __this_01;
    thunk_FUN_01c20e04(ppKVar4,__this_01);
    if ((IronSourceAdQuality_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    IronSourceAdQuality__Initialize(pSVar3,__this_00,(MethodInfo *)0x0);
    if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Unity_Services_LevelPlay_LevelPlay__SetConsent(true,(MethodInfo *)0x0);
    if ((KIOBDEIAMOO_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    addHandler = KIOBDEIAMOO_<>c_TypeInfo->static_fields->__9__4_0;
    if (addHandler == (System_Action_Action_LevelPlayConfiguration___o *)0x0) {
      if ((KIOBDEIAMOO_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      addHandler = (System_Action_Action_LevelPlayConfiguration___o *)
                   thunk_FUN_01bda818(System_Action<Action<LevelPlayConfiguration>>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar5 = &KIOBDEIAMOO_<>c_TypeInfo->static_fields->__9__4_0;
      *ppSVar5 = addHandler;
      thunk_FUN_01c20e04(ppSVar5,addHandler);
    }
    if ((KIOBDEIAMOO_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    removeHandler = KIOBDEIAMOO_<>c_TypeInfo->static_fields->__9__4_1;
    if (removeHandler == (System_Action_Action_LevelPlayConfiguration___o *)0x0) {
      if ((KIOBDEIAMOO_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      removeHandler =
           (System_Action_Action_LevelPlayConfiguration___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayConfiguration>>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar5 = &KIOBDEIAMOO_<>c_TypeInfo->static_fields->__9__4_1;
      *ppSVar5 = removeHandler;
      thunk_FUN_01c20e04(ppSVar5,removeHandler);
    }
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar6 = UniRx_Observable__FromEvent<object>
                       ((System_Action_Action_T___o *)addHandler,
                        (System_Action_Action_T___o *)removeHandler,
                        Method_UniRx_Observable_FromEvent<LevelPlayConfiguration>__);
    pSVar6 = UniRx_Observable__ObserveOnMainThread<object>
                       (pSVar6,Method_UniRx_Observable_ObserveOnMainThread<LevelPlayConfiguration>__
                       );
    pSVar7 = (System_Action_T__o *)
             thunk_FUN_01bda818(System_Action<LevelPlayConfiguration>_TypeInfo);
    System_Action<object>___ctor();
    pIVar8 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<object>
                       (pSVar6,pSVar7,
                        Method_UniRx_ObservableExtensions_Subscribe<LevelPlayConfiguration>__);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar8,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).BNAIPPCOGPE,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    if ((KIOBDEIAMOO_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    addHandler_00 = KIOBDEIAMOO_<>c_TypeInfo->static_fields->__9__4_3;
    if (addHandler_00 == (System_Action_Action_LevelPlayInitError___o *)0x0) {
      if ((KIOBDEIAMOO_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      addHandler_00 =
           (System_Action_Action_LevelPlayInitError___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayInitError>>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar9 = &KIOBDEIAMOO_<>c_TypeInfo->static_fields->__9__4_3;
      *ppSVar9 = addHandler_00;
      thunk_FUN_01c20e04(ppSVar9,addHandler_00);
    }
    if ((KIOBDEIAMOO_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    removeHandler_00 = KIOBDEIAMOO_<>c_TypeInfo->static_fields->__9__4_4;
    if (removeHandler_00 == (System_Action_Action_LevelPlayInitError___o *)0x0) {
      if ((KIOBDEIAMOO_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0319795c to 03297acb has its CatchHandler @ 0319795c
                       catch() { ... } // from try @ 0319795c with catch @ 0319795c
                       catch() { ... } // from try @ 03197ba8 with catch @ 0319795c
                       catch() { ... } // from try @ 03197c54 with catch @ 0319795c
                       catch() { ... } // from try @ 03197c88 with catch @ 0319795c
                       catch() { ... } // from try @ 03197d30 with catch @ 0319795c */
      removeHandler_00 =
           (System_Action_Action_LevelPlayInitError___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayInitError>>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar9 = &KIOBDEIAMOO_<>c_TypeInfo->static_fields->__9__4_4;
      *ppSVar9 = removeHandler_00;
      thunk_FUN_01c20e04(ppSVar9,removeHandler_00);
    }
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar6 = UniRx_Observable__FromEvent<object>
                       ((System_Action_Action_T___o *)addHandler_00,
                        (System_Action_Action_T___o *)removeHandler_00,
                        Method_UniRx_Observable_FromEvent<LevelPlayInitError>__);
    pSVar6 = UniRx_Observable__ObserveOnMainThread<object>
                       (pSVar6,Method_UniRx_Observable_ObserveOnMainThread<LevelPlayInitError>__);
    pSVar7 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<LevelPlayInitError>_TypeInfo);
    System_Action<object>___ctor();
    pIVar8 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<object>
                       (pSVar6,pSVar7,
                        Method_UniRx_ObservableExtensions_Subscribe<LevelPlayInitError>__);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar8,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).BNAIPPCOGPE,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6666,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6667,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Unity_Services_LevelPlay_LevelPlay_TypeInfo);
    }
    str1 = Unity_Services_LevelPlay_LevelPlay_TypeInfo->static_fields->PluginVersion;
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03197acc to 03297af3 has its CatchHandler @ 03197c74 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6668,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6669,(MethodInfo *)0x0)
    ;
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    str3 = Unity_Services_LevelPlay_LevelPlay__get_UnityVersion((MethodInfo *)0x0);
                    /* try { // try from 03197b28 to 03297b4f has its CatchHandler @ 03197c70 */
    pSVar3 = System_String__Concat(pSVar3,str1,pSVar10,str3,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
    pSVar3 = KIOBDEIAMOO_AOGMBGAJKOD__FBCCIDDHLPP((MethodInfo *)0x0);
    pSVar10 = PELHIDJOBAB__JGDMBJFKGBO((MethodInfo *)0x0);
                    /* try { // try from 03197b60 to 03297b63 has its CatchHandler @ 03197c60 */
                    /* try { // try from 03197b64 to 03297b73 has its CatchHandler @ 03197c6c */
    Unity_Services_LevelPlay_LevelPlay__Init(pSVar3,pSVar10,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string AIOMNIBHCNI()  [RVA 0x3097B80]
// KIOBDEIAMOO$$AIOMNIBHCNI @ RVA 0x3097B80

System_String_o * KIOBDEIAMOO__AIOMNIBHCNI(KIOBDEIAMOO_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 03197b84 to 03297b87 has its CatchHandler @ 03197c5c */
                    /* try { // try from 03197b88 to 03297b97 has its CatchHandler @ 03197c68 */
                    /* try { // try from 03197b9c to 03297ba7 has its CatchHandler @ 03197c64 */
                    /* try { // try from 03197ba8 to 03297c4f has its CatchHandler @ 0319795c */
  if ((DAT_045660ec & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6670);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6671);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045660ec = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6670,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6671,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x3097C30]
// KIOBDEIAMOO$$.ctor @ RVA 0x3097C30

void KIOBDEIAMOO___ctor(KIOBDEIAMOO_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03197c50 to 03297c53 has its CatchHandler @ 03197c58 */
                    /* try { // try from 03197c54 to 03297c83 has its CatchHandler @ 0319795c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197c50 with catch @ 03197c58
                        */
  if ((DAT_045660ed & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197b84 with catch @ 03197c5c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197b60 with catch @ 03197c60
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197b9c with catch @ 03197c64
                        */
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197b88 with catch @ 03197c68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197b64 with catch @ 03197c6c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197b28 with catch @ 03197c70
                        */
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197acc with catch @ 03197c74
                        */
    DAT_045660ed = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
                    /* try { // try from 03197c84 to 03297c87 has its CatchHandler @ 03197cd0 */
                    /* try { // try from 03197c88 to 03297d07 has its CatchHandler @ 0319795c */
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MKFAKELPPAC___ctor((MKFAKELPPAC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void HJFEGIDHJDK()  [RVA 0x3097CC8]
// KIOBDEIAMOO$$HJFEGIDHJDK @ RVA 0x3097CC8

void KIOBDEIAMOO__HJFEGIDHJDK(KIOBDEIAMOO_o *__this,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  
                    /* catch() { ... } // from try @ 03197c84 with catch @ 03197cd0 */
                    /* try { // try from 03197d08 to 03297d2f has its CatchHandler @ 03197d44 */
  if ((DAT_045660ee & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6672);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6673);
                    /* try { // try from 03197d30 to 03297d3b has its CatchHandler @ 0319795c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6674);
                    /* try { // try from 03197d3c to 03297d43 has its CatchHandler @ 03197d44 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6675);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03197d08 with catch @ 03197d44
                       catch(type#2 @ 00000000) { ... } // from try @ 03197d3c with catch @ 03197d44
                        */
    FUN_01bab630(&byte___TypeInfo);
    DAT_045660ee = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6672,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6673,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar4 = PELHIDJOBAB__HOJPMDODABO((MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,pSVar4,(MethodInfo *)0x0);
  MKFAKELPPAC__DHAAGKPHJLA((MKFAKELPPAC_o *)__this,pSVar3,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6674,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6675,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar4 = KIOBDEIAMOO_AOGMBGAJKOD__FBCCIDDHLPP((MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,pSVar4,(MethodInfo *)0x0);
  MKFAKELPPAC__DHAAGKPHJLA((MKFAKELPPAC_o *)__this,pSVar3,(MethodInfo *)0x0);
  return;
}


// ===== protected override void LBEJFCJOIEE(MPAKDCNMLEG ACCIHBHMFPN, bool CMEPJPCDKKF)  [RVA 0x3097E4C]
// KIOBDEIAMOO$$LBEJFCJOIEE @ RVA 0x3097E4C

void KIOBDEIAMOO__LBEJFCJOIEE
               (KIOBDEIAMOO_o *__this,int32_t ACCIHBHMFPN,bool CMEPJPCDKKF,MethodInfo *method)

{
  ushort uVar1;
  KIOBDEIAMOO_EFKAFKAPHBM_o *__this_00;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  float fVar8;
  undefined4 extraout_var;
  
  if ((DAT_045660ef & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_KIOBDEIAMOO_EFKAFKAPHBM_GIJAAOFDAMP__);
    FUN_01bab630(&KIOBDEIAMOO_EFKAFKAPHBM_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045660ef = 1;
  }
  __this_00 = (KIOBDEIAMOO_EFKAFKAPHBM_o *)thunk_FUN_01bda818(KIOBDEIAMOO_EFKAFKAPHBM_TypeInfo);
  KIOBDEIAMOO_EFKAFKAPHBM___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (KIOBDEIAMOO_EFKAFKAPHBM_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    thunk_FUN_01c20e04(&__this_00->fields,__this);
    (__this_00->fields).type = ACCIHBHMFPN;
    (__this_00->fields).lockScreen = CMEPJPCDKKF;
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    fVar8 = KIOBDEIAMOO_AOGMBGAJKOD__CILLDMLPPPN((MethodInfo *)0x0);
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + (*piVar7 + 2);
            goto LAB_03197f90;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_03197f90:
                    /* WARNING: Could not recover jumptable at 0x03197fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(CONCAT44(extraout_var,fVar8),pPVar2,uVar3,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void DOKOFJGNJBL()  [RVA 0x3097FBC]
// KIOBDEIAMOO$$DOKOFJGNJBL @ RVA 0x3097FBC

void KIOBDEIAMOO__DOKOFJGNJBL(KIOBDEIAMOO_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *extraout_x1;
  
  if ((DAT_045660f0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_84);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6676);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlay_TypeInfo);
    DAT_045660f0 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.KLMOMCBAFIB != false) {
    if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Unity_Services_LevelPlay_LevelPlay_TypeInfo,method);
    }
    Unity_Services_LevelPlay_LevelPlay__LaunchTestSuite((MethodInfo *)0x0);
    return;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6676,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_84,(MethodInfo *)0x0);
  JLNPKGGFFDD = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  return;
}


// ===== private void GAJBEIKKCHH(LevelPlayInitError BAPELFMECBI)  [RVA 0x30980B4]
// KIOBDEIAMOO$$GAJBEIKKCHH @ RVA 0x30980B4

void KIOBDEIAMOO__GAJBEIKKCHH
               (KIOBDEIAMOO_o *__this,Unity_Services_LevelPlay_LevelPlayInitError_o *BAPELFMECBI,
               MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  int32_t local_34;
  
  if ((DAT_045660f1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6677);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6678);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    DAT_045660f1 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6677,(MethodInfo *)0x0);
                    /* try { // try from 0319814c to 0329859f has its CatchHandler @ 0319814c
                       catch() { ... } // from try @ 0319814c with catch @ 0319814c
                       catch() { ... } // from try @ 031986c8 with catch @ 0319814c
                       catch() { ... } // from try @ 03198aac with catch @ 0319814c
                       catch() { ... } // from try @ 03198cf8 with catch @ 0319814c
                       catch() { ... } // from try @ 03198d0c with catch @ 0319814c
                       catch() { ... } // from try @ 03198d1c with catch @ 0319814c
                       catch() { ... } // from try @ 03198e48 with catch @ 0319814c
                       catch() { ... } // from try @ 03198ed8 with catch @ 0319814c */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6678,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if (BAPELFMECBI != (Unity_Services_LevelPlay_LevelPlayInitError_o *)0x0) {
    local_34 = (BAPELFMECBI->fields)._ErrorCode_k__BackingField;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
    pSVar1 = System_String__Format
                       (pSVar1,arg0,
                        (Il2CppObject *)(BAPELFMECBI->fields)._ErrorMessage_k__BackingField,
                        (MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PICELOJMHIK(LevelPlayConfiguration PCMFDDODKED)  [RVA 0x30981D0]
// KIOBDEIAMOO$$PICELOJMHIK @ RVA 0x30981D0

void KIOBDEIAMOO__PICELOJMHIK
               (KIOBDEIAMOO_o *__this,Unity_Services_LevelPlay_LevelPlayConfiguration_o *PCMFDDODKED
               ,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  KJLBJAOALEO_o *__this_00;
  KKHJHHIPPOO_o *__this_01;
  undefined1 local_34 [4];
  
  if ((DAT_045660f2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6679);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6680);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&KJLBJAOALEO_TypeInfo);
    FUN_01bab630(&KKHJHHIPPOO_TypeInfo);
    DAT_045660f2 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6679,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6680,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if (PCMFDDODKED != (Unity_Services_LevelPlay_LevelPlayConfiguration_o *)0x0) {
    local_34[0] = (PCMFDDODKED->fields)._IsAdQualityEnabled_k__BackingField;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_34);
    pSVar1 = System_String__Format(pSVar1,arg0,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar1,(MethodInfo *)0x0);
    pSVar1 = KIOBDEIAMOO_AOGMBGAJKOD__EEABABBJDDE((MethodInfo *)0x0);
    __this_00 = (KJLBJAOALEO_o *)thunk_FUN_01bda818(KJLBJAOALEO_TypeInfo);
    KJLBJAOALEO___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    MKFAKELPPAC__CLBFBOEOALF((MKFAKELPPAC_o *)__this,(FCMAKNBEJDA_o *)__this_00,(MethodInfo *)0x0);
    pSVar1 = KIOBDEIAMOO_AOGMBGAJKOD__DPFDAPCGJGA((MethodInfo *)0x0);
    __this_01 = (KKHJHHIPPOO_o *)thunk_FUN_01bda818(KKHJHHIPPOO_TypeInfo);
    KKHJHHIPPOO___ctor(__this_01,pSVar1,(MethodInfo *)0x0);
    MKFAKELPPAC__INDMMCFHNCF((MKFAKELPPAC_o *)__this,(FCMAKNBEJDA_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).super.KLMOMCBAFIB = true;
    MKFAKELPPAC__PMAJPCDADCA((MKFAKELPPAC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HJCGAPCGEAE(MPAKDCNMLEG BKFOLMBMFNP, bool LNKIOAFBDMO)  [RVA 0x3098394]
// KIOBDEIAMOO$$HJCGAPCGEAE @ RVA 0x3098394

void KIOBDEIAMOO__HJCGAPCGEAE
               (KIOBDEIAMOO_o *__this,int32_t BKFOLMBMFNP,bool LNKIOAFBDMO,MethodInfo *method)

{
  MKFAKELPPAC__LBEJFCJOIEE((MKFAKELPPAC_o *)__this,BKFOLMBMFNP,LNKIOAFBDMO,(MethodInfo *)0x0);
  return;
}

