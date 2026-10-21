// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$COHKIFCAHGD @ RVA 0x31017D0

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__COHKIFCAHGD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  
  if ((DAT_045664c5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045664c5 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._btnRandomPlayers;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar2 = (__this->fields)._btnRandomPlayers;
  if ((pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

