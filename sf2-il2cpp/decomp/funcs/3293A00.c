// Nekki.SF2.GUI.Fight.StylePanel$$UpdateStyle @ RVA 0x3293A00

void Nekki_SF2_GUI_Fight_StylePanel__UpdateStyle
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,ECENNHNBAME_o *CAMAHOAFAPK,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_StyleBar_o *__this_00;
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  
  fVar1 = Nekki_SF2_GUI_Fight_StylePanel__GetStyleIncrease(__this,CAMAHOAFAPK,method);
                    /* try { // try from 03393a10 to 03493a17 has its CatchHandler @ 03393a50 */
  __this_00 = (__this->fields)._styleBar;
  if (__this_00 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) {
                    /* try { // try from 03393a18 to 03493a47 has its CatchHandler @ 03393790 */
    fVar2 = Nekki_SF2_GUI_Fight_StyleBar__GetValue
                      (__this_00,(__this->fields).OOADLOIGCHI,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Fight_StylePanel__IncreaseStyleStripByValue(__this,fVar1 + fVar2,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

