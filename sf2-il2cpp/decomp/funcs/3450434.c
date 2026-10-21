// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$UpdateContent @ RVA 0x3450434

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,MethodInfo *method)

{
  bool bVar1;
  BKKENCMPLLF_o *pBVar2;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar4;
  EEHFEPPDBHL_o *pEVar5;
  int32_t local_24;
  
  if ((DAT_045682a2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045682a2 = 1;
    method = extraout_x1;
  }
  local_24 = 0;
  pNVar4 = (__this->fields)._nameEditBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0);
  if (bVar1) {
    pBVar2 = (__this->fields).FLLHHEODKPH;
    if (pBVar2 == (BKKENCMPLLF_o *)0x0) goto LAB_035505a0;
    pNVar4 = (__this->fields)._nameEditBox;
    pSVar3 = BKKENCMPLLF__MJBHKOJAFOH(pBVar2,(MethodInfo *)0x0);
    if (pNVar4 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_035505a0;
    UnityEngine_UI_InputField__set_text
              ((UnityEngine_UI_InputField_o *)pNVar4,pSVar3,(MethodInfo *)0x0);
  }
  pBVar2 = (__this->fields).FLLHHEODKPH;
  if (pBVar2 == (BKKENCMPLLF_o *)0x0) goto LAB_035505a0;
  pEVar5 = (pBVar2->fields)._OGOHLLOEANF_k__BackingField;
  pNVar4 = (__this->fields)._descEditBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0);
  if (bVar1) {
    if (pEVar5 == (EEHFEPPDBHL_o *)0x0) goto LAB_035505a0;
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pEVar5->fields).KKMDFLKPNNJ,(MethodInfo *)0x0);
    if (!bVar1) {
      pNVar4 = (__this->fields)._descEditBox;
      if (pNVar4 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_035505a0;
      UnityEngine_UI_InputField__set_text
                ((UnityEngine_UI_InputField_o *)pNVar4,(pEVar5->fields).KKMDFLKPNNJ,
                 (MethodInfo *)0x0);
    }
  }
  pNVar4 = (__this->fields)._ratingEditBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0);
  if (bVar1) {
    if (pEVar5 == (EEHFEPPDBHL_o *)0x0) goto LAB_035505a0;
    local_24 = (pEVar5->fields).IFICKDAKCHN;
    pNVar4 = (__this->fields)._ratingEditBox;
    pSVar3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    if (pNVar4 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_035505a0;
    UnityEngine_UI_InputField__set_text
              ((UnityEngine_UI_InputField_o *)pNVar4,pSVar3,(MethodInfo *)0x0);
  }
  else if (pEVar5 == (EEHFEPPDBHL_o *)0x0) goto LAB_035505a0;
  __this_00 = (__this->fields)._logoWidget;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__SetIcon
              (__this_00,(pEVar5->fields).JAAACMPGMKJ,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetJoinType
              (__this,(pEVar5->fields).JODJOLBBJNI,method_00);
    return;
  }
LAB_035505a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

