// TypeDefIndex 1540
// Namespace: 
// [CompilerGenerated]
// private struct EGPGCNBJPEH.AIDIGIKHBAJ : IAsyncStateMachine
// Fields:
//   public int <>1__state; // 0x0
//   public AsyncUniTaskVoidMethodBuilder <>t__builder; // 0x8
//   public BKMILGLGFCM parameters; // 0x10
//   public EGPGCNBJPEH <>4__this; // 0x18
//   private UnityWebRequest <webRequest>5__2; // 0x20
//   private UniTask.Awaiter <>u__1; // 0x28

// ===== private void MoveNext()  [RVA 0x31A7C34]
// EGPGCNBJPEH.AIDIGIKHBAJ$$MoveNext @ RVA 0x31A7C34

/* WARNING: Removing unreachable block (ram,0x032a7ef0) */

void EGPGCNBJPEH_AIDIGIKHBAJ__MoveNext(EGPGCNBJPEH_AIDIGIKHBAJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Networking_UnityWebRequest_o *pUVar3;
  System_String_o *pSVar4;
  UniRx_Async_UniTask_Awaiter_o *pUVar5;
  UnityEngine_Networking_DownloadHandler_o *__this_00;
  int64_t EAJPLEMEEAB;
  DMKKAPNMDKJ_o *__this_01;
  MethodInfo *method_00;
  BKMILGLGFCM_o *pBVar6;
  UnityEngine_Networking_UnityWebRequest_o **ppUVar7;
  Il2CppObject *pIVar8;
  int iVar9;
  System_Action_DMKKAPNMDKJ__o *pSVar10;
  undefined1 auVar11 [16];
  UniRx_Async_UniTask_Fields local_60;
  UniRx_Async_UniTask_Fields local_58;
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = __this;
  if ((DAT_04566b1d & 1) == 0) {
    FUN_01bab630(&
                 Method_UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted<UniTask_Awaiter,_EGPGCNBJPEH_AIDIGIKHBAJ>__
                );
    FUN_01bab630(&DMKKAPNMDKJ_TypeInfo);
    FUN_01bab630(&UniRx_Async_UniTask_TypeInfo);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    auVar11 = FUN_01bab630(&StringLiteral_11803/*"Send POST request to '"*/);
    DAT_04566b1d = 1;
  }
  local_60.awaiter = (UniRx_Async_IAwaiter_o *)0x0;
  local_58.awaiter = (UniRx_Async_IAwaiter_o *)0x0;
  iVar9 = (__this->fields).__1__state;
  pIVar8 = (Il2CppObject *)(__this->fields).__4__this;
  if (iVar9 == 0) {
    local_58.awaiter = (__this->fields).__u__1.fields.task.fields.awaiter;
    iVar9 = -1;
    (__this->fields).__u__1.fields.task.fields.awaiter = (UniRx_Async_IAwaiter_o *)0x0;
    (__this->fields).__1__state = -1;
  }
  else {
    pBVar6 = (__this->fields).parameters;
    if (pBVar6 == (BKMILGLGFCM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
    }
    pUVar3 = UnityEngine_Networking_UnityWebRequest__Post
                       ((pBVar6->fields).super.PHONOLEMBHN,(pBVar6->fields).CHMPFPNNPCC,
                        (MethodInfo *)0x0);
    (__this->fields)._webRequest_5__2 = pUVar3;
    thunk_FUN_01c20e04();
    pBVar6 = (__this->fields).parameters;
    if (pBVar6 == (BKMILGLGFCM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    pSVar4 = System_String__Concat
                       (StringLiteral_11803/*"Send POST request to '"*/,(pBVar6->fields).super.PHONOLEMBHN,StringLiteral_802/*"'"*/,
                        (MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA(pIVar8,pSVar4,(MethodInfo *)0x0);
    if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    local_60.awaiter =
         (UniRx_Async_IAwaiter_o *)
         EGPGCNBJPEH__PILFDPOEAMB
                   ((EGPGCNBJPEH_o *)pIVar8,(__this->fields)._webRequest_5__2,
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
      pUVar5 = &(__this->fields).__u__1;
      (pUVar5->fields).task.fields.awaiter = local_58.awaiter;
      thunk_FUN_01c20e04(pUVar5,0);
      UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder__AwaitUnsafeOnCompleted<UniTask_Awaiter,_EGPGCNBJPEH_AIDIGIKHBAJ>
                ((UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_o)
                 &(__this->fields).__t__builder,(UniRx_Async_UniTask_Awaiter_o *)&local_58,__this,
                 Method_UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted<UniTask_Awaiter,_EGPGCNBJPEH_AIDIGIKHBAJ>__
                );
      return;
    }
  }
  UniRx_Async_UniTask_Awaiter__GetResult((UniRx_Async_UniTask_Awaiter_o)&local_58,(MethodInfo *)0x0)
  ;
  pUVar3 = (__this->fields)._webRequest_5__2;
  if (pUVar3 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar3,(MethodInfo *)0x0);
  pBVar6 = (__this->fields).parameters;
  if (pBVar6 == (BKMILGLGFCM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar10 = (pBVar6->fields).MIMKJIKCPGP;
  if (pSVar10 != (System_Action_DMKKAPNMDKJ__o *)0x0) {
    pUVar3 = (__this->fields)._webRequest_5__2;
    if (iVar2 == 1) {
      if (pUVar3 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler
                            (pUVar3,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar4 = UnityEngine_Networking_DownloadHandler__get_text(__this_00,(MethodInfo *)0x0);
    }
    else {
      if (pUVar3 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar4 = UnityEngine_Networking_UnityWebRequest__get_error(pUVar3,(MethodInfo *)0x0);
    }
    pUVar3 = (__this->fields)._webRequest_5__2;
    if (pUVar3 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    EAJPLEMEEAB = UnityEngine_Networking_UnityWebRequest__get_responseCode(pUVar3,(MethodInfo *)0x0)
    ;
    pBVar6 = (__this->fields).parameters;
    if (pBVar6 == (BKMILGLGFCM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar8 = (pBVar6->fields).super.OGFMJIABHHI;
    __this_01 = (DMKKAPNMDKJ_o *)thunk_FUN_01bda818(DMKKAPNMDKJ_TypeInfo);
    DMKKAPNMDKJ___ctor(__this_01,iVar2 == 1,pSVar4,EAJPLEMEEAB,pIVar8,(MethodInfo *)0x0);
    (*(code *)(pSVar10->fields).super.super.invoke_impl)
              ((pSVar10->fields).super.super.method_code,__this_01,
               (pSVar10->fields).super.super.method);
  }
  if (iVar9 < 0) {
    pUVar3 = (__this->fields)._webRequest_5__2;
    if (pUVar3 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_Networking_UnityWebRequest__Dispose(pUVar3,(MethodInfo *)0x0);
  }
  (__this->fields).__1__state = -2;
  ppUVar7 = &(__this->fields)._webRequest_5__2;
  *ppUVar7 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  thunk_FUN_01c20e04(ppUVar7,0);
  UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder__SetResult
            ((UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_o)
             &(__this->fields).__t__builder,(MethodInfo *)0x0);
  return;
}


// ===== private void SetStateMachine(IAsyncStateMachine stateMachine)  [RVA 0x31A8248]
// EGPGCNBJPEH.AIDIGIKHBAJ$$SetStateMachine @ RVA 0x31A8248

void EGPGCNBJPEH_AIDIGIKHBAJ__SetStateMachine
               (EGPGCNBJPEH_AIDIGIKHBAJ_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method
               )

{
  UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder__SetStateMachine
            ((UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_o)
             &(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}

