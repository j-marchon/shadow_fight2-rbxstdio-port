// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$.cctor @ RVA 0x3552F8C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_StaticFields *pNVar1;
  UnityEngine_Color_o UVar2;
  
  if ((DAT_04568b4f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo);
    DAT_04568b4f = 1;
  }
  UVar2 = CFBGPBCDAGA__NFFPCFGDOKG(0x24,0x26,0x14,0xff,(MethodInfo *)0x0);
  pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo->static_fields;
  (pNVar1->AGNLHPGIGLA).fields.r = UVar2.fields.r;
  (pNVar1->AGNLHPGIGLA).fields.g = UVar2.fields.g;
  (pNVar1->AGNLHPGIGLA).fields.b = UVar2.fields.b;
  (pNVar1->AGNLHPGIGLA).fields.a = UVar2.fields.a;
  return;
}

