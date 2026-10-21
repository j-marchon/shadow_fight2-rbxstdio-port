// Nekki.SF2.Core.Fights.Controls.GameController$$GIENGNEGHPJ @ RVA 0x33A4858

void Nekki_SF2_Core_Fights_Controls_GameController__GIENGNEGHPJ
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
                    /* try { // try from 034a4858 to 035a485b has its CatchHandler @ 034a48dc */
  if ((DAT_04567cde & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
    DAT_04567cde = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 034a48a4 to 035a48db has its CatchHandler @ 034a4a50 */
  Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI = __this;
  thunk_FUN_01c20e04(Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields,__this);
  Nekki_SF2_Core_Fights_Controls_GameController__DBALJOHIDAB(__this,method_00);
  return;
}

