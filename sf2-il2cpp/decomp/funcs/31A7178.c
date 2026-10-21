// EGPGCNBJPEH$$AHCFIKAIIDM @ RVA 0x31A7178

undefined1
EGPGCNBJPEH__AHCFIKAIIDM(EGPGCNBJPEH_o *__this,OJJLPLHNGBP_o *OKBIKHHKOEN,MethodInfo *method)

{
  undefined1 uVar1;
  UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_o __this_00;
  EGPGCNBJPEH_PDMIKNOACEB_Fields local_70;
  
  if ((DAT_04566b1a & 1) == 0) {
    FUN_01bab630(&
                 Method_UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_Start<EGPGCNBJPEH_PDMIKNOACEB>__
                );
    DAT_04566b1a = 1;
  }
  local_70.__4__this = (EGPGCNBJPEH_o *)0x0;
  local_70.parameters = (OJJLPLHNGBP_o *)0x0;
  local_70.__u__1.fields.task.fields.awaiter =
       (UniRx_Async_UniTask_Awaiter_Fields)(UniRx_Async_UniTask_o)0x0;
  local_70._webRequest_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  local_70.__t__builder.fields.moveNext =
       (UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_Fields)(System_Action_o *)0x0;
  local_70.__1__state = 0;
  local_70._4_4_ = 0;
  local_70.__t__builder =
       UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder__Create((MethodInfo *)0x0);
  __this_00.fields.moveNext =
       (UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_Fields)((ulong)&local_70 | 8);
  thunk_FUN_01c20e04(__this_00.fields.moveNext,0);
  local_70.__4__this = __this;
  thunk_FUN_01c20e04(&local_70.__4__this,__this);
  local_70.parameters = OKBIKHHKOEN;
  thunk_FUN_01c20e04(&local_70.parameters,OKBIKHHKOEN);
  local_70.__1__state = -1;
  UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start<EGPGCNBJPEH_PDMIKNOACEB>
            (__this_00,(EGPGCNBJPEH_PDMIKNOACEB_o *)&local_70,
             Method_UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_Start<EGPGCNBJPEH_PDMIKNOACEB>__
            );
  uVar1 = UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder__get_Task
                    (__this_00,(MethodInfo *)0x0);
  return uVar1;
}

