// TypeDefIndex 368
// Namespace: 
// [CompilerGenerated]
// private sealed class RaidLeaguesLeaderboard.PPKIELLNGKF
// Fields:
//   public int playerPosition; // 0x10

// ===== internal bool EIPOFOIMENL(KeyValuePair<int, RaidConfig.HKDMLOKOJPH> rewardPos)  [RVA 0x3477F70]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard.PPKIELLNGKF$$EIPOFOIMENL @ RVA 0x3477F70

bool Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_PPKIELLNGKF__EIPOFOIMENL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_PPKIELLNGKF_o *__this,
               System_Collections_Generic_KeyValuePair_int__JMDPBFOCHHP_HKDMLOKOJPH__o rewardPos,
               MethodInfo *method)

{
  if ((DAT_04568338 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Value__
                 ,rewardPos.fields._0_8_);
    DAT_04568338 = 1;
  }
  if (rewardPos.fields.value != (RaidConfig_HKDMLOKOJPH_o *)0x0) {
    return (__this->fields).playerPosition <= ((rewardPos.fields.value)->fields).OLGNPLGBNDJ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3477844]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard.PPKIELLNGKF$$.ctor @ RVA 0x3477844

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_PPKIELLNGKF___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_PPKIELLNGKF_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

