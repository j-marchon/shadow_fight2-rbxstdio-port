// TypeDefIndex 367
// Namespace: 
// [CompilerGenerated]
// private sealed class RaidLeaguesLeaderboard.LPFAKMADDHI
// Fields:
//   public long currentPlayerId; // 0x10
//   public Comparison<KGBIBHEFBHA> <>9__1; // 0x18

// ===== internal int GHJIFKFHMOM(KGBIBHEFBHA p1, KGBIBHEFBHA p2)  [RVA 0x3477F34]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard.LPFAKMADDHI$$GHJIFKFHMOM @ RVA 0x3477F34

int32_t Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_LPFAKMADDHI__GHJIFKFHMOM
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_LPFAKMADDHI_o *__this,
                  KGBIBHEFBHA_o *p1,KGBIBHEFBHA_o *p2,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if (p1 != (KGBIBHEFBHA_o *)0x0) {
    lVar2 = (__this->fields).currentPlayerId;
    if ((p1->fields).ANAJGHJEEOC == lVar2) {
      uVar1 = 0xffffffff;
    }
    else {
      if (p2 == (KGBIBHEFBHA_o *)0x0) goto LAB_03577f6c;
      uVar1 = (uint)((p2->fields).ANAJGHJEEOC == lVar2);
    }
    return uVar1;
  }
LAB_03577f6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34771F0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard.LPFAKMADDHI$$.ctor @ RVA 0x34771F0

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_LPFAKMADDHI___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_LPFAKMADDHI_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

