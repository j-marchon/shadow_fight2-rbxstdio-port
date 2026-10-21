// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$GetActiveBoard @ RVA 0x3120C58

int32_t Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__GetActiveBoard
                  (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
                  MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  SFButton_o *x;
  
  if ((DAT_04566628 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566628 = 1;
    method = extraout_x1;
  }
  x = (__this->fields).NJHJPOAKMNP;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = (__this->fields).ILIAKNEMPHH;
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}

