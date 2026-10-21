// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$SetEditJoinTypeEnabled @ RVA 0x344FAB0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditJoinTypeEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar2;
  
  if ((DAT_0456829b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456829b = 1;
  }
  pNVar2 = (__this->fields)._joinTypeCheckBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._joinTypeCheckBox;
    if (pNVar2 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
      Nekki_SF2_GUI_Scripts_CheckBox__set_interactable(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

