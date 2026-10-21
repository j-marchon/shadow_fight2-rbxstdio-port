// TypeDefIndex 2722
// Namespace: 
// [CompilerGenerated]
// private sealed class PhaseWeapon.FJJIGIKCJNI
// Fields:
//   public string weapon; // 0x10

// ===== public void .ctor()  [RVA 0x33E02A4]
// Nekki.SF2.GUI.Pvp.PhaseWeapon.FJJIGIKCJNI$$.ctor @ RVA 0x33E02A4

void Nekki_SF2_GUI_Pvp_PhaseWeapon_FJJIGIKCJNI___ctor
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_FJJIGIKCJNI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool PJDMDKNEJJE(HOOAAGABMBL x)  [RVA 0x33E0580]
// Nekki.SF2.GUI.Pvp.PhaseWeapon.FJJIGIKCJNI$$PJDMDKNEJJE @ RVA 0x33E0580

bool Nekki_SF2_GUI_Pvp_PhaseWeapon_FJJIGIKCJNI__PJDMDKNEJJE
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_FJJIGIKCJNI_o *__this,HOOAAGABMBL_o *x,
               MethodInfo *method)

{
  bool bVar1;
  
  if (x != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((x->fields)._COIPKAKHDFP_k__BackingField,(__this->fields).weapon,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

