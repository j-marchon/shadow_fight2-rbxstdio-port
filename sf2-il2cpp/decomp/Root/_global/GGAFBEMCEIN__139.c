// TypeDefIndex 139
// Namespace: 
// public class GGAFBEMCEIN
// Fields:
//   private IEnumerator NLNJKHHHELM; // 0x10
//   private Action<IAchievement[]> GJOMPCOHOJP; // 0x18
//   private Action<bool> JBNMABKLMAH; // 0x20

// ===== private void LAINOIECIHC(IAchievement[] BLJNOGICEFC)  [RVA 0x301BE54]
// GGAFBEMCEIN$$LAINOIECIHC @ RVA 0x301BE54

void GGAFBEMCEIN__LAINOIECIHC
               (GGAFBEMCEIN_o *__this,UnityEngine_SocialPlatforms_IAchievement_array *BLJNOGICEFC,
               MethodInfo *method)

{
  System_Action_IAchievement____o *pSVar1;
  
  pSVar1 = (__this->fields).GJOMPCOHOJP;
  if (pSVar1 != (System_Action_IAchievement____o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0311be68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,BLJNOGICEFC,
               (pSVar1->fields).super.super.method);
    return;
  }
  return;
}


// ===== private IEnumerator EIBLHJKINEN()  [RVA 0x301BE70]
// GGAFBEMCEIN$$EIBLHJKINEN @ RVA 0x301BE70

System_Collections_IEnumerator_o *
GGAFBEMCEIN__EIBLHJKINEN(GGAFBEMCEIN_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c14 & 1) == 0) {
    FUN_01bab630(&GGAFBEMCEIN_OLEGMJAGCAJ_TypeInfo);
    DAT_04565c14 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(GGAFBEMCEIN_OLEGMJAGCAJ_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void GIENGNEGHPJ(Action<IAchievement[]> BFDGGFADBEN)  [RVA 0x301BF04]
// GGAFBEMCEIN$$GIENGNEGHPJ @ RVA 0x301BF04

void GGAFBEMCEIN__GIENGNEGHPJ
               (GGAFBEMCEIN_o *__this,System_Action_IAchievement____o *BFDGGFADBEN,
               MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  long lVar2;
  System_Action_IAchievement____o *pSVar3;
  System_Action_IAchievement____o **ppSVar4;
  System_Action_IAchievement____c *pSVar5;
  
  if ((DAT_04565c15 & 1) == 0) {
    FUN_01bab630(&System_Action<IAchievement[]>_TypeInfo);
    FUN_01bab630(&Method_GGAFBEMCEIN_LAINOIECIHC__);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    DAT_04565c15 = 1;
  }
  ppSVar4 = &(__this->fields).GJOMPCOHOJP;
  *ppSVar4 = BFDGGFADBEN;
  thunk_FUN_01c20e04(ppSVar4,BFDGGFADBEN);
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
  pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<IAchievement[]>_TypeInfo);
  System_Action<object>___ctor();
  pSVar1 = System_Delegate__Remove((System_Delegate_o *)pSVar3,pSVar1,(MethodInfo *)0x0);
  pSVar5 = System_Action<IAchievement[]>_TypeInfo;
  if (pSVar1 == (System_Delegate_o *)0x0) {
    lVar2 = 0;
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
    *ppSVar4 = (System_Action_IAchievement____o *)0x0;
  }
  else {
                    /* try { // try from 0311bfd0 to 0321bff7 has its CatchHandler @ 0311c398 */
    pSVar3 = (System_Action_IAchievement____o *)
             thunk_FUN_01bda71c(pSVar1,System_Action<IAchievement[]>_TypeInfo);
    if (pSVar3 == (System_Action_IAchievement____o *)0x0) goto LAB_0311c0e0;
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
    *ppSVar4 = pSVar3;
    pSVar5 = System_Action<IAchievement[]>_TypeInfo;
    lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<IAchievement[]>_TypeInfo);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar1,pSVar5);
    }
  }
  thunk_FUN_01c20e04(ppSVar4,lVar2);
  pSVar3 = NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
                    /* try { // try from 0311c02c to 0321c053 has its CatchHandler @ 0311c394 */
  pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<IAchievement[]>_TypeInfo);
  System_Action<object>___ctor();
  pSVar1 = System_Delegate__Combine((System_Delegate_o *)pSVar3,pSVar1,(MethodInfo *)0x0);
  pSVar5 = System_Action<IAchievement[]>_TypeInfo;
  if (pSVar1 == (System_Delegate_o *)0x0) {
    lVar2 = 0;
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
    *ppSVar4 = (System_Action_IAchievement____o *)0x0;
  }
  else {
                    /* try { // try from 0311c05c to 0321c067 has its CatchHandler @ 0311c390 */
    pSVar3 = (System_Action_IAchievement____o *)
             thunk_FUN_01bda71c(pSVar1,System_Action<IAchievement[]>_TypeInfo);
    if (pSVar3 == (System_Action_IAchievement____o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar1,pSVar5);
    }
    ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
    *ppSVar4 = pSVar3;
    pSVar5 = System_Action<IAchievement[]>_TypeInfo;
                    /* try { // try from 0311c080 to 0321c083 has its CatchHandler @ 0311c364 */
                    /* try { // try from 0311c084 to 0321c093 has its CatchHandler @ 0311c38c */
    lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<IAchievement[]>_TypeInfo);
    if (lVar2 == 0) {
LAB_0311c0e0:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar1,pSVar5);
    }
  }
                    /* try { // try from 0311c0a8 to 0321c0b3 has its CatchHandler @ 0311c374 */
  thunk_FUN_01c20e04(ppSVar4,lVar2);
  return;
}


// ===== public void LDMPHMGMJAK(Action<bool> KMGFEDFECGO)  [RVA 0x301C0E8]
// GGAFBEMCEIN$$LDMPHMGMJAK @ RVA 0x301C0E8

void GGAFBEMCEIN__LDMPHMGMJAK
               (GGAFBEMCEIN_o *__this,System_Action_bool__o *KMGFEDFECGO,MethodInfo *method)

{
  ushort uVar1;
  System_Action_bool__o **ppSVar2;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  System_Action_bool__o *extraout_x1;
  System_Action_bool__o *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  method_00 = KMGFEDFECGO;
  if ((DAT_04565c16 & 1) == 0) {
                    /* try { // try from 0311c108 to 0321c10b has its CatchHandler @ 0311c354 */
                    /* try { // try from 0311c10c to 0321c113 has its CatchHandler @ 0311c360 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565c16 = 1;
    method_00 = extraout_x1;
  }
  GGAFBEMCEIN__GFAHOLHMPOM(__this,(MethodInfo *)method_00);
  ppSVar2 = &(__this->fields).JBNMABKLMAH;
  *ppSVar2 = KMGFEDFECGO;
  thunk_FUN_01c20e04(ppSVar2,KMGFEDFECGO);
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar4 = GGAFBEMCEIN__EIBLHJKINEN(__this,method_01);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = pPVar3->klass;
  uVar1._0_1_ = (pPVar6->_2).rank;
  uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar5 = pPVar6->vtable + *piVar8;
        goto LAB_0311c1a0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
                    /* try { // try from 0311c180 to 0321c1a3 has its CatchHandler @ 0311c368 */
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_0311c1a0:
  pSVar4 = (System_Collections_IEnumerator_o *)(*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
  (__this->fields).NLNJKHHHELM = pSVar4;
                    /* try { // try from 0311c1b8 to 0321c1eb has its CatchHandler @ 0311c380 */
  thunk_FUN_01c20e04(&__this->fields,pSVar4);
  return;
}


// ===== private void FGNINNOOCCL(bool OOGPLJBADCD)  [RVA 0x301C3D4]
// GGAFBEMCEIN$$FGNINNOOCCL @ RVA 0x301C3D4

void GGAFBEMCEIN__FGNINNOOCCL(GGAFBEMCEIN_o *__this,bool OOGPLJBADCD,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_bool__o *pSVar2;
  System_Action_bool__o **ppSVar3;
  
  if ((DAT_04565c17 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15476/*"[GamingServiceAuthenticator] CallFinished: value = "*/);
    DAT_04565c17 = 1;
  }
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_Boolean__ToString(true,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_15476/*"[GamingServiceAuthenticator] CallFinished: value = "*/,pSVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  ppSVar3 = &(__this->fields).JBNMABKLMAH;
  pSVar2 = *ppSVar3;
  if (pSVar2 != (System_Action_bool__o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,OOGPLJBADCD,
               (pSVar2->fields).super.super.method);
  }
  *ppSVar3 = (System_Action_bool__o *)0x0;
  thunk_FUN_01c20e04(ppSVar3,0);
  return;
}


// ===== private void GFAHOLHMPOM()  [RVA 0x301C1D0]
// GGAFBEMCEIN$$GFAHOLHMPOM @ RVA 0x301C1D0

void GGAFBEMCEIN__GFAHOLHMPOM(GGAFBEMCEIN_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Action_bool__c *pSVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  PBAKFOBIHEG_o *pPVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *extraout_x1;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  GGAFBEMCEIN_Fields *pGVar10;
  System_Action_bool__o *pSVar11;
  System_Collections_IEnumerator_o *pSVar12;
  NHJCFGACFDF_StaticFields *pNVar13;
  
                    /* try { // try from 0311c1ec to 0321c2c3 has its CatchHandler @ 0311baf0 */
  if ((DAT_04565c18 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_GGAFBEMCEIN_FFHKBMDDKBI__);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_15478/*"[GamingServiceAuthenticator] StopAuthenticateRoutine"*/);
    DAT_04565c18 = 1;
    method = extraout_x1;
  }
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NHJCFGACFDF_TypeInfo,method);
  }
  pSVar11 = NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI;
  pSVar3 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  pSVar3 = System_Delegate__Remove((System_Delegate_o *)pSVar11,pSVar3,(MethodInfo *)0x0);
  pSVar2 = System_Action<bool>_TypeInfo;
  pSVar11 = (System_Action_bool__o *)0x0;
  if (pSVar3 != (System_Delegate_o *)0x0) {
    pSVar11 = (System_Action_bool__o *)thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
    if (pSVar11 == (System_Action_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar3,pSVar2);
    }
  }
  NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI = pSVar11;
  pSVar2 = System_Action<bool>_TypeInfo;
                    /* try { // try from 0311c2c4 to 0321c30b has its CatchHandler @ 0311c388 */
  pNVar13 = NHJCFGACFDF_TypeInfo->static_fields;
  if (pSVar3 == (System_Delegate_o *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar3,pSVar2);
    }
  }
  thunk_FUN_01c20e04(pNVar13,lVar4);
  pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pGVar10 = &__this->fields;
  pSVar12 = pGVar10->NLNJKHHHELM;
  if (pPVar5 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0311c310 to 0321c313 has its CatchHandler @ 0311c37c */
  pPVar7 = pPVar5->klass;
  uVar1._0_1_ = (pPVar7->_2).rank;
  uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
                    /* try { // try from 0311c318 to 0321c31b has its CatchHandler @ 0311c370 */
                    /* try { // try from 0311c320 to 0321c323 has its CatchHandler @ 0311c36c */
  uVar8 = (ulong)uVar1;
                    /* try { // try from 0311c328 to 0321c333 has its CatchHandler @ 0311c384 */
  if (uVar8 != 0) {
                    /* try { // try from 0311c338 to 0321c33b has its CatchHandler @ 0311c35c */
    piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 0311c340 to 0321c343 has its CatchHandler @ 0311c358 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* catch() { ... } // from try @ 0311c080 with catch @ 0311c364 */
                    /* catch() { ... } // from try @ 0311c180 with catch @ 0311c368 */
                    /* catch() { ... } // from try @ 0311c320 with catch @ 0311c36c */
                    /* catch() { ... } // from try @ 0311c318 with catch @ 0311c370 */
        pVVar6 = pPVar7->vtable + (*piVar9 + 1);
        goto LAB_0311c374;
      }
                    /* try { // try from 0311c348 to 0321c34b has its CatchHandler @ 0311c350 */
      uVar8 = uVar8 - 1;
                    /* try { // try from 0311c34c to 0321c3a7 has its CatchHandler @ 0311baf0 */
      piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 0311c348 with catch @ 0311c350 */
    } while (uVar8 != 0);
  }
                    /* catch() { ... } // from try @ 0311c108 with catch @ 0311c354 */
                    /* catch() { ... } // from try @ 0311c340 with catch @ 0311c358 */
                    /* catch() { ... } // from try @ 0311c338 with catch @ 0311c35c */
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,1);
                    /* catch() { ... } // from try @ 0311c10c with catch @ 0311c360 */
LAB_0311c374:
                    /* catch() { ... } // from try @ 0311c0a8 with catch @ 0311c374 */
                    /* catch() { ... } // from try @ 0311c0c0 with catch @ 0311c378 */
                    /* catch() { ... } // from try @ 0311c310 with catch @ 0311c37c */
                    /* catch() { ... } // from try @ 0311c1b8 with catch @ 0311c380 */
                    /* catch() { ... } // from try @ 0311c328 with catch @ 0311c384 */
                    /* catch() { ... } // from try @ 0311c2c4 with catch @ 0311c388 */
  (*pVVar6->methodPtr)(pPVar5,pSVar12,pVVar6->method);
                    /* catch() { ... } // from try @ 0311c084 with catch @ 0311c38c */
                    /* catch() { ... } // from try @ 0311c05c with catch @ 0311c390 */
                    /* catch() { ... } // from try @ 0311c02c with catch @ 0311c394 */
  pGVar10->NLNJKHHHELM = (System_Collections_IEnumerator_o *)0x0;
                    /* catch() { ... } // from try @ 0311bfd0 with catch @ 0311c398 */
  thunk_FUN_01c20e04(pGVar10,0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0311c3a8 to 0321c3ab has its CatchHandler @ 0311ccc8 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0311c3ac to 0321c5eb has its CatchHandler @ 0311baf0 */
  UnityEngine_Debug__Log(StringLiteral_15478/*"[GamingServiceAuthenticator] StopAuthenticateRoutine"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void DGLJCGNHLIG()  [RVA 0x301C4CC]
// GGAFBEMCEIN$$DGLJCGNHLIG @ RVA 0x301C4CC

void GGAFBEMCEIN__DGLJCGNHLIG(GGAFBEMCEIN_o *__this,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  long lVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Action_bool__o **ppSVar3;
  System_Action_IAchievement____o *pSVar4;
  System_Action_bool__o *pSVar5;
  System_Action_IAchievement____o **ppSVar6;
  NHJCFGACFDF_StaticFields *pNVar7;
  System_Action_IAchievement____c *pSVar8;
  
  if ((DAT_04565c19 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action<IAchievement[]>_TypeInfo);
    FUN_01bab630(&Method_GGAFBEMCEIN_FFHKBMDDKBI__);
    FUN_01bab630(&Method_GGAFBEMCEIN_LAINOIECIHC__);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    DAT_04565c19 = 1;
    method = extraout_x1;
  }
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NHJCFGACFDF_TypeInfo,method);
  }
  pSVar4 = NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
  pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<IAchievement[]>_TypeInfo);
  System_Action<object>___ctor();
  pSVar1 = System_Delegate__Remove((System_Delegate_o *)pSVar4,pSVar1,(MethodInfo *)0x0);
  pSVar8 = System_Action<IAchievement[]>_TypeInfo;
  if (pSVar1 == (System_Delegate_o *)0x0) {
    lVar2 = 0;
    ppSVar6 = &NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
    *ppSVar6 = (System_Action_IAchievement____o *)0x0;
  }
  else {
    pSVar4 = (System_Action_IAchievement____o *)
             thunk_FUN_01bda71c(pSVar1,System_Action<IAchievement[]>_TypeInfo);
    if (pSVar4 == (System_Action_IAchievement____o *)0x0) goto LAB_0311c6cc;
    ppSVar6 = &NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
    *ppSVar6 = pSVar4;
    pSVar8 = System_Action<IAchievement[]>_TypeInfo;
    lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<IAchievement[]>_TypeInfo);
    if (lVar2 == 0) goto LAB_0311c67c;
  }
                    /* try { // try from 0311c5ec to 0321c613 has its CatchHandler @ 0311ce0c */
  thunk_FUN_01c20e04(ppSVar6,lVar2);
  pSVar5 = NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI;
  pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  pSVar1 = System_Delegate__Remove((System_Delegate_o *)pSVar5,pSVar1,(MethodInfo *)0x0);
  pSVar8 = (System_Action_IAchievement____c *)System_Action<bool>_TypeInfo;
  pSVar5 = (System_Action_bool__o *)0x0;
                    /* try { // try from 0311c648 to 0321c66f has its CatchHandler @ 0311cd6c */
  if ((pSVar1 == (System_Delegate_o *)0x0) ||
     (pSVar5 = (System_Action_bool__o *)thunk_FUN_01bda71c(pSVar1,System_Action<bool>_TypeInfo),
     pSVar5 != (System_Action_bool__o *)0x0)) {
    NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI = pSVar5;
    pSVar8 = (System_Action_IAchievement____c *)System_Action<bool>_TypeInfo;
    pNVar7 = NHJCFGACFDF_TypeInfo->static_fields;
    if (pSVar1 == (System_Delegate_o *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<bool>_TypeInfo);
                    /* try { // try from 0311c674 to 0321c6bb has its CatchHandler @ 0311cd64 */
      if (lVar2 == 0) {
LAB_0311c67c:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar1,pSVar8);
      }
    }
    thunk_FUN_01c20e04(pNVar7,lVar2);
    GGAFBEMCEIN__GFAHOLHMPOM(__this,method_00);
    ppSVar6 = &(__this->fields).GJOMPCOHOJP;
    *ppSVar6 = (System_Action_IAchievement____o *)0x0;
    thunk_FUN_01c20e04(ppSVar6,0);
    ppSVar3 = &(__this->fields).JBNMABKLMAH;
    *ppSVar3 = (System_Action_bool__o *)0x0;
                    /* try { // try from 0311c6bc to 0321c777 has its CatchHandler @ 0311baf0 */
    thunk_FUN_01c20e04(ppSVar3,0);
    return;
  }
LAB_0311c6cc:
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar1,pSVar8);
}


// ===== public void .ctor()  [RVA 0x301C6D8]
// GGAFBEMCEIN$$.ctor @ RVA 0x301C6D8

void GGAFBEMCEIN___ctor(GGAFBEMCEIN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void FFHKBMDDKBI(bool OANJGOPOFDP)  [RVA 0x301C6E0]
// GGAFBEMCEIN$$FFHKBMDDKBI @ RVA 0x301C6E0

void GGAFBEMCEIN__FFHKBMDDKBI(GGAFBEMCEIN_o *__this,bool OANJGOPOFDP,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_Delegate_o *pSVar4;
  long lVar5;
  ACHLOMELAJE_o *__this_00;
  int CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_bool__o *pSVar6;
  NHJCFGACFDF_StaticFields *pNVar7;
  
  if ((DAT_04565c1a & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_GGAFBEMCEIN_FFHKBMDDKBI__);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15477/*"[GamingServiceAuthenticator] OnAuthenticate: isAuth = "*/);
    DAT_04565c1a = 1;
  }
                    /* try { // try from 0311c778 to 0321c79f has its CatchHandler @ 0311cd70 */
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = System_Boolean__ToString(true,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(StringLiteral_15477/*"[GamingServiceAuthenticator] OnAuthenticate: isAuth = "*/,pSVar3,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 0311c7d4 to 0321c7fb has its CatchHandler @ 0311cd68 */
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0311c804 to 0321c813 has its CatchHandler @ 0311cd50 */
  pSVar6 = NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI;
  pSVar4 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
                    /* try { // try from 0311c824 to 0321c82b has its CatchHandler @ 0311cd54 */
  method_01 = (MethodInfo *)0x0;
  pSVar4 = System_Delegate__Remove((System_Delegate_o *)pSVar6,pSVar4,(MethodInfo *)0x0);
  pSVar1 = System_Action<bool>_TypeInfo;
  pSVar6 = (System_Action_bool__o *)0x0;
  if (pSVar4 != (System_Delegate_o *)0x0) {
    pSVar6 = (System_Action_bool__o *)thunk_FUN_01bda71c(pSVar4,System_Action<bool>_TypeInfo);
    if (pSVar6 == (System_Action_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar4,pSVar1);
    }
  }
  NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI = pSVar6;
  pSVar1 = System_Action<bool>_TypeInfo;
  pNVar7 = NHJCFGACFDF_TypeInfo->static_fields;
  if (pSVar4 == (System_Delegate_o *)0x0) {
    lVar5 = 0;
  }
  else {
                    /* try { // try from 0311c86c to 0321c88f has its CatchHandler @ 0311cd4c */
    lVar5 = thunk_FUN_01bda71c(pSVar4,System_Action<bool>_TypeInfo);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar4,pSVar1);
    }
  }
                    /* try { // try from 0311c890 to 0321cba3 has its CatchHandler @ 0311baf0 */
  thunk_FUN_01c20e04(pNVar7,lVar5);
  GGAFBEMCEIN__GFAHOLHMPOM(__this,method_00);
  if (OANJGOPOFDP) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) {
LAB_0311c994:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    CJNHFNHJHPE = 0;
  }
  else {
    iVar2 = IMAPABEJECG__MEHFGJDCBDP((MethodInfo *)0x0);
    if (iVar2 != 1) goto LAB_0311c974;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_0311c994;
    CJNHFNHJHPE = (__this_00->fields).KAJIMOOPDMG + 1;
  }
  method_01 = (MethodInfo *)0x0;
  ACHLOMELAJE__GBKHEJFFFCP(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
LAB_0311c974:
  GGAFBEMCEIN__FGNINNOOCCL(__this,OANJGOPOFDP,method_01);
  return;
}

