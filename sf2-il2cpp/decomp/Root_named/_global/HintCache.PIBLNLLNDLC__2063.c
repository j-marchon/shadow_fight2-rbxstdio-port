// TypeDefIndex 2063
// Namespace: 
// [CompilerGenerated]
// private sealed class HintCache.PIBLNLLNDLC
// Fields:
//   public MIBHAJBEMIK hintID; // 0x10

// ===== public void .ctor()  [RVA 0x32B8B84]
// Nekki.SF2.GUI.Common.Hints.HintCache.PIBLNLLNDLC$$.ctor @ RVA 0x32B8B84

void Nekki_SF2_GUI_Common_Hints_HintCache_PIBLNLLNDLC___ctor
               (Nekki_SF2_GUI_Common_Hints_HintCache_PIBLNLLNDLC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool FLBHNBIBNBD(HintUI p_hint)  [RVA 0x32B9068]
// Nekki.SF2.GUI.Common.Hints.HintCache.PIBLNLLNDLC$$FLBHNBIBNBD @ RVA 0x32B9068

bool Nekki_SF2_GUI_Common_Hints_HintCache_PIBLNLLNDLC__FLBHNBIBNBD
               (Nekki_SF2_GUI_Common_Hints_HintCache_PIBLNLLNDLC_o *__this,
               Nekki_SF2_GUI_Common_Hints_HintUI_o *p_hint,MethodInfo *method)

{
  if (p_hint != (Nekki_SF2_GUI_Common_Hints_HintUI_o *)0x0) {
    return (p_hint->fields)._ID == (__this->fields).hintID;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

