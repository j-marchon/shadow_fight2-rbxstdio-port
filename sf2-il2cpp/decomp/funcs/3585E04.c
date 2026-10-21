// Nekki.SF2.GUI.Map.MapScene$$LHHLFBBBJLD @ RVA 0x3585E04

void Nekki_SF2_GUI_Map_MapScene__LHHLFBBBJLD
               (Nekki_SF2_GUI_Map_MapScene_o *__this,UnityEngine_RectTransform_o *FPANKOCKNJA,
               System_String_o *KLEGNFLIAPC,MethodInfo *method)

{
  Nekki_SF2_GUI_HintBoxAutoKilled_o *pNVar1;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar2;
  UnityEngine_Vector3_o HHPABFGHALF;
  
  if ((DAT_04568d13 & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_04568d13 = 1;
  }
  pNVar2 = (__this->fields).FMIFNIIJJNK;
  if ((pNVar2 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
     (pNVar1 = (pNVar2->fields).RaidHintPrefab, pNVar1 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0))
  {
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

