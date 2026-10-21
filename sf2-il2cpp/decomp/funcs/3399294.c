// Nekki.SF2.GUI.Dialogs.LocalDailyDialog$$.ctor @ RVA 0x3399294

void Nekki_SF2_GUI_Dialogs_LocalDailyDialog___ctor
               (Nekki_SF2_GUI_Dialogs_LocalDailyDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_LocalDailyTaskCell__o *__this_00;
  System_Collections_Generic_List_LocalDailyTaskCell__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c68 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LocalDailyTaskCell>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LocalDailyTaskCell>_TypeInfo);
    DAT_04567c68 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_LocalDailyTaskCell__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LocalDailyTaskCell>_TypeInfo,method
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LocalDailyTaskCell>__ctor__);
  ppSVar1 = &(__this->fields).CGNMDFAAHDA;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

