// FLFPJEKOAMK.FDECPNIEMAA$$SetStateMachine @ RVA 0x32CF58C

void FLFPJEKOAMK_FDECPNIEMAA__SetStateMachine
               (FLFPJEKOAMK_FDECPNIEMAA_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method
               )

{
  MethodInfo *in_x3;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_o __this_00;
  
  __this_00.fields.moveNext = (System_Action_o *)stateMachine;
  __this_00.fields.promise = (UniRx_Async_UniTaskCompletionSource_o *)&(__this->fields).__t__builder
  ;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__SetStateMachine
            (__this_00,(System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0,in_x3);
  return;
}

