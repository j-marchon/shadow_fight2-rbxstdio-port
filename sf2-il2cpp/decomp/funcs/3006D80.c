// Nekki.SF2.GUI.Shop.InfoPanelContent$$GGPMAGBKBFA @ RVA 0x3006D80

void Nekki_SF2_GUI_Shop_InfoPanelContent__GGPMAGBKBFA
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int32_t CPECAEHDDDB,
               int64_t PGGOPJDLPDI,System_Action_object__o *BLMFLPJJMPF,int64_t OHLGEMOFODG,
               MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  int64_t MMDLBPONFAF;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if ((DAT_04565b4f & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b4f = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    MMDLBPONFAF = ACHLOMELAJE__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_InfoPanelContent__KGKJDFLBLNM
              (__this,CPECAEHDDDB,1,PGGOPJDLPDI,MMDLBPONFAF,BLMFLPJJMPF,3,OHLGEMOFODG,
               in_stack_ffffffffffffffb0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

