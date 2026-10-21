// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$OnDestroy @ RVA 0x3427FC0

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_0456811b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_IAKHIFOFLGO__);
    DAT_0456811b = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FDPLPNKKGGO(__this,method_00);
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HCCNPDEPLJA(__this,method_01);
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FMAEMJENECC(__this,method_02);
  (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
  return;
}

