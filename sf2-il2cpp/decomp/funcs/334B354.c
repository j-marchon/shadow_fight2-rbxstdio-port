// Nekki.SF2.GUI.Common.PaymentUI$$JCLPLBEJHGM @ RVA 0x334B354

void Nekki_SF2_GUI_Common_PaymentUI__JCLPLBEJHGM
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,CFEFALDOEMD_o *PODMLLJBEKK,
               MethodInfo *method)

{
  HOOAAGABMBL_o *IKKAMAMLIKA;
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_00;
  System_String_o *CJNPBEJHHLF;
  
  if ((DAT_045679f8 & 1) == 0) {
    __this = (Nekki_SF2_GUI_Common_PaymentUI_o *)FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045679f8 = 1;
  }
  if (PODMLLJBEKK != (CFEFALDOEMD_o *)0x0) {
    CJNPBEJHHLF = (PODMLLJBEKK->fields)._CIEBCKIBJHL_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    IKKAMAMLIKA = NLPJLHOEAOE__FEHJLBEGAPO(CJNPBEJHHLF,(MethodInfo *)0x0);
    AMIINPEKKFB__AMGIHEOPMEK(IKKAMAMLIKA,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Common_PaymentUI__BHEIENCJENJ(__this_00,false,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

