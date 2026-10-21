// NDPMLPGANCI$$KJGGEPNHOBK @ RVA 0x3449BEC

void NDPMLPGANCI__KJGGEPNHOBK(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456826f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    DAT_0456826f = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
  }
  pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03549c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._17_Hide.methodPtr)(pNVar1,(pNVar1->klass->vtable)._17_Hide.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

