// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$DKIAKJIDBJE @ RVA 0x35532DC

bool Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__DKIAKJIDBJE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,
               System_Collections_Generic_KeyValuePair_int__JMDPBFOCHHP_HKDMLOKOJPH__o OFEHIBKLHIB,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *pNVar1;
  
  if ((DAT_04568b52 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Value__
                 ,OFEHIBKLHIB.fields._0_8_);
    DAT_04568b52 = 1;
  }
  pNVar1 = (__this->fields).DICNIMJBGML;
  if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) &&
     (OFEHIBKLHIB.fields.value != (JMDPBFOCHHP_HKDMLOKOJPH_o *)0x0)) {
    return (pNVar1->fields).FPNOLDAJPGK <= ((OFEHIBKLHIB.fields.value)->fields).OLGNPLGBNDJ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

