// Nekki.SF2.GUI.Fight.PlayerLifeBar$$Render @ RVA 0x35203A4

void Nekki_SF2_GUI_Fight_PlayerLifeBar__Render
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  float fVar2;
  
                    /* try { // try from 036203b8 to 037203bb has its CatchHandler @ 036203c8 */
  if ((DAT_045689b2 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* catch() { ... } // from try @ 036203b8 with catch @ 036203c8 */
    DAT_045689b2 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 036203d0 to 03720437 has its CatchHandler @ 0362044c */
  if ((__this->fields).LockLifeUpdate == false) {
    Nekki_SF2_GUI_Fight_PlayerLifeBar__IKKHECKCEJC(__this,method);
    method = extraout_x1_00;
  }
  Nekki_SF2_GUI_Fight_PlayerLifeBar__KEEOAHOAOPC(__this,method);
  Nekki_SF2_GUI_Fight_PlayerLifeBar__BNBAFNOBOGM(__this,method_00);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = MGNPHCAAEIO__PCJHAMFGJLP((MethodInfo *)0x0);
  fVar2 = (__this->fields).PCBAEDMJDCC;
  if ((0.0 < fVar2) &&
     (fVar2 = fVar2 + -1.0 / (float)iVar1, (__this->fields).PCBAEDMJDCC = fVar2, fVar2 <= 0.0)) {
                    /* try { // try from 03620438 to 03720443 has its CatchHandler @ 0361ffcc */
    (__this->fields).NHDMJMILNKJ = 0x1e;
                    /* try { // try from 03620444 to 0372044b has its CatchHandler @ 0362044c */
    (__this->fields).HFMAMOEIOOB = (__this->fields).HDFOJFNFNGG;
  }
                    /* catch() { ... } // from try @ 036203d0 with catch @ 0362044c
                       catch() { ... } // from try @ 03620444 with catch @ 0362044c */
  return;
}

