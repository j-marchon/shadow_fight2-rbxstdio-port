// MFEIFNFICGK$$LLCONNGHGKD @ RVA 0x351DE6C

void MFEIFNFICGK__LLCONNGHGKD
               (MFEIFNFICGK_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  FCJBEKHDLAF_o *__this_00;
  
                    /* try { // try from 0361de74 to 0371de7f has its CatchHandler @ 0361e034 */
                    /* try { // try from 0361de8c to 0371de97 has its CatchHandler @ 0361e048 */
  if ((DAT_045689a6 & 1) == 0) {
                    /* try { // try from 0361de98 to 0371dfff has its CatchHandler @ 0361dba4 */
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_045689a6 = 1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
    if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
      FCJBEKHDLAF__IKKHECKCEJC
                (__this_00,(CPECAEHDDDB->fields).HEMGHNOOJPI,
                 (__this->fields)._KFFNNOLMECN_k__BackingField,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

