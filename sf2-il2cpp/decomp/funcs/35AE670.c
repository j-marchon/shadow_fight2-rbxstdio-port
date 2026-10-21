// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$JNHCLDEMMOM @ RVA 0x35AE670

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__JNHCLDEMMOM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *pNVar2;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_01;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Vector3_o HHPABFGHALF;
  
  if ((DAT_04568e6d & 1) == 0) {
    FUN_01bab630(&StringLiteral_18787);
    DAT_04568e6d = 1;
  }
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pNVar2 = (__this->fields)._hintPrefab;
    if (pNVar2 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
      DKIDCBPNMPD = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
      if (DAT_045660f3 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
        DAT_045660f3 = '\x01';
      }
      __this_01 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH
      ;
      if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
        HOKHHGFLMNA = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        __this_02 = (__this->fields)._chestHintMountRoot;
        if (__this_02 != (UnityEngine_Transform_o *)0x0) {
          HHPABFGHALF = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
          pNVar2 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                             (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,5.0,-1.0,-1.0,(MethodInfo *)0x0);
          if (pNVar2 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
            Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias
                      (pNVar2,StringLiteral_18787,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

