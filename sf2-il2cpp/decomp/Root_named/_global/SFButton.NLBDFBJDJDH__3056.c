// TypeDefIndex 3056
// Namespace: 
// [CompilerGenerated]
// private sealed class SFButton.NLBDFBJDJDH : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public SFButton <>4__this; // 0x20
//   public PointerEventData p_eventData; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x34BAB14]
// SFButton.NLBDFBJDJDH$$.ctor @ RVA 0x34BAB14

void SFButton_NLBDFBJDJDH___ctor
               (SFButton_NLBDFBJDJDH_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x34BBFB8]
// SFButton.NLBDFBJDJDH$$System.IDisposable.Dispose @ RVA 0x34BBFB8

void SFButton_NLBDFBJDJDH__System_IDisposable_Dispose
               (SFButton_NLBDFBJDJDH_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x34BBFBC]
// SFButton.NLBDFBJDJDH$$MoveNext @ RVA 0x34BBFBC

bool SFButton_NLBDFBJDJDH__MoveNext(SFButton_NLBDFBJDJDH_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  SFButton_o *pSVar3;
  UnityEngine_WaitForSeconds_o *__this_00;
  MethodInfo *extraout_x1;
  SFButton_c *pSVar4;
  Il2CppObject **ppIVar5;
  
  if ((DAT_045685e0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_045685e0 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  pSVar3 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (pSVar3 == (SFButton_o *)0x0) goto LAB_035bc09c;
    pSVar4 = pSVar3->klass;
    (pSVar3->fields).HGLJOEEEGNL = false;
    (*(pSVar4->vtable)._50_OnClick.methodPtr)
              (pSVar3,(__this->fields).p_eventData,(pSVar4->vtable)._50_OnClick.method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (pSVar3 != (SFButton_o *)0x0) {
      bVar2 = (pSVar3->fields).super.super.m_Interactable;
      (pSVar3->fields).HGLJOEEEGNL = true;
      if (bVar2 != false) {
        (*(pSVar3->klass->vtable)._48_DHDHDICMLCD.methodPtr)
                  (pSVar3,(pSVar3->klass->vtable)._48_DHDHDICMLCD.method);
      }
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,0.22500001,(MethodInfo *)0x0);
      ppIVar5 = &(__this->fields).__2__current;
      *ppIVar5 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar5,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_035bc09c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(pSVar3,method);
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x34BC0A0]
// SFButton.NLBDFBJDJDH$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x34BC0A0

Il2CppObject *
SFButton_NLBDFBJDJDH__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (SFButton_NLBDFBJDJDH_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x34BC0A8]
// SFButton.NLBDFBJDJDH$$System.Collections.IEnumerator.Reset @ RVA 0x34BC0A8

void SFButton_NLBDFBJDJDH__System_Collections_IEnumerator_Reset
               (SFButton_NLBDFBJDJDH_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_SFButton_NLBDFBJDJDH_System_Collections_IEnumerator_Reset__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x34BC0E0]
// SFButton.NLBDFBJDJDH$$System.Collections.IEnumerator.get_Current @ RVA 0x34BC0E0

Il2CppObject *
SFButton_NLBDFBJDJDH__System_Collections_IEnumerator_get_Current
          (SFButton_NLBDFBJDJDH_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

