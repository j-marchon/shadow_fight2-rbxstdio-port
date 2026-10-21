// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$LHHLFBBBJLD @ RVA 0x33F9170

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__LHHLFBBBJLD
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               UnityEngine_RectTransform_o *FPANKOCKNJA,System_String_o *KLEGNFLIAPC,
               MethodInfo *method)

{
  Nekki_SF2_GUI_HintBoxAutoKilled_o *pNVar1;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  UnityEngine_Vector3_o HHPABFGHALF;
  
  if ((DAT_04567fa5 & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_04567fa5 = 1;
  }
  pNVar1 = (__this->fields)._hintPrefab;
  if (pNVar1 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
    DKIDCBPNMPD = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
    HOKHHGFLMNA = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (FPANKOCKNJA != (UnityEngine_RectTransform_o *)0x0) {
      HHPABFGHALF = UnityEngine_Transform__get_position
                              ((UnityEngine_Transform_o *)FPANKOCKNJA,(MethodInfo *)0x0);
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04566664 == '\0') {
        FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
        DAT_04566664 = '\x01';
      }
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar1 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                         (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,
                          DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM,-1.0,-1.0,
                          (MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
        Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias(pNVar1,KLEGNFLIAPC,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

