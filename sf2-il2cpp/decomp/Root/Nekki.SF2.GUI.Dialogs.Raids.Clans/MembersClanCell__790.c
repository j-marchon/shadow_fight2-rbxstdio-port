// TypeDefIndex 790
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public abstract class MembersClanCell : BaseScrollItem
// Fields:
//   protected const string CAHOGOBCMDI = "RaidLeaderboard.leaderboard_pos_1";
//   protected const string EJFPDLCODDB = "RaidLeaderboard.leaderboard_pos_2";
//   protected const string BPNLGAACAKM = "RaidLeaderboard.leaderboard_pos_3";
//   protected const string DIILLJGBLAN = "RaidLeaderboard.leaderboard_pos_4";
//   protected const string GBBMNKAOOAF = "MiscSprites.indicatorGreen";
//   protected const string MHFAHOEMGIH = "MiscSprites.indicatorRed";
//   protected const string FLKAHECGGIC = "RaidMisc.swords";
//   protected const string KEPHDPINPHC = "RaidMisc.crown";
//   protected const string EHCNICOMPPA = "RaidInfo.select_me";
//   protected MembersClanTable NCIMPPPMKCE; // 0x130

// ===== protected void .ctor()  [RVA 0x306A988]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCell$$.ctor @ RVA 0x306A988

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCell___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void SetInfo(DPDNFOCBGGD DKMMBMBMJBO, MembersClanTable EBDIHADJDDB)  [RVA 0x306A990]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCell$$SetInfo @ RVA 0x306A990

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCell__SetInfo
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCell_o *__this,
               DPDNFOCBGGD_o *DKMMBMBMJBO,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *EBDIHADJDDB,MethodInfo *method)

{
  (__this->fields).NCIMPPPMKCE = EBDIHADJDDB;
  thunk_FUN_01c20e04(&(__this->fields).NCIMPPPMKCE,EBDIHADJDDB);
                    /* WARNING: Could not recover jumptable at 0x0316a9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__this->klass[1]._1.image)(__this,DKMMBMBMJBO,__this->klass[1]._1.gc_desc);
  return;
}

