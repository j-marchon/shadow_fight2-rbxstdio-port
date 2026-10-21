// Nekki.SF2.GUI.Dialogs.SettingsDialog$$IIHMBEPEFDJ @ RVA 0x34846B4

void Nekki_SF2_GUI_Dialogs_SettingsDialog__IIHMBEPEFDJ
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_ResolutionButton_o *LGHOMHOPNEP;
  MethodInfo *method_02;
  System_String_o *IEPAILIKIEM;
  MethodInfo *in_x4;
  float BHOOMCEABGH;
  
  if ((DAT_0456839b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&StringLiteral_11937);
    FUN_01bab630(&StringLiteral_11939);
    FUN_01bab630(&StringLiteral_11942);
    FUN_01bab630(&StringLiteral_11950);
    DAT_0456839b = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__OIAIFGDLFHJ(__this,method);
  Nekki_SF2_GUI_Dialogs_SettingsDialog__IJCCOHCPGIM(__this,method_00);
  Nekki_SF2_GUI_Dialogs_SettingsDialog__BDFKOFFLBME(__this,method_01);
  method_02 = StringLiteral_11937;
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            (__this,(__this->fields).btnCredits,(System_String_o *)StringLiteral_11937,-670.0,-200.0
             ,2,in_x4);
  Nekki_SF2_GUI_Dialogs_SettingsDialog__HAONPBDHBCD(__this,(DBNEEHGBCJD_o *)0x0,method_02);
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            (__this,(__this->fields).btnSupport,StringLiteral_11950,-670.0,-400.0,6,in_x4);
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if ((iVar1 == 8) && (iVar1 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0), iVar1 != 8)) {
    LGHOMHOPNEP = (__this->fields).btnItunes;
    BHOOMCEABGH = 4.0;
    IEPAILIKIEM = StringLiteral_11942;
  }
  else {
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if ((iVar1 != 0xb) || (iVar1 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0), iVar1 == 4)) {
      return;
    }
    LGHOMHOPNEP = (__this->fields).btnItunes;
    BHOOMCEABGH = -196.0;
    IEPAILIKIEM = StringLiteral_11939;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            (__this,LGHOMHOPNEP,IEPAILIKIEM,0.0,BHOOMCEABGH,7,in_x4);
  return;
}

