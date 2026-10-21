// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$CanShowChatNowInShopScene @ RVA 0x3256AC0

bool Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CanShowChatNowInShopScene(MethodInfo *method)

{
  int32_t iVar1;
  NDPMLPGANCI_o *__this;
  CHDGOFBHAFI_o *pCVar2;
  int iVar3;
  
  if ((DAT_0456716a & 1) == 0) {
                    /* try { // try from 03356ad4 to 03456ae3 has its CatchHandler @ 03356ae4 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch() { ... } // from try @ 03356a38 with catch @ 03356ae4
                       catch() { ... } // from try @ 03356ad4 with catch @ 03356ae4 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03356ae8 to 03456aeb has its CatchHandler @ 03356af4 */
                    /* try { // try from 03356aec to 03456af7 has its CatchHandler @ 03356814 */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
                    /* catch() { ... } // from try @ 03356ae8 with catch @ 03356af4 */
    FUN_01bab630(&StringLiteral_9214);
    DAT_0456716a = 1;
  }
  __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this == (NDPMLPGANCI_o *)0x0) {
LAB_03356be4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = NDPMLPGANCI__FFIOCEOHPEM(__this,(MethodInfo *)0x0);
  if (iVar1 == 4) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar3 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->ShowChatMode;
    if (iVar3 == 1) {
      return true;
    }
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      iVar3 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->ShowChatMode;
    }
    if (iVar3 == 2) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
        return (pCVar2->fields).BLELLCNDBHN != false;
      }
      goto LAB_03356be4;
    }
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_9214,(MethodInfo *)0x0);
  }
  return false;
}

