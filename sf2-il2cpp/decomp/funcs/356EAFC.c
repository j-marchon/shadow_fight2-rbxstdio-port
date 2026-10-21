// Nekki.SF2.GUI.Menu.MainMenu$$EAIMDNAJODH @ RVA 0x356EAFC

void Nekki_SF2_GUI_Menu_MainMenu__EAIMDNAJODH
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  CHDGOFBHAFI_o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0366eb00 to 0376eb0f has its CatchHandler @ 03673124 */
  if ((DAT_04568c43 & 1) == 0) {
                    /* try { // try from 0366eb14 to 0376eb1f has its CatchHandler @ 03673120 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 0366eb30 to 0376eb37 has its CatchHandler @ 03672d30 */
    DAT_04568c43 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
                    /* try { // try from 0366eb48 to 0376eb4f has its CatchHandler @ 03672d2c */
  (__this->fields).super.field_0x17 = 1;
                    /* try { // try from 0366eb5c to 0376eb63 has its CatchHandler @ 03672d28 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
                    /* try { // try from 0366eb74 to 0376eb7b has its CatchHandler @ 03672d24 */
                    /* try { // try from 0366eb7c to 0376eb8b has its CatchHandler @ 03672d20 */
    CHDGOFBHAFI__PNLACGIDHPI(__this_00,0,(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0366eba4 to 0376eba7 has its CatchHandler @ 03673328 */
                    /* try { // try from 0366eba8 to 0376ebcb has its CatchHandler @ 03673274 */
    MGNPHCAAEIO__FNMMEMACMAM((MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

