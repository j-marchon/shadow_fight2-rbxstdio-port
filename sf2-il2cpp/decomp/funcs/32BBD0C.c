// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$.ctor @ RVA 0x32BBD0C

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RaidDailyTaskCell__o *__this_00;
  System_Collections_Generic_List_RaidDailyTaskCell__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567498 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidDailyTaskCell>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<RaidDailyTaskCell>_TypeInfo);
    DAT_04567498 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_RaidDailyTaskCell__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<RaidDailyTaskCell>_TypeInfo,method)
  ;
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<RaidDailyTaskCell>__ctor__);
  ppSVar1 = &(__this->fields).CGNMDFAAHDA;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

