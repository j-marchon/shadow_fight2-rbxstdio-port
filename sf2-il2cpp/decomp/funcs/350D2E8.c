// Nekki.SF2.GUI.Dialogs.NewsDialog$$JFLKNDOKBLP @ RVA 0x350D2E8

void Nekki_SF2_GUI_Dialogs_NewsDialog__JFLKNDOKBLP
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,Il2CppObject *ELACKBJPMNB,
               MethodInfo *method)

{
  int *piVar1;
  AHOEIGAOKEL_o *__this_00;
  
  if ((DAT_045688d8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    DAT_045688d8 = 1;
  }
  if (ELACKBJPMNB != (Il2CppObject *)0x0) {
    if ((ELACKBJPMNB->klass->_1).element_class !=
        (Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(ELACKBJPMNB);
    }
    piVar1 = (int *)thunk_FUN_01bda96c(ELACKBJPMNB);
    if (*piVar1 == 0) {
      return;
    }
    __this_00 = (__this->fields).LLBENMDKHBK;
    if (__this_00 != (AHOEIGAOKEL_o *)0x0) {
      AHOEIGAOKEL__HCNNHNAIJFB(__this_00,ELACKBJPMNB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

