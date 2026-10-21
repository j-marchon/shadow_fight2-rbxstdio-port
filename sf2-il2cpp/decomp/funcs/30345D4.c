// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$GetMessagesCount @ RVA 0x30345D4

int32_t Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__GetMessagesCount
                  (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_ODKDFMHHLIP__o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d27 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_get_Count__);
    DAT_04565d27 = 1;
    method = extraout_x1;
  }
  pSVar2 = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__FPKAMILHIJJ(__this,method);
  iVar1 = 0;
  if (pSVar2 != (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
  }
  return iVar1;
}

