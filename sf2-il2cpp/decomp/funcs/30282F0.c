// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$DJPPAELDLFC @ RVA 0x30282F0

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__DJPPAELDLFC(long __this)

{
  System_String_StaticFields *pSVar1;
  
  if ((DAT_04565ca5 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04565ca5 = 1;
  }
  if (*(long *)(__this + 0xd0) == 0) {
    pSVar1 = string_TypeInfo->static_fields;
  }
  else {
    pSVar1 = (System_String_StaticFields *)(*(long *)(__this + 0xd0) + 0x20);
  }
  if (*(Nekki_SF2_GUI_LabelAlias_o **)(__this + 0x30) != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias
              (*(Nekki_SF2_GUI_LabelAlias_o **)(__this + 0x30),pSVar1->Empty,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

