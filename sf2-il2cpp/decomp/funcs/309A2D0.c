// Nekki.SF2.GUI.Dialogs.Raids.ChatHandleButton$$OnClick @ RVA 0x309A2D0

void Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__OnClick
               (Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar2;
  Nekki_SF2_GUI_Shop_SidePanel_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456610d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    DAT_0456610d = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
  }
  pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__TryOpenChat(pNVar2,(MethodInfo *)0x0);
    if (bVar1) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
      if ((pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) ||
         (__this_00 = (pNVar2->fields)._sidePanel,
         __this_00 == (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0)) goto LAB_0319a368;
      Nekki_SF2_GUI_Shop_SidePanel__OnClick(__this_00,(MethodInfo *)0x0);
    }
    EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
    return;
  }
LAB_0319a368:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

