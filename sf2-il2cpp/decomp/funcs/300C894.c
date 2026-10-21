// Nekki.SF2.GUI.Shop.InfoPanelContent$$OCEFNAOJJPH @ RVA 0x300C894

void Nekki_SF2_GUI_Shop_InfoPanelContent__OCEFNAOJJPH
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int *piVar1;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *method_00;
  
  if ((DAT_04565b79 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 0310c8bc to 0320c8c7 has its CatchHandler @ 0310d4e8 */
    DAT_04565b79 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
                    /* try { // try from 0310c8d0 to 0320c943 has its CatchHandler @ 0310d4f0 */
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if ((0 < *piVar1) &&
       (IKKAMAMLIKA = (__this->fields).KJBDDCNKNNE, IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) {
      AMIINPEKKFB__KBOOALOJLKH(IKKAMAMLIKA,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,method_00);
      return;
    }
  }
  return;
}

