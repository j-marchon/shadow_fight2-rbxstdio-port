// TypeDefIndex 2055
// Namespace: 
// private class ProgressBricksPanel.ABGKGNLGPKB
// Fields:
//   public bool OFKNMBPGOGL; // 0x10
//   public IndicatorFight IGEKJBGFJBL; // 0x18

// ===== public void JMBLOKDMLKJ()  [RVA 0x32B6FEC]
// Nekki.SF2.GUI.Map.ProgressBricksPanel.ABGKGNLGPKB$$JMBLOKDMLKJ @ RVA 0x32B6FEC

void Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB__JMBLOKDMLKJ
               (Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_IndicatorFight_o *__this_00;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  
  __this_00 = (__this->fields).IGEKJBGFJBL;
  if (__this_00 != (Nekki_SF2_GUI_Map_IndicatorFight_o *)0x0) {
    CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    Util__IHPDCBOFHPA(CMMIJCJOBBF,(__this->fields).OFKNMBPGOGL,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32B64CC]
// Nekki.SF2.GUI.Map.ProgressBricksPanel.ABGKGNLGPKB$$.ctor @ RVA 0x32B64CC

void Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB___ctor
               (Nekki_SF2_GUI_Map_ProgressBricksPanel_ABGKGNLGPKB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

