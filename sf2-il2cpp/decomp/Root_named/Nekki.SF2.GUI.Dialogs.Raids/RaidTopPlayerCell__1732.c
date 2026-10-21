// TypeDefIndex 1732
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidTopPlayerCell : RaidLeaguesCell
// Fields:
//   public const string FILE_STRIPE = "DialogStripes.MW_Bottomstripe";
//   private ResolutionImage _linePic; // 0x1F0
//   private ResolutionImage _playerDanBack; // 0x1F8
//   private LabelAlias _playerDan; // 0x200
//   private ResolutionImage _frameTracery; // 0x208
//   private float _heightWithLine; // 0x210
//   private float _heightRegular; // 0x214
//   private static readonly Vector2 LGDJILHAHJB; // 0x0

// ===== public void .ctor()  [RVA 0x31D9840]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopPlayerCell$$.ctor @ RVA 0x31D9840

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d09 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo);
    DAT_04566d09 = 1;
    method = extraout_x1;
  }
  (__this->fields)._heightWithLine = 150.0;
  (__this->fields)._heightRegular = 125.0;
  if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo,method);
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void NOLAJAADKAL()  [RVA 0x31D98A4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopPlayerCell$$NOLAJAADKAL @ RVA 0x31D98A4

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell__NOLAJAADKAL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *pSVar3;
  RaidLeaderboardsManager_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *pNVar4;
  SFButton_o *pSVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar7;
  
  if ((DAT_04566d0a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566d0a = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__NOLAJAADKAL
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,(MethodInfo *)0x0);
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__IsFake
                    ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pSVar5 = (__this->fields).super._progressHintButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar5 = (__this->fields).super._progressHintButton;
    if ((pSVar5 == (SFButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pSVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032d9a00;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields).super.DICNIMJBGML;
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    pNVar6 = (__this->fields)._playerDan;
    pSVar3 = System_Int32__ToString((int)pNVar4 + 0x30,(MethodInfo *)0x0);
    if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar6->klass->vtable)._75_set_text.methodPtr)
                (pNVar6,pSVar3,(pNVar6->klass->vtable)._75_set_text.method);
      pNVar7 = (__this->fields)._playerDanBack;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
      pNVar4 = (__this->fields).super.DICNIMJBGML;
      if (((pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) &&
          (__this_00 != (RaidLeaderboardsManager_o *)0x0)) &&
         (pSVar3 = RaidLeaderboardsManager__PAHKCILGFIK
                             (__this_00,(pNVar4->fields).AACMAAOJMFK,(MethodInfo *)0x0),
         pNVar7 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar7,pSVar3,(MethodInfo *)0x0);
        pNVar7 = (__this->fields)._linePic;
        if ((pNVar7 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_032d9a00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowLine()  [RVA 0x31D9A04]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopPlayerCell$$ShowLine @ RVA 0x31D9A04

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell__ShowLine
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_Vector2_o UVar2;
  
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__IsFake
                    ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = (__this->fields)._linePic;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
    __this_02 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                          ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
    __this_03 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                          ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
      UVar2 = UnityEngine_RectTransform__get_sizeDelta(__this_03,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
        UVar2.fields.y = (__this->fields)._heightWithLine;
        UnityEngine_RectTransform__set_sizeDelta(__this_02,UVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x31D9A90]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopPlayerCell$$.cctor @ RVA 0x31D9A90

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell___cctor(MethodInfo *method)

{
  if ((DAT_04566d0b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo);
    DAT_04566d0b = 1;
  }
  (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo->static_fields->LGDJILHAHJB).fields =
       (UnityEngine_Vector2_Fields)0x42780000441d8000;
  return;
}


// ===== public override void UpdateView(RaidLeaguesLeaderboard.OIMJFDFDMMM HEHMPFLAEGE)  [RVA 0x31D9AE0]
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


// ===== private void KANCOIBLNKP(BIBLCFCAMHG ACCIHBHMFPN)  [RVA 0x31D9BD4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopPlayerCell$$KANCOIBLNKP @ RVA 0x31D9BD4

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell__KANCOIBLNKP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *__this,int32_t ACCIHBHMFPN,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *CJNHFNHJHPE;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o value_00;
  
  if ((DAT_04566d0d & 1) == 0) {
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo);
    DAT_04566d0d = 1;
  }
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__IsFake
                    ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CJNHFNHJHPE = LPGPNBGHDBD__ELADHNOAPBC(ACCIHBHMFPN,(MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._frameTracery;
  if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (bVar1) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    }
    else {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._frameTracery;
      if (pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_032d9e28;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    pNVar2 = (__this->fields)._frameTracery;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
      if (DAT_0455fa7f == '\0') {
        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
        DAT_0455fa7f = '\x01';
      }
      pUVar3 = UnityEngine_Vector3_TypeInfo->static_fields;
      uVar6 = (pUVar3->oneVector).fields.x;
      uVar7 = (pUVar3->oneVector).fields.y;
      fVar8 = (pUVar3->oneVector).fields.z;
                    /* try { // try from 032d9d24 to 033d9de7 has its CatchHandler @ 032d9d24
                       catch() { ... } // from try @ 032d9d24 with catch @ 032d9d24
                       catch() { ... } // from try @ 032d9e08 with catch @ 032d9d24
                       catch() { ... } // from try @ 032d9e6c with catch @ 032d9d24
                       catch() { ... } // from try @ 032d9e9c with catch @ 032d9d24 */
      if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565e5d == '\0') {
        FUN_01bab630(&MainSettings_TypeInfo);
        DAT_04565e5d = '\x01';
      }
      if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        fVar4 = MainSettings_TypeInfo->static_fields->CHCLEFKLOKH;
        value_00.fields.z = (fVar8 + fVar8) * fVar4;
        value_00.fields.x = ((float)uVar6 + (float)uVar6) * fVar4;
        value_00.fields.y = ((float)uVar7 + (float)uVar7) * fVar4;
        UnityEngine_Transform__set_localScale(__this_01,value_00,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._frameTracery;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          __this_02 = UnityEngine_UI_Graphic__get_rectTransform
                                ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
          if ((Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo);
          }
          fVar8 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo->static_fields->
                  LGDJILHAHJB).fields.x;
          fVar4 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo->static_fields->
                  LGDJILHAHJB).fields.y;
          if (DAT_04565e5d == '\0') {
            FUN_01bab630(&MainSettings_TypeInfo);
            DAT_04565e5d = '\x01';
          }
                    /* try { // try from 032d9de8 to 033d9def has its CatchHandler @ 032d9e50 */
          if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 032d9e00 to 033d9e07 has its CatchHandler @ 032d9e4c */
                    /* try { // try from 032d9e08 to 033d9e67 has its CatchHandler @ 032d9d24 */
            fVar5 = MainSettings_TypeInfo->static_fields->CHCLEFKLOKH;
            value.fields.y = fVar4 / fVar5;
            value.fields.x = fVar8 / fVar5;
            UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_032d9e28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void FEAKOMACIGA()  [RVA 0x31D9E2C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopPlayerCell$$FEAKOMACIGA @ RVA 0x31D9E2C

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell__FEAKOMACIGA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_04566d0e & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d9e00 with catch @ 032d9e4c
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d9de8 with catch @ 032d9e50
                        */
    DAT_04566d0e = 1;
  }
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__IsFake
                    ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 032d9e68 to 033d9e6b has its CatchHandler @ 032d9e8c */
                    /* try { // try from 032d9e6c to 033d9e93 has its CatchHandler @ 032d9d24 */
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__FEAKOMACIGA
              ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).super._playerPosProgress;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 032d9e68 with catch @ 032d9e8c */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 032d9e94 to 033d9e9b has its CatchHandler @ 032d9eb0 */
                    /* try { // try from 032d9e9c to 033d9ea7 has its CatchHandler @ 032d9d24 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields).super._playerPosProgress;
                    /* try { // try from 032d9ea8 to 033d9eaf has its CatchHandler @ 032d9eb0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032d9e94 with catch @ 032d9eb0
                       catch(type#2 @ 00000000) { ... } // from try @ 032d9ea8 with catch @ 032d9eb0
                        */
      if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

