// Nekki.SF2.Core.Fights.Controls.GameController$$.ctor @ RVA 0x33A4AD0

void Nekki_SF2_Core_Fights_Controls_GameController___ctor
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034a4ae0 to 035a4af7 has its CatchHandler @ 034a4da0 */
  if ((DAT_04567cdf & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04567cdf = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034a4b04 to 035a4b17 has its CatchHandler @ 034a4d9c */
  (__this->fields).BGGEDINJAOI = true;
  (__this->fields).MDBGNLIBANL = true;
  (__this->fields).BKJCNEFAGMM = true;
  (__this->fields).DHODJJLHHBI = true;
  (__this->fields).FNCLELOEFDM = true;
  (__this->fields).MHCEKGEFGDF = true;
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
                    /* try { // try from 034a4b24 to 035a4b2f has its CatchHandler @ 034a4ce4 */
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

