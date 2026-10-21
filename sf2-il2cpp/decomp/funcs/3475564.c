// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$Refresh @ RVA 0x3475564

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__Refresh
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,
               GLPEFEEGCPM_o *BFFBKNCLLML,MethodInfo *method)

{
  MethodInfo *method_00;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *pGVar1;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar2;
  long lVar3;
  
  if ((DAT_04568328 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Count__);
    DAT_04568328 = 1;
  }
  if ((__this->fields).DCDPLKDJEIM == BFFBKNCLLML) {
    if ((((BFFBKNCLLML == (GLPEFEEGCPM_o *)0x0) ||
         (pGVar1 = (BFFBKNCLLML->fields).MPAIPMANDEO,
         pGVar1 == (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0)) ||
        (pNVar2 = (__this->fields).PDHMLFAMNCO, pNVar2 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0)) ||
       (lVar3 = *(long *)&(pNVar2->fields)._snapEase, lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pGVar1->fields).count == *(int *)(lVar3 + 0x18)) {
      return;
    }
  }
  (__this->fields).DCDPLKDJEIM = BFFBKNCLLML;
  thunk_FUN_01c20e04(&(__this->fields).DCDPLKDJEIM,BFFBKNCLLML);
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__BEKPONJNIPM(__this,method_00);
  return;
}

