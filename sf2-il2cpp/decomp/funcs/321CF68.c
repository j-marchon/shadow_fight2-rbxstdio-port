// Nekki.SF2.GUI.Pvp.PvpScene$$NHBHCPKGGCJ @ RVA 0x321CF68

void Nekki_SF2_GUI_Pvp_PvpScene__NHBHCPKGGCJ
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *pNVar1;
  System_Action_string__string__o *CJNHFNHJHPE;
  
  if ((DAT_04566f12 & 1) == 0) {
    FUN_01bab630(&System_Action<string,_string>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_PNPIHIBJKLO__);
    DAT_04566f12 = 1;
  }
  pNVar1 = (__this->fields).MPPLJPIAGDK;
  if (pNVar1 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
    Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).MPPLJPIAGDK;
    CJNHFNHJHPE = (System_Action_string__string__o *)
                  thunk_FUN_01bda818(System_Action<string,_string>_TypeInfo);
    System_Action<object,_object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
      Nekki_SF2_GUI_Pvp_SelectModule__add_OnPlayersConfirm
                ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

