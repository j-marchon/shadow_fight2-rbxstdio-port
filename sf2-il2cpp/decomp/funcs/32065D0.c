// NLPJLHOEAOE$$KNHMJABJGIP @ RVA 0x32065D0

void NLPJLHOEAOE__KNHMJABJGIP
               (IGFGDDANEPE_o *NKCMBEFHFII,GGLKHCAIGDI_o *NDLOGJOGFCA,MethodInfo *method)

{
  BFBONKPKBNL_o *GMCFOKPADCA;
  AMJMGFCCAKN_o *__this;
  
                    /* try { // try from 033065d0 to 034065db has its CatchHandler @ 033064b8 */
                    /* try { // try from 033065dc to 034065e3 has its CatchHandler @ 033065e4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033065c8 with catch @ 033065e4
                       catch(type#2 @ 00000000) { ... } // from try @ 033065dc with catch @ 033065e4
                        */
  if ((DAT_04566e22 & 1) == 0) {
    FUN_01bab630(&AMJMGFCCAKN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566e22 = 1;
  }
  if ((NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) && (NDLOGJOGFCA != (GGLKHCAIGDI_o *)0x0)) {
    GMCFOKPADCA = GGLKHCAIGDI__GPGGNMAFOJD(NDLOGJOGFCA,NKCMBEFHFII,(MethodInfo *)0x0);
    __this = (AMJMGFCCAKN_o *)thunk_FUN_01bda818(AMJMGFCCAKN_TypeInfo);
    AMJMGFCCAKN___ctor(__this,NDLOGJOGFCA,NKCMBEFHFII,GMCFOKPADCA,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__IAGKBFCKFKB
              ((HOOAAGABMBL_o *)__this,NKCMBEFHFII,0x10,1,(System_Action_BKKPAKHJDKB__o *)0x0,true,
               (MethodInfo *)0x0);
    return;
  }
  return;
}

