// EGPGCNBJPEH.BBIOFMLPIEA$$MoveNext @ RVA 0x31A8254

/* WARNING: Removing unreachable block (ram,0x032a8464) */
/* WARNING: Removing unreachable block (ram,0x032a86d0) */
/* WARNING: Type propagation algorithm not settling */

void EGPGCNBJPEH_BBIOFMLPIEA__MoveNext(EGPGCNBJPEH_BBIOFMLPIEA_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenRegistration_o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  System_Action_o *callback;
  UnityEngine_Networking_UnityWebRequest_o *pUVar4;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *asyncOperation;
  Il2CppObject *pIVar5;
  System_Object_array *args;
  long lVar6;
  undefined8 uVar7;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  MethodInfo_1E39C8C *in_x4;
  Il2CppObject *ODHBNGEGFCJ;
  PDBDELCMKJG_o *pPVar8;
  System_String_o *pSVar9;
  int iVar10;
  undefined1 auVar11 [16];
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_o __this_00;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_o __this_01;
  UniRx_Async_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_o local_a0;
  System_Threading_CancellationTokenRegistration_o local_78;
  System_Action_c *local_60;
  System_Action_AsyncOperation__o *pSStack_58;
  intptr_t iStack_50;
  UnityEngine_Networking_UnityWebRequest_o *pUStack_48;
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = __this;
  if ((DAT_04566b1e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&
                 Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted<UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter,_EGPGCNBJPEH_BBIOFMLPIEA>__
                );
    FUN_01bab630(&System_Threading_CancellationToken_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Networking_UnityWebRequest_Result_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Networking_UnityWebRequest_Abort__);
    FUN_01bab630(&StringLiteral_11269);
    auVar11 = FUN_01bab630(&StringLiteral_11268);
    DAT_04566b1e = 1;
  }
  pSStack_58 = (System_Action_AsyncOperation__o *)0x0;
  local_60 = (System_Action_c *)0x0;
  pUStack_48 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  iStack_50 = 0;
  iVar10 = (__this->fields).__1__state;
  ODHBNGEGFCJ = (Il2CppObject *)(__this->fields).__4__this;
  if (iVar10 == 0) {
    pUStack_48 = (__this->fields).__u__1.fields.result;
    iStack_50 = *(intptr_t *)&(__this->fields).__u__1.fields.status;
    pSStack_58 = (__this->fields).__u__1.fields.continuationAction;
    local_60 = (System_Action_c *)(__this->fields).__u__1.fields.asyncOperation;
    iVar10 = -1;
    (__this->fields).__u__1.fields.result = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.status = 0;
    (__this->fields).__u__1.fields.continuationAction = (System_Action_AsyncOperation__o *)0x0;
    (__this->fields).__u__1.fields.asyncOperation =
         (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)0x0;
    (__this->fields).__1__state = -1;
  }
  else {
    if (ODHBNGEGFCJ == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
    }
    EGPGCNBJPEH__FOHAELNOKHC
              (auVar11._0_8_,(__this->fields).webRequest,(__this->fields).parameters,in_x3);
    pPVar8 = (__this->fields).parameters;
    if (pPVar8 == (PDBDELCMKJG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((System_Threading_CancellationToken_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    System_Threading_CancellationToken__ThrowIfCancellationRequested
              ((System_Threading_CancellationToken_o)&(pPVar8->fields).DKICFPOCAFF,(MethodInfo *)0x0
              );
    pPVar8 = (__this->fields).parameters;
    if (pPVar8 == (PDBDELCMKJG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    callback = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    System_Threading_CancellationToken__Register
              (&local_78,(System_Threading_CancellationToken_o)&(pPVar8->fields).DKICFPOCAFF,
               callback,(MethodInfo *)0x0);
    local_a0.fields.asyncOperation =
         (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)
         CONCAT44(local_78.fields.m_callbackInfo._4_4_,(int32_t)local_78.fields.m_callbackInfo);
    local_a0.fields.continuationAction =
         (System_Action_AsyncOperation__o *)local_78.fields.m_registrationInfo.fields._source;
    local_a0.fields.status = local_78.fields.m_registrationInfo.fields._index;
    local_a0.fields._20_4_ = local_78.fields.m_registrationInfo.fields._12_4_;
    pSVar1 = &(__this->fields).__7__wrap1;
    (pSVar1->fields).m_registrationInfo.fields._index =
         local_78.fields.m_registrationInfo.fields._index;
    *(undefined4 *)&(pSVar1->fields).m_registrationInfo.fields.field_0xc =
         local_78.fields.m_registrationInfo.fields._12_4_;
    (__this->fields).__7__wrap1.fields.m_registrationInfo.fields._source =
         local_78.fields.m_registrationInfo.fields._source;
    (__this->fields).__7__wrap1.fields.m_callbackInfo =
         (System_Threading_CancellationCallbackInfo_o *)local_a0.fields.asyncOperation;
    thunk_FUN_01c20e04(&(__this->fields).__7__wrap1,0);
    pUVar4 = (__this->fields).webRequest;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    asyncOperation =
         UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar4,(MethodInfo *)0x0);
    UniRx_Async_UnityAsyncExtensions__GetAwaiter(&local_a0,asyncOperation,(MethodInfo *)0x0);
    pSStack_58 = local_a0.fields.continuationAction;
    local_60 = (System_Action_c *)local_a0.fields.asyncOperation;
    pUStack_48 = local_a0.fields.result;
    iStack_50 = local_a0.fields._16_8_;
    bVar2 = UniRx_Async_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter__get_IsCompleted
                      ((UniRx_Async_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_o *)
                       &stack0xffffffffffffffa0,(MethodInfo *)0x0);
    if (!bVar2) {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.result = pUStack_48;
      *(intptr_t *)&(__this->fields).__u__1.fields.status = iStack_50;
      (__this->fields).__u__1.fields.continuationAction = pSStack_58;
      (__this->fields).__u__1.fields.asyncOperation =
           (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)local_60;
      thunk_FUN_01c20e04(&(__this->fields).__u__1,0);
      __this_00.fields.moveNext = (System_Action_o *)&stack0xffffffffffffffa0;
      __this_00.fields.promise =
           (UniRx_Async_UniTaskCompletionSource_o *)&(__this->fields).__t__builder;
      UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__AwaitUnsafeOnCompleted<UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter,_EGPGCNBJPEH_BBIOFMLPIEA>
                (__this_00,
                 (UniRx_Async_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_o *)__this,
                 Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted<UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter,_EGPGCNBJPEH_BBIOFMLPIEA>__
                 ,in_x4);
      return;
    }
  }
  UniRx_Async_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter__GetResult
            ((UniRx_Async_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_o *)
             &stack0xffffffffffffffa0,(MethodInfo *)0x0);
  if (iVar10 < 0) {
    System_Threading_CancellationTokenRegistration__Dispose
              (&(__this->fields).__7__wrap1,(MethodInfo *)0x0);
  }
  pPVar8 = (__this->fields).parameters;
  (__this->fields).__7__wrap1.fields.m_callbackInfo =
       (System_Threading_CancellationCallbackInfo_o *)0x0;
  (__this->fields).__7__wrap1.fields.m_registrationInfo.fields._source =
       (System_Threading_SparselyPopulatedArrayFragment_T__o *)0x0;
  *(undefined8 *)&(__this->fields).__7__wrap1.fields.m_registrationInfo.fields._index = 0;
  if (pPVar8 == (PDBDELCMKJG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((System_Threading_CancellationToken_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  System_Threading_CancellationToken__ThrowIfCancellationRequested
            ((System_Threading_CancellationToken_o)&(pPVar8->fields).DKICFPOCAFF,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).webRequest;
  if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar3 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar4,(MethodInfo *)0x0);
  if (iVar3 == 1) {
    pPVar8 = (__this->fields).parameters;
    if (pPVar8 == (PDBDELCMKJG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar4 = (__this->fields).webRequest;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar9 = (pPVar8->fields).PHONOLEMBHN;
    local_a0.fields.asyncOperation =
         (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)
         UnityEngine_Networking_UnityWebRequest__get_responseCode(pUVar4,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_a0);
    pSVar9 = System_String__Format
                       (StringLiteral_11269,(Il2CppObject *)pSVar9,pIVar5,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    KFJJHMDIFIG__DHAAGKPHJLA(ODHBNGEGFCJ,pSVar9,(MethodInfo *)0x0);
  }
  else {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
    pPVar8 = (__this->fields).parameters;
    if (pPVar8 == (PDBDELCMKJG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar9 = (pPVar8->fields).PHONOLEMBHN;
    if ((pSVar9 != (System_String_o *)0x0) &&
       (lVar6 = thunk_FUN_01bda71c(pSVar9,(((args->obj).klass)->_1).element_class), lVar6 == 0)) {
      uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar7,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = (Il2CppObject *)pSVar9;
    thunk_FUN_01c20e04(args->m_Items,pSVar9);
    pUVar4 = (__this->fields).webRequest;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    local_78.fields.m_callbackInfo._0_4_ =
         UnityEngine_Networking_UnityWebRequest__get_result(pUVar4,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)
             thunk_FUN_01bda448(UnityEngine_Networking_UnityWebRequest_Result_TypeInfo,&local_78);
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class), lVar6 == 0)) {
      uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar7,0);
    }
    if ((uint)args->max_length < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[1] = pIVar5;
    thunk_FUN_01c20e04(args->m_Items + 1,pIVar5);
    pUVar4 = (__this->fields).webRequest;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    local_a0.fields.asyncOperation =
         (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)
         UnityEngine_Networking_UnityWebRequest__get_responseCode(pUVar4,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_a0);
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class), lVar6 == 0)) {
      uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar7,0);
    }
    if ((uint)args->max_length < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[2] = pIVar5;
    thunk_FUN_01c20e04(args->m_Items + 2,pIVar5);
    pUVar4 = (__this->fields).webRequest;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar9 = UnityEngine_Networking_UnityWebRequest__get_error(pUVar4,(MethodInfo *)0x0);
    if ((pSVar9 != (System_String_o *)0x0) &&
       (lVar6 = thunk_FUN_01bda71c(pSVar9,(((args->obj).klass)->_1).element_class), lVar6 == 0)) {
      uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar7,0);
    }
    if ((uint)args->max_length < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[3] = (Il2CppObject *)pSVar9;
    thunk_FUN_01c20e04(args->m_Items + 3,pSVar9);
    pSVar9 = System_String__Format(StringLiteral_11268,args,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    KFJJHMDIFIG__ONCJPMNKDIM(ODHBNGEGFCJ,pSVar9,(MethodInfo *)0x0);
  }
  (__this->fields).__1__state = -2;
  __this_01.fields.moveNext = (System_Action_o *)0x0;
  __this_01.fields.promise = (UniRx_Async_UniTaskCompletionSource_o *)&(__this->fields).__t__builder
  ;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__SetResult(__this_01,method_00);
  return;
}

