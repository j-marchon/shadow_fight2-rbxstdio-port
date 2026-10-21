// TypeDefIndex 993
// Namespace: 
// [Serializable]
// private sealed class SceneMenuScroll.<>c
// Fields:
//   public static readonly SceneMenuScroll.<>c <>9; // 0x0
//   public static Predicate<SceneSelector> <>9__37_0; // 0x8

// ===== public void .ctor()  [RVA 0x30BCD58]
// Nekki.SF2.GUI.Common.SceneMenuScroll.<>c$$.ctor @ RVA 0x30BCD58

void Nekki_SF2_GUI_Common_SceneMenuScroll_<>c___ctor
               (Nekki_SF2_GUI_Common_SceneMenuScroll___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool ONANPKJNEOL(SceneSelector p_selector)  [RVA 0x30BCD60]
// Nekki.SF2.GUI.Common.SceneMenuScroll.<>c$$ONANPKJNEOL @ RVA 0x30BCD60

bool Nekki_SF2_GUI_Common_SceneMenuScroll_<>c__ONANPKJNEOL
               (Nekki_SF2_GUI_Common_SceneMenuScroll___c_o *__this,
               Nekki_SF2_GUI_Common_SceneSelector_o *p_selector,MethodInfo *method)

{
  bool bVar1;
  
  if (p_selector != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Common_SceneSelector__get_IsCurrentScene(p_selector,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x30BCD78]
// Nekki.SF2.GUI.Common.SceneMenuScroll.<>c$$.cctor @ RVA 0x30BCD78

void Nekki_SF2_GUI_Common_SceneMenuScroll_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566254 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo);
    DAT_04566254 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo->static_fields->__9 =
       (Nekki_SF2_GUI_Common_SceneMenuScroll___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo->static_fields,__this);
  return;
}

