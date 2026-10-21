// Nekki.SF2.GUI.Fight.StylePanel$$Render @ RVA 0x3293E48

void Nekki_SF2_GUI_Fight_StylePanel__Render
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  NDGHNMIHOMN_o *pNVar2;
  Nekki_SF2_GUI_Fight_StyleBar_o *__this_00;
  float fVar3;
  float fVar4;
  
  if ((DAT_0456734e & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456734e = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pNVar2 = MGNPHCAAEIO_TypeInfo->static_fields->EMBDCDBPFFE;
  if (pNVar2 != (NDGHNMIHOMN_o *)0x0) {
    fVar4 = (pNVar2->fields).EDKNLOPAJIC;
    iVar1 = MGNPHCAAEIO__PCJHAMFGJLP((MethodInfo *)0x0);
    __this_00 = (__this->fields)._styleBar;
    if (__this_00 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) {
                    /* try { // try from 03393ec0 to 03493ec7 has its CatchHandler @ 0339401c */
                    /* try { // try from 03393ed4 to 03493edf has its CatchHandler @ 03394018 */
      fVar3 = Nekki_SF2_GUI_Fight_StyleBar__GetValue
                        (__this_00,(__this->fields).OOADLOIGCHI,(MethodInfo *)0x0);
      fVar3 = fVar3 + (fVar4 / -60.0) / (float)iVar1;
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      Nekki_SF2_GUI_Fight_StylePanel__SetStyleValue(__this,fVar3,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

