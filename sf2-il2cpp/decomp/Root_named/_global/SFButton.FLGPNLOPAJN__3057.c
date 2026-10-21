// TypeDefIndex 3057
// Namespace: 
// [CompilerGenerated]
// private sealed class SFButton.FLGPNLOPAJN : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public SFButton <>4__this; // 0x20
//   public int frames; // 0x28
//   public PointerEventData p_eventData; // 0x30
//   private WaitForEndOfFrame <delay>5__2; // 0x38

// ===== public void .ctor(int <>1__state)  [RVA 0x34BBDD0]
// SFButton.FLGPNLOPAJN$$.ctor @ RVA 0x34BBDD0

void SFButton_FLGPNLOPAJN___ctor
               (SFButton_FLGPNLOPAJN_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x34BC0E8]
// SFButton.FLGPNLOPAJN$$System.IDisposable.Dispose @ RVA 0x34BC0E8

void SFButton_FLGPNLOPAJN__System_IDisposable_Dispose
               (SFButton_FLGPNLOPAJN_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x34BC0EC]
// SFButton.FLGPNLOPAJN$$MoveNext @ RVA 0x34BC0EC

bool SFButton_FLGPNLOPAJN__MoveNext(SFButton_FLGPNLOPAJN_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  UnityEngine_WaitForEndOfFrame_o *__this_00;
  UnityEngine_WaitForEndOfFrame_o **ppUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  SFButton_c *pSVar4;
  Il2CppObject **ppIVar5;
  SFButton_o *pSVar6;
  
  if ((DAT_045685e1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_045685e1 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  pSVar6 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (pSVar6 == (SFButton_o *)0x0) goto LAB_035bc1f0;
    bVar2 = (pSVar6->fields).super.super.m_Interactable;
    (pSVar6->fields).HGLJOEEEGNL = true;
    if (bVar2 != false) {
      (*(pSVar6->klass->vtable)._48_DHDHDICMLCD.methodPtr)
                (pSVar6,(pSVar6->klass->vtable)._48_DHDHDICMLCD.method);
      method = extraout_x1_00;
    }
    __this_00 = (UnityEngine_WaitForEndOfFrame_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo,method);
    UnityEngine_WaitForEndOfFrame___ctor(__this_00,(MethodInfo *)0x0);
    ppUVar3 = &(__this->fields)._delay_5__2;
    *ppUVar3 = __this_00;
    thunk_FUN_01c20e04(ppUVar3,__this_00);
  }
  iVar1 = (__this->fields).frames + -1;
  (__this->fields).frames = iVar1;
  if (-1 < iVar1) {
    ppIVar5 = &(__this->fields).__2__current;
    *ppIVar5 = (Il2CppObject *)(__this->fields)._delay_5__2;
    thunk_FUN_01c20e04(ppIVar5);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (pSVar6 != (SFButton_o *)0x0) {
    pSVar4 = pSVar6->klass;
    (pSVar6->fields).HGLJOEEEGNL = false;
    (*(pSVar4->vtable)._50_OnClick.methodPtr)
              (pSVar6,(__this->fields).p_eventData,(pSVar4->vtable)._50_OnClick.method);
    return false;
  }
LAB_035bc1f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x34BC1F4]
// SFButton.FLGPNLOPAJN$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x34BC1F4

Il2CppObject *
SFButton_FLGPNLOPAJN__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (SFButton_FLGPNLOPAJN_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x34BC1FC]
// SFButton.FLGPNLOPAJN$$System.Collections.IEnumerator.Reset @ RVA 0x34BC1FC

void SFButton_FLGPNLOPAJN__System_Collections_IEnumerator_Reset
               (SFButton_FLGPNLOPAJN_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_SFButton_FLGPNLOPAJN_System_Collections_IEnumerator_Reset__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x34BC234]
// SFButton.FLGPNLOPAJN$$System.Collections.IEnumerator.get_Current @ RVA 0x34BC234

Il2CppObject *
SFButton_FLGPNLOPAJN__System_Collections_IEnumerator_get_Current
          (SFButton_FLGPNLOPAJN_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

