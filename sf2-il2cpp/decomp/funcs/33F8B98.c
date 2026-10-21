// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$.ctor @ RVA 0x33F8B98

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SFButton__o *__this_00;
  System_Collections_Generic_List_SFButton__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567fa1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<SFButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<SFButton>_TypeInfo);
                    /* try { // try from 034f8be0 to 035f8ceb has its CatchHandler @ 034f8be0
                       catch() { ... } // from try @ 034f8be0 with catch @ 034f8be0
                       catch() { ... } // from try @ 034f8d90 with catch @ 034f8be0
                       catch() { ... } // from try @ 034f8e74 with catch @ 034f8be0
                       catch() { ... } // from try @ 034f8e7c with catch @ 034f8be0
                       catch() { ... } // from try @ 034f8f30 with catch @ 034f8be0 */
    DAT_04567fa1 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_SFButton__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<SFButton>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<SFButton>__ctor__);
  ppSVar1 = &(__this->fields).EHOJEDDANJH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  TabView___ctor((TabView_o *)__this,(MethodInfo *)0x0);
  return;
}

