// MGNPHCAAEIO$$IAGKBFCKFKB @ RVA 0x340CE28

bool MGNPHCAAEIO__IAGKBFCKFKB
               (HOOAAGABMBL_o *IKKAMAMLIKA,int32_t ACCIHBHMFPN,int32_t DFIBGGDJPLM,
               System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF,bool ADGOHBFJIKC,MethodInfo *method)

{
  bool bVar1;
  IGFGDDANEPE_o *ENHJPOHLMCL;
  MethodInfo *in_x6;
  System_String_o *KGLJICLJHEL;
  
                    /* try { // try from 0350ce3c to 0360ce3f has its CatchHandler @ 0350cebc */
  if ((DAT_0456804a & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456804a = 1;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 0350ce88 to 0360cebb has its CatchHandler @ 0350cf58 */
    KGLJICLJHEL = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ENHJPOHLMCL = NLPJLHOEAOE__JNFIBDBHNOA(KGLJICLJHEL,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0350ce3c with catch @ 0350cebc
                       try { // try from 0350cebc to 0360ceef has its CatchHandler @ 0350cc64 */
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0350cd30 with catch @ 0350cecc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0350cd04 with catch @ 0350ced0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0350cd94 with catch @ 0350ced4
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0350ce14 with catch @ 0350ced4
                        */
    bVar1 = MGNPHCAAEIO__IAGKBFCKFKB
                      (IKKAMAMLIKA,ENHJPOHLMCL,ACCIHBHMFPN,DFIBGGDJPLM,BLMFLPJJMPF,ADGOHBFJIKC,in_x6
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0350cef0 to 0360cf07 has its CatchHandler @ 0350cf48 */
  FUN_01bab8c8();
}

