// IGJEEGBBNFC$$JBFMBAEGJOB @ RVA 0x329F7B4

void IGJEEGBBNFC__JBFMBAEGJOB
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,bool MGHHNOBLBDI,
               MethodInfo *method)

{
  FCJBEKHDLAF_o *__this_00;
  
  if ((DAT_045673ca & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_045673ca = 1;
  }
                    /* try { // try from 0339f7f8 to 0349f807 has its CatchHandler @ 0339f808 */
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 0339f798 with catch @ 0339f808
                       catch() { ... } // from try @ 0339f7f8 with catch @ 0339f808 */
  if (DAT_04565b7f == '\0') {
                    /* try { // try from 0339f80c to 0349f80f has its CatchHandler @ 0339f818 */
                    /* try { // try from 0339f810 to 0349f81b has its CatchHandler @ 0339f6c0 */
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0339f80c with catch @ 0339f818
                        */
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
    if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
      FCJBEKHDLAF__OLBHDJBMANN
                (__this_00,(CPECAEHDDDB->fields).HEMGHNOOJPI,MGHHNOBLBDI,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

