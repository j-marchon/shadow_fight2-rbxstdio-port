// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$.ctor @ RVA 0x30756B4

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565f9c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_float>_TypeInfo);
    DAT_04565f9c = 1;
    method = extraout_x1;
  }
  (__this->fields).AJCDHIBILLO = true;
  __this_00 = (System_Collections_Generic_Dictionary_string__float__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_float>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
  (__this->fields).OLFKGLNEJAA = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).OLFKGLNEJAA,__this_00);
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

