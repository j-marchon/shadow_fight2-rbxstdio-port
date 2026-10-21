// TypeDefIndex 3253
// Namespace: 
// [CompilerGenerated]
// private sealed class ShowLootDialog.GINONNFIHBC
// Fields:
//   public HBNENINHPGF currency; // 0x10
//   public ShowLootDialog.KEBHMEFAFEG CS$<>8__locals4; // 0x18

// ===== internal void DPKFGLJCONG(LootCell lootInfo)  [RVA 0x351378C]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog.GINONNFIHBC$$DPKFGLJCONG @ RVA 0x351378C

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_GINONNFIHBC__DPKFGLJCONG
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_GINONNFIHBC_o *__this,
               Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *lootInfo,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_o *pNVar2;
  HOOAAGABMBL_o *pHVar3;
  HBNENINHPGF_o *OAOLCGAIILM;
  
  pNVar2 = (__this->fields).CS___8__locals4;
  if ((pNVar2 != (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_o *)0x0) &&
     (pHVar3 = (pNVar2->fields).item, pHVar3 != (HOOAAGABMBL_o *)0x0)) {
    OAOLCGAIILM = (__this->fields).currency;
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pHVar3->fields)._OJGPBEFJPKN_k__BackingField.fields,(MethodInfo *)0x0);
    if (lootInfo != (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__SetCurrency
                (lootInfo,OAOLCGAIILM,(long)iVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35137E0]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog.GINONNFIHBC$$.ctor @ RVA 0x35137E0

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_GINONNFIHBC___ctor
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_GINONNFIHBC_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

