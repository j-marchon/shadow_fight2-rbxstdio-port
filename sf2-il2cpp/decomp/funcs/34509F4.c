// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$CGOBGFNCCEP @ RVA 0x34509F4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__CGOBGFNCCEP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,int32_t FBEGCBIAPPK,
               MethodInfo *method)

{
  bool bVar1;
  BKKENCMPLLF_o *__this_00;
  int32_t CJNHFNHJHPE;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar2;
  
  if ((DAT_045682a4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo,FBEGCBIAPPK);
    DAT_045682a4 = 1;
  }
  pNVar2 = (__this->fields)._joinTypeCheckBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._joinTypeCheckBox;
    if (pNVar2 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) goto LAB_03550a84;
    CJNHFNHJHPE = 1;
    if ((pNVar2->fields).OIKLOAGFFGO == 0) {
      CJNHFNHJHPE = 2;
    }
  }
  else {
    CJNHFNHJHPE = 1;
  }
  __this_00 = (__this->fields).FLLHHEODKPH;
  if (__this_00 != (BKKENCMPLLF_o *)0x0) {
    BKKENCMPLLF__PEILNGJMJEC(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_03550a84:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

