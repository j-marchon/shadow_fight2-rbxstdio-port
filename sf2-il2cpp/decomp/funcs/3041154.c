// PJKHAJKEHEL$$IMAPIBENHIP @ RVA 0x3041154

float PJKHAJKEHEL__IMAPIBENHIP(PJKHAJKEHEL_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0314115c to 0324115f has its CatchHandler @ 03141164 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03141108 with catch @ 03141160
                       try { // try from 03141160 to 0324117b has its CatchHandler @ 031410f0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03141120 with catch @ 03141164
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0314115c with catch @ 03141164
                        */
  if ((DAT_04565db1 & 1) == 0) {
    FUN_01bab630(&PJKHAJKEHEL_TypeInfo);
                    /* try { // try from 0314117c to 0324117f has its CatchHandler @ 0314118c */
    DAT_04565db1 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 0314117c with catch @ 0314118c */
  if ((PJKHAJKEHEL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PJKHAJKEHEL_TypeInfo,method);
  }
                    /* try { // try from 03141198 to 032411a3 has its CatchHandler @ 031411b8 */
                    /* try { // try from 031411a4 to 032411af has its CatchHandler @ 031410f0 */
  return PJKHAJKEHEL_TypeInfo->static_fields->NDMAOLKNKIA;
}

