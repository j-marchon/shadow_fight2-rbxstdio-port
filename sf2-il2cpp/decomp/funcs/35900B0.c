// Nekki.SF2.GUI.Dialogs.Raids.ChatMessageView$$OnSendMsgPressed @ RVA 0x35900B0

void Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__OnSendMsgPressed
               (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *pNVar2;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar3;
  
  if ((DAT_04568d6f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568d6f = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).super.FLLHHEODKPH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 0369011c to 037902d3 has its CatchHandler @ 0369011c
                       catch() { ... } // from try @ 0369011c with catch @ 0369011c
                       catch() { ... } // from try @ 0369037c with catch @ 0369011c
                       catch() { ... } // from try @ 036904e8 with catch @ 0369011c
                       catch() { ... } // from try @ 036904f0 with catch @ 0369011c
                       catch() { ... } // from try @ 036905a4 with catch @ 0369011c */
    pNVar3 = (__this->fields)._editBox;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields)._editBox;
      if ((pNVar3 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) &&
         (pNVar2 = (__this->fields).super.FLLHHEODKPH,
         pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0)) {
        Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__SendMessage
                  (pNVar2,(pNVar3->fields).super.m_Text,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._editBox;
        if (pNVar3 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
          UnityEngine_UI_InputField__set_text
                    ((UnityEngine_UI_InputField_o *)pNVar3,StringLiteral_1,(MethodInfo *)0x0);
          EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

