// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$.cctor @ RVA 0x313CF14

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_StaticFields *pNVar1;
  UnityEngine_Color_o UVar2;
  
  if ((DAT_0456673b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo);
    DAT_0456673b = 1;
  }
  UVar2 = CFBGPBCDAGA__NFFPCFGDOKG(0x1e,0x1e,0x1e,0xff,(MethodInfo *)0x0);
  pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo->static_fields;
  (pNVar1->MOHHGKNGNLN).fields.r = UVar2.fields.r;
  (pNVar1->MOHHGKNGNLN).fields.g = UVar2.fields.g;
  (pNVar1->MOHHGKNGNLN).fields.b = UVar2.fields.b;
  (pNVar1->MOHHGKNGNLN).fields.a = UVar2.fields.a;
  return;
}

