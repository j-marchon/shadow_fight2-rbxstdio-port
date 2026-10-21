// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$GLEOGMBBLNH @ RVA 0x325827C

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__GLEOGMBBLNH
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,int32_t HJEBKCDDBAB,
               MethodInfo *method)

{
  int iVar1;
  LabelButton_o *pLVar2;
  bool value;
  
  iVar1 = (__this->fields).MDHEMHAOKPA;
  if ((HJEBKCDDBAB == 0) && (iVar1 == 2)) {
    value = true;
  }
  else {
    value = HJEBKCDDBAB == 1 && iVar1 == 1;
  }
  pLVar2 = (__this->fields).super._btnOK;
  if (pLVar2 != (LabelButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pLVar2,value,(MethodInfo *)0x0);
    pLVar2 = (__this->fields).super._btnCancel;
    if (pLVar2 != (LabelButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pLVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

