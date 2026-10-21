// TypeDefIndex 606
// Namespace: 
// [CompilerGenerated]
// private sealed class ViewerFight.BGKPLGELAHC
// Fields:
//   public LabelAlias damageLabel; // 0x10

// ===== public void .ctor()  [RVA 0x35BF14C]
// Nekki.SF2.GUI.Fight.ViewerFight.BGKPLGELAHC$$.ctor @ RVA 0x35BF14C

void Nekki_SF2_GUI_Fight_ViewerFight_BGKPLGELAHC___ctor
               (Nekki_SF2_GUI_Fight_ViewerFight_BGKPLGELAHC_o *__this,MethodInfo *method)

{
                    /* try { // try from 036bf150 to 037bf15b has its CatchHandler @ 036bf38c */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void EGOKMGOBBNJ()  [RVA 0x35BFBC4]
// Nekki.SF2.GUI.Fight.ViewerFight.BGKPLGELAHC$$EGOKMGOBBNJ @ RVA 0x35BFBC4

void Nekki_SF2_GUI_Fight_ViewerFight_BGKPLGELAHC__EGOKMGOBBNJ
               (Nekki_SF2_GUI_Fight_ViewerFight_BGKPLGELAHC_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
                    /* try { // try from 036bfbc8 to 037bfbcb has its CatchHandler @ 036bfbf4 */
  __this_00 = (__this->fields).damageLabel;
                    /* try { // try from 036bfbcc to 037bfc03 has its CatchHandler @ 036bf6d4 */
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

