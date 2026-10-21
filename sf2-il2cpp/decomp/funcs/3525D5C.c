// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$OnDestroy @ RVA 0x3525D5C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,MethodInfo *method)

{
  System_Action_NLFLMJPNOLF__o *CJNHFNHJHPE;
  System_Action_long__o *CJNHFNHJHPE_00;
  EEOMEMBBGNA_o *__this_00;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE_01;
  MethodInfo *extraout_x1;
  CJFBGEEIPBA_o *pCVar1;
  
  if ((DAT_045689fb & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_FJIFDGEPKBH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_GHOCNBJIEEN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_JNCKDHJJBPM__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045689fb = 1;
    method = extraout_x1;
  }
  pCVar1 = (__this->fields).ECLPCNFNJCP;
  CJNHFNHJHPE = (System_Action_NLFLMJPNOLF__o *)
                thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo,method);
  System_Action<object>___ctor();
  if (pCVar1 != (CJFBGEEIPBA_o *)0x0) {
    CJFBGEEIPBA__HOGKHGFAJIM(pCVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).ECLPCNFNJCP;
    CJNHFNHJHPE_00 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
    System_Action<long>___ctor();
    if (pCVar1 != (CJFBGEEIPBA_o *)0x0) {
      CJFBGEEIPBA__OONONOKDLGD(pCVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      CJNHFNHJHPE_01 =
           (System_Action_OJEHKJHEBID__o *)thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (EEOMEMBBGNA_o *)0x0) {
        EEOMEMBBGNA__OKAMOFKHOLK(__this_00,CJNHFNHJHPE_01,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__OnDestroy
                  ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

