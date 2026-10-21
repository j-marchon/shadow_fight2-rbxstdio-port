// Nekki.SF2.GUI.Fight.StylePanel$$NAJPAGNBGJB @ RVA 0x3293DE0

void Nekki_SF2_GUI_Fight_StylePanel__NAJPAGNBGJB
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,KKCEIILPLEC_o *KEFILECBPMF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_StyleBar_o *__this_00;
  
  if ((DAT_0456734d & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_0456734d = 1;
  }
  if ((KEFILECBPMF != (KKCEIILPLEC_o *)0x0) &&
     (__this_00 = (__this->fields)._styleBar, __this_00 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0)) {
    Nekki_SF2_GUI_Fight_StyleBar__AddStrip
              (__this_00,(KEFILECBPMF->fields).GLJCNAPKAFN,StringLiteral_1,25.0,
               (KEFILECBPMF->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

