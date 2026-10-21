// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$OFBDOPOJDEH @ RVA 0x30320C4

Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *
Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OFBDOPOJDEH
          (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ChatSFView__o *EDEHNHIHDDH;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d1e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<ChatSFView>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_get_Count__);
    DAT_04565d1e = 1;
    method = extraout_x1;
  }
  EDEHNHIHDDH = (__this->fields).CACFIIMNJMG;
  if (EDEHNHIHDDH != (System_Collections_Generic_List_ChatSFView__o *)0x0) {
    if (0 < (EDEHNHIHDDH->fields)._size) {
      pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)
               DJNBJHPDKDP__KIKGKKGDCKK<object>
                         ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                          Method_DJNBJHPDKDP_KIKGKKGDCKK<ChatSFView>__);
      return pNVar1;
    }
    return (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

