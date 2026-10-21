// TypeDefIndex 1542
// Namespace: 
// public class EGPGCNBJPEH : MOBODMIBMKA
// Fields:
//   public const string ADBDDFDLMCK = "Exception occurred";

// ===== public void .ctor()  [RVA 0x31A705C]
// EGPGCNBJPEH$$.ctor @ RVA 0x31A705C

void EGPGCNBJPEH___ctor(EGPGCNBJPEH_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void ILGCEJBAOHG(BKMILGLGFCM OKBIKHHKOEN)  [RVA 0x31A7064]
// EGPGCNBJPEH$$ILGCEJBAOHG @ RVA 0x31A7064

void EGPGCNBJPEH__ILGCEJBAOHG(EGPGCNBJPEH_o *__this,BKMILGLGFCM_o *OKBIKHHKOEN,MethodInfo *method)

{
  undefined1 local_8 [8];
  
  local_8[0] = EGPGCNBJPEH__IMNBFGDFNEP(__this,OKBIKHHKOEN,method);
  UniRx_Async_UniTaskVoid__Forget(local_8,0);
  return;
}


// ===== public void KNMENIBLFGF(OJJLPLHNGBP OKBIKHHKOEN)  [RVA 0x31A7158]
// EGPGCNBJPEH$$KNMENIBLFGF @ RVA 0x31A7158

void EGPGCNBJPEH__KNMENIBLFGF(EGPGCNBJPEH_o *__this,OJJLPLHNGBP_o *OKBIKHHKOEN,MethodInfo *method)

{
  undefined1 local_8 [8];
  
  local_8[0] = EGPGCNBJPEH__AHCFIKAIIDM(__this,OKBIKHHKOEN,method);
  UniRx_Async_UniTaskVoid__Forget(local_8,0);
  return;
}


// ===== private void FOHAELNOKHC(UnityWebRequest OICIFAIBNDM, PDBDELCMKJG OKBIKHHKOEN)  [RVA 0x31A724C]
// EGPGCNBJPEH$$FOHAELNOKHC @ RVA 0x31A724C

void EGPGCNBJPEH__FOHAELNOKHC
               (EGPGCNBJPEH_o *__this,UnityEngine_Networking_UnityWebRequest_o *OICIFAIBNDM,
               PDBDELCMKJG_o *OKBIKHHKOEN,MethodInfo *method)

{
  int32_t value;
  uint uVar1;
  ulong uVar2;
  System_ValueTuple_string__string__array *pSVar3;
  ulong uVar4;
  System_String_o **ppSVar5;
  double dVar6;
  
  if ((DAT_04566b18 & 1) == 0) {
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04566b18 = 1;
  }
  if (OKBIKHHKOEN != (PDBDELCMKJG_o *)0x0) {
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    dVar6 = System_TimeSpan__get_TotalSeconds
                      ((System_TimeSpan_o)&(OKBIKHHKOEN->fields).KBFOKFPKAKN,(MethodInfo *)0x0);
    if (OICIFAIBNDM != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      value = -0x80000000;
      if (dVar6 != INFINITY) {
        value = (int)dVar6;
      }
      UnityEngine_Networking_UnityWebRequest__set_timeout(OICIFAIBNDM,value,(MethodInfo *)0x0);
      pSVar3 = (OKBIKHHKOEN->fields).EBIPCCLLMCP;
      if ((pSVar3 != (System_ValueTuple_string__string__array *)0x0) &&
         (0 < (int)pSVar3->max_length)) {
        uVar4 = 0;
        uVar2 = pSVar3->max_length & 0xffffffff;
        ppSVar5 = &pSVar3->m_Items[0].fields.Item2;
        do {
          if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          UnityEngine_Networking_UnityWebRequest__SetRequestHeader
                    (OICIFAIBNDM,((System_ValueTuple_string__string__Fields *)(ppSVar5 + -1))->Item1
                     ,*ppSVar5,(MethodInfo *)0x0);
          uVar1 = (uint)pSVar3->max_length;
          uVar2 = (ulong)uVar1;
          uVar4 = uVar4 + 1;
          ppSVar5 = ppSVar5 + 2;
        } while ((long)uVar4 < (long)(int)uVar1);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private UniTaskVoid IMNBFGDFNEP(BKMILGLGFCM OKBIKHHKOEN)  [RVA 0x31A7084]
// EGPGCNBJPEH$$IMNBFGDFNEP @ RVA 0x31A7084

undefined1
EGPGCNBJPEH__IMNBFGDFNEP(EGPGCNBJPEH_o *__this,BKMILGLGFCM_o *OKBIKHHKOEN,MethodInfo *method)

{
  undefined1 uVar1;
  UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_o __this_00;
  EGPGCNBJPEH_AIDIGIKHBAJ_Fields local_70;
  
  if ((DAT_04566b19 & 1) == 0) {
    FUN_01bab630(&
                 Method_UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_Start<EGPGCNBJPEH_AIDIGIKHBAJ>__
                );
    DAT_04566b19 = 1;
  }
  local_70.__4__this = (EGPGCNBJPEH_o *)0x0;
  local_70.parameters = (BKMILGLGFCM_o *)0x0;
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
  UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start<EGPGCNBJPEH_AIDIGIKHBAJ>
            (__this_00,(EGPGCNBJPEH_AIDIGIKHBAJ_o *)&local_70,
             Method_UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder_Start<EGPGCNBJPEH_AIDIGIKHBAJ>__
            );
  uVar1 = UniRx_Async_CompilerServices_AsyncUniTaskVoidMethodBuilder__get_Task
                    (__this_00,(MethodInfo *)0x0);
  return uVar1;
}


// ===== private UniTaskVoid AHCFIKAIIDM(OJJLPLHNGBP OKBIKHHKOEN)  [RVA 0x31A7178]
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


// ===== private UniTask PILFDPOEAMB(UnityWebRequest OICIFAIBNDM, PDBDELCMKJG OKBIKHHKOEN)  [RVA 0x31A7338]
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

