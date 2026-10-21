// TypeDefIndex 1224
// Namespace: 
// [CompilerGenerated]
// private sealed class RequestObject.HCDDHOMMEHE : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public float timeoutSecond; // 0x20
//   public Action OnTimeout; // 0x28
//   private float <timePassed>5__2; // 0x30
//   private WaitForEndOfFrame <delay>5__3; // 0x38

// ===== public void .ctor(int <>1__state)  [RVA 0x31332B8]
// RequestObject.HCDDHOMMEHE$$.ctor @ RVA 0x31332B8

void RequestObject_HCDDHOMMEHE___ctor
               (RequestObject_HCDDHOMMEHE_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3133720]
// RequestObject.HCDDHOMMEHE$$System.IDisposable.Dispose @ RVA 0x3133720

void RequestObject_HCDDHOMMEHE__System_IDisposable_Dispose
               (RequestObject_HCDDHOMMEHE_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x3133724]
// RequestObject.HCDDHOMMEHE$$MoveNext @ RVA 0x3133724

/* WARNING: Type propagation algorithm not settling */

bool RequestObject_HCDDHOMMEHE__MoveNext(RequestObject_HCDDHOMMEHE_o *__this,MethodInfo *method)

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


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x3133814]
// RequestObject.HCDDHOMMEHE$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3133814

Il2CppObject *
RequestObject_HCDDHOMMEHE__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (RequestObject_HCDDHOMMEHE_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x313381C]
// RequestObject.HCDDHOMMEHE$$System.Collections.IEnumerator.Reset @ RVA 0x313381C

void RequestObject_HCDDHOMMEHE__System_Collections_IEnumerator_Reset
               (RequestObject_HCDDHOMMEHE_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_ONPHBGJDFBM_HCDDHOMMEHE_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3133854]
// RequestObject.HCDDHOMMEHE$$System.Collections.IEnumerator.get_Current @ RVA 0x3133854

Il2CppObject *
RequestObject_HCDDHOMMEHE__System_Collections_IEnumerator_get_Current
          (RequestObject_HCDDHOMMEHE_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

