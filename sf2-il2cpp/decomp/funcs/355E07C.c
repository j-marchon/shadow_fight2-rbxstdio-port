// Nekki.SF2.GUI.Fight.ScreenModel$$IMLPLEDCBIP @ RVA 0x355E07C

void Nekki_SF2_GUI_Fight_ScreenModel__IMLPLEDCBIP
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar1;
  System_Action_T__o *IELDNEAAPBE;
  
  if ((DAT_04568ba5 & 1) == 0) {
    FUN_01bab630(&System_Action<ComboModel_LNFENBCODDP>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<ComboModel_LNFENBCODDP>_AddEventListener__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ScreenModel_JHJBEMDEEHG__);
    DAT_04568ba5 = 1;
  }
  pNVar1 = (__this->fields)._comboModel;
  if (pNVar1 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ComboModel__Init(pNVar1,(__this->fields)._Type,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._comboModel;
    IELDNEAAPBE = (System_Action_T__o *)
                  thunk_FUN_01bda818(System_Action<ComboModel_LNFENBCODDP>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)pNVar1,0,IELDNEAAPBE,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<ComboModel_LNFENBCODDP>_AddEventListener__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

