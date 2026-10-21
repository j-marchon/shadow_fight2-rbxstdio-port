// TypeDefIndex 994
// Namespace: 
// [CompilerGenerated]
// private sealed class SceneMenuScroll.KNIEBCNONJG
// Fields:
//   public DBMPKPJGIPI p_targetScene; // 0x10

// ===== public void .ctor()  [RVA 0x30BC714]
// Nekki.SF2.GUI.Common.SceneMenuScroll.KNIEBCNONJG$$.ctor @ RVA 0x30BC714

void Nekki_SF2_GUI_Common_SceneMenuScroll_KNIEBCNONJG___ctor
               (Nekki_SF2_GUI_Common_SceneMenuScroll_KNIEBCNONJG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool EPEILCFJLHF(SceneSelector p_selector)  [RVA 0x30BCDE0]
// Nekki.SF2.GUI.Common.SceneMenuScroll.KNIEBCNONJG$$EPEILCFJLHF @ RVA 0x30BCDE0

bool Nekki_SF2_GUI_Common_SceneMenuScroll_KNIEBCNONJG__EPEILCFJLHF
               (Nekki_SF2_GUI_Common_SceneMenuScroll_KNIEBCNONJG_o *__this,
               Nekki_SF2_GUI_Common_SceneSelector_o *p_selector,MethodInfo *method)

{
  if (p_selector != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) {
    return (p_selector->fields)._TargetScene == (__this->fields).p_targetScene;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

