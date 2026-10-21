// Nekki.SF2.GUI.Fight.ScreenModel$$Reset @ RVA 0x355E8A0

void Nekki_SF2_GUI_Fight_ScreenModel__Reset
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  PJKHAJKEHEL_o *pPVar2;
  Nekki_SF2_GUI_Fight_PlayerLifeBar_o *pNVar3;
  Nekki_SF2_GUI_Fight_StylePanel_o *pNVar4;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar5;
  float fVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_04568ba4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ba4 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._lifeBar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (bVar1) {
    pPVar2 = (__this->fields)._parameters;
    if (pPVar2 == (PJKHAJKEHEL_o *)0x0) goto LAB_0365ea10;
    local_40.fakeValueActive = (pPVar2->fields).JNFNFEJAGGN.fields.fakeValueActive;
    local_40.inited = (pPVar2->fields).JNFNFEJAGGN.fields.inited;
    local_40._18_2_ = *(undefined2 *)&(pPVar2->fields).JNFNFEJAGGN.fields.field_0x12;
    local_40.hiddenValueOldByte4.fields =
         (pPVar2->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
    local_40.fakeValue = (pPVar2->fields).JNFNFEJAGGN.fields.fakeValue;
    local_40.currentCryptoKey = (pPVar2->fields).JNFNFEJAGGN.fields.currentCryptoKey;
    local_40.hiddenValue = (pPVar2->fields).JNFNFEJAGGN.fields.hiddenValue;
    pNVar3 = (__this->fields)._lifeBar;
    fVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,
                       (MethodInfo *)0x0);
    if (pNVar3 == (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *)0x0) goto LAB_0365ea10;
    Nekki_SF2_GUI_Fight_PlayerLifeBar__SetValBarValue(pNVar3,fVar6,0,(MethodInfo *)0x0);
    pPVar2 = (__this->fields)._parameters;
    if (pPVar2 == (PJKHAJKEHEL_o *)0x0) goto LAB_0365ea10;
    local_60.fakeValueActive = (pPVar2->fields).JNFNFEJAGGN.fields.fakeValueActive;
    local_60.inited = (pPVar2->fields).JNFNFEJAGGN.fields.inited;
    local_60._18_2_ = *(undefined2 *)&(pPVar2->fields).JNFNFEJAGGN.fields.field_0x12;
    local_60.hiddenValueOldByte4.fields =
         (pPVar2->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
    local_60.fakeValue = (pPVar2->fields).JNFNFEJAGGN.fields.fakeValue;
    local_60.currentCryptoKey = (pPVar2->fields).JNFNFEJAGGN.fields.currentCryptoKey;
    local_60.hiddenValue = (pPVar2->fields).JNFNFEJAGGN.fields.hiddenValue;
    pNVar3 = (__this->fields)._lifeBar;
    fVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                       (MethodInfo *)0x0);
    if (pNVar3 == (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *)0x0) goto LAB_0365ea10;
    Nekki_SF2_GUI_Fight_PlayerLifeBar__SetHitBarValue(pNVar3,fVar6,0,(MethodInfo *)0x0);
    method_00 = extraout_x1_01;
  }
  Nekki_SF2_GUI_Fight_ScreenModel__JENEOLKJABD(__this,method_00);
  pNVar4 = (__this->fields)._stylePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._stylePanel;
    if (pNVar4 == (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) goto LAB_0365ea10;
    Nekki_SF2_GUI_Fight_StylePanel__ResetStyle(pNVar4,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields)._comboModel;
    if (pNVar5 == (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
LAB_0365ea10:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Fight_ComboModel__ResetComboStrike(pNVar5,(MethodInfo *)0x0);
  }
  (__this->fields)._IsNoBlock_k__BackingField = true;
  return;
}

