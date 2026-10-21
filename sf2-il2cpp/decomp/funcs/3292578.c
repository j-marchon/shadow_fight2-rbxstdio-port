// Nekki.SF2.GUI.Dialogs.ScrollDialogButton$$HBJOIOKGNKP @ RVA 0x3292578

void Nekki_SF2_GUI_Dialogs_ScrollDialogButton__HBJOIOKGNKP
               (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  System_String_o *url;
  
  if ((DAT_04567333 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_04567333 = 1;
    method = extraout_x1;
  }
  url = (__this->fields).BPOCMBDOBOC;
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
  return;
}

