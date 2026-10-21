// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog.KEBHMEFAFEG$$LBBFPJGDBFG @ RVA 0x35135D4

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG__LBBFPJGDBFG
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_o *__this,
               Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *lootInfo,MethodInfo *method)

{
  int64_t GNDOPGAILNK;
  HOOAAGABMBL_o *pHVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_30;
  
  pHVar1 = (__this->fields).item;
  if (pHVar1 != (HOOAAGABMBL_o *)0x0) {
    local_30.fields.hiddenValue = (pHVar1->fields)._DILLJMLCPON_k__BackingField.fields.hiddenValue;
    local_30.fields.currentCryptoKey =
         (pHVar1->fields)._DILLJMLCPON_k__BackingField.fields.currentCryptoKey;
    local_30.fields.fakeValueActive =
         (pHVar1->fields)._DILLJMLCPON_k__BackingField.fields.fakeValueActive;
    local_30.fields.inited = (pHVar1->fields)._DILLJMLCPON_k__BackingField.fields.inited;
    local_30.fields._26_6_ =
         *(undefined6 *)&(pHVar1->fields)._DILLJMLCPON_k__BackingField.fields.field_0x1a;
    local_30.fields.fakeValue = (pHVar1->fields)._DILLJMLCPON_k__BackingField.fields.fakeValue;
    GNDOPGAILNK = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                            (&local_30,(MethodInfo *)0x0);
    if (lootInfo != (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__SetMoney(lootInfo,GNDOPGAILNK,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

