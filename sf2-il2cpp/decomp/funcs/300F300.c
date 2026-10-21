// Nekki.SF2.GUI.Common.MenuControls$$GPNPKOEHMGO @ RVA 0x300F300

void Nekki_SF2_GUI_Common_MenuControls__GPNPKOEHMGO
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  JPGJLKENNCC_o *__this_00;
  Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this_01;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)AAJGEHHPMGH;
  if ((DAT_04565b96 & 1) == 0) {
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_HCBAKFNPGDN__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_04565b96 = 1;
  }
  Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType = NAIJBCMHBFK;
  __this_00 = (__this->fields).GMLEPHMBMPD;
  if (__this_00 != (JPGJLKENNCC_o *)0x0) {
    FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__HCBAKFNPGDN
              ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,NAIJBCMHBFK,OPHMGAKOJLP,AAJGEHHPMGH,
               Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_HCBAKFNPGDN__);
    __this_01 = (__this->fields).JOIIFEDGBGK;
    if (__this_01 != (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *)0x0) {
      Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__HMNIABGDCDL
                (__this_01,OPHMGAKOJLP,AAJGEHHPMGH,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

