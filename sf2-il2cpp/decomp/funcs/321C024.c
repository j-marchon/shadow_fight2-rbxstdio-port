// Nekki.SF2.GUI.Pvp.PvpScene$$FLODGLDFFGL @ RVA 0x321C024

void Nekki_SF2_GUI_Pvp_PvpScene__FLODGLDFFGL
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  System_Action_string__string__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this_00;
  
  if ((DAT_04566f0b & 1) == 0) {
    FUN_01bab630(&System_Action<string,_string>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_PNPIHIBJKLO__);
    DAT_04566f0b = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).MPPLJPIAGDK;
  CJNHFNHJHPE = (System_Action_string__string__o *)
                thunk_FUN_01bda818(System_Action<string,_string>_TypeInfo,method);
  System_Action<object,_object>___ctor();
  if (__this_00 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
    Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersConfirm
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

