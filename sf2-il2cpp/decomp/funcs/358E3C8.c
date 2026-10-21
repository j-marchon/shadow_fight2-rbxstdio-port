// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$Init @ RVA 0x358E3C8

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__Init
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *extraout_x1;
  Il2CppObject *extraout_x1_00;
  Il2CppObject *extraout_x1_01;
  FGKGKDEJCOG_o *pFVar2;
  
  if ((DAT_04568d5d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0368e3f4 to 0378e5f3 has its CatchHandler @ 0368e3f4
                       catch() { ... } // from try @ 0368e3f4 with catch @ 0368e3f4
                       catch() { ... } // from try @ 0368e6dc with catch @ 0368e3f4
                       catch() { ... } // from try @ 0368e878 with catch @ 0368e3f4
                       catch() { ... } // from try @ 0368e880 with catch @ 0368e3f4
                       catch() { ... } // from try @ 0368e940 with catch @ 0368e3f4 */
    FUN_01bab630(&StringLiteral_20955);
    FUN_01bab630(&StringLiteral_11955);
    FUN_01bab630(&StringLiteral_11956);
    DAT_04568d5d = 1;
    IMMNELPBGIF = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,IMMNELPBGIF);
    IMMNELPBGIF = extraout_x1_00;
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
    IMMNELPBGIF = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,IMMNELPBGIF);
  }
  pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (pFVar2 != (FGKGKDEJCOG_o *)0x0) {
    iVar1 = (pFVar2->fields).FIIKIHJHLNJ;
    (__this->fields).PINGKKPOOME = false;
    (__this->fields).super.super.IsPausing = false;
    (__this->fields).GAKFEKMMFLB = iVar1;
    Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_11955,StringLiteral_20955,
               StringLiteral_11956,3,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

