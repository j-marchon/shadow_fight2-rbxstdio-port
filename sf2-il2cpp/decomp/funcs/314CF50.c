// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyTable$$.ctor @ RVA 0x314CF50

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GKLPDMLELJF__o *__this_00;
  System_Collections_Generic_List_GKLPDMLELJF__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667d6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GKLPDMLELJF>_TypeInfo);
    DAT_045667d6 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_GKLPDMLELJF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GKLPDMLELJF>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GKLPDMLELJF>__ctor__);
  ppSVar1 = &(__this->fields).IAODMBPIAOC;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

