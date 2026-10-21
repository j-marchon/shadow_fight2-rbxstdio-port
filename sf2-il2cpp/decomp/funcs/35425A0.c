// Nekki.SF2.GUI.Dialogs.Raids.MissingConnectionView$$OnReconnectPressed @ RVA 0x35425A0

void Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView__OnReconnectPressed
               (Nekki_SF2_GUI_Dialogs_Raids_MissingConnectionView_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *pNVar2;
  
  if ((DAT_04568b05 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568b05 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).super.FLLHHEODKPH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).super.FLLHHEODKPH;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OnReconnectPressed(pNVar2,(MethodInfo *)0x0)
      ;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

