// Nekki.SF2.GUI.Dialogs.Raids.ClanChatViewController$$Init @ RVA 0x3031B24

void Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *__this,
               KPBOJBLLKPJ_o *KBIIAPCMIGJ,MKIDEJJPLCE_o *DOOAEHPGKNL,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x4;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *pNVar2;
  
  if ((DAT_04565d0a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d0a = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__Init
            ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,KBIIAPCMIGJ,DOOAEHPGKNL,3,
             in_x4);
  pNVar2 = (__this->fields).super._tabButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).super._tabButton;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton__Init(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

