// Nekki.SF2.GUI.Dialogs.Raids.ClanChatViewController$$.ctor @ RVA 0x3032674

void Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ChatSFView__o *__this_00;
  System_Collections_Generic_List_ChatSFView__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d2a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ChatSFView>_TypeInfo);
    DAT_04565d2a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ChatSFView__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ChatSFView>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ChatSFView>__ctor__);
  ppSVar1 = &(__this->fields).super.CACFIIMNJMG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  TabView___ctor((TabView_o *)__this,(MethodInfo *)0x0);
  return;
}

