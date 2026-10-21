// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoCell$$LHHLFBBBJLD @ RVA 0x3199828

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__LHHLFBBBJLD
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *pNVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this_00;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_01;
  System_String_o *DIHAKADKIKM;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Vector3_o HHPABFGHALF;
  
  DKIDCBPNMPD = (__this->fields)._hintPrefab;
  pNVar1 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
  if ((pNVar1 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) &&
     (__this_00 = (pNVar1->fields)._screen,
     __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)0x0)) {
    HOKHHGFLMNA = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    __this_02 = (__this->fields)._hintButtonMount;
    if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
      HHPABFGHALF = UnityEngine_Transform__get_position
                              ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
      __this_01 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                            (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,10.0,-1.0,-1.0,(MethodInfo *)0x0);
      DIHAKADKIKM = Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__ELDJGIKPKKP
                              ((__this->fields).JDNKKGPNHPB,method_00);
      if (__this_01 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
        Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias(__this_01,DIHAKADKIKM,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

