// DLAFGNMCMFA$$EOLKHMJJPJA @ RVA 0x3521CE4

void DLAFGNMCMFA__EOLKHMJJPJA(MGNDHCBAPEN_int__int__o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03621cec to 03721cf3 has its CatchHandler @ 03621d08 */
                    /* try { // try from 03621cf4 to 03721cff has its CatchHandler @ 03620fd4 */
                    /* try { // try from 03621d00 to 03721d07 has its CatchHandler @ 03621d08 */
  if ((DAT_045689ca & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03621cec with catch @ 03621d08
                       catch(type#2 @ 00000000) { ... } // from try @ 03621d00 with catch @ 03621d08
                        */
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_045689ca = 1;
    method = extraout_x1;
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DLAFGNMCMFA_TypeInfo,method);
  }
  DLAFGNMCMFA_TypeInfo->static_fields->_KCODOPGBHJI_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(DLAFGNMCMFA_TypeInfo->static_fields,CJNHFNHJHPE);
  return;
}

