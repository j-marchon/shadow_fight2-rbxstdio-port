// Nekki.SF2.GUI.Dialogs.Raids.ChatSFTabButton$$get_Alias @ RVA 0x334AD64

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton__get_Alias
          (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_045679f3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045679f3 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._tabCaptionLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)0x0;
  if (bVar1) {
    pNVar3 = (__this->fields)._tabCaptionLabel;
    if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = *(System_String_o **)&(pNVar3->fields)._useLabelLineSpacing;
  }
  return pSVar2;
}

