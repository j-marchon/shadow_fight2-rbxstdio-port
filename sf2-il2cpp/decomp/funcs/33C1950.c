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

