// TypeDefIndex 3252
// Namespace: 
// [CompilerGenerated]
// private sealed class ShowLootDialog.ICNOOPEFEGI
// Fields:
//   public HBNENINHPGF currency; // 0x10
//   public ShowLootDialog.KEBHMEFAFEG CS$<>8__locals3; // 0x18

// ===== internal void GFGILABFAKH(LootCell lootInfo)  [RVA 0x3513720]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog.ICNOOPEFEGI$$GFGILABFAKH @ RVA 0x3513720

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_ICNOOPEFEGI__GFGILABFAKH
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_ICNOOPEFEGI_o *__this,
               Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *lootInfo,MethodInfo *method)

{
  int64_t GNDOPGAILNK;
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_o *pNVar1;
  HOOAAGABMBL_o *pHVar2;
  HBNENINHPGF_o *OAOLCGAIILM;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  pNVar1 = (__this->fields).CS___8__locals3;
  if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_o *)0x0) &&
     (pHVar2 = (pNVar1->fields).item, pHVar2 != (HOOAAGABMBL_o *)0x0)) {
    local_40.fields.hiddenValue = (pHVar2->fields)._JMHDOFLEICP_k__BackingField.fields.hiddenValue;
    local_40.fields.currentCryptoKey =
         (pHVar2->fields)._JMHDOFLEICP_k__BackingField.fields.currentCryptoKey;
    local_40.fields.fakeValueActive =
         (pHVar2->fields)._JMHDOFLEICP_k__BackingField.fields.fakeValueActive;
    local_40.fields.inited = (pHVar2->fields)._JMHDOFLEICP_k__BackingField.fields.inited;
    local_40.fields._26_6_ =
         *(undefined6 *)&(pHVar2->fields)._JMHDOFLEICP_k__BackingField.fields.field_0x1a;
    local_40.fields.fakeValue = (pHVar2->fields)._JMHDOFLEICP_k__BackingField.fields.fakeValue;
    OAOLCGAIILM = (__this->fields).currency;
    GNDOPGAILNK = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                            (&local_40,(MethodInfo *)0x0);
    if (lootInfo != (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__SetCurrency
                (lootInfo,OAOLCGAIILM,GNDOPGAILNK,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3513784]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog.ICNOOPEFEGI$$.ctor @ RVA 0x3513784

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_ICNOOPEFEGI___ctor
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_ICNOOPEFEGI_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

