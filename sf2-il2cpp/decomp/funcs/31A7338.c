// EGPGCNBJPEH$$PILFDPOEAMB @ RVA 0x31A7338

UniRx_Async_UniTask_o
EGPGCNBJPEH__PILFDPOEAMB
          (EGPGCNBJPEH_o *__this,UnityEngine_Networking_UnityWebRequest_o *OICIFAIBNDM,
          PDBDELCMKJG_o *OKBIKHHKOEN,MethodInfo *method)

{
  UniRx_Async_UniTask_o UVar1;
  MethodInfo *method_00;
  UniRx_Async_UniTaskCompletionSource_o *pUVar2;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_o __this_00;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_o __this_01;
  System_Action_c *local_b0;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Fields UStack_a8;
  EGPGCNBJPEH_o *local_98;
  UnityEngine_Networking_UnityWebRequest_o *local_90;
  PDBDELCMKJG_o *pPStack_88;
  intptr_t iStack_80;
  intptr_t iStack_78;
  intptr_t local_70;
  intptr_t iStack_68;
  intptr_t iStack_60;
  System_Reflection_MethodInfo_o *pSStack_58;
  System_Reflection_MethodInfo_o *local_50;
  
  if ((DAT_04566b1b & 1) == 0) {
    FUN_01bab630(&
                 Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Start<EGPGCNBJPEH_BBIOFMLPIEA>__
                );
    DAT_04566b1b = 1;
  }
  local_50 = (System_Reflection_MethodInfo_o *)0x0;
  iStack_68 = 0;
  local_70 = 0;
  pSStack_58 = (System_Reflection_MethodInfo_o *)0x0;
  iStack_60 = 0;
  pPStack_88 = (PDBDELCMKJG_o *)0x0;
  local_90 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  iStack_78 = 0;
  iStack_80 = 0;
  local_b0 = (System_Action_c *)0x0;
  local_98 = (EGPGCNBJPEH_o *)0x0;
  UStack_a8 = (UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Fields)ZEXT816(0);
  UStack_a8 = (UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Fields)
              UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__Create((MethodInfo *)0x0);
  pUVar2 = (UniRx_Async_UniTaskCompletionSource_o *)((ulong)&local_b0 | 8);
  thunk_FUN_01c20e04(pUVar2,0);
  local_98 = __this;
  thunk_FUN_01c20e04(&local_98,__this);
  local_90 = OICIFAIBNDM;
  thunk_FUN_01c20e04(&local_90,OICIFAIBNDM);
  pPStack_88 = OKBIKHHKOEN;
  thunk_FUN_01c20e04(&pPStack_88,OKBIKHHKOEN);
  local_b0 = (System_Action_c *)CONCAT44(local_b0._4_4_,0xffffffff);
  __this_00.fields.moveNext = (System_Action_o *)&local_b0;
  __this_00.fields.promise = pUVar2;
  method_00 = 
  Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Start<EGPGCNBJPEH_BBIOFMLPIEA>__;
  UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__Start<EGPGCNBJPEH_BBIOFMLPIEA>
            (__this_00,
             (EGPGCNBJPEH_BBIOFMLPIEA_o *)
             Method_UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder_Start<EGPGCNBJPEH_BBIOFMLPIEA>__
             ,(MethodInfo_1E3A7FC *)method);
  __this_01.fields.moveNext = (System_Action_o *)0x0;
  __this_01.fields.promise = pUVar2;
  UVar1 = UniRx_Async_CompilerServices_AsyncUniTaskMethodBuilder__get_Task(__this_01,method_00);
  return (UniRx_Async_UniTask_o)UVar1.fields.awaiter;
}

