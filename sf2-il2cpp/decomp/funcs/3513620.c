// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog.KEBHMEFAFEG$$GADMIFDEHMB @ RVA 0x3513620

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG__GADMIFDEHMB
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_o *__this,
               Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *lootInfo,MethodInfo *method)

{
  if (lootInfo != (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__SetItem
              (lootInfo,(__this->fields).item,1,(__this->fields).itemPerks,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

