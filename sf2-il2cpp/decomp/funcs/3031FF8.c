// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$UpdateContent @ RVA 0x3031FF8

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *x;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *MIJCJJCICDA;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  
  if ((DAT_04565d28 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d28 = 1;
    IMMNELPBGIF = (Il2CppObject *)extraout_x1;
  }
  x = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OFBDOPOJDEH
                (__this,(MethodInfo *)IMMNELPBGIF);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
      MIJCJJCICDA = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateChatMessageView
                              (__this_00,__this,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__KOJMOHMGLAI
                (__this,(Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)MIJCJJCICDA,false,in_x3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

