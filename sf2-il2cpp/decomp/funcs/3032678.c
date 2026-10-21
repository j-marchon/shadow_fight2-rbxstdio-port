// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$.ctor @ RVA 0x3032678

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ChatSFView__o *__this_00;
  System_Collections_Generic_List_ChatSFView__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0313268c to 032326d3 has its CatchHandler @ 0313268c
                       catch() { ... } // from try @ 0313268c with catch @ 0313268c
                       catch() { ... } // from try @ 03132700 with catch @ 0313268c
                       catch() { ... } // from try @ 03132770 with catch @ 0313268c */
  if ((DAT_04565d2a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ChatSFView>_TypeInfo);
    DAT_04565d2a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ChatSFView__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ChatSFView>_TypeInfo,method);
                    /* try { // try from 031326d4 to 032326df has its CatchHandler @ 03132730 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ChatSFView>__ctor__);
  ppSVar1 = &(__this->fields).CACFIIMNJMG;
  *ppSVar1 = __this_00;
                    /* try { // try from 031326e0 to 032326ff has its CatchHandler @ 03132734 */
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  TabView___ctor((TabView_o *)__this,(MethodInfo *)0x0);
  return;
}

