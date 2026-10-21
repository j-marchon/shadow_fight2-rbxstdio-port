// TypeDefIndex 3055
// Namespace: 
// [CompilerGenerated]
// private sealed class SFButton.JPGCLGHFPFI : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public SFButton <>4__this; // 0x20
//   public float delay; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x34BBD64]
// SFButton.JPGCLGHFPFI$$.ctor @ RVA 0x34BBD64

void SFButton_JPGCLGHFPFI___ctor
               (SFButton_JPGCLGHFPFI_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x34BBE5C]
// SFButton.JPGCLGHFPFI$$System.IDisposable.Dispose @ RVA 0x34BBE5C

void SFButton_JPGCLGHFPFI__System_IDisposable_Dispose
               (SFButton_JPGCLGHFPFI_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x34BBE60]
// SFButton.JPGCLGHFPFI$$MoveNext @ RVA 0x34BBE60

bool SFButton_JPGCLGHFPFI__MoveNext(SFButton_JPGCLGHFPFI_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar3;
  SFButton_o *pSVar4;
  float seconds;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_045685df & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Selectable_SelectionState>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Selectable_SelectionState>_get_Value__);
    auVar5 = FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_045685df = 1;
  }
  iVar1 = (__this->fields).__1__state;
  pSVar4 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (pSVar4 == (SFButton_o *)0x0) {
LAB_035bbf6c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
    }
    uVar2 = System_Nullable<Int32Enum>__get_Value
                      ((System_Nullable_Int32Enum__o)&(pSVar4->fields).NLGFKIHALIG,
                       Method_System_Nullable<Selectable_SelectionState>_get_Value__);
    (*(pSVar4->klass->vtable)._26_DoStateTransition.methodPtr)
              (pSVar4,(ulong)uVar2,0,(pSVar4->klass->vtable)._26_DoStateTransition.method);
    (pSVar4->fields).NLGFKIHALIG.fields = (System_Nullable_Selectable_SelectionState__Fields)0x0;
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (pSVar4 == (SFButton_o *)0x0) goto LAB_035bbf6c;
    if ((pSVar4->fields).NLGFKIHALIG.fields.hasValue != false) {
      seconds = (__this->fields).delay;
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
      ppIVar3 = &(__this->fields).__2__current;
      *ppIVar3 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar3,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x34BBF70]
// SFButton.JPGCLGHFPFI$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x34BBF70

Il2CppObject *
SFButton_JPGCLGHFPFI__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (SFButton_JPGCLGHFPFI_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x34BBF78]
// SFButton.JPGCLGHFPFI$$System.Collections.IEnumerator.Reset @ RVA 0x34BBF78

void SFButton_JPGCLGHFPFI__System_Collections_IEnumerator_Reset
               (SFButton_JPGCLGHFPFI_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_SFButton_JPGCLGHFPFI_System_Collections_IEnumerator_Reset__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x34BBFB0]
// SFButton.JPGCLGHFPFI$$System.Collections.IEnumerator.get_Current @ RVA 0x34BBFB0

Il2CppObject *
SFButton_JPGCLGHFPFI__System_Collections_IEnumerator_get_Current
          (SFButton_JPGCLGHFPFI_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

