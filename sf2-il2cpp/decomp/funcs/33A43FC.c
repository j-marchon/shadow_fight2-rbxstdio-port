// Nekki.SF2.Core.Fights.Controls.GameController$$get_Current @ RVA 0x33A43FC

Nekki_SF2_Core_Fights_Controls_GameController_o *
Nekki_SF2_Core_Fights_Controls_GameController__get_Current(MethodInfo *method)

{
                    /* try { // try from 034a4408 to 035a447f has its CatchHandler @ 034a4494 */
                    /* catch() { ... } // from try @ 034a4378 with catch @ 034a4410 */
  if ((DAT_04567cdb & 1) == 0) {
                    /* catch() { ... } // from try @ 034a43f8 with catch @ 034a4420 */
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
    DAT_04567cdb = 1;
  }
  return Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
}

