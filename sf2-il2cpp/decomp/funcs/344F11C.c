// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$SetJoinType @ RVA 0x344F11C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetJoinType
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar2;
  
  if ((DAT_04568295 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568295 = 1;
  }
  pNVar2 = (__this->fields)._joinTypeCheckBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar2 = (__this->fields)._joinTypeCheckBox;
  if (pNVar2 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
    Nekki_SF2_GUI_Scripts_CheckBox__set_State(pNVar2,(uint)(CJNHFNHJHPE != 2),(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

