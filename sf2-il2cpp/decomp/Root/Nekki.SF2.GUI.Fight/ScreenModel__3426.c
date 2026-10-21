// TypeDefIndex 3426
// Namespace: Nekki.SF2.GUI.Fight
// [Serializable]
// public class ScreenModel : MonoBehaviour
// Fields:
//   private ScreenModel.GIGDGHANHFM _Type; // 0x20
//   private ResolutionImageAvatar _Avatar; // 0x28
//   private PlayerLifeBar _lifeBar; // 0x30
//   private LabelAlias _lifeBarLvlCount; // 0x38
//   private StylePanel _stylePanel; // 0x40
//   private ResolutionImage _styleName; // 0x48
//   private RoundsPanel _roundsPanel; // 0x50
//   private LabelAlias _name; // 0x58
//   private ComboModel _comboModel; // 0x60
//   private ActivePerkModel _activePerkModel; // 0x68
//   private GameObject _WinBtn; // 0x70
//   private GameObject _PlayerColorCircle; // 0x78
//   private Color _PlayerPvpColor; // 0x80
//   private PJKHAJKEHEL _parameters; // 0x90
//   private bool _showRounds; // 0x98
//   private bool <IsNoBlock>k__BackingField; // 0x99
//   private Action<BFMEMCBCKLK> OnStyleChange; // 0xA0
//   private Action<ScreenModel.MPGAFKNLIPG> OnComboUp; // 0xA8

// ===== private void LBGEOIOINOM()  [RVA 0x355D934]
// Nekki.SF2.GUI.Fight.ScreenModel$$LBGEOIOINOM @ RVA 0x355D934

void Nekki_SF2_GUI_Fight_ScreenModel__LBGEOIOINOM
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar1;
  System_String_o *pSVar2;
  PJKHAJKEHEL_o *pPVar3;
  
  if ((DAT_04568b96 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04568b96 = 1;
  }
  pNVar1 = (__this->fields)._Avatar;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._Avatar;
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
      *(System_String_o **)&(pNVar1->fields).super.super.m_PixelsPerUnitMultiplier = pSVar2;
      thunk_FUN_01c20e04(&(pNVar1->fields).super.super.m_PixelsPerUnitMultiplier);
      pPVar3 = (__this->fields)._parameters;
      if ((pPVar3 != (PJKHAJKEHEL_o *)0x0) &&
         (pNVar1 = (__this->fields)._Avatar, pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0)
         ) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar1,(pPVar3->fields).NILOEHGNJNL,
                   (MethodInfo *)0x0);
        pNVar1 = (__this->fields)._Avatar;
        if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0365d9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar1->klass->vtable)._45_SetNativeSize.methodPtr)
                    (pNVar1,(pNVar1->klass->vtable)._45_SetNativeSize.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetLockLifeUpdate(bool CJNHFNHJHPE)  [RVA 0x355D9E8]
// Nekki.SF2.GUI.Fight.ScreenModel$$SetLockLifeUpdate @ RVA 0x355D9E8

void Nekki_SF2_GUI_Fight_ScreenModel__SetLockLifeUpdate
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_PlayerLifeBar_o *pNVar2;
  
  if ((DAT_04568b97 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568b97 = 1;
  }
  pNVar2 = (__this->fields)._lifeBar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._lifeBar;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pNVar2->fields).LockLifeUpdate = CJNHFNHJHPE;
  }
  return;
}


// ===== private void LFHCGPJGDLG()  [RVA 0x355DA70]
// Nekki.SF2.GUI.Fight.ScreenModel$$LFHCGPJGDLG @ RVA 0x355DA70

void Nekki_SF2_GUI_Fight_ScreenModel__LFHCGPJGDLG
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  int32_t DKLNFMKFLFJ;
  PJKHAJKEHEL_o *pPVar1;
  Nekki_SF2_GUI_Fight_RoundsPanel_o *__this_00;
  
  pPVar1 = (__this->fields)._parameters;
  if (pPVar1 == (PJKHAJKEHEL_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields)._roundsPanel;
  DKLNFMKFLFJ = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pPVar1->fields).AGFNMOMJCGB.fields,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Fight_RoundsPanel_o *)0x0) {
    Nekki_SF2_GUI_Fight_RoundsPanel__Init(__this_00,DKLNFMKFLFJ,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowCritical()  [RVA 0x355DAB4]
// Nekki.SF2.GUI.Fight.ScreenModel$$ShowCritical @ RVA 0x355DAB4

void Nekki_SF2_GUI_Fight_ScreenModel__ShowCritical
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar2;
  
  if ((DAT_04568b98 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568b98 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._comboModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ComboModel__CreateCritical(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void SetHealthBarVisible(bool CJNHFNHJHPE)  [RVA 0x355DB38]
// Nekki.SF2.GUI.Fight.ScreenModel$$SetHealthBarVisible @ RVA 0x355DB38

void Nekki_SF2_GUI_Fight_ScreenModel__SetHealthBarVisible
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Fight_PlayerLifeBar_o *pNVar2;
  
  if ((DAT_04568b99 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568b99 = 1;
  }
  pNVar2 = (__this->fields)._lifeBar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._lifeBar;
    if ((pNVar2 != (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void HideActivePerkInfo(MMDDDDFHOLG.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x355DBDC]
// Nekki.SF2.GUI.Fight.ScreenModel$$HideActivePerkInfo @ RVA 0x355DBDC

void Nekki_SF2_GUI_Fight_ScreenModel__HideActivePerkInfo
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ActivePerkModel_o *pNVar2;
  
  if ((DAT_04568b9a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568b9a = 1;
  }
  pNVar2 = (__this->fields)._activePerkModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._activePerkModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ActivePerkModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ActivePerkModel__RemoveActivePerkItem
                (pNVar2,CPECAEHDDDB,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void .ctor()  [RVA 0x355DC74]
// Nekki.SF2.GUI.Fight.ScreenModel$$.ctor @ RVA 0x355DC74

void Nekki_SF2_GUI_Fight_ScreenModel___ctor
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  System_Action_BFMEMCBCKLK__o **ppSVar1;
  System_Action_ScreenModel_MPGAFKNLIPG__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_BFMEMCBCKLK__o *pSVar3;
  System_Action_ScreenModel_MPGAFKNLIPG__o *pSVar4;
  
  if ((DAT_04568b9b & 1) == 0) {
    FUN_01bab630(&System_Action<BFMEMCBCKLK>_TypeInfo);
    FUN_01bab630(&System_Action<ScreenModel_MPGAFKNLIPG>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ScreenModel_<>c_IGONOGOAECN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ScreenModel_<>c_OCOAOEMJJEL__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo);
    DAT_04568b9b = 1;
    method = extraout_x1;
  }
  (__this->fields)._showRounds = true;
  if ((Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->static_fields->__9__76_0;
  if (pSVar3 == (System_Action_BFMEMCBCKLK__o *)0x0) {
    if ((Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_BFMEMCBCKLK__o *)thunk_FUN_01bda818(System_Action<BFMEMCBCKLK>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->static_fields->__9__76_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  ppSVar1 = &(__this->fields).OnStyleChange;
  *ppSVar1 = pSVar3;
  thunk_FUN_01c20e04(ppSVar1,pSVar3);
  if ((Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->static_fields->__9__76_1;
  if (pSVar4 == (System_Action_ScreenModel_MPGAFKNLIPG__o *)0x0) {
    if ((Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = (System_Action_ScreenModel_MPGAFKNLIPG__o *)
             thunk_FUN_01bda818(System_Action<ScreenModel_MPGAFKNLIPG>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->static_fields->__9__76_1;
    *ppSVar2 = pSVar4;
    thunk_FUN_01c20e04(ppSVar2,pSVar4);
  }
  ppSVar2 = &(__this->fields).OnComboUp;
  *ppSVar2 = pSVar4;
  thunk_FUN_01c20e04(ppSVar2,pSVar4);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void ShowFirstStrike()  [RVA 0x355DE0C]
// Nekki.SF2.GUI.Fight.ScreenModel$$ShowFirstStrike @ RVA 0x355DE0C

void Nekki_SF2_GUI_Fight_ScreenModel__ShowFirstStrike
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar2;
  
  if ((DAT_04568b9c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568b9c = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._comboModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ComboModel__CreateFirstStrike(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void JDPOALANLGC(Color EFJKPCADGJH)  [RVA 0x355DE90]
// Nekki.SF2.GUI.Fight.ScreenModel$$JDPOALANLGC @ RVA 0x355DE90

void Nekki_SF2_GUI_Fight_ScreenModel__JDPOALANLGC
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,UnityEngine_Color_o EFJKPCADGJH,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  pNVar1 = (__this->fields)._name;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0365deac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(EFJKPCADGJH.fields.r,EFJKPCADGJH.fields.g,EFJKPCADGJH.fields.b,EFJKPCADGJH.fields.a);
}


// ===== public void Init(PJKHAJKEHEL OKBIKHHKOEN, bool BFANHMIHMGA = True)  [RVA 0x355DEB4]
// Nekki.SF2.GUI.Fight.ScreenModel$$Init @ RVA 0x355DEB4

void Nekki_SF2_GUI_Fight_ScreenModel__Init
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,PJKHAJKEHEL_o *OKBIKHHKOEN,
               bool BFANHMIHMGA,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_x1;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  
  (__this->fields)._parameters = OKBIKHHKOEN;
  thunk_FUN_01c20e04();
  (__this->fields)._showRounds = BFANHMIHMGA;
  (__this->fields)._IsNoBlock_k__BackingField = true;
  Nekki_SF2_GUI_Fight_ScreenModel__LBGEOIOINOM(__this,method_00);
  Nekki_SF2_GUI_Fight_ScreenModel__KIJPPGNCOEN(__this,method_01);
  Nekki_SF2_GUI_Fight_ScreenModel__KPECLAGHALL(__this,method_02);
  method_04 = method_03;
  if ((__this->fields)._showRounds != false) {
    Nekki_SF2_GUI_Fight_ScreenModel__LFHCGPJGDLG(__this,method_03);
    method_04 = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_ScreenModel__CPJNKKGEHHN(__this,method_04);
  Nekki_SF2_GUI_Fight_ScreenModel__IMLPLEDCBIP(__this,method_05);
  __this_00 = (__this->fields)._activePerkModel;
  if (__this_00 != (Nekki_SF2_GUI_Fight_ActivePerkModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ActivePerkModel__Init(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Fight_ScreenModel__ICEODDLGPEC(__this,method_06);
    Nekki_SF2_GUI_Fight_ScreenModel__JENEOLKJABD(__this,method_07);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JENEOLKJABD()  [RVA 0x355E174]
// Nekki.SF2.GUI.Fight.ScreenModel$$JENEOLKJABD @ RVA 0x355E174

void Nekki_SF2_GUI_Fight_ScreenModel__JENEOLKJABD
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *arg0;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  PJKHAJKEHEL_o *pPVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  Nekki_SF2_GUI_Fight_PlayerLifeBar_o *pNVar6;
  float CJNHFNHJHPE;
  int32_t local_44;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_04568b9d & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15022/*"X {0}"*/);
    DAT_04568b9d = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields)._lifeBarLvlCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pNVar6 = (__this->fields)._lifeBar;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      pPVar4 = (__this->fields)._parameters;
      if (pPVar4 != (PJKHAJKEHEL_o *)0x0) {
        local_40.fakeValueActive = (pPVar4->fields).JNFNFEJAGGN.fields.fakeValueActive;
        local_40.inited = (pPVar4->fields).JNFNFEJAGGN.fields.inited;
        local_40._18_2_ = *(undefined2 *)&(pPVar4->fields).JNFNFEJAGGN.fields.field_0x12;
        local_40.hiddenValueOldByte4.fields =
             (pPVar4->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
        local_40.fakeValue = (pPVar4->fields).JNFNFEJAGGN.fields.fakeValue;
        local_40.currentCryptoKey = (pPVar4->fields).JNFNFEJAGGN.fields.currentCryptoKey;
        local_40.hiddenValue = (pPVar4->fields).JNFNFEJAGGN.fields.hiddenValue;
        pNVar6 = (__this->fields)._lifeBar;
        CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,
                                 (MethodInfo *)0x0);
        if (pNVar6 != (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *)0x0) {
          iVar2 = Nekki_SF2_GUI_Fight_PlayerLifeBar__DefineLevelNumber
                            (pNVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
          pNVar5 = (__this->fields)._lifeBarLvlCount;
          if (iVar2 < 2) {
            if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                        (pNVar5,0,(pNVar5->klass->vtable)._75_set_text.method);
              pNVar5 = (__this->fields)._lifeBarLvlCount;
              if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                 (__this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
                 __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                bVar1 = false;
LAB_0365e300:
                UnityEngine_GameObject__SetActive(__this_00,bVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            local_44 = iVar2;
            arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
            pSVar3 = System_String__Format(StringLiteral_15022/*"X {0}"*/,arg0,(MethodInfo *)0x0);
            if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                        (pNVar5,pSVar3,(pNVar5->klass->vtable)._75_set_text.method);
              pNVar5 = (__this->fields)._lifeBarLvlCount;
              if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                 (__this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
                 __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                bVar1 = true;
                goto LAB_0365e300;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private void ODKLIPGMALD()  [RVA 0x355E138]
// Nekki.SF2.GUI.Fight.ScreenModel$$ODKLIPGMALD @ RVA 0x355E138

void Nekki_SF2_GUI_Fight_ScreenModel__ODKLIPGMALD
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this_00;
  
  __this_00 = (__this->fields)._activePerkModel;
  if (__this_00 != (Nekki_SF2_GUI_Fight_ActivePerkModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ActivePerkModel__Init(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowPerfect()  [RVA 0x355E31C]
// Nekki.SF2.GUI.Fight.ScreenModel$$ShowPerfect @ RVA 0x355E31C

void Nekki_SF2_GUI_Fight_ScreenModel__ShowPerfect
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar2;
  
  if ((DAT_04568b9e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568b9e = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._comboModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ComboModel__AddPerfect(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void MDEAIENJJJH(bool IJGKJEKFKDL)  [RVA 0x355E3A0]
// Nekki.SF2.GUI.Fight.ScreenModel$$MDEAIENJJJH @ RVA 0x355E3A0

void Nekki_SF2_GUI_Fight_ScreenModel__MDEAIENJJJH
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,bool IJGKJEKFKDL,MethodInfo *method)

{
  int32_t iVar1;
  BFMEMCBCKLK_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Action_BFMEMCBCKLK__o *pSVar3;
  System_String_o **ppSVar4;
  float fVar5;
  
  if ((DAT_04568b9f & 1) == 0) {
    FUN_01bab630(&BFMEMCBCKLK_TypeInfo);
    DAT_04568b9f = 1;
  }
  __this_00 = (BFMEMCBCKLK_o *)thunk_FUN_01bda818(BFMEMCBCKLK_TypeInfo);
  BFMEMCBCKLK___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (BFMEMCBCKLK_o *)0x0) {
    (__this_00->fields).HEMGHNOOJPI = (__this->fields)._Type;
    iVar1 = Nekki_SF2_GUI_Fight_ScreenModel__get_CurrentStyleStrip(__this,method_00);
    (__this_00->fields).LKCLAAIHPMG = iVar1;
    pSVar2 = Nekki_SF2_GUI_Fight_ScreenModel__get_CurrentStyleName(__this,method_01);
    ppSVar4 = &(__this_00->fields).AOKLNLDCPGF;
    *ppSVar4 = pSVar2;
    thunk_FUN_01c20e04(ppSVar4,pSVar2);
    fVar5 = Nekki_SF2_GUI_Fight_ScreenModel__get_CurrentStyleValue(__this,method_02);
    (__this_00->fields).GKDHKOCLPBB = fVar5;
    (__this_00->fields).CANHKPJGDFO = IJGKJEKFKDL;
    pSVar3 = (__this->fields).OnStyleChange;
    if (pSVar3 != (System_Action_BFMEMCBCKLK__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0365e45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,__this_00,
                 (pSVar3->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ICEODDLGPEC()  [RVA 0x355E154]
// Nekki.SF2.GUI.Fight.ScreenModel$$ICEODDLGPEC @ RVA 0x355E154

void Nekki_SF2_GUI_Fight_ScreenModel__ICEODDLGPEC
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = (__this->fields)._WinBtn;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnComboUp(Action<ScreenModel.MPGAFKNLIPG> CJNHFNHJHPE)  [RVA 0x355E608]
// Nekki.SF2.GUI.Fight.ScreenModel$$add_OnComboUp @ RVA 0x355E608

void Nekki_SF2_GUI_Fight_ScreenModel__add_OnComboUp
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,
               System_Action_ScreenModel_MPGAFKNLIPG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_ScreenModel_MPGAFKNLIPG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_ScreenModel_MPGAFKNLIPG__o *pSVar5;
  System_Action_ScreenModel_MPGAFKNLIPG__o **ppSVar6;
  System_Action_ScreenModel_MPGAFKNLIPG__o *a;
  
  if ((DAT_04568ba0 & 1) == 0) {
    FUN_01bab630(&System_Action<ScreenModel_MPGAFKNLIPG>_TypeInfo);
    DAT_04568ba0 = 1;
  }
  ppSVar6 = &(__this->fields).OnComboUp;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<ScreenModel_MPGAFKNLIPG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<ScreenModel_MPGAFKNLIPG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_ScreenModel_MPGAFKNLIPG__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void set_IsNoBlock(bool CJNHFNHJHPE)  [RVA 0x355E6B8]
// Nekki.SF2.GUI.Fight.ScreenModel$$set_IsNoBlock @ RVA 0x355E6B8

void Nekki_SF2_GUI_Fight_ScreenModel__set_IsNoBlock
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IsNoBlock_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void ShowHotGroundTimer(int LFJGFLNMBMC)  [RVA 0x355E6C4]
// Nekki.SF2.GUI.Fight.ScreenModel$$ShowHotGroundTimer @ RVA 0x355E6C4

void Nekki_SF2_GUI_Fight_ScreenModel__ShowHotGroundTimer
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,int32_t LFJGFLNMBMC,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar2;
  
  if ((DAT_04568ba1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ba1 = 1;
  }
  pNVar2 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._comboModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ComboModel__UpdateHotGroundTimer(pNVar2,LFJGFLNMBMC,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void ShowShock()  [RVA 0x355E75C]
// Nekki.SF2.GUI.Fight.ScreenModel$$ShowShock @ RVA 0x355E75C

void Nekki_SF2_GUI_Fight_ScreenModel__ShowShock
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar2;
  
  if ((DAT_04568ba2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ba2 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._comboModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ComboModel__CreateShock(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void UpdateStyle(ECENNHNBAME CAMAHOAFAPK)  [RVA 0x355E7E0]
// Nekki.SF2.GUI.Fight.ScreenModel$$UpdateStyle @ RVA 0x355E7E0

void Nekki_SF2_GUI_Fight_ScreenModel__UpdateStyle
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,ECENNHNBAME_o *CAMAHOAFAPK,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ComboModel_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_StylePanel_o *pNVar2;
  
  if ((DAT_04568ba3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ba3 = 1;
  }
  pNVar2 = (__this->fields)._stylePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._stylePanel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) {
      Nekki_SF2_GUI_Fight_StylePanel__UpdateStyle(pNVar2,CAMAHOAFAPK,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._stylePanel;
      if ((pNVar2 != (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) &&
         (__this_00 = (__this->fields)._comboModel,
         __this_00 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        Nekki_SF2_GUI_Fight_ComboModel__AddCrazyStyle
                  (__this_00,(pNVar2->fields).OOADLOIGCHI,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Fight_ScreenModel__MDEAIENJJJH(__this,true,method_00);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void KPECLAGHALL()  [RVA 0x355DF60]
// Nekki.SF2.GUI.Fight.ScreenModel$$KPECLAGHALL @ RVA 0x355DF60

void Nekki_SF2_GUI_Fight_ScreenModel__KPECLAGHALL
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_StylePanel_o *__this_00;
  
  __this_00 = (__this->fields)._stylePanel;
  if (__this_00 != (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) {
    Nekki_SF2_GUI_Fight_StylePanel__Init(__this_00,(__this->fields)._styleName,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Reset()  [RVA 0x355E8A0]
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


// ===== private void IMLPLEDCBIP()  [RVA 0x355E07C]
// Nekki.SF2.GUI.Fight.ScreenModel$$IMLPLEDCBIP @ RVA 0x355E07C

void Nekki_SF2_GUI_Fight_ScreenModel__IMLPLEDCBIP
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar1;
  System_Action_T__o *IELDNEAAPBE;
  
  if ((DAT_04568ba5 & 1) == 0) {
    FUN_01bab630(&System_Action<ComboModel_LNFENBCODDP>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<ComboModel_LNFENBCODDP>_AddEventListener__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ScreenModel_JHJBEMDEEHG__);
    DAT_04568ba5 = 1;
  }
  pNVar1 = (__this->fields)._comboModel;
  if (pNVar1 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ComboModel__Init(pNVar1,(__this->fields)._Type,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._comboModel;
    IELDNEAAPBE = (System_Action_T__o *)
                  thunk_FUN_01bda818(System_Action<ComboModel_LNFENBCODDP>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)pNVar1,0,IELDNEAAPBE,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<ComboModel_LNFENBCODDP>_AddEventListener__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Statistic(GOJLGHMMDBO CJNHFNHJHPE)  [RVA 0x355EA14]
// Nekki.SF2.GUI.Fight.ScreenModel$$set_Statistic @ RVA 0x355EA14

void Nekki_SF2_GUI_Fight_ScreenModel__set_Statistic
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,GOJLGHMMDBO_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  GOJLGHMMDBO_o **ppGVar2;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar3;
  
  if ((DAT_04568ba6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ba6 = 1;
  }
  pNVar3 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._comboModel;
    if (pNVar3 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      ppGVar2 = &(pNVar3->fields).AMKECFKEGJH;
      *ppGVar2 = CJNHFNHJHPE;
      thunk_FUN_01c20e04(ppGVar2,CJNHFNHJHPE);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public BKHDDKOEEKP.BGGNJLLOHII get_MaxStyle()  [RVA 0x355EAAC]
// Nekki.SF2.GUI.Fight.ScreenModel$$get_MaxStyle @ RVA 0x355EAAC

int32_t Nekki_SF2_GUI_Fight_ScreenModel__get_MaxStyle
                  (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_StylePanel_o *pNVar3;
  
  if ((DAT_04568ba7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ba7 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._stylePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._stylePanel;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = (pNVar3->fields).HOBABLEHLDI;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


// ===== public void SetPlayerPvpMode(bool CJNHFNHJHPE)  [RVA 0x355EB2C]
// Nekki.SF2.GUI.Fight.ScreenModel$$SetPlayerPvpMode @ RVA 0x355EB2C

void Nekki_SF2_GUI_Fight_ScreenModel__SetPlayerPvpMode
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *x;
  
  if ((DAT_04568ba8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo,CJNHFNHJHPE);
    DAT_04568ba8 = 1;
  }
  x = (__this->fields)._name;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Object__op_Inequality
            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return;
}


// ===== public void ResetActivePerk()  [RVA 0x355EB8C]
// Nekki.SF2.GUI.Fight.ScreenModel$$ResetActivePerk @ RVA 0x355EB8C

void Nekki_SF2_GUI_Fight_ScreenModel__ResetActivePerk
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ActivePerkModel_o *pNVar2;
  
  if ((DAT_04568ba9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ba9 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._activePerkModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._activePerkModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ActivePerkModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ActivePerkModel__DestroyAllPerkItems(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void RemoveCombo()  [RVA 0x355EC10]
// Nekki.SF2.GUI.Fight.ScreenModel$$RemoveCombo @ RVA 0x355EC10

void Nekki_SF2_GUI_Fight_ScreenModel__RemoveCombo
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar2;
  
  if ((DAT_04568baa & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568baa = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._comboModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ComboModel__RemoveAllCombo(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void ShowActivePerkInfo(MMDDDDFHOLG.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x355EC94]
// Nekki.SF2.GUI.Fight.ScreenModel$$ShowActivePerkInfo @ RVA 0x355EC94

void Nekki_SF2_GUI_Fight_ScreenModel__ShowActivePerkInfo
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ActivePerkModel_o *pNVar2;
  
  if ((DAT_04568bab & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bab = 1;
  }
  pNVar2 = (__this->fields)._activePerkModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._activePerkModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ActivePerkModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ActivePerkModel__AddActivePerkItem(pNVar2,CPECAEHDDDB,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void CPJNKKGEHHN()  [RVA 0x355DF84]
// Nekki.SF2.GUI.Fight.ScreenModel$$CPJNKKGEHHN @ RVA 0x355DF84

void Nekki_SF2_GUI_Fight_ScreenModel__CPJNKKGEHHN
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  MethodInfo *extraout_x1;
  PJKHAJKEHEL_o *pPVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568bac & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04568bac = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._name;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pPVar2 = (__this->fields)._parameters;
  if (pPVar2 == (PJKHAJKEHEL_o *)0x0) goto LAB_0365e078;
  __this_00 = (pPVar2->fields).JKDOPHDDKIK;
  if (__this_00 != (System_String_o *)0x0) {
    bVar1 = System_String__Equals(__this_00,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      pPVar2 = (__this->fields)._parameters;
      if ((pPVar2 != (PJKHAJKEHEL_o *)0x0) &&
         (pNVar3 = (__this->fields)._name, pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0365e074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,(pPVar2->fields).JKDOPHDDKIK,(pNVar3->klass->vtable)._75_set_text.method);
        return;
      }
      goto LAB_0365e078;
    }
    pPVar2 = (__this->fields)._parameters;
    if (pPVar2 == (PJKHAJKEHEL_o *)0x0) goto LAB_0365e078;
  }
  pNVar3 = (__this->fields)._name;
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,(pPVar2->fields).NBPNHMKOJKB,(MethodInfo *)0x0);
    return;
  }
LAB_0365e078:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AddEffectPerk(MMDDDDFHOLG.DOCBHLNBECF DKAENNPDMIH, MMDDDDFHOLG.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x355ED2C]
// Nekki.SF2.GUI.Fight.ScreenModel$$AddEffectPerk @ RVA 0x355ED2C

void Nekki_SF2_GUI_Fight_ScreenModel__AddEffectPerk
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *DKAENNPDMIH,
               MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ActivePerkModel_o *pNVar2;
  
  if ((DAT_04568bad & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bad = 1;
  }
  pNVar2 = (__this->fields)._activePerkModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._activePerkModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ActivePerkModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ActivePerkModel__AddEffectPerk
                (pNVar2,DKAENNPDMIH,CPECAEHDDDB,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public bool get_IsNoBlock()  [RVA 0x355EDCC]
// Nekki.SF2.GUI.Fight.ScreenModel$$get_IsNoBlock @ RVA 0x355EDCC

bool Nekki_SF2_GUI_Fight_ScreenModel__get_IsNoBlock
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  return (__this->fields)._IsNoBlock_k__BackingField;
}


// ===== public void CallEventBlockHit()  [RVA 0x355EDD4]
// Nekki.SF2.GUI.Fight.ScreenModel$$CallEventBlockHit @ RVA 0x355EDD4

void Nekki_SF2_GUI_Fight_ScreenModel__CallEventBlockHit
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Fight_ScreenModel__MDEAIENJJJH(__this,true,in_x2);
  return;
}


// ===== public void remove_OnStyleChange(Action<BFMEMCBCKLK> CJNHFNHJHPE)  [RVA 0x355EDDC]
// Nekki.SF2.GUI.Fight.ScreenModel$$remove_OnStyleChange @ RVA 0x355EDDC

void Nekki_SF2_GUI_Fight_ScreenModel__remove_OnStyleChange
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,System_Action_BFMEMCBCKLK__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_BFMEMCBCKLK__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BFMEMCBCKLK__o *pSVar5;
  System_Action_BFMEMCBCKLK__o **ppSVar6;
  System_Action_BFMEMCBCKLK__o *source;
  
  if ((DAT_04568bae & 1) == 0) {
    FUN_01bab630(&System_Action<BFMEMCBCKLK>_TypeInfo);
    DAT_04568bae = 1;
  }
  ppSVar6 = &(__this->fields).OnStyleChange;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<BFMEMCBCKLK>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BFMEMCBCKLK>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_BFMEMCBCKLK__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void ShowHeadStrike()  [RVA 0x355EE8C]
// Nekki.SF2.GUI.Fight.ScreenModel$$ShowHeadStrike @ RVA 0x355EE8C

void Nekki_SF2_GUI_Fight_ScreenModel__ShowHeadStrike
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar2;
  
  if ((DAT_04568baf & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568baf = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._comboModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ComboModel__CreateHeadStrike(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void RenderActivePerkModel()  [RVA 0x355EF10]
// Nekki.SF2.GUI.Fight.ScreenModel$$RenderActivePerkModel @ RVA 0x355EF10

void Nekki_SF2_GUI_Fight_ScreenModel__RenderActivePerkModel
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ActivePerkModel_o *pNVar2;
  
  if ((DAT_04568bb0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bb0 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._activePerkModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._activePerkModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ActivePerkModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ActivePerkModel__Render(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void HideAllActivePerk()  [RVA 0x355EF94]
// Nekki.SF2.GUI.Fight.ScreenModel$$HideAllActivePerk @ RVA 0x355EF94

void Nekki_SF2_GUI_Fight_ScreenModel__HideAllActivePerk
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ActivePerkModel_o *pNVar2;
  
  if ((DAT_04568bb1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bb1 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._activePerkModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._activePerkModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ActivePerkModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ActivePerkModel__RemoveAllActivePerkItem(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void UpdateCombo(int CJNHFNHJHPE, int LHLELGFDIAP)  [RVA 0x355F018]
// Nekki.SF2.GUI.Fight.ScreenModel$$UpdateCombo @ RVA 0x355F018

void Nekki_SF2_GUI_Fight_ScreenModel__UpdateCombo
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,int32_t CJNHFNHJHPE,int32_t LHLELGFDIAP,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar2;
  
  if ((DAT_04568bb2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bb2 = 1;
  }
  pNVar2 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._comboModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ComboModel__UpdateCombo(pNVar2,CJNHFNHJHPE,LHLELGFDIAP,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void RenderComboModel()  [RVA 0x355F0B8]
// Nekki.SF2.GUI.Fight.ScreenModel$$RenderComboModel @ RVA 0x355F0B8

void Nekki_SF2_GUI_Fight_ScreenModel__RenderComboModel
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar2;
  
  if ((DAT_04568bb3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bb3 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._comboModel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ComboModel__Render(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public float get_CurrentStyleValue()  [RVA 0x355E580]
// Nekki.SF2.GUI.Fight.ScreenModel$$get_CurrentStyleValue @ RVA 0x355E580

float Nekki_SF2_GUI_Fight_ScreenModel__get_CurrentStyleValue
                (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_StylePanel_o *pNVar2;
  float fVar3;
  
  if ((DAT_04568bb4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bb4 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._stylePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._stylePanel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) {
      fVar3 = Nekki_SF2_GUI_Fight_StylePanel__GetStyleValue(pNVar2,(MethodInfo *)0x0);
      return fVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0.0;
}


// ===== public void add_OnStyleChange(Action<BFMEMCBCKLK> CJNHFNHJHPE)  [RVA 0x355F13C]
// Nekki.SF2.GUI.Fight.ScreenModel$$add_OnStyleChange @ RVA 0x355F13C

void Nekki_SF2_GUI_Fight_ScreenModel__add_OnStyleChange
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,System_Action_BFMEMCBCKLK__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_BFMEMCBCKLK__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BFMEMCBCKLK__o *pSVar5;
  System_Action_BFMEMCBCKLK__o **ppSVar6;
  System_Action_BFMEMCBCKLK__o *a;
  
  if ((DAT_04568bb5 & 1) == 0) {
    FUN_01bab630(&System_Action<BFMEMCBCKLK>_TypeInfo);
    DAT_04568bb5 = 1;
  }
  ppSVar6 = &(__this->fields).OnStyleChange;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<BFMEMCBCKLK>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BFMEMCBCKLK>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_BFMEMCBCKLK__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public GOJLGHMMDBO get_Statistic()  [RVA 0x355F1EC]
// Nekki.SF2.GUI.Fight.ScreenModel$$get_Statistic @ RVA 0x355F1EC

GOJLGHMMDBO_o *
Nekki_SF2_GUI_Fight_ScreenModel__get_Statistic
          (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  GOJLGHMMDBO_o *pGVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar3;
  
  if ((DAT_04568bb6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bb6 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pGVar2 = (GOJLGHMMDBO_o *)0x0;
  if (bVar1) {
    pNVar3 = (__this->fields)._comboModel;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar2 = (pNVar3->fields).AMKECFKEGJH;
  }
  return pGVar2;
}


// ===== public void UpdateVictories()  [RVA 0x355F26C]
// Nekki.SF2.GUI.Fight.ScreenModel$$UpdateVictories @ RVA 0x355F26C

void Nekki_SF2_GUI_Fight_ScreenModel__UpdateVictories
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  PJKHAJKEHEL_o *pPVar2;
  Nekki_SF2_GUI_Fight_RoundsPanel_o *pNVar3;
  
  if ((DAT_04568bb7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bb7 = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._showRounds != false) {
    pNVar3 = (__this->fields)._roundsPanel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      pPVar2 = (__this->fields)._parameters;
      if ((pPVar2 != (PJKHAJKEHEL_o *)0x0) &&
         (pNVar3 = (__this->fields)._roundsPanel, pNVar3 != (Nekki_SF2_GUI_Fight_RoundsPanel_o *)0x0
         )) {
        Nekki_SF2_GUI_Fight_RoundsPanel__UpdateVictories
                  (pNVar3,(pPVar2->fields).GPLLAHCFFIH,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void IncreaseStyleByValue(float CJNHFNHJHPE)  [RVA 0x355F304]
// Nekki.SF2.GUI.Fight.ScreenModel$$IncreaseStyleByValue @ RVA 0x355F304

void Nekki_SF2_GUI_Fight_ScreenModel__IncreaseStyleByValue
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ComboModel_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_StylePanel_o *pNVar2;
  
  if ((DAT_04568bb8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bb8 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._stylePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._stylePanel;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) {
      Nekki_SF2_GUI_Fight_StylePanel__IncreaseStyleStripByValue
                (pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._stylePanel;
      if ((pNVar2 != (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) &&
         (__this_00 = (__this->fields)._comboModel,
         __this_00 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        Nekki_SF2_GUI_Fight_ComboModel__AddCrazyStyle
                  (__this_00,(pNVar2->fields).OOADLOIGCHI,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Fight_ScreenModel__MDEAIENJJJH(__this,true,method_00);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void OnFightPause(bool CJNHFNHJHPE)  [RVA 0x355F3C4]
// Nekki.SF2.GUI.Fight.ScreenModel$$OnFightPause @ RVA 0x355F3C4

void Nekki_SF2_GUI_Fight_ScreenModel__OnFightPause
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar2;
  
  if ((DAT_04568bb9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bb9 = 1;
  }
  pNVar2 = (__this->fields)._comboModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._comboModel;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pNVar2->fields).JBKPKLGIMOK = CJNHFNHJHPE;
  }
  return;
}


// ===== public string get_CurrentStyleName()  [RVA 0x355E4E4]
// Nekki.SF2.GUI.Fight.ScreenModel$$get_CurrentStyleName @ RVA 0x355E4E4

System_String_o *
Nekki_SF2_GUI_Fight_ScreenModel__get_CurrentStyleName
          (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_StylePanel_o *pNVar3;
  
  if ((DAT_04568bba & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568bba = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._stylePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._stylePanel;
    if (pNVar3 != (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) {
      pSVar2 = Nekki_SF2_GUI_Fight_StylePanel__get_CurrentStyleName(pNVar3,(MethodInfo *)0x0);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return StringLiteral_1/*""*/;
}


// ===== private void JHJBEMDEEHG(ComboModel.LNFENBCODDP DKMMBMBMJBO)  [RVA 0x355F44C]
// Nekki.SF2.GUI.Fight.ScreenModel$$JHJBEMDEEHG @ RVA 0x355F44C

void Nekki_SF2_GUI_Fight_ScreenModel__JHJBEMDEEHG
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,
               Nekki_SF2_GUI_Fight_ComboModel_LNFENBCODDP_o *DKMMBMBMJBO,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_ScreenModel_MPGAFKNLIPG__o *pSVar1;
  
  if ((DAT_04568bbb & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ScreenModel_MPGAFKNLIPG_TypeInfo);
    DAT_04568bbb = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ScreenModel_MPGAFKNLIPG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)DKMMBMBMJBO;
    thunk_FUN_01c20e04(__this_00 + 1,DKMMBMBMJBO);
    pSVar1 = (__this->fields).OnComboUp;
    if (pSVar1 != (System_Action_ScreenModel_MPGAFKNLIPG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0365f4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,__this_00,
                 (pSVar1->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KIJPPGNCOEN()  [RVA 0x355DF3C]
// Nekki.SF2.GUI.Fight.ScreenModel$$KIJPPGNCOEN @ RVA 0x355DF3C

void Nekki_SF2_GUI_Fight_ScreenModel__KIJPPGNCOEN
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this_00;
  
  __this_00 = (__this->fields)._lifeBar;
  if (__this_00 != (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *)0x0) {
    Nekki_SF2_GUI_Fight_PlayerLifeBar__Init
              (__this_00,(__this->fields)._parameters,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Render(bool GKJDNBFJOJE)  [RVA 0x355F4E4]
// Nekki.SF2.GUI.Fight.ScreenModel$$Render @ RVA 0x355F4E4

void Nekki_SF2_GUI_Fight_ScreenModel__Render
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,bool GKJDNBFJOJE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar2;
  Nekki_SF2_GUI_Fight_PlayerLifeBar_o *pNVar3;
  Nekki_SF2_GUI_Fight_StylePanel_o *pNVar4;
  
  if ((DAT_04568bbc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bbc = 1;
  }
  pNVar3 = (__this->fields)._lifeBar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar2 = extraout_x1;
  if (bVar1) {
    pNVar3 = (__this->fields)._lifeBar;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *)0x0) goto LAB_0365f5c8;
    (*(pNVar3->klass->vtable)._4_Render.methodPtr)(pNVar3,(pNVar3->klass->vtable)._4_Render.method);
    pMVar2 = extraout_x1_00;
  }
  Nekki_SF2_GUI_Fight_ScreenModel__JENEOLKJABD(__this,pMVar2);
  pNVar4 = (__this->fields)._stylePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar2 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar1) || (!GKJDNBFJOJE)) {
    return;
  }
  pNVar4 = (__this->fields)._stylePanel;
  if (pNVar4 != (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) {
    Nekki_SF2_GUI_Fight_StylePanel__Render(pNVar4,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Fight_ScreenModel__MDEAIENJJJH(__this,false,pMVar2);
    return;
  }
LAB_0365f5c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnComboUp(Action<ScreenModel.MPGAFKNLIPG> CJNHFNHJHPE)  [RVA 0x355F5CC]
// Nekki.SF2.GUI.Fight.ScreenModel$$remove_OnComboUp @ RVA 0x355F5CC

void Nekki_SF2_GUI_Fight_ScreenModel__remove_OnComboUp
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,
               System_Action_ScreenModel_MPGAFKNLIPG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_ScreenModel_MPGAFKNLIPG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_ScreenModel_MPGAFKNLIPG__o *pSVar5;
  System_Action_ScreenModel_MPGAFKNLIPG__o **ppSVar6;
  System_Action_ScreenModel_MPGAFKNLIPG__o *source;
  
  if ((DAT_04568bbd & 1) == 0) {
    FUN_01bab630(&System_Action<ScreenModel_MPGAFKNLIPG>_TypeInfo);
    DAT_04568bbd = 1;
  }
  ppSVar6 = &(__this->fields).OnComboUp;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<ScreenModel_MPGAFKNLIPG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<ScreenModel_MPGAFKNLIPG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_ScreenModel_MPGAFKNLIPG__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public int get_CurrentStyleStrip()  [RVA 0x355E464]
// Nekki.SF2.GUI.Fight.ScreenModel$$get_CurrentStyleStrip @ RVA 0x355E464

int32_t Nekki_SF2_GUI_Fight_ScreenModel__get_CurrentStyleStrip
                  (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_StylePanel_o *pNVar3;
  
  if ((DAT_04568bbe & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bbe = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._stylePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._stylePanel;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = (pNVar3->fields).OOADLOIGCHI;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

