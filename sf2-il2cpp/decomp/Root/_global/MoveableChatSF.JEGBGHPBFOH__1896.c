// TypeDefIndex 1896
// Namespace: 
// [CompilerGenerated]
// private sealed class MoveableChatSF.JEGBGHPBFOH : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public MoveableChatSF <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x325687C]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF.JEGBGHPBFOH$$.ctor @ RVA 0x325687C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH_o *__this,int32_t __1__state,
               MethodInfo *method)

{
                    /* try { // try from 03356888 to 03456897 has its CatchHandler @ 03356a18 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3256C5C]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF.JEGBGHPBFOH$$System.IDisposable.Dispose @ RVA 0x3256C5C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x3256C60]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF.JEGBGHPBFOH$$MoveNext @ RVA 0x3256C60

bool Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH__MoveNext
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar3;
  System_Collections_IEnumerator_o **ppSVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_0456716c & 1) == 0) {
    auVar5 = FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    DAT_0456716c = 1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pNVar3 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
    }
    (*(pNVar3->klass->vtable)._18_Close.methodPtr)(pNVar3,(pNVar3->klass->vtable)._18_Close.method);
    ppSVar4 = &(pNVar3->fields).OALIOADCDAP;
    *ppSVar4 = (System_Collections_IEnumerator_o *)0x0;
    thunk_FUN_01c20e04(ppSVar4,0);
    EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    UnityEngine_WaitForSecondsRealtime___ctor(__this_00,0.05,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x3256D38]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF.JEGBGHPBFOH$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3256D38

Il2CppObject *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x3256D40]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF.JEGBGHPBFOH$$System.Collections.IEnumerator.Reset @ RVA 0x3256D40

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3256D78]
// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF.JEGBGHPBFOH$$System.Collections.IEnumerator.get_Current @ RVA 0x3256D78

Il2CppObject *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JEGBGHPBFOH_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

