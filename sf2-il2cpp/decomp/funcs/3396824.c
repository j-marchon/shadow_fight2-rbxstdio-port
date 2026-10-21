// Nekki.SF2.GUI.Profile.ProfileScene$$IBLPDNHGONE @ RVA 0x3396824

void Nekki_SF2_GUI_Profile_ProfileScene__IBLPDNHGONE
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  MethodInfo *method_00;
  DOPEEDABNEK_o *pDVar3;
  
  if ((DAT_04567c57 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 03496850 to 03596857 has its CatchHandler @ 03496f0c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0349685c to 03596867 has its CatchHandler @ 03496f04 */
    DAT_04567c57 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar2 = (int *)thunk_FUN_01bda96c();
    if (0 < *piVar2) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
                    /* try { // try from 034968bc to 035968c7 has its CatchHandler @ 03496eac */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
                    /* try { // try from 034968d8 to 035968e7 has its CatchHandler @ 03496e94 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if (pDVar3 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 034968f8 to 03596903 has its CatchHandler @ 03496f0c */
      bVar1 = AMIINPEKKFB__CNDGBHMOMJB
                        ((pDVar3->fields)._PCFMNDLDEMC_k__BackingField,(MethodInfo *)0x0);
      if (bVar1) {
        Nekki_SF2_GUI_Profile_ProfileScene__KFLAHKONDBL(__this,method_00);
        return;
      }
    }
  }
  return;
}

