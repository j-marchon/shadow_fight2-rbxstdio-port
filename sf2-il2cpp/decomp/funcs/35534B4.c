// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$FMFBGOKFDJE @ RVA 0x35534B4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__FMFBGOKFDJE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  undefined8 *puVar2;
  System_String_o *KLEGNFLIAPC;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *pNVar3;
  
  if ((DAT_04568b54 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_3570);
    FUN_01bab630(&StringLiteral_6563);
    FUN_01bab630(&StringLiteral_12135);
    FUN_01bab630(&StringLiteral_6870);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_4325);
    DAT_04568b54 = 1;
    method = extraout_x1;
  }
  KLEGNFLIAPC = StringLiteral_1;
  if ((__this->fields).DICNIMJBGML ==
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    return;
  }
  switch((__this->fields).FNDKDKKMFGN) {
  case 1:
    puVar2 = &StringLiteral_6870;
    break;
  case 2:
    puVar2 = &StringLiteral_12135;
    break;
  case 3:
    puVar2 = &StringLiteral_3570;
    break;
  case 4:
    puVar2 = &StringLiteral_6563;
    break;
  default:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_4325,(MethodInfo *)0x0);
    goto LAB_036535d8;
  }
  KLEGNFLIAPC = (System_String_o *)*puVar2;
LAB_036535d8:
  pNVar3 = (__this->fields).PBIDKAAGKLB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).PBIDKAAGKLB;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__ShowHint
              (pNVar3,(__this->fields)._chestHintPos,KLEGNFLIAPC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

