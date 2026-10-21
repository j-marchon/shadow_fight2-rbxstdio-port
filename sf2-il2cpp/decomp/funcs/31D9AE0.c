// Nekki.SF2.GUI.Dialogs.Raids.RaidTopPlayerCell$$UpdateView @ RVA 0x31D9AE0

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell__UpdateView
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *pNVar3;
  UnityEngine_Vector2_o UVar4;
  
  if ((DAT_04566d0c & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    DAT_04566d0c = 1;
  }
  (*(__this->klass->vtable)._55_ReInit.methodPtr)(__this,(__this->klass->vtable)._55_ReInit.method);
  __this_00 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                        ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  __this_01 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                        ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar4 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4.fields.y = (__this->fields)._heightRegular;
      UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar4,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__UpdateView
                ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,HEHMPFLAEGE,
                 (MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__IsFake
                        ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pNVar3 = (__this->fields).super.DICNIMJBGML;
      if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
        iVar2 = (pNVar3->fields).FPNOLDAJPGK;
        if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = LPGPNBGHDBD__CJPODFGPDFI(iVar2,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell__KANCOIBLNKP(__this,iVar2,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

