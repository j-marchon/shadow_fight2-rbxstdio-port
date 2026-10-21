// Nekki.Utils.RaidBetaLogger$$CLIHAFJDHKO @ RVA 0x35A0190

void Nekki_Utils_RaidBetaLogger__CLIHAFJDHKO
               (Nekki_Utils_RaidBetaLogger_o *__this,System_String_o *IILEPKAGDGC,MethodInfo *method
               )

{
  System_String_o *DJDEOBOADKF;
  System_Byte_array *IMMNELPBGIF;
  System_Byte_array *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
                    /* try { // try from 036a0190 to 037a0193 has its CatchHandler @ 036a019c */
                    /* try { // try from 036a0194 to 037a01b7 has its CatchHandler @ 036a00ac */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036a0150 with catch @ 036a0198
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036a0190 with catch @ 036a019c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036a013c with catch @ 036a01a0
                        */
  method_00 = (MethodInfo *)IILEPKAGDGC;
  if ((DAT_04568dff & 1) == 0) {
                    /* try { // try from 036a01b8 to 037a01bb has its CatchHandler @ 036a01ec */
                    /* try { // try from 036a01bc to 037a01fb has its CatchHandler @ 036a00ac */
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    DAT_04568dff = 1;
    method_00 = extraout_x1;
  }
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  if (Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->LADCKKMLNOP != false) {
                    /* catch() { ... } // from try @ 036a01b8 with catch @ 036a01ec */
    Nekki_Utils_RaidBetaLogger__BFEECIJLEMH
              ((Nekki_Utils_RaidBetaLogger_o *)Nekki_Utils_RaidBetaLogger_TypeInfo,method_00);
  }
  DJDEOBOADKF = Nekki_Utils_RaidBetaLogger__JBKFCKCKGGE(__this,IILEPKAGDGC,method);
                    /* try { // try from 036a01fc to 037a0203 has its CatchHandler @ 036a0218 */
                    /* try { // try from 036a0204 to 037a020f has its CatchHandler @ 036a00ac */
  IMMNELPBGIF = Nekki_Utils_RaidBetaLogger__CJEINAHMMJN(__this,DJDEOBOADKF,method);
                    /* try { // try from 036a0210 to 037a0217 has its CatchHandler @ 036a0218 */
  __this_00 = IMMNELPBGIF;
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036a01fc with catch @ 036a0218
                       catch(type#2 @ 00000000) { ... } // from try @ 036a0210 with catch @ 036a0218
                        */
    __this_00 = (System_Byte_array *)thunk_FUN_01ba7564(Nekki_Utils_RaidBetaLogger_TypeInfo);
  }
  if (Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->GGNBEANPLCD != false) {
    Nekki_Utils_RaidBetaLogger__LNIBGNOBNJE
              ((Nekki_Utils_RaidBetaLogger_o *)__this_00,IMMNELPBGIF,method);
  }
  Nekki_Utils_RaidBetaLogger__OJMMKOAKHOI(__this,IMMNELPBGIF,method);
  return;
}

