// TypeDefIndex 1539
// Namespace: 
// [CompilerGenerated]
// private struct EGPGCNBJPEH.PDMIKNOACEB : IAsyncStateMachine
// Fields:
//   public int <>1__state; // 0x0
//   public AsyncUniTaskVoidMethodBuilder <>t__builder; // 0x8
//   public OJJLPLHNGBP parameters; // 0x10
//   public EGPGCNBJPEH <>4__this; // 0x18
//   private UnityWebRequest <webRequest>5__2; // 0x20
//   private UniTask.Awaiter <>u__1; // 0x28

// ===== private void MoveNext()  [RVA 0x31A7424]
// EGPGCNBJPEH.PDMIKNOACEB$$MoveNext @ RVA 0x31A7424

/* WARNING: Removing unreachable block (ram,0x032a7774) */

void EGPGCNBJPEH_PDMIKNOACEB__MoveNext(EGPGCNBJPEH_PDMIKNOACEB_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Networking_UnityWebRequest_o *pUVar2;
  System_String_o *pSVar3;
  UniRx_Async_UniTask_Awaiter_o *pUVar4;
  UnityEngine_Networking_DownloadHandler_o *pUVar5;
  System_Byte_array *IMMNELPBGIF;
  int64_t iVar6;
  NIEPOJOIFNE_o *__this_00;
  System_String_o *EHKEOHNBLCK;
  GPBHNPOEFDO_o *__this_01;
  MethodInfo *method_00;
  OJJLPLHNGBP_o *pOVar7;
  UnityEngine_Networking_UnityWebRequest_o **ppUVar8;
  Il2CppObject *pIVar9;
  int iVar10;
  System_Action_NIEPOJOIFNE__o *pSVar11;
  System_Action_GPBHNPOEFDO__o *pSVar12;
  undefined1 auVar13 [16];
  UniRx_Async_UniTask_Fields local_60;
  UniRx_Async_UniTask_Fields local_58;
  
  auVar13._8_8_ = method;
  auVar13._0_8_ = __this;
  if ((DAT_04566b1c & 1) == 0) {
    FUN_01bab630(&
                 Method_UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted<UniTask_Awaiter,_EGPGCNBJPEH_PDMIKNOACEB>__
                );
    FUN_01bab630(&GPBHNPOEFDO_TypeInfo);
    FUN_01bab630(&NIEPOJOIFNE_TypeInfo);
    FUN_01bab630(&UniRx_Async_UniTask_TypeInfo);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    auVar13 = FUN_01bab630(&StringLiteral_11802/*"Send GET request to '"*/);
    DAT_04566b1c = 1;
  }
  local_60.awaiter = (UniRx_Async_IAwaiter_o *)0x0;
  local_58.awaiter = (UniRx_Async_IAwaiter_o *)0x0;
  iVar10 = (__this->fields).__1__state;
  pIVar9 = (Il2CppObject *)(__this->fields).__4__this;
  if (iVar10 == 0) {
    local_58.awaiter = (__this->fields).__u__1.fields.task.fields.awaiter;
    iVar10 = -1;
    (__this->fields).__u__1.fields.task.fields.awaiter = (UniRx_Async_IAwaiter_o *)0x0;
    (__this->fields).__1__state = -1;
  }
  else {
    pOVar7 = (__this->fields).parameters;
    if (pOVar7 == (OJJLPLHNGBP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar13._0_8_,auVar13._8_8_);
    }
    pUVar2 = UnityEngine_Networking_UnityWebRequest__Get
                       ((pOVar7->fields).super.PHONOLEMBHN,(MethodInfo *)0x0);
    (__this->fields)._webRequest_5__2 = pUVar2;
    thunk_FUN_01c20e04();
    pOVar7 = (__this->fields).parameters;
    if (pOVar7 == (OJJLPLHNGBP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    pSVar3 = System_String__Concat
                       (StringLiteral_11802/*"Send GET request to '"*/,(pOVar7->fields).super.PHONOLEMBHN,StringLiteral_802/*"'"*/,
                        (MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA(pIVar9,pSVar3,(MethodInfo *)0x0);
    if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    local_60.awaiter =
         (UniRx_Async_IAwaiter_o *)
         EGPGCNBJPEH__PILFDPOEAMB
                   ((EGPGCNBJPEH_o *)pIVar9,(__this->fields)._webRequest_5__2,
                    (PDBDELCMKJG_o *)(__this->fields).parameters,method_00);
    if ((UniRx_Async_UniTask_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_58.awaiter =
         (UniRx_Async_IAwaiter_o *)
         UniRx_Async_UniTask__GetAwaiter((UniRx_Async_UniTask_o)&local_60,(MethodInfo *)0x0);
    bVar1 = UniRx_Async_UniTask_Awaiter__get_IsCompleted
                      ((UniRx_Async_UniTask_Awaiter_o)&local_58,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields).__1__state = 0;
      pUVar4 = &(__this->fields).__u__1;
      (pUVar4->fields).task.fields.awaiter = local_58.awaiter;
      thunk_FUN_01c20e04(pUVar4,0);
      UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder__AwaitUnsafeOnCompleted<UniTask_Awaiter,_EGPGCNBJPEH_PDMIKNOACEB>
                ((UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_o)
                 &(__this->fields).__t__builder,(UniRx_Async_UniTask_Awaiter_o *)&local_58,__this,
                 Method_UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted<UniTask_Awaiter,_EGPGCNBJPEH_PDMIKNOACEB>__
                );
      return;
    }
  }
  UniRx_Async_UniTask_Awaiter__GetResult((UniRx_Async_UniTask_Awaiter_o)&local_58,(MethodInfo *)0x0)
  ;
  pOVar7 = (__this->fields).parameters;
  if (pOVar7 == (OJJLPLHNGBP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar11 = (pOVar7->fields).JDOEIKJBBON;
  if (pSVar11 != (System_Action_NIEPOJOIFNE__o *)0x0) {
    pUVar2 = (__this->fields)._webRequest_5__2;
    if (pUVar2 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar5 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(pUVar2,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    IMMNELPBGIF = UnityEngine_Networking_DownloadHandler__get_data(pUVar5,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._webRequest_5__2;
    if (pUVar2 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = UnityEngine_Networking_UnityWebRequest__get_error(pUVar2,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._webRequest_5__2;
    if (pUVar2 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar6 = UnityEngine_Networking_UnityWebRequest__get_responseCode(pUVar2,(MethodInfo *)0x0);
    pOVar7 = (__this->fields).parameters;
    if (pOVar7 == (OJJLPLHNGBP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar9 = (pOVar7->fields).super.OGFMJIABHHI;
    __this_00 = (NIEPOJOIFNE_o *)thunk_FUN_01bda818(NIEPOJOIFNE_TypeInfo);
    NIEPOJOIFNE___ctor(__this_00,IMMNELPBGIF,pSVar3,iVar6,pIVar9,(MethodInfo *)0x0);
    (*(code *)(pSVar11->fields).super.super.invoke_impl)
              ((pSVar11->fields).super.super.method_code,__this_00,
               (pSVar11->fields).super.super.method);
    pOVar7 = (__this->fields).parameters;
    if (pOVar7 == (OJJLPLHNGBP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  pSVar12 = (pOVar7->fields).COLCEFFJGCH;
  if (pSVar12 != (System_Action_GPBHNPOEFDO__o *)0x0) {
    pUVar2 = (__this->fields)._webRequest_5__2;
    if (pUVar2 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar5 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(pUVar2,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = UnityEngine_Networking_DownloadHandler__get_text(pUVar5,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._webRequest_5__2;
    if (pUVar2 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    EHKEOHNBLCK = UnityEngine_Networking_UnityWebRequest__get_error(pUVar2,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._webRequest_5__2;
    if (pUVar2 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar6 = UnityEngine_Networking_UnityWebRequest__get_responseCode(pUVar2,(MethodInfo *)0x0);
    pOVar7 = (__this->fields).parameters;
    if (pOVar7 == (OJJLPLHNGBP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar9 = (pOVar7->fields).super.OGFMJIABHHI;
    __this_01 = (GPBHNPOEFDO_o *)thunk_FUN_01bda818(GPBHNPOEFDO_TypeInfo);
    GPBHNPOEFDO___ctor(__this_01,pSVar3,EHKEOHNBLCK,iVar6,pIVar9,(MethodInfo *)0x0);
    (*(code *)(pSVar12->fields).super.super.invoke_impl)
              ((pSVar12->fields).super.super.method_code,__this_01,
               (pSVar12->fields).super.super.method);
  }
  if (iVar10 < 0) {
    pUVar2 = (__this->fields)._webRequest_5__2;
    if (pUVar2 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_Networking_UnityWebRequest__Dispose(pUVar2,(MethodInfo *)0x0);
  }
  (__this->fields).__1__state = -2;
  ppUVar8 = &(__this->fields)._webRequest_5__2;
  *ppUVar8 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  thunk_FUN_01c20e04(ppUVar8,0);
  UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder__SetResult
            ((UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_o)
             &(__this->fields).__t__builder,(MethodInfo *)0x0);
  return;
}


// ===== private void SetStateMachine(IAsyncStateMachine stateMachine)  [RVA 0x31A7C28]
// EGPGCNBJPEH.PDMIKNOACEB$$SetStateMachine @ RVA 0x31A7C28

void EGPGCNBJPEH_PDMIKNOACEB__SetStateMachine
               (EGPGCNBJPEH_PDMIKNOACEB_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method
               )

{
  UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder__SetStateMachine
            ((UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_o)
             &(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}

