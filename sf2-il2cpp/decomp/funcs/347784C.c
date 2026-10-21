// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$NKLNDGMMAAH @ RVA 0x347784C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__NKLNDGMMAAH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,
               LFELBGMCDHD_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__LCALDCHKNAH(__this,method_00);
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__OKOAKPACKFO(__this,method_01);
                    /* try { // try from 03577870 to 03677877 has its CatchHandler @ 03577ba4 */
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__NCDOMAGEGCF(__this,method_02);
                    /* try { // try from 0357787c to 03677883 has its CatchHandler @ 03577ba0 */
    if (((__this->fields).JGEPPNPPIKG == false) &&
       (iVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__CELLNGLMJGA(__this,method_03),
       -1 < iVar2)) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__AGPKHOBELPJ(__this,method_04);
                    /* try { // try from 03577894 to 0367789b has its CatchHandler @ 03577b34 */
      (__this->fields).JGEPPNPPIKG = true;
    }
  }
  return;
}

