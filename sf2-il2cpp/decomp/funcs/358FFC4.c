// Nekki.SF2.GUI.Dialogs.Raids.ChatMessageView$$OnChannelReset @ RVA 0x358FFC4

void Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__OnChannelReset
               (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  ODKDFMHHLIP_o *IHNKCJHDDKD;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  int CKMDPHJOKAF;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *pNVar3;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  
  if ((DAT_04568d6e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d6e = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).super.FLLHHEODKPH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pNVar4 = (__this->fields)._messagesScroll;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      pNVar4 = (__this->fields)._messagesScroll;
      if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar4,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).super.FLLHHEODKPH;
        if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
          CKMDPHJOKAF = 0;
          do {
            iVar2 = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__GetMessagesCount
                              (pNVar3,(MethodInfo *)0x0);
            if (iVar2 <= CKMDPHJOKAF) {
              return;
            }
            pNVar3 = (__this->fields).super.FLLHHEODKPH;
            if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) break;
            method_00 = (MethodInfo *)0x0;
            IHNKCJHDDKD = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__GetMessage
                                    (pNVar3,CKMDPHJOKAF,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__OnNewMessage(__this,IHNKCJHDDKD,method_00);
            pNVar3 = (__this->fields).super.FLLHHEODKPH;
            CKMDPHJOKAF = CKMDPHJOKAF + 1;
          } while (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

