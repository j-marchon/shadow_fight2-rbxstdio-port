// Nekki.SF2.GUI.Common.PerkUI$$LPNCEHPFOAF @ RVA 0x33F5B70

void Nekki_SF2_GUI_Common_PerkUI__LPNCEHPFOAF
               (Nekki_SF2_GUI_Common_PerkUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *GKNNFJNBCNB;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  HEFOANCOHDC_o *pHVar2;
  float CJNHFNHJHPE;
  
  if ((DAT_04567f91 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567f91 = 1;
    method = extraout_x1;
  }
  pHVar2 = (__this->fields).OFLJEENFLDG;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo,method);
  }
  GKNNFJNBCNB = KKCBGIBKOCP__LFEHBAMJCMH(pHVar2,(MethodInfo *)0x0);
  KKCBGIBKOCP__PFJIHMIKHNL
            ((__this->fields)._Icon,(__this->fields).Atlas,GKNNFJNBCNB,(MethodInfo *)0x0);
  pHVar2 = (__this->fields).OFLJEENFLDG;
  if (pHVar2 != (HEFOANCOHDC_o *)0x0) {
    __this_00 = (__this->fields)._Icon;
    CJNHFNHJHPE = 1.0;
    if ((pHVar2->fields).OCABLLPNEGL == 0) {
      method_00 = extraout_x1_00;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_01;
      }
      bVar1 = MGNPHCAAEIO__DODJBGHCIHD(pHVar2,method_00);
      CJNHFNHJHPE = 1.0;
      if (!bVar1) {
        CJNHFNHJHPE = 0.5;
      }
    }
    if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_Alpha(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

