// Nekki.SF2.GUI.Pvp.PhaseWeapon$$NNCDBOLMLHK @ RVA 0x33DF920

void Nekki_SF2_GUI_Pvp_PhaseWeapon__NNCDBOLMLHK
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  int32_t BMPJIDHGCBN;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *pMVar1;
  MethodInfo *extraout_x1;
  System_String_o *in_x2;
  MethodInfo *in_x4;
  
  if ((DAT_04567e90 & 1) == 0) {
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    DAT_04567e90 = 1;
    method = extraout_x1;
  }
  BMPJIDHGCBN = (__this->fields).AFEOEPFDNLI;
  if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJAEIBMAFGE_TypeInfo,method);
  }
                    /* try { // try from 034df968 to 035df96b has its CatchHandler @ 034e0108 */
                    /* try { // try from 034df96c to 035df973 has its CatchHandler @ 034e0174 */
  pMVar1 = GJAEIBMAFGE__ABOLJGNNGMC(BMPJIDHGCBN,(MethodInfo *)0x0);
  if (pMVar1 != (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) {
                    /* try { // try from 034df988 to 035df98f has its CatchHandler @ 034e0164 */
    Nekki_SF2_GUI_Pvp_PhaseWeapon__JCDGMAEDFIF
              (__this,(__this->fields).AFEOEPFDNLI,in_x2,(pMVar1->fields).DOKHHBGJICA,in_x4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

