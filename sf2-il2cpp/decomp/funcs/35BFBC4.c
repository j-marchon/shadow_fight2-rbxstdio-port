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

