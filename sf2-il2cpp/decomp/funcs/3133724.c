// ONPHBGJDFBM.HCDDHOMMEHE$$MoveNext @ RVA 0x3133724

/* WARNING: Type propagation algorithm not settling */

bool ONPHBGJDFBM_HCDDHOMMEHE__MoveNext(ONPHBGJDFBM_HCDDHOMMEHE_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForEndOfFrame_o *__this_00;
  UnityEngine_WaitForEndOfFrame_o **ppUVar2;
  MethodInfo *extraout_x1;
  System_Action_o *pSVar3;
  Il2CppObject **ppIVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_045666ea & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_045666ea = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    fVar5 = (__this->fields)._timePassed_5__2;
    (__this->fields).__1__state = -1;
    fVar6 = HLMIAIINJJG__NFICJKHFKCM((MethodInfo *)0x0);
    fVar5 = fVar5 + fVar6;
    (__this->fields)._timePassed_5__2 = fVar5;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields)._timePassed_5__2 = 0.0;
    (__this->fields).__1__state = -1;
    __this_00 = (UnityEngine_WaitForEndOfFrame_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo,method);
    UnityEngine_WaitForEndOfFrame___ctor(__this_00,(MethodInfo *)0x0);
    ppUVar2 = &(__this->fields)._delay_5__3;
    *ppUVar2 = __this_00;
    thunk_FUN_01c20e04(ppUVar2,__this_00);
    fVar5 = (__this->fields)._timePassed_5__2;
  }
  if ((__this->fields).timeoutSecond <= fVar5) {
    pSVar3 = (__this->fields).OnTimeout;
    if (pSVar3 != (System_Action_o *)0x0) {
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
    }
    return false;
  }
  ppIVar4 = &(__this->fields).__2__current;
  *ppIVar4 = (Il2CppObject *)(__this->fields)._delay_5__3;
  thunk_FUN_01c20e04(ppIVar4);
  (__this->fields).__1__state = 1;
  return true;
}

