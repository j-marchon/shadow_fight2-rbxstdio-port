// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$ENFEBLKOAGP @ RVA 0x3027F10

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__ENFEBLKOAGP
          (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,System_String_o *MCPBDJAGNNM,
          System_String_o *HNEIBAFLEMK,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565c9f & 1) == 0) {
    FUN_01bab630(&StringLiteral_2446);
    DAT_04565c9f = 1;
  }
  pSVar1 = OFFIONDOEPM__AMJCJJALAJH(MCPBDJAGNNM,(MethodInfo *)0x0);
  pSVar1 = System_String__Format
                     (StringLiteral_2446,(Il2CppObject *)pSVar1,(Il2CppObject *)HNEIBAFLEMK,
                      (MethodInfo *)0x0);
  return pSVar1;
}

