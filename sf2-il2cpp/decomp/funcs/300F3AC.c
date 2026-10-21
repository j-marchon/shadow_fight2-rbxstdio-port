// Nekki.SF2.GUI.Common.MenuControls$$IBCPKNBPEBE @ RVA 0x300F3AC

void Nekki_SF2_GUI_Common_MenuControls__IBCPKNBPEBE
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,
               int32_t AAJGEHHPMGH,bool PGAPDIFCKDH,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *pNVar3;
  OCOAGJDCJPL_o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)AAJGEHHPMGH;
  if ((DAT_04565b8f & 1) == 0) {
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_HCBAKFNPGDN__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_04565b8f = 1;
  }
  pNVar3 = (__this->fields).JOIIFEDGBGK;
  if (pNVar3 != (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__GGOCJMKHICA
                      (pNVar3,OPHMGAKOJLP,AAJGEHHPMGH,method_00);
    pNVar3 = (__this->fields).JOIIFEDGBGK;
    if (pNVar3 != (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *)0x0) {
      bVar2 = Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__PNBPCMGLKEF
                        (pNVar3,OPHMGAKOJLP,AAJGEHHPMGH,method_00);
      if ((!bVar2) && (bVar1)) {
        return;
      }
      pNVar3 = (__this->fields).JOIIFEDGBGK;
      if (pNVar3 != (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *)0x0) {
        Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__BFPFOFJOOIA
                  (pNVar3,OPHMGAKOJLP,AAJGEHHPMGH,method_00);
        Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType = NAIJBCMHBFK;
        __this_00 = (__this->fields).KIHMKIEFOEI;
        if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__HCBAKFNPGDN
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,NAIJBCMHBFK,OPHMGAKOJLP,AAJGEHHPMGH,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_HCBAKFNPGDN__);
          if (!PGAPDIFCKDH) {
            return;
          }
          (__this->fields).ABBIIGOGPGF = 0.2;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

