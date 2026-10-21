// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$GKPJMHOFIOO @ RVA 0x358E890

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
                    /* catch() { ... } // from try @ 0368e6d0 with catch @ 0368e890 */
                    /* catch() { ... } // from try @ 0368e6ac with catch @ 0368e894 */
                    /* catch() { ... } // from try @ 0368e870 with catch @ 0368e898 */
                    /* catch() { ... } // from try @ 0368e868 with catch @ 0368e89c */
                    /* catch() { ... } // from try @ 0368e6a0 with catch @ 0368e8a0 */
                    /* catch() { ... } // from try @ 0368e5f4 with catch @ 0368e8a4 */
  (*(__this->klass->vtable)._37_IIHMBEPEFDJ.methodPtr)
            (__this,(__this->klass->vtable)._37_IIHMBEPEFDJ.method);
                    /* catch() { ... } // from try @ 0368e864 with catch @ 0368e8a8
                       catch() { ... } // from try @ 0368e86c with catch @ 0368e8a8 */
                    /* catch() { ... } // from try @ 0368e650 with catch @ 0368e8ac */
  (*(__this->klass->vtable)._34_IKJLLOJAIIO.methodPtr)
            (__this,(__this->klass->vtable)._34_IKJLLOJAIIO.method);
                    /* try { // try from 0368e8bc to 0378e8bf has its CatchHandler @ 0368e8d0 */
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__KFJOHIAICNM(__this,method_00);
                    /* catch() { ... } // from try @ 0368e8bc with catch @ 0368e8d0 */
  (*(__this->klass->vtable)._35_JBFCMIMJLCF.methodPtr)
            (__this,(__this->klass->vtable)._35_JBFCMIMJLCF.method);
                    /* try { // try from 0368e8d8 to 0378e93f has its CatchHandler @ 0368e954 */
  (*(__this->klass->vtable)._36_JOHIFADKBLJ.methodPtr)
            (__this,(__this->klass->vtable)._36_JOHIFADKBLJ.method);
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__FJCMEBJDHPB(__this,method_01);
  Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__NFCDGCGEKCG(__this,method_02);
  pLVar1 = (__this->fields).super.super._btnCancel;
  if (pLVar1 != (LabelButton_o *)0x0) {
    LabelButton__set_ButtonColor(pLVar1,0,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).super.super._btnOK;
    if (pLVar1 != (LabelButton_o *)0x0) {
      LabelButton__set_ButtonColor(pLVar1,5,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

