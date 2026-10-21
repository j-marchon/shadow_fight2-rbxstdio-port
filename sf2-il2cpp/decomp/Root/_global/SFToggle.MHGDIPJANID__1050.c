// TypeDefIndex 1050
// Namespace: 
// [CompilerGenerated]
// private sealed class SFToggle.MHGDIPJANID : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public SFToggle <>4__this; // 0x20
//   public PointerEventData eventData; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x30D58FC]
// SFToggle.MHGDIPJANID$$.ctor @ RVA 0x30D58FC

void SFToggle_MHGDIPJANID___ctor
               (SFToggle_MHGDIPJANID_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x30D5924]
// SFToggle.MHGDIPJANID$$System.IDisposable.Dispose @ RVA 0x30D5924

void SFToggle_MHGDIPJANID__System_IDisposable_Dispose
               (SFToggle_MHGDIPJANID_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x30D5928]
// SFToggle.MHGDIPJANID$$MoveNext @ RVA 0x30D5928

bool SFToggle_MHGDIPJANID__MoveNext(SFToggle_MHGDIPJANID_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar3;
  SFToggle_o *__this_01;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_0456632a & 1) == 0) {
    auVar4 = FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_0456632a = 1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_01 == (SFToggle_o *)0x0) goto LAB_031d5a00;
    (__this_01->fields).OJFJPPMMDKM = false;
    bVar2 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                      ((UnityEngine_EventSystems_UIBehaviour_o *)__this_01,(MethodInfo *)0x0);
    if (bVar2) {
      return false;
    }
    UnityEngine_UI_Toggle__OnPointerClick
              ((UnityEngine_UI_Toggle_o *)__this_01,(__this->fields).eventData,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_01 != (SFToggle_o *)0x0) {
      (__this_01->fields).OJFJPPMMDKM = true;
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,0.22500001,(MethodInfo *)0x0);
      ppIVar3 = &(__this->fields).__2__current;
      *ppIVar3 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar3,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_031d5a00:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x30D5A04]
// SFToggle.MHGDIPJANID$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x30D5A04

Il2CppObject *
SFToggle_MHGDIPJANID__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (SFToggle_MHGDIPJANID_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x30D5A0C]
// SFToggle.MHGDIPJANID$$System.Collections.IEnumerator.Reset @ RVA 0x30D5A0C

void SFToggle_MHGDIPJANID__System_Collections_IEnumerator_Reset
               (SFToggle_MHGDIPJANID_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_SFToggle_MHGDIPJANID_System_Collections_IEnumerator_Reset__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x30D5A44]
// SFToggle.MHGDIPJANID$$System.Collections.IEnumerator.get_Current @ RVA 0x30D5A44

Il2CppObject *
SFToggle_MHGDIPJANID__System_Collections_IEnumerator_get_Current
          (SFToggle_MHGDIPJANID_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

