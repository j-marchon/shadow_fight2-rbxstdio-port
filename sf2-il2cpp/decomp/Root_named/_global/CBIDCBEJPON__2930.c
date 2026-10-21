// TypeDefIndex 2930
// Namespace: 
// public class CBIDCBEJPON : CFOCLEDKNKL
// Fields:
//   private readonly Lazy<TimeSpan> CHFMIFDKGFO; // 0x10
//   private readonly KOOGFNAPCGG DKNHMJIANAB; // 0x18
//   private Action<OHAHOONNEIC> OBDGHLLLHNN; // 0x20
//   private Action<OHAHOONNEIC> JAALFNDOBHH; // 0x28

// ===== public void GCDHACBGMEI(Action<OHAHOONNEIC> CJNHFNHJHPE)  [RVA 0x34536B8]
// CBIDCBEJPON$$GCDHACBGMEI @ RVA 0x34536B8

void CBIDCBEJPON__GCDHACBGMEI
               (CBIDCBEJPON_o *__this,System_Action_OHAHOONNEIC__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_OHAHOONNEIC__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OHAHOONNEIC__o *pSVar5;
  System_Action_OHAHOONNEIC__o **ppSVar6;
  System_Action_OHAHOONNEIC__o *source;
  
  if ((DAT_045682b1 & 1) == 0) {
    FUN_01bab630(&System_Action<OHAHOONNEIC>_TypeInfo);
    DAT_045682b1 = 1;
  }
  ppSVar6 = &(__this->fields).OBDGHLLLHNN;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<OHAHOONNEIC>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OHAHOONNEIC>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OHAHOONNEIC__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void .ctor(KOOGFNAPCGG JJCCMFALAMF, MJPJANJNDCI<BuildSettingsConfig> HLFCHMCOPID)  [RVA 0x3453768]
// CBIDCBEJPON$$.ctor @ RVA 0x3453768

void CBIDCBEJPON___ctor(CBIDCBEJPON_o *__this,KOOGFNAPCGG_o *JJCCMFALAMF,
                       MJPJANJNDCI_BuildSettingsConfig__o *HLFCHMCOPID,MethodInfo *method)

{
  Il2CppObject *__this_00;
  KOOGFNAPCGG_o **ppKVar1;
  System_Func_T__o *valueFactory;
  System_Lazy_TimeSpan__o *__this_01;
  
  if ((DAT_045682b2 & 1) == 0) {
    FUN_01bab630(&Method_CBIDCBEJPON_BGMFHIFBMKN_PNACDJOJGEB__);
    FUN_01bab630(&CBIDCBEJPON_BGMFHIFBMKN_TypeInfo);
    FUN_01bab630(&System_Func<TimeSpan>_TypeInfo);
    FUN_01bab630(&Method_System_Lazy<TimeSpan>__ctor__);
    FUN_01bab630(&System_Lazy<TimeSpan>_TypeInfo);
    DAT_045682b2 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(CBIDCBEJPON_BGMFHIFBMKN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)HLFCHMCOPID;
    thunk_FUN_01c20e04(__this_00 + 1,HLFCHMCOPID);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    ppKVar1 = &(__this->fields).DKNHMJIANAB;
    *ppKVar1 = JJCCMFALAMF;
    thunk_FUN_01c20e04(ppKVar1,JJCCMFALAMF);
    valueFactory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<TimeSpan>_TypeInfo);
    System_Func<TimeSpan>___ctor();
    __this_01 = (System_Lazy_TimeSpan__o *)thunk_FUN_01bda818(System_Lazy<TimeSpan>_TypeInfo);
    System_Lazy<TimeSpan>___ctor(__this_01,valueFactory,Method_System_Lazy<TimeSpan>__ctor__);
    (__this->fields).CHFMIFDKGFO = __this_01;
    thunk_FUN_01c20e04(&__this->fields,__this_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FAKOAKAPGKM(Action<OHAHOONNEIC> CJNHFNHJHPE)  [RVA 0x34538A8]
// CBIDCBEJPON$$FAKOAKAPGKM @ RVA 0x34538A8

void CBIDCBEJPON__FAKOAKAPGKM
               (CBIDCBEJPON_o *__this,System_Action_OHAHOONNEIC__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_OHAHOONNEIC__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OHAHOONNEIC__o *pSVar5;
  System_Action_OHAHOONNEIC__o **ppSVar6;
  System_Action_OHAHOONNEIC__o *a;
  
  if ((DAT_045682b3 & 1) == 0) {
    FUN_01bab630(&System_Action<OHAHOONNEIC>_TypeInfo);
    DAT_045682b3 = 1;
  }
  ppSVar6 = &(__this->fields).JAALFNDOBHH;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<OHAHOONNEIC>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OHAHOONNEIC>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OHAHOONNEIC__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void EPNBEPFFJDI(Action<OHAHOONNEIC> CJNHFNHJHPE)  [RVA 0x3453958]
// CBIDCBEJPON$$EPNBEPFFJDI @ RVA 0x3453958

void CBIDCBEJPON__EPNBEPFFJDI
               (CBIDCBEJPON_o *__this,System_Action_OHAHOONNEIC__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_OHAHOONNEIC__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OHAHOONNEIC__o *pSVar5;
  System_Action_OHAHOONNEIC__o **ppSVar6;
  System_Action_OHAHOONNEIC__o *a;
  
  if ((DAT_045682b4 & 1) == 0) {
    FUN_01bab630(&System_Action<OHAHOONNEIC>_TypeInfo);
    DAT_045682b4 = 1;
  }
  ppSVar6 = &(__this->fields).OBDGHLLLHNN;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<OHAHOONNEIC>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OHAHOONNEIC>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OHAHOONNEIC__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void CEJFPHNEMIM(string CJFAPGEEPLM, Action<EDLFPEGBIFO> ACAEGJPJDAA, Action<float> PJELLDNLCKK, int PGFAIJMMOHJ = 0, bool DKKOMKLDIBB = True, bool BIBGIOKDBAE = True, Nullable<TimeSpan> MINHPKOPAIE, int KGLGMDJELEI = 1, CancellationToken DEMAKGLNJNN)  [RVA 0x3453A08]
// CBIDCBEJPON$$CEJFPHNEMIM @ RVA 0x3453A08

void CBIDCBEJPON__CEJFPHNEMIM
               (CBIDCBEJPON_o *__this,System_String_o *CJFAPGEEPLM,
               System_Action_EDLFPEGBIFO__o *ACAEGJPJDAA,System_Action_float__o *PJELLDNLCKK,
               int32_t PGFAIJMMOHJ,bool DKKOMKLDIBB,bool BIBGIOKDBAE,
               System_Nullable_TimeSpan__o MINHPKOPAIE,int32_t KGLGMDJELEI,
               System_Threading_CancellationToken_o DEMAKGLNJNN,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *__this_00;
  System_Lazy_TimeSpan__o *__this_01;
  System_TimeSpan_o SVar2;
  VirtualInvokeData *pVVar3;
  System_Action_int__Action_EOGOGKOFPLJ___Action_EOGOGKOFPLJ___Action_EOGOGKOFPLJ___o *FONJOKHKAKE;
  System_Func_EOGOGKOFPLJ__T__o *EJAAOBFHGJN;
  System_Func_EOGOGKOFPLJ__T__o *CBFGKPJLKIK;
  System_Action_float__o *method_00;
  KOOGFNAPCGG_c *pKVar4;
  ulong uVar5;
  int32_t *piVar6;
  Il2CppObject *pIVar7;
  KOOGFNAPCGG_o *pKVar8;
  System_Nullable_TimeSpan__o __this_02;
  undefined4 in_stack_0000000c;
  Il2CppClass *local_70;
  void *pvStack_68;
  
  method_00 = PJELLDNLCKK;
  if ((DAT_045682b5 & 1) == 0) {
    FUN_01bab630(&
                 System_Action<int,_Action<EOGOGKOFPLJ>,_Action<EOGOGKOFPLJ>,_Action<EOGOGKOFPLJ>>_TypeInfo
                );
    FUN_01bab630(&Method_CBIDCBEJPON_PFJNKOOJDDM<EDLFPEGBIFO>__);
    FUN_01bab630(&Method_CBIDCBEJPON_FINAJBCKNKG_BFLFJFCHNDN__);
    FUN_01bab630(&Method_CBIDCBEJPON_FINAJBCKNKG_MBMPFCHBIJF__);
    FUN_01bab630(&Method_CBIDCBEJPON_FINAJBCKNKG_OJNIOBJAMFB__);
    FUN_01bab630(&CBIDCBEJPON_FINAJBCKNKG_TypeInfo);
    FUN_01bab630(&System_Func<EOGOGKOFPLJ,_EDLFPEGBIFO>_TypeInfo);
                    /* try { // try from 03553aa8 to 03653acf has its CatchHandler @ 03553d74 */
    FUN_01bab630(&KOOGFNAPCGG_TypeInfo);
    FUN_01bab630(&Method_System_Lazy<TimeSpan>_get_Value__);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>__ctor__);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>_get_HasValue__);
    DAT_045682b5 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(CBIDCBEJPON_FINAJBCKNKG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    pIVar7 = __this_00 + 1;
                    /* try { // try from 03553b04 to 03653b2f has its CatchHandler @ 03553d70 */
    pIVar7->klass = (Il2CppClass *)MINHPKOPAIE.fields.value.fields._ticks.fields;
    __this_00[1].monitor = (void *)CONCAT44(in_stack_0000000c,KGLGMDJELEI);
    *(bool *)&__this_00[2].monitor = DKKOMKLDIBB;
    __this_00[3].klass = (Il2CppClass *)method;
    thunk_FUN_01c20e04(__this_00 + 3,0);
    if (*(char *)&pIVar7->klass == '\0') {
      __this_01 = (__this->fields).CHFMIFDKGFO;
      if (__this_01 == (System_Lazy_TimeSpan__o *)0x0) goto LAB_03553cc0;
      SVar2 = System_Lazy<TimeSpan>__get_Value(__this_01,Method_System_Lazy<TimeSpan>_get_Value__);
      local_70 = (Il2CppClass *)0x0;
      pvStack_68 = (void *)0x0;
      __this_02.fields.value.fields._ticks = SVar2.fields._ticks;
      __this_02.fields._0_8_ = &local_70;
      System_Nullable<TimeSpan>___ctor
                (__this_02,(System_TimeSpan_o)Method_System_Nullable<TimeSpan>__ctor__._ticks,
                 (MethodInfo_27FB8F4 *)method_00);
                    /* try { // try from 03553b6c to 03653b73 has its CatchHandler @ 03553d6c */
      __this_00[1].monitor = pvStack_68;
      pIVar7->klass = local_70;
    }
    pKVar8 = (__this->fields).DKNHMJIANAB;
                    /* try { // try from 03553b7c to 03653b83 has its CatchHandler @ 03553d64 */
    if (pKVar8 != (KOOGFNAPCGG_o *)0x0) {
      pKVar4 = pKVar8->klass;
      uVar1._0_1_ = (pKVar4->_2).rank;
      uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
                    /* try { // try from 03553b8c to 03653b97 has its CatchHandler @ 03553d5c */
                    /* try { // try from 03553ba0 to 03653bab has its CatchHandler @ 03553d58 */
                    /* try { // try from 03553bb4 to 03653bbf has its CatchHandler @ 03553d54 */
      uVar5 = (ulong)uVar1;
                    /* try { // try from 03553bc4 to 03653bcf has its CatchHandler @ 03553d60 */
      if (uVar5 != 0) {
        piVar6 = &((pKVar4->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 03553bd8 to 03653be3 has its CatchHandler @ 03553d50 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)KOOGFNAPCGG_TypeInfo) {
                    /* try { // try from 03553c04 to 03653c0f has its CatchHandler @ 03553d44 */
            pVVar3 = pKVar4->vtable + *piVar6;
            goto LAB_03553c0c;
          }
          uVar5 = uVar5 - 1;
                    /* try { // try from 03553be8 to 03653bf3 has its CatchHandler @ 03553d48 */
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar8,KOOGFNAPCGG_TypeInfo,0);
LAB_03553c0c:
                    /* try { // try from 03553c14 to 03653c1f has its CatchHandler @ 03553d40 */
      (*pVVar3->methodPtr)(pKVar8,CJFAPGEEPLM,__this_00 + 2,pVVar3->method);
      FONJOKHKAKE = (System_Action_int__Action_EOGOGKOFPLJ___Action_EOGOGKOFPLJ___Action_EOGOGKOFPLJ___o
                     *)thunk_FUN_01bda818(
                                         System_Action<int,_Action<EOGOGKOFPLJ>,_Action<EOGOGKOFPLJ>,_Action<EOGOGKOFPLJ>>_TypeInfo
                                         );
                    /* try { // try from 03553c30 to 03653c3b has its CatchHandler @ 03553d3c */
      System_Action<int,_object,_object,_object>___ctor();
                    /* try { // try from 03553c40 to 03653c4b has its CatchHandler @ 03553d34 */
      EJAAOBFHGJN = (System_Func_EOGOGKOFPLJ__T__o *)
                    thunk_FUN_01bda818(System_Func<EOGOGKOFPLJ,_EDLFPEGBIFO>_TypeInfo);
      System_Func<object,_object>___ctor();
                    /* try { // try from 03553c5c to 03653c67 has its CatchHandler @ 03553d38 */
      CBFGKPJLKIK = (System_Func_EOGOGKOFPLJ__T__o *)
                    thunk_FUN_01bda818(System_Func<EOGOGKOFPLJ,_EDLFPEGBIFO>_TypeInfo);
                    /* try { // try from 03553c6c to 03653c77 has its CatchHandler @ 03553d30 */
      System_Func<object,_object>___ctor();
                    /* try { // try from 03553c78 to 03653d13 has its CatchHandler @ 035530c0 */
      CBIDCBEJPON__PFJNKOOJDDM<object>
                (__this,FONJOKHKAKE,EJAAOBFHGJN,CBFGKPJLKIK,(System_Action_T__o *)ACAEGJPJDAA,
                 PJELLDNLCKK,PGFAIJMMOHJ,(int32_t)DEMAKGLNJNN.fields._source,
                 (System_Threading_CancellationToken_o)__this_00[3].klass,
                 Method_CBIDCBEJPON_PFJNKOOJDDM<EDLFPEGBIFO>__);
      return;
    }
  }
LAB_03553cc0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HIIHLLDDKGB(string CJFAPGEEPLM, string AAIHDEKMIJG, Action<NJIEBADJPEJ> ACAEGJPJDAA, Action<float> PJELLDNLCKK, int PGFAIJMMOHJ = 0, bool DKKOMKLDIBB = True, bool BIBGIOKDBAE = True, Nullable<TimeSpan> MINHPKOPAIE, int KGLGMDJELEI = 1, CancellationToken DEMAKGLNJNN)  [RVA 0x3453CCC]
// CBIDCBEJPON$$HIIHLLDDKGB @ RVA 0x3453CCC

void CBIDCBEJPON__HIIHLLDDKGB
               (CBIDCBEJPON_o *__this,System_String_o *CJFAPGEEPLM,System_String_o *AAIHDEKMIJG,
               System_Action_NJIEBADJPEJ__o *ACAEGJPJDAA,System_Action_float__o *PJELLDNLCKK,
               int32_t PGFAIJMMOHJ,bool DKKOMKLDIBB,bool BIBGIOKDBAE,
               System_Nullable_TimeSpan__o MINHPKOPAIE,int32_t KGLGMDJELEI,
               System_Threading_CancellationToken_o DEMAKGLNJNN,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *__this_00;
  System_Lazy_TimeSpan__o *__this_01;
  System_TimeSpan_o SVar2;
  VirtualInvokeData *pVVar3;
  System_Action_int__Action_EOGOGKOFPLJ___Action_EOGOGKOFPLJ___Action_EOGOGKOFPLJ___o *FONJOKHKAKE;
  System_Func_EOGOGKOFPLJ__T__o *EJAAOBFHGJN;
  System_Func_EOGOGKOFPLJ__T__o *CBFGKPJLKIK;
  System_Action_NJIEBADJPEJ__o *method_00;
  KOOGFNAPCGG_c *pKVar4;
  ulong uVar5;
  int32_t *piVar6;
  Il2CppObject *pIVar7;
  KOOGFNAPCGG_o *pKVar8;
  System_Nullable_TimeSpan__o __this_02;
  Il2CppClass *local_70;
  void *pvStack_68;
  
                    /* try { // try from 03553d14 to 03653d1b has its CatchHandler @ 03553d78 */
  method_00 = ACAEGJPJDAA;
  if ((DAT_045682b6 & 1) == 0) {
                    /* try { // try from 03553d1c to 03653d1f has its CatchHandler @ 03553d68 */
                    /* try { // try from 03553d20 to 03653d23 has its CatchHandler @ 035530c0 */
    FUN_01bab630(&
                 System_Action<int,_Action<EOGOGKOFPLJ>,_Action<EOGOGKOFPLJ>,_Action<EOGOGKOFPLJ>>_TypeInfo
                );
                    /* try { // try from 03553d24 to 03653d27 has its CatchHandler @ 03553d4c */
                    /* try { // try from 03553d28 to 03653d97 has its CatchHandler @ 035530c0 */
    FUN_01bab630(&Method_CBIDCBEJPON_PFJNKOOJDDM<NJIEBADJPEJ>__);
                    /* catch() { ... } // from try @ 03553c6c with catch @ 03553d30 */
                    /* catch() { ... } // from try @ 03553c40 with catch @ 03553d34 */
                    /* catch() { ... } // from try @ 03553c5c with catch @ 03553d38 */
    FUN_01bab630(&System_Func<EOGOGKOFPLJ,_NJIEBADJPEJ>_TypeInfo);
                    /* catch() { ... } // from try @ 03553c30 with catch @ 03553d3c */
                    /* catch() { ... } // from try @ 03553c14 with catch @ 03553d40 */
                    /* catch() { ... } // from try @ 03553c04 with catch @ 03553d44 */
    FUN_01bab630(&Method_CBIDCBEJPON_IAENJBADEON_CACMOLMGPEC__);
                    /* catch() { ... } // from try @ 03553be8 with catch @ 03553d48 */
                    /* catch() { ... } // from try @ 03553d24 with catch @ 03553d4c */
                    /* catch() { ... } // from try @ 03553bd8 with catch @ 03553d50 */
    FUN_01bab630(&Method_CBIDCBEJPON_IAENJBADEON_ICOOGFEMJHH__);
                    /* catch() { ... } // from try @ 03553bb4 with catch @ 03553d54 */
                    /* catch() { ... } // from try @ 03553ba0 with catch @ 03553d58 */
                    /* catch() { ... } // from try @ 03553b8c with catch @ 03553d5c */
    FUN_01bab630(&Method_CBIDCBEJPON_IAENJBADEON_JBBHGDLILEA__);
                    /* catch() { ... } // from try @ 03553bc4 with catch @ 03553d60 */
                    /* catch() { ... } // from try @ 03553b7c with catch @ 03553d64 */
                    /* catch() { ... } // from try @ 03553d1c with catch @ 03553d68 */
    FUN_01bab630(&CBIDCBEJPON_IAENJBADEON_TypeInfo);
                    /* catch() { ... } // from try @ 03553b6c with catch @ 03553d6c */
                    /* catch() { ... } // from try @ 03553b04 with catch @ 03553d70 */
                    /* catch() { ... } // from try @ 03553aa8 with catch @ 03553d74 */
    FUN_01bab630(&KOOGFNAPCGG_TypeInfo);
                    /* catch() { ... } // from try @ 03553d14 with catch @ 03553d78 */
    FUN_01bab630(&Method_System_Lazy<TimeSpan>_get_Value__);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>_GetValueOrDefault__);
                    /* try { // try from 03553d98 to 03653d9b has its CatchHandler @ 03553da8 */
    FUN_01bab630(&Method_System_Nullable<TimeSpan>__ctor__);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>_get_HasValue__);
                    /* catch() { ... } // from try @ 03553d98 with catch @ 03553da8 */
    DAT_045682b6 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(CBIDCBEJPON_IAENJBADEON_TypeInfo);
                    /* try { // try from 03553db8 to 03653e27 has its CatchHandler @ 03553e3c */
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    pIVar7 = __this_00 + 1;
    pIVar7->klass = (Il2CppClass *)MINHPKOPAIE.fields._0_8_;
    __this_00[1].monitor = (void *)MINHPKOPAIE.fields.value.fields._ticks;
    __this_00[2].monitor = AAIHDEKMIJG;
    thunk_FUN_01c20e04(&__this_00[2].monitor,AAIHDEKMIJG);
    __this_00[3].monitor = (void *)DEMAKGLNJNN.fields._source;
    *(bool *)&__this_00[3].klass = DKKOMKLDIBB;
    thunk_FUN_01c20e04(&__this_00[3].monitor,0);
    if (*(char *)&pIVar7->klass == '\0') {
      __this_01 = (__this->fields).CHFMIFDKGFO;
      if (__this_01 == (System_Lazy_TimeSpan__o *)0x0) goto LAB_03553f98;
      SVar2 = System_Lazy<TimeSpan>__get_Value(__this_01,Method_System_Lazy<TimeSpan>_get_Value__);
                    /* try { // try from 03553e28 to 03653e33 has its CatchHandler @ 035530c0 */
                    /* try { // try from 03553e34 to 03653e3b has its CatchHandler @ 03553e3c */
      local_70 = (Il2CppClass *)0x0;
      pvStack_68 = (void *)0x0;
      __this_02.fields.value.fields._ticks = SVar2.fields._ticks;
      __this_02.fields._0_8_ = &local_70;
                    /* catch() { ... } // from try @ 03553db8 with catch @ 03553e3c
                       catch() { ... } // from try @ 03553e34 with catch @ 03553e3c */
      System_Nullable<TimeSpan>___ctor
                (__this_02,(System_TimeSpan_o)Method_System_Nullable<TimeSpan>__ctor__._ticks,
                 (MethodInfo_27FB8F4 *)method_00);
      __this_00[1].monitor = pvStack_68;
      pIVar7->klass = local_70;
    }
    pKVar8 = (__this->fields).DKNHMJIANAB;
    if (pKVar8 != (KOOGFNAPCGG_o *)0x0) {
      pKVar4 = pKVar8->klass;
      uVar1._0_1_ = (pKVar4->_2).rank;
      uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar1;
      if (uVar5 != 0) {
        piVar6 = &((pKVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)KOOGFNAPCGG_TypeInfo) {
            pVVar3 = pKVar4->vtable + *piVar6;
            goto LAB_03553ee4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar8,KOOGFNAPCGG_TypeInfo,0);
LAB_03553ee4:
      (*pVVar3->methodPtr)(pKVar8,CJFAPGEEPLM,__this_00 + 2,pVVar3->method);
      FONJOKHKAKE = (System_Action_int__Action_EOGOGKOFPLJ___Action_EOGOGKOFPLJ___Action_EOGOGKOFPLJ___o
                     *)thunk_FUN_01bda818(
                                         System_Action<int,_Action<EOGOGKOFPLJ>,_Action<EOGOGKOFPLJ>,_Action<EOGOGKOFPLJ>>_TypeInfo
                                         );
      System_Action<int,_object,_object,_object>___ctor();
      EJAAOBFHGJN = (System_Func_EOGOGKOFPLJ__T__o *)
                    thunk_FUN_01bda818(System_Func<EOGOGKOFPLJ,_NJIEBADJPEJ>_TypeInfo);
      System_Func<object,_object>___ctor();
      CBFGKPJLKIK = (System_Func_EOGOGKOFPLJ__T__o *)
                    thunk_FUN_01bda818(System_Func<EOGOGKOFPLJ,_NJIEBADJPEJ>_TypeInfo);
      System_Func<object,_object>___ctor();
      CBIDCBEJPON__PFJNKOOJDDM<object>
                (__this,FONJOKHKAKE,EJAAOBFHGJN,CBFGKPJLKIK,(System_Action_T__o *)ACAEGJPJDAA,
                 PJELLDNLCKK,PGFAIJMMOHJ,KGLGMDJELEI,
                 (System_Threading_CancellationToken_o)__this_00[3].monitor,
                 Method_CBIDCBEJPON_PFJNKOOJDDM<NJIEBADJPEJ>__);
      return;
    }
  }
LAB_03553f98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DJMOHOGGMCB(Action<OHAHOONNEIC> CJNHFNHJHPE)  [RVA 0x3453FA4]
// CBIDCBEJPON$$DJMOHOGGMCB @ RVA 0x3453FA4

void CBIDCBEJPON__DJMOHOGGMCB
               (CBIDCBEJPON_o *__this,System_Action_OHAHOONNEIC__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_OHAHOONNEIC__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OHAHOONNEIC__o *pSVar5;
  System_Action_OHAHOONNEIC__o **ppSVar6;
  System_Action_OHAHOONNEIC__o *source;
  
  if ((DAT_045682b7 & 1) == 0) {
    FUN_01bab630(&System_Action<OHAHOONNEIC>_TypeInfo);
    DAT_045682b7 = 1;
  }
  ppSVar6 = &(__this->fields).JAALFNDOBHH;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<OHAHOONNEIC>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OHAHOONNEIC>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OHAHOONNEIC__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

