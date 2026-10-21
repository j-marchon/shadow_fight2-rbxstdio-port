// TypeDefIndex 706
// Namespace: 
// [CompilerGenerated]
// private sealed class PauseScreen.MOFLEHFGHPA : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18

// ===== public void .ctor(int <>1__state)  [RVA 0x3037368]
// Nekki.SF2.GUI.Fight.PauseScreen.MOFLEHFGHPA$$.ctor @ RVA 0x3037368

void Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA___ctor
               (Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x30378BC]
// Nekki.SF2.GUI.Fight.PauseScreen.MOFLEHFGHPA$$System.IDisposable.Dispose @ RVA 0x30378BC

void Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x30378C0]
// Nekki.SF2.GUI.Fight.PauseScreen.MOFLEHFGHPA$$MoveNext @ RVA 0x30378C0

bool Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA__MoveNext
               (Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA_o *__this,MethodInfo *method)

{
  if ((__this->fields).__1__state == 0) {
    (__this->fields).__1__state = -1;
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x30378D8]
// Nekki.SF2.GUI.Fight.PauseScreen.MOFLEHFGHPA$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x30378D8

Il2CppObject *
Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x30378E0]
// Nekki.SF2.GUI.Fight.PauseScreen.MOFLEHFGHPA$$System.Collections.IEnumerator.Reset @ RVA 0x30378E0

void Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3037918]
// Nekki.SF2.GUI.Fight.PauseScreen.MOFLEHFGHPA$$System.Collections.IEnumerator.get_Current @ RVA 0x3037918

Il2CppObject *
Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

