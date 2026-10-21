// TypeDefIndex 138
// Namespace: 
// [CompilerGenerated]
// private sealed class GGAFBEMCEIN.OLEGMJAGCAJ : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public GGAFBEMCEIN <>4__this; // 0x20
//   private float <timeout>5__2; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x301BEDC]
// GGAFBEMCEIN.OLEGMJAGCAJ$$.ctor @ RVA 0x301BEDC

void GGAFBEMCEIN_OLEGMJAGCAJ___ctor
               (GGAFBEMCEIN_OLEGMJAGCAJ_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x301C9A4]
// GGAFBEMCEIN.OLEGMJAGCAJ$$System.IDisposable.Dispose @ RVA 0x301C9A4

void GGAFBEMCEIN_OLEGMJAGCAJ__System_IDisposable_Dispose
               (GGAFBEMCEIN_OLEGMJAGCAJ_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x301C9A8]
// GGAFBEMCEIN.OLEGMJAGCAJ$$MoveNext @ RVA 0x301C9A8

bool GGAFBEMCEIN_OLEGMJAGCAJ__MoveNext(GGAFBEMCEIN_OLEGMJAGCAJ_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_String_o *pSVar5;
  UnityEngine_WaitForSeconds_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppObject **ppIVar6;
  GGAFBEMCEIN_o *__this_01;
  System_Action_bool__o *pSVar7;
  NHJCFGACFDF_StaticFields *pNVar8;
  System_Action_bool__c *pSVar9;
  float fVar10;
  
  if ((DAT_04565c1b & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_GGAFBEMCEIN_FFHKBMDDKBI__);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    FUN_01bab630(&StringLiteral_526/*" sec"*/);
    FUN_01bab630(&StringLiteral_15475/*"[GamingServiceAuthenticator] AuthenticateRoutine: timeout. signed = "*/);
    FUN_01bab630(&StringLiteral_15473/*"[GamingServiceAuthenticator] AuthenticateRoutine: starting..."*/);
    FUN_01bab630(&StringLiteral_15474/*"[GamingServiceAuthenticator] AuthenticateRoutine: timeout failed: "*/);
    DAT_04565c1b = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0);
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(bool_TypeInfo);
    }
    pSVar5 = System_Boolean__ToString(true,(MethodInfo *)0x0);
                    /* try { // try from 0311cbec to 0321cbef has its CatchHandler @ 0311cd58 */
                    /* try { // try from 0311cbf0 to 0321cbf7 has its CatchHandler @ 0311cd5c */
                    /* try { // try from 0311cbf8 to 0321cc93 has its CatchHandler @ 0311baf0 */
    pSVar5 = System_String__Concat(StringLiteral_15475/*"[GamingServiceAuthenticator] AuthenticateRoutine: timeout. signed = "*/,pSVar5,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI;
    pSVar3 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
    System_Action<bool>___ctor();
    pSVar3 = System_Delegate__Remove((System_Delegate_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
    pSVar9 = System_Action<bool>_TypeInfo;
                    /* try { // try from 0311cc94 to 0321cc97 has its CatchHandler @ 0311cd48 */
    pSVar7 = (System_Action_bool__o *)0x0;
                    /* try { // try from 0311cc98 to 0321cc9b has its CatchHandler @ 0311cd44 */
                    /* try { // try from 0311cc9c to 0321cd07 has its CatchHandler @ 0311baf0 */
    if ((pSVar3 != (System_Delegate_o *)0x0) &&
       (pSVar7 = (System_Action_bool__o *)thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo),
       pSVar7 == (System_Action_bool__o *)0x0)) goto LAB_0311ce68;
    NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI = pSVar7;
    pSVar9 = System_Action<bool>_TypeInfo;
    pNVar8 = NHJCFGACFDF_TypeInfo->static_fields;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 0311c3a8 with catch @ 0311ccc8 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
LAB_0311ccdc:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar9);
      }
    }
    thunk_FUN_01c20e04(pNVar8,lVar4);
    if (__this_01 == (GGAFBEMCEIN_o *)0x0) goto LAB_0311ce60;
    (__this_01->fields).NLNJKHHHELM = (System_Collections_IEnumerator_o *)0x0;
    fVar10 = (float)thunk_FUN_01c20e04(&__this_01->fields,0);
                    /* try { // try from 0311cd08 to 0321cd2f has its CatchHandler @ 0311ceb0 */
    pSVar5 = System_Single__ToString(fVar10,(MethodInfo *)&(__this->fields)._timeout_5__2);
    method_00 = StringLiteral_526/*" sec"*/;
                    /* try { // try from 0311cd30 to 0321cd3b has its CatchHandler @ 0311baf0 */
    pSVar5 = System_String__Concat
                       (StringLiteral_15474/*"[GamingServiceAuthenticator] AuthenticateRoutine: timeout failed: "*/,pSVar5,(System_String_o *)StringLiteral_526/*" sec"*/,
                        (MethodInfo *)0x0);
                    /* try { // try from 0311cd3c to 0321cd43 has its CatchHandler @ 0311ceb0 */
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0311cc98 with catch @ 0311cd44
                       try { // try from 0311cd44 to 0321cd87 has its CatchHandler @ 0311baf0 */
                    /* catch() { ... } // from try @ 0311cc94 with catch @ 0311cd48 */
                    /* catch() { ... } // from try @ 0311c86c with catch @ 0311cd4c */
    GGAFBEMCEIN__FGNINNOOCCL(__this_01,false,method_00);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
    }
    pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__)
    ;
    if (pIVar2 == (Il2CppObject *)0x0) {
LAB_0311ce60:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (__this->fields)._timeout_5__2 = (float)*(int *)((long)&pIVar2[4].klass + 4) / 1000.0;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__Log(StringLiteral_15473/*"[GamingServiceAuthenticator] AuthenticateRoutine: starting..."*/,(MethodInfo *)0x0);
    if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI;
    pSVar3 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
    System_Action<bool>___ctor();
    pSVar3 = System_Delegate__Remove((System_Delegate_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
    pSVar9 = System_Action<bool>_TypeInfo;
    pSVar7 = (System_Action_bool__o *)0x0;
    if ((pSVar3 != (System_Delegate_o *)0x0) &&
       (pSVar7 = (System_Action_bool__o *)thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo),
       pSVar7 == (System_Action_bool__o *)0x0)) {
LAB_0311ce68:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar3,pSVar9);
    }
    NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI = pSVar7;
    pSVar9 = System_Action<bool>_TypeInfo;
    pNVar8 = NHJCFGACFDF_TypeInfo->static_fields;
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* catch() { ... } // from try @ 0311cbec with catch @ 0311cd58 */
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) goto LAB_0311ccdc;
    }
                    /* catch() { ... } // from try @ 0311cbf0 with catch @ 0311cd5c */
                    /* catch() { ... } // from try @ 0311cba4 with catch @ 0311cd60 */
    thunk_FUN_01c20e04(pNVar8,lVar4);
                    /* catch() { ... } // from try @ 0311c674 with catch @ 0311cd64 */
                    /* catch() { ... } // from try @ 0311c7d4 with catch @ 0311cd68 */
                    /* catch() { ... } // from try @ 0311c648 with catch @ 0311cd6c */
                    /* catch() { ... } // from try @ 0311c778 with catch @ 0311cd70 */
    pSVar7 = NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI;
    pSVar3 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
                    /* try { // try from 0311cd88 to 0321cd8b has its CatchHandler @ 0311cd98 */
    System_Action<bool>___ctor();
                    /* catch() { ... } // from try @ 0311cd88 with catch @ 0311cd98 */
    pSVar3 = System_Delegate__Combine((System_Delegate_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
    pSVar9 = System_Action<bool>_TypeInfo;
    pSVar7 = (System_Action_bool__o *)0x0;
    if ((pSVar3 != (System_Delegate_o *)0x0) &&
       (pSVar7 = (System_Action_bool__o *)thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo),
       pSVar7 == (System_Action_bool__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar3,pSVar9);
    }
    NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI = pSVar7;
    pSVar9 = System_Action<bool>_TypeInfo;
    pNVar8 = NHJCFGACFDF_TypeInfo->static_fields;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 0311cdd8 to 0321ce0b has its CatchHandler @ 0311ceb0 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) goto LAB_0311ce68;
    }
    thunk_FUN_01c20e04(pNVar8,lVar4);
    IMAPABEJECG__KJFENNDOBOB((MethodInfo *)0x0);
    fVar10 = (__this->fields)._timeout_5__2;
                    /* catch() { ... } // from try @ 0311c5ec with catch @ 0311ce0c
                       try { // try from 0311ce0c to 0321ce23 has its CatchHandler @ 0311baf0 */
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
                    /* try { // try from 0311ce24 to 0321ce27 has its CatchHandler @ 0311ce3c */
    UnityEngine_WaitForSeconds___ctor(__this_00,fVar10,(MethodInfo *)0x0);
    ppIVar6 = &(__this->fields).__2__current;
    *ppIVar6 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar6,__this_00);
                    /* catch() { ... } // from try @ 0311ce24 with catch @ 0311ce3c */
    (__this->fields).__1__state = 1;
    return true;
  }
                    /* catch() { ... } // from try @ 0311c804 with catch @ 0311cd50 */
  return false;
                    /* catch() { ... } // from try @ 0311c824 with catch @ 0311cd54 */
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x301CE7C]
// GGAFBEMCEIN.OLEGMJAGCAJ$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x301CE7C

Il2CppObject *
GGAFBEMCEIN_OLEGMJAGCAJ__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GGAFBEMCEIN_OLEGMJAGCAJ_o *__this,MethodInfo *method)

{
                    /* try { // try from 0311ce7c to 0321ceaf has its CatchHandler @ 0311ceb0 */
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x301CE84]
// GGAFBEMCEIN.OLEGMJAGCAJ$$System.Collections.IEnumerator.Reset @ RVA 0x301CE84

void GGAFBEMCEIN_OLEGMJAGCAJ__System_Collections_IEnumerator_Reset
               (GGAFBEMCEIN_OLEGMJAGCAJ_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_GGAFBEMCEIN_OLEGMJAGCAJ_System_Collections_IEnumerator_Reset__)
  ;
                    /* catch() { ... } // from try @ 0311cd08 with catch @ 0311ceb0
                       catch() { ... } // from try @ 0311cd3c with catch @ 0311ceb0
                       catch() { ... } // from try @ 0311cdd8 with catch @ 0311ceb0
                       catch() { ... } // from try @ 0311ce7c with catch @ 0311ceb0 */
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x301CEBC]
// GGAFBEMCEIN.OLEGMJAGCAJ$$System.Collections.IEnumerator.get_Current @ RVA 0x301CEBC

Il2CppObject *
GGAFBEMCEIN_OLEGMJAGCAJ__System_Collections_IEnumerator_get_Current
          (GGAFBEMCEIN_OLEGMJAGCAJ_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

