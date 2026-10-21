// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$GOPCKGEKOHL @ RVA 0x3553338

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__GOPCKGEKOHL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  undefined8 *puVar2;
  System_String_o *KLEGNFLIAPC;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *pNVar3;
  
  if ((DAT_04568b53 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_8292);
    FUN_01bab630(&StringLiteral_8293);
    FUN_01bab630(&StringLiteral_8291);
    FUN_01bab630(&StringLiteral_10306);
    FUN_01bab630(&StringLiteral_8290);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568b53 = 1;
    method = extraout_x1;
  }
  KLEGNFLIAPC = StringLiteral_1;
  if ((__this->fields).DICNIMJBGML ==
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    return;
  }
  switch((__this->fields).AOIPPGELMBD) {
  case 1:
    puVar2 = &StringLiteral_8291;
    break;
  case 2:
    puVar2 = &StringLiteral_8290;
    break;
  case 3:
    puVar2 = &StringLiteral_8293;
    break;
  case 4:
    puVar2 = &StringLiteral_8292;
    break;
  default:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_10306,(MethodInfo *)0x0);
    goto LAB_0365345c;
  }
  KLEGNFLIAPC = (System_String_o *)*puVar2;
LAB_0365345c:
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
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__ShowPosHint
              (pNVar3,(__this->fields)._progressHintPos,KLEGNFLIAPC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

