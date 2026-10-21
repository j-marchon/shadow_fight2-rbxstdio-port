// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanTable$$MHNONHHOHGN @ RVA 0x313AF68

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__MHNONHHOHGN
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566728 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_COHEJNJBHAI_TypeInfo);
    DAT_04566728 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_COHEJNJBHAI_TypeInfo
                                 ,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

