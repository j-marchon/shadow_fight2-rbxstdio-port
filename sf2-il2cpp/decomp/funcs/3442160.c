// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$set_TitleAlias @ RVA 0x3442160

void Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_TitleAlias
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_0456822d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456822d = 1;
  }
  pNVar2 = (__this->fields)._text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._text;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

