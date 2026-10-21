// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$SetVisibleJoinTypePanel @ RVA 0x344FEB0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetVisibleJoinTypePanel
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Object_o *exists;
  
  if ((DAT_0456829e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456829e = 1;
  }
  exists = (UnityEngine_Object_o *)(__this->fields)._joinTypePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._joinTypePanel;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

