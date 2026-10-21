// Nekki.SF2.GUI.Pvp.PvpScene$$BNIMKENJJNE @ RVA 0x321D9A8

void Nekki_SF2_GUI_Pvp_PvpScene__BNIMKENJJNE
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  System_Action_string__string__o *CJNHFNHJHPE;
  System_Action_o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *pNVar1;
  
  if ((DAT_04566f1a & 1) == 0) {
    FUN_01bab630(&System_Action<string,_string>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_BNIMKENJJNE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_GKLHECKHOPC__);
    DAT_04566f1a = 1;
    method = extraout_x1;
  }
  pNVar1 = (__this->fields).IIBLCIFHCCF;
  CJNHFNHJHPE = (System_Action_string__string__o *)
                thunk_FUN_01bda818(System_Action<string,_string>_TypeInfo,method);
  System_Action<object,_object>___ctor();
  if (pNVar1 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
    Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersConfirm
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).IIBLCIFHCCF;
    CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
      Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersBack
                ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).IIBLCIFHCCF;
      if (pNVar1 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
        Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)pNVar1,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Pvp_PvpScene__HGFEFHNKEAB(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

