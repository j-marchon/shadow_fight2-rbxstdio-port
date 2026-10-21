// TypeDefIndex 2180
// Namespace: Nekki.SF2.GUI.Map
// public class RaidKeysButtonView : MapButtonViewBase
// Fields:

// ===== public void .ctor()  [RVA 0x32DE8A8]
// Nekki.SF2.GUI.Map.RaidKeysButtonView$$.ctor @ RVA 0x32DE8A8

void Nekki_SF2_GUI_Map_RaidKeysButtonView___ctor
               (Nekki_SF2_GUI_Map_RaidKeysButtonView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonViewBase___ctor
            ((Nekki_SF2_GUI_Map_MapButtonViewBase_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void DFAIHDKINDN()  [RVA 0x32DE8B0]
// Nekki.SF2.GUI.Map.RaidKeysButtonView$$DFAIHDKINDN @ RVA 0x32DE8B0

void Nekki_SF2_GUI_Map_RaidKeysButtonView__DFAIHDKINDN
               (Nekki_SF2_GUI_Map_RaidKeysButtonView_o *__this,MethodInfo *method)

{
  Roster_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_045675de & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675de = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (Roster_o *)0x0) {
    Roster__IOMGPHOEKGJ(__this_00,false,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapButtonViewBase__DFAIHDKINDN
              ((Nekki_SF2_GUI_Map_MapButtonViewBase_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void DENKPLMPEDI()  [RVA 0x32DE958]
// Nekki.SF2.GUI.Map.RaidKeysButtonView$$DENKPLMPEDI @ RVA 0x32DE958

void Nekki_SF2_GUI_Map_RaidKeysButtonView__DENKPLMPEDI
               (Nekki_SF2_GUI_Map_RaidKeysButtonView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  Roster_o *pAVar1;
  
  if ((DAT_045675df & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675df = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (Roster_o *)0x0) {
    if ((pAVar1->fields).JNKEGLDCNDJ == false) {
      return;
    }
    __this_00 = (__this->fields).super._hintButton;
    if (__this_00 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      SFButton__set_IsFlashing((SFButton_o *)__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init()  [RVA 0x32DEA58]
// Nekki.SF2.GUI.Map.RaidKeysButtonView$$Init @ RVA 0x32DEA58

void Nekki_SF2_GUI_Map_RaidKeysButtonView__Init
               (Nekki_SF2_GUI_Map_RaidKeysButtonView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  
  if ((DAT_045675e0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10911/*"RaidMap.keys_active"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_21523/*"titleRaidKeys"*/);
    DAT_045675e0 = 1;
  }
  __this_00 = (__this->fields).super._hintButton;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              (__this_00,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10911/*"RaidMap.keys_active"*/,(MethodInfo *)0x0);
    __this_01 = (__this->fields).super._hintTitle;
    if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_01,StringLiteral_21523/*"titleRaidKeys"*/,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Map_MapButtonViewBase__Init
                ((Nekki_SF2_GUI_Map_MapButtonViewBase_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

