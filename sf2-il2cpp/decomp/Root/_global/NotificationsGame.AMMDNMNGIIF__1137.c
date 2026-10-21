// TypeDefIndex 1137
// Namespace: 
// [CompilerGenerated]
// private sealed class NotificationsGame.AMMDNMNGIIF : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public NotificationsGame <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x30F8540]
// Nekki.SF2.GUI.Dialogs.NotificationsGame.AMMDNMNGIIF$$.ctor @ RVA 0x30F8540

void Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF___ctor
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x30F8568]
// Nekki.SF2.GUI.Dialogs.NotificationsGame.AMMDNMNGIIF$$System.IDisposable.Dispose @ RVA 0x30F8568

void Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x30F856C]
// Nekki.SF2.GUI.Dialogs.NotificationsGame.AMMDNMNGIIF$$MoveNext @ RVA 0x30F856C

bool Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF__MoveNext
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  System_Collections_IEnumerator_o **ppSVar3;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar4;
  float seconds;
  
  if ((DAT_04566481 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04566481 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  pNVar2 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) goto LAB_031f8634;
    ppSVar3 = &(pNVar2->fields).NKCJILMGJKB;
    *ppSVar3 = (System_Collections_IEnumerator_o *)0x0;
    (pNVar2->fields).KHHFEDEDJID = true;
    thunk_FUN_01c20e04(ppSVar3,0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
      (pNVar2->fields).KHHFEDEDJID = false;
      seconds = (pNVar2->fields).HPMBLBOJPPB;
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
      ppIVar4 = &(__this->fields).__2__current;
      *ppIVar4 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar4,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_031f8634:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(pNVar2,method);
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x30F8638]
// Nekki.SF2.GUI.Dialogs.NotificationsGame.AMMDNMNGIIF$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x30F8638

Il2CppObject *
Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x30F8640]
// Nekki.SF2.GUI.Dialogs.NotificationsGame.AMMDNMNGIIF$$System.Collections.IEnumerator.Reset @ RVA 0x30F8640

void Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x30F8678]
// Nekki.SF2.GUI.Dialogs.NotificationsGame.AMMDNMNGIIF$$System.Collections.IEnumerator.get_Current @ RVA 0x30F8678

Il2CppObject *
Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

