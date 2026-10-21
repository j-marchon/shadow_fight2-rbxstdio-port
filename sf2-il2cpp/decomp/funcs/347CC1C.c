// Nekki.SF2.GUI.Dialogs.ItemSetDialog.EPLOHOAMMND$$LLKEKIALGPM @ RVA 0x347CC1C

void Nekki_SF2_GUI_Dialogs_ItemSetDialog_EPLOHOAMMND__LLKEKIALGPM
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_EPLOHOAMMND_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *IKKAMAMLIKA;
  MethodInfo *in_x2;
  Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this_01;
  
  __this_00 = (__this->fields).item;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    __this_01 = (__this->fields).__4__this;
                    /* try { // try from 0357cc30 to 0367cc37 has its CatchHandler @ 0357cd8c */
    IKKAMAMLIKA = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *)0x0) {
                    /* try { // try from 0357cc3c to 0367cc43 has its CatchHandler @ 0357cd7c */
      Nekki_SF2_GUI_Dialogs_ItemSetDialog__ELKFFHOCIAA(__this_01,IKKAMAMLIKA,in_x2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

