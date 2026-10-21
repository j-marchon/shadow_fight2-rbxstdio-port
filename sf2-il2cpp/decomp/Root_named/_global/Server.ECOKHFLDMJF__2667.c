// TypeDefIndex 2667
// Namespace: 
// [CompilerGenerated]
// private sealed class Server.ECOKHFLDMJF : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public Server <>4__this; // 0x20
//   private Server.GEBPLEKAGHN <>8__1; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x33BFCAC]
// CUDLR.Server.ECOKHFLDMJF$$.ctor @ RVA 0x33BFCAC

void CUDLR_Server_ECOKHFLDMJF___ctor
               (CUDLR_Server_ECOKHFLDMJF_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x33C194C]
// CUDLR.Server.ECOKHFLDMJF$$System.IDisposable.Dispose @ RVA 0x33C194C

void CUDLR_Server_ECOKHFLDMJF__System_IDisposable_Dispose
               (CUDLR_Server_ECOKHFLDMJF_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x33C1950]
// CUDLR.Server.ECOKHFLDMJF$$MoveNext @ RVA 0x33C1950

bool CUDLR_Server_ECOKHFLDMJF__MoveNext(CUDLR_Server_ECOKHFLDMJF_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Threading_Tasks_Task_HttpListenerContext__o *pSVar2;
  System_Net_HttpListenerContext_o *GJBOBDKIMEF;
  JOCIOCLPIHI_o *__this_00;
  CUDLR_Server_GEBPLEKAGHN_o *pCVar3;
  System_Func_bool__o *predicate;
  UnityEngine_WaitUntil_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Net_HttpListener_o *pSVar4;
  Il2CppObject **ppIVar5;
  CUDLR_Server_o *__this_02;
  CUDLR_Server_GEBPLEKAGHN_Fields *pCVar6;
  CUDLR_Server_GEBPLEKAGHN_o **ppCVar7;
  
  if ((DAT_04567dd8 & 1) == 0) {
    FUN_01bab630(&System_Func<bool>_TypeInfo);
    FUN_01bab630(&Method_CUDLR_Server_GEBPLEKAGHN_KOPPHCADDCB__);
    FUN_01bab630(&CUDLR_Server_GEBPLEKAGHN_TypeInfo);
    FUN_01bab630(&JOCIOCLPIHI_TypeInfo);
    FUN_01bab630(&Method_System_Threading_Tasks_Task<HttpListenerContext>_get_Result__);
    FUN_01bab630(&UnityEngine_WaitUntil_TypeInfo);
    DAT_04567dd8 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_02 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_02 == (CUDLR_Server_o *)0x0) goto LAB_034c1b44;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    ppCVar7 = &(__this->fields).__8__1;
    (__this->fields).__1__state = -1;
    if ((*ppCVar7 == (CUDLR_Server_GEBPLEKAGHN_o *)0x0) ||
       (pSVar2 = ((*ppCVar7)->fields).task,
       pSVar2 == (System_Threading_Tasks_Task_HttpListenerContext__o *)0x0)) goto LAB_034c1b44;
    GJBOBDKIMEF = (System_Net_HttpListenerContext_o *)
                  System_Threading_Tasks_Task<object>__get_Result
                            ((System_Threading_Tasks_Task_object__o *)pSVar2,
                             Method_System_Threading_Tasks_Task<HttpListenerContext>_get_Result__);
                    /* try { // try from 034c1a10 to 035c1b8f has its CatchHandler @ 034c1a10
                       catch() { ... } // from try @ 034c1a10 with catch @ 034c1a10
                       catch() { ... } // from try @ 034c1ee4 with catch @ 034c1a10
                       catch() { ... } // from try @ 034c205c with catch @ 034c1a10
                       catch() { ... } // from try @ 034c2168 with catch @ 034c1a10
                       catch() { ... } // from try @ 034c21a8 with catch @ 034c1a10 */
    __this_00 = (JOCIOCLPIHI_o *)thunk_FUN_01bda818(JOCIOCLPIHI_TypeInfo);
    method_00 = (MethodInfo *)0x0;
    JOCIOCLPIHI___ctor(__this_00,GJBOBDKIMEF,(MethodInfo *)0x0);
    if (__this_02 == (CUDLR_Server_o *)0x0) goto LAB_034c1b44;
    CUDLR_Server__GBEKBBBALIE(__this_02,__this_00,method_00);
    *ppCVar7 = (CUDLR_Server_GEBPLEKAGHN_o *)0x0;
    thunk_FUN_01c20e04(ppCVar7,0);
    method = extraout_x1_00;
  }
  if ((((__this_02->fields).CIBJEFICNOC != false) ||
      (pSVar4 = (__this_02->fields).PDALMPAOAFM, pSVar4 == (System_Net_HttpListener_o *)0x0)) ||
     ((pSVar4->fields).listening == false)) {
    return false;
  }
  pCVar3 = (CUDLR_Server_GEBPLEKAGHN_o *)
           thunk_FUN_01bda818(CUDLR_Server_GEBPLEKAGHN_TypeInfo,method);
  System_Object___ctor((Il2CppObject *)pCVar3,(MethodInfo *)0x0);
  ppCVar7 = &(__this->fields).__8__1;
  *ppCVar7 = pCVar3;
  thunk_FUN_01c20e04(ppCVar7,pCVar3);
  pSVar4 = (__this_02->fields).PDALMPAOAFM;
  if (pSVar4 != (System_Net_HttpListener_o *)0x0) {
    pCVar3 = *ppCVar7;
    pSVar2 = System_Net_HttpListener__GetContextAsync(pSVar4,(MethodInfo *)0x0);
    if (pCVar3 != (CUDLR_Server_GEBPLEKAGHN_o *)0x0) {
      pCVar6 = &pCVar3->fields;
      pCVar6->task = pSVar2;
      thunk_FUN_01c20e04(pCVar6,pSVar2);
      predicate = (System_Func_bool__o *)thunk_FUN_01bda818(System_Func<bool>_TypeInfo);
      System_Func<bool>___ctor();
      __this_01 = (UnityEngine_WaitUntil_o *)thunk_FUN_01bda818(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(__this_01,predicate,(MethodInfo *)0x0);
      ppIVar5 = &(__this->fields).__2__current;
      *ppIVar5 = (Il2CppObject *)__this_01;
      thunk_FUN_01c20e04(ppIVar5,__this_01);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
LAB_034c1b44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x33C1B48]
// CUDLR.Server.ECOKHFLDMJF$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x33C1B48

Il2CppObject *
CUDLR_Server_ECOKHFLDMJF__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CUDLR_Server_ECOKHFLDMJF_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x33C1B50]
// CUDLR.Server.ECOKHFLDMJF$$System.Collections.IEnumerator.Reset @ RVA 0x33C1B50

void CUDLR_Server_ECOKHFLDMJF__System_Collections_IEnumerator_Reset
               (CUDLR_Server_ECOKHFLDMJF_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_CUDLR_Server_ECOKHFLDMJF_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x33C1B88]
// CUDLR.Server.ECOKHFLDMJF$$System.Collections.IEnumerator.get_Current @ RVA 0x33C1B88

Il2CppObject *
CUDLR_Server_ECOKHFLDMJF__System_Collections_IEnumerator_get_Current
          (CUDLR_Server_ECOKHFLDMJF_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

