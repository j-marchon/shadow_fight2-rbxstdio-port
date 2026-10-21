// Nekki.SF2.Core.Fights.Controls.GameController$$CLNAOMIIBLH @ RVA 0x33A4624

void Nekki_SF2_Core_Fights_Controls_GameController__CLNAOMIIBLH
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((DAT_04567cdd & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
    DAT_04567cdd = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI =
       (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields,0);
                    /* try { // try from 034a4684 to 035a469b has its CatchHandler @ 034a48fc */
  Nekki_SF2_Core_Fights_Controls_GameController__CIIBDMIDPCN(__this,method_00);
  return;
}

