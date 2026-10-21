// INPPNIKCPJG$$BPDOIDBNPAD @ RVA 0x3167C3C

void INPPNIKCPJG__BPDOIDBNPAD(INPPNIKCPJG_o *__this,MethodInfo *method)

{
  uint uVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o *pNVar2;
  
  if (DAT_04566913 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
    DAT_04566913 = '\x01';
    method = extraout_x1;
  }
  pNVar2 = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
  if (pNVar2 == (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (pNVar2->fields).IAAABJBDEMK;
  if (uVar1 < 2) {
    INPPNIKCPJG__OAAPILFNIPL(__this,method);
    return;
  }
  if ((uVar1 & 0xfffffffe) == 2) {
    INPPNIKCPJG__JMAEAOIJMGM(__this,method);
    return;
  }
  return;
}

