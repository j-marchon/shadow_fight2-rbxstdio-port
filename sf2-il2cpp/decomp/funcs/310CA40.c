// Nekki.SF2.GUI.Profile.TrickCell$$UpdateState @ RVA 0x310CA40

void Nekki_SF2_GUI_Profile_TrickCell__UpdateState
               (Nekki_SF2_GUI_Profile_TrickCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_TrickSubItem_o *pNVar1;
  
  pNVar1 = (__this->fields)._trickSubItem;
  if (pNVar1 != (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0320ca5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._58_UpdateState.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._58_UpdateState.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

