// CFJANHACGMG$$LEFGCMPEAMI @ RVA 0x3598924

bool CFJANHACGMG__LEFGCMPEAMI(MethodInfo *method)

{
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369890c with catch @ 03698928
                       catch(type#2 @ 00000000) { ... } // from try @ 03698920 with catch @ 03698928
                        */
  if ((DAT_04568db3 & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_04568db3 = 1;
  }
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return CFJANHACGMG_TypeInfo->static_fields->_PCFJKILMDCE_k__BackingField;
}

