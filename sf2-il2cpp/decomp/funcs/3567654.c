// Nekki.SF2.GUI.Dialogs.BaseRewardCell.<>c$$KKCINHOFHPH @ RVA 0x3567654

int64_t Nekki_SF2_GUI_Dialogs_BaseRewardCell_<>c__KKCINHOFHPH
                  (Nekki_SF2_GUI_Dialogs_BaseRewardCell___c_o *__this,int64_t current,
                  BNKBGIIJNLF_o *currencyStruct,MethodInfo *method)

{
  int32_t iVar1;
  
  if (currencyStruct != (BNKBGIIJNLF_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (currencyStruct->fields)._PKGCKALOMOF_k__BackingField.fields,
                       (MethodInfo *)0x0);
    return current + iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

