// TypeDefIndex 2031
// Namespace: Nekki.SF2.GUI.Pvp
// public class CharacterSelectModule : SelectModule
// Fields:
//   private PhaseBox _playerOne; // 0x88
//   private PhaseBox _playerTwo; // 0x90
//   private LabelAlias _playerTwoChooseOrSelect; // 0x98
//   private BNAIBAODKAK[] DLCCJFCKAJL; // 0xA0
//   private AMJPDLOCCNP HKKEEPMCBFO; // 0xA8
//   private bool PNCOPANDAGE; // 0xAC

// ===== public IEnumerator LoadWeaponImages()  [RVA 0x32A5CA4]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$LoadWeaponImages @ RVA 0x32A5CA4

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Pvp_CharacterSelectModule__LoadWeaponImages
          (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_o *__this_00;
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o **ppNVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033a5ca8 to 034a5caf has its CatchHandler @ 033a5fe0 */
  if ((DAT_045673f2 & 1) == 0) {
                    /* try { // try from 033a5cc4 to 034a5ccb has its CatchHandler @ 033a5f8c */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_TypeInfo);
                    /* try { // try from 033a5cd0 to 034a5cdf has its CatchHandler @ 033a5f80 */
    DAT_045673f2 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_TypeInfo,method
                                );
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN___ctor(__this_00,0,(MethodInfo *)0x0);
                    /* try { // try from 033a5cf0 to 034a5cf3 has its CatchHandler @ 033a5f5c */
  if (__this_00 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_o *)0x0) {
    ppNVar1 = &(__this_00->fields).__4__this;
                    /* try { // try from 033a5cf4 to 034a5d03 has its CatchHandler @ 033a5f88 */
    *ppNVar1 = __this;
    thunk_FUN_01c20e04(ppNVar1,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool CanCurrentItemSelected(AMJPDLOCCNP OGPGLGPMEPD)  [RVA 0x32A5D18]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$CanCurrentItemSelected @ RVA 0x32A5D18

bool Nekki_SF2_GUI_Pvp_CharacterSelectModule__CanCurrentItemSelected
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t OGPGLGPMEPD,
               MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  BNAIBAODKAK_array *pBVar3;
  
  __this_00 = (__this->fields).super._selectTable;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
    pBVar3 = (__this->fields).DLCCJFCKAJL;
    uVar2 = Nekki_SF2_GUI_Pvp_PlayersSelectTable__GetSelectionID
                      (__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
    if (pBVar3 != (BNAIBAODKAK_array *)0x0) {
      if ((uint)pBVar3->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 033a5d48 to 034a5d6b has its CatchHandler @ 033a5f64 */
      if (pBVar3->m_Items[(int)uVar2] != (BNAIBAODKAK_o *)0x0) {
        bVar1 = BNAIBAODKAK__AAAMBLLDPHJ(pBVar3->m_Items[(int)uVar2],(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HOOAAGABMBL GetPlayerWeapon(string CDLKGCOIGNA, AMJPDLOCCNP HEHMPFLAEGE)  [RVA 0x32A5D64]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$GetPlayerWeapon @ RVA 0x32A5D64

HOOAAGABMBL_o *
Nekki_SF2_GUI_Pvp_CharacterSelectModule__GetPlayerWeapon
          (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,System_String_o *CDLKGCOIGNA,
          int32_t HEHMPFLAEGE,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  Item_o *__this_01;
  BNAIBAODKAK_o *pBVar5;
  BNAIBAODKAK_array *pBVar6;
  uint uVar7;
  
                    /* try { // try from 033a5d6c to 034a5e47 has its CatchHandler @ 033a5b90 */
  if ((DAT_045673f3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14837/*"WEAPON_DEFAULT_RANDOM"*/);
    DAT_045673f3 = 1;
  }
  lVar1 = 0x88;
  if (HEHMPFLAEGE != 0) {
    lVar1 = 0x90;
  }
  __this_00 = *(Nekki_SF2_GUI_Pvp_PhaseBox_o **)((long)&__this->klass + lVar1);
  if ((__this_00 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) &&
     (pHVar4 = Nekki_SF2_GUI_Pvp_PhaseBox__get_PlayerWeapon(__this_00,(MethodInfo *)0x0),
     pHVar4 != (HOOAAGABMBL_o *)0x0)) {
    bVar3 = System_String__op_Equality
                      ((pHVar4->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_14837/*"WEAPON_DEFAULT_RANDOM"*/,
                       (MethodInfo *)0x0);
    if (bVar3) {
      pBVar6 = (__this->fields).DLCCJFCKAJL;
      if (pBVar6 == (BNAIBAODKAK_array *)0x0) goto LAB_033a5ec0;
      uVar2 = (uint)pBVar6->max_length;
      if (0 < (int)uVar2) {
        uVar7 = 0;
        do {
          if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pBVar5 = pBVar6->m_Items[(int)uVar7];
          if (pBVar5 == (BNAIBAODKAK_o *)0x0) goto LAB_033a5ec0;
          bVar3 = System_String__op_Equality
                            ((pBVar5->fields).PKJEMIDJPAG,CDLKGCOIGNA,(MethodInfo *)0x0);
          if (bVar3) {
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033a5e64 to 034a5e6b has its CatchHandler @ 033a5f78 */
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 033a5e70 to 034a5e7f has its CatchHandler @ 033a5f6c */
            if (DAT_04563eaa == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04563eaa = '\x01';
            }
                    /* try { // try from 033a5e90 to 034a5e93 has its CatchHandler @ 033a5f58 */
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033a5e94 to 034a5ea3 has its CatchHandler @ 033a5f74 */
              thunk_FUN_01ba7564();
            }
            __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
            if (__this_01 != (Item_o *)0x0) {
              pHVar4 = Item__CKKIPBAIEMN
                                 (__this_01,(pBVar5->fields).MHBAKHIIJLP,(MethodInfo *)0x0);
              return pHVar4;
            }
            goto LAB_033a5ec0;
          }
          uVar2 = (uint)pBVar6->max_length;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar2);
      }
    }
                    /* try { // try from 033a5e48 to 034a5e4f has its CatchHandler @ 033a5f90 */
    return pHVar4;
  }
LAB_033a5ec0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void FNLHNDOFOIG(AMJPDLOCCNP HEHMPFLAEGE, bool IFNFDFALLMG = True)  [RVA 0x32A5EE0]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$FNLHNDOFOIG @ RVA 0x32A5EE0

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__FNLHNDOFOIG
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t HEHMPFLAEGE,
               bool IFNFDFALLMG,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseBox_o **ppNVar1;
  Nekki_SF2_GUI_Pvp_PhaseBox_o **ppNVar2;
  int HEHMPFLAEGE_00;
  bool bVar3;
  ulong uVar4;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *pNVar5;
  UnityEngine_UI_Image_o *pUVar6;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *pNVar7;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  UnityEngine_GameObject_o *pUVar9;
  long lVar10;
  Nekki_SF2_GUI_Pvp_PlayerMenu_o *pNVar11;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar12;
  UnityEngine_Color_o endValue;
  UnityEngine_Color_o endValue_00;
  
                    /* try { // try from 033a5ee8 to 034a5f0b has its CatchHandler @ 033a5f60 */
  if ((DAT_045673f4 & 1) == 0) {
                    /* try { // try from 033a5f0c to 034a5f3b has its CatchHandler @ 033a5b90 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__);
    FUN_01bab630(&StringLiteral_17771/*"dlgChooseHero"*/);
    FUN_01bab630(&StringLiteral_17770/*"dlgChooseEnemy"*/);
    DAT_045673f4 = 1;
  }
  bVar3 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                    ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 033a5f3c to 034a5f3f has its CatchHandler @ 033a5f7c */
  if (bVar3) {
                    /* try { // try from 033a5f40 to 034a5f43 has its CatchHandler @ 033a5f68 */
                    /* try { // try from 033a5f44 to 034a5f4b has its CatchHandler @ 033a5f84 */
                    /* try { // try from 033a5f4c to 034a5f53 has its CatchHandler @ 033a5f70 */
                    /* try { // try from 033a5f54 to 034a5f9f has its CatchHandler @ 033a5b90 */
    uVar4 = (*(__this->klass->vtable)._15_CanCurrentItemSelected.methodPtr)
                      (__this,(ulong)(uint)HEHMPFLAEGE,
                       (__this->klass->vtable)._15_CanCurrentItemSelected.method);
                    /* catch() { ... } // from try @ 033a5e90 with catch @ 033a5f58 */
    if ((uVar4 & 1) == 0) {
      return;
    }
                    /* catch() { ... } // from try @ 033a5cf0 with catch @ 033a5f5c */
                    /* catch() { ... } // from try @ 033a5ee8 with catch @ 033a5f60 */
                    /* catch() { ... } // from try @ 033a5d48 with catch @ 033a5f64 */
                    /* catch() { ... } // from try @ 033a5f40 with catch @ 033a5f68 */
                    /* catch() { ... } // from try @ 033a5e70 with catch @ 033a5f6c */
                    /* catch() { ... } // from try @ 033a5f4c with catch @ 033a5f70 */
    Nekki_SF2_GUI_Pvp_SelectModule__FNLHNDOFOIG
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,HEHMPFLAEGE,IFNFDFALLMG,(MethodInfo *)0x0)
    ;
                    /* catch() { ... } // from try @ 033a5e94 with catch @ 033a5f74 */
                    /* catch() { ... } // from try @ 033a5e64 with catch @ 033a5f78 */
                    /* catch() { ... } // from try @ 033a5f3c with catch @ 033a5f7c */
                    /* catch() { ... } // from try @ 033a5cd0 with catch @ 033a5f80 */
    lVar10 = 0x88;
    if (HEHMPFLAEGE != 0) {
      lVar10 = 0x90;
    }
                    /* catch() { ... } // from try @ 033a5f44 with catch @ 033a5f84 */
    pNVar5 = *(Nekki_SF2_GUI_Pvp_PhaseBox_o **)((long)&__this->klass + lVar10);
                    /* catch() { ... } // from try @ 033a5cf4 with catch @ 033a5f88 */
    if (pNVar5 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
                    /* catch() { ... } // from try @ 033a5cc4 with catch @ 033a5f8c */
                    /* catch() { ... } // from try @ 033a5e48 with catch @ 033a5f90 */
      Nekki_SF2_GUI_Pvp_PhaseBox__ConfirmItem(pNVar5,IFNFDFALLMG,(MethodInfo *)0x0);
      pNVar5 = *(Nekki_SF2_GUI_Pvp_PhaseBox_o **)((long)&__this->klass + lVar10);
      if (pNVar5 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
                    /* try { // try from 033a5fa0 to 034a5fa3 has its CatchHandler @ 033a5fc4 */
                    /* try { // try from 033a5fa4 to 034a5fcb has its CatchHandler @ 033a5b90 */
        Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(pNVar5,2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (IFNFDFALLMG) {
                    /* catch() { ... } // from try @ 033a5fa0 with catch @ 033a5fc4 */
                    /* try { // try from 033a5fcc to 034a5fdf has its CatchHandler @ 033a603c */
    uVar4 = (*(__this->klass->vtable)._15_CanCurrentItemSelected.methodPtr)
                      (__this,(ulong)(uint)HEHMPFLAEGE,
                       (__this->klass->vtable)._15_CanCurrentItemSelected.method);
    if ((uVar4 & 1) == 0) {
      return;
    }
                    /* catch() { ... } // from try @ 033a5ca8 with catch @ 033a5fe0
                       try { // try from 033a5fe0 to 034a5fef has its CatchHandler @ 033a5b90 */
    Nekki_SF2_GUI_Pvp_SelectModule__FNLHNDOFOIG
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(__this->fields).HKKEEPMCBFO,true,
               (MethodInfo *)0x0);
                    /* try { // try from 033a5ff0 to 034a5ff3 has its CatchHandler @ 033a6018 */
                    /* try { // try from 033a5ff4 to 034a601f has its CatchHandler @ 033a5b90 */
    lVar10 = 0x88;
    if (HEHMPFLAEGE != 0) {
      lVar10 = 0x90;
    }
    pNVar5 = *(Nekki_SF2_GUI_Pvp_PhaseBox_o **)((long)&__this->klass + lVar10);
    ppNVar1 = &(__this->fields)._playerTwo;
    ppNVar2 = &(__this->fields)._playerOne;
    if (HEHMPFLAEGE != 0) {
      ppNVar2 = ppNVar1;
    }
    if (pNVar5 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
                    /* catch() { ... } // from try @ 033a5ff0 with catch @ 033a6018 */
      Nekki_SF2_GUI_Pvp_PhaseBox__ConfirmItem(pNVar5,true,(MethodInfo *)0x0);
                    /* try { // try from 033a6020 to 034a6027 has its CatchHandler @ 033a603c */
      if (*ppNVar2 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
                    /* try { // try from 033a6028 to 034a6033 has its CatchHandler @ 033a5b90 */
        Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(*ppNVar2,2,(MethodInfo *)0x0);
        if (HEHMPFLAEGE != 0) {
          return;
        }
                    /* try { // try from 033a6034 to 034a603b has its CatchHandler @ 033a603c */
        pUVar6 = (__this->fields).super._shadowImage;
                    /* catch() { ... } // from try @ 033a5fcc with catch @ 033a603c
                       catch() { ... } // from try @ 033a6020 with catch @ 033a603c
                       catch() { ... } // from try @ 033a6034 with catch @ 033a603c */
        (__this->fields).super.HIHIILLMINJ = -1.0;
        DG_Tweening_ShortcutExtensions__DOKill
                  ((UnityEngine_Component_o *)pUVar6,true,(MethodInfo *)0x0);
        pUVar6 = (__this->fields).super._shadowImage;
        if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
          (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                    (0,0,0,0,pUVar6,(pUVar6->klass->vtable)._23_set_color.method);
          pNVar7 = (__this->fields).super._selectTable;
          (__this->fields).HKKEEPMCBFO = 1;
          if (pNVar7 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
            Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetPlayerActive(pNVar7,1,true,(MethodInfo *)0x0);
            pNVar8 = (__this->fields)._playerTwoChooseOrSelect;
            if ((pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar9 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
               pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
              lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01b81620();
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01b81620();
              }
              if ((**(long **)(lVar10 + 0xb8) != 0) &&
                 (pNVar11 = *(Nekki_SF2_GUI_Pvp_PlayerMenu_o **)(**(long **)(lVar10 + 0xb8) + 0x90),
                 pNVar11 != (Nekki_SF2_GUI_Pvp_PlayerMenu_o *)0x0)) {
                Nekki_SF2_GUI_Pvp_PlayerMenu__SetHeader
                          (pNVar11,StringLiteral_17770/*"dlgChooseEnemy"*/,(MethodInfo *)0x0);
                if (*ppNVar1 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
                  pNVar12 = Nekki_SF2_GUI_Pvp_PhaseBox__get_Avatar(*ppNVar1,(MethodInfo *)0x0);
                  DG_Tweening_ShortcutExtensions__DOKill
                            ((UnityEngine_Component_o *)pNVar12,false,(MethodInfo *)0x0);
                  if (*ppNVar1 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
                    pNVar12 = Nekki_SF2_GUI_Pvp_PhaseBox__get_Avatar(*ppNVar1,(MethodInfo *)0x0);
                    endValue.fields.b = 1.0;
                    endValue.fields.a = 1.0;
                    endValue.fields.r = 1.0;
                    endValue.fields.g = 1.0;
                    DG_Tweening_DOTweenModuleUI__DOColor
                              ((UnityEngine_UI_Image_o *)pNVar12,endValue,0.5,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x033a6180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
                              (__this,1,0,0,0,(__this->klass->vtable)._13_BHOPECNMJAC.method);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if ((__this->fields).super.FPFGDOBNLCP == false) {
      return;
    }
    HEHMPFLAEGE_00 = (__this->fields).HKKEEPMCBFO;
    if ((__this->fields).super.FODJGPABKLP == false) {
      if (HEHMPFLAEGE_00 != 1) {
        return;
      }
      pNVar5 = (__this->fields)._playerTwo;
      (__this->fields).HKKEEPMCBFO = 0;
      if (pNVar5 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) goto LAB_033a634c;
      pNVar12 = Nekki_SF2_GUI_Pvp_PhaseBox__get_Avatar(pNVar5,(MethodInfo *)0x0);
      DG_Tweening_ShortcutExtensions__DOKill
                ((UnityEngine_Component_o *)pNVar12,false,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._playerTwo;
      if (pNVar5 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) goto LAB_033a634c;
      pNVar12 = Nekki_SF2_GUI_Pvp_PhaseBox__get_Avatar(pNVar5,(MethodInfo *)0x0);
      endValue_00.fields.b = 0.5;
      endValue_00.fields.a = 1.0;
      endValue_00.fields.r = 0.5;
      endValue_00.fields.g = 0.5;
      DG_Tweening_DOTweenModuleUI__DOColor
                ((UnityEngine_UI_Image_o *)pNVar12,endValue_00,0.5,(MethodInfo *)0x0);
      pNVar7 = (__this->fields).super._selectTable;
      if (pNVar7 == (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) goto LAB_033a634c;
      Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetPlayerActive(pNVar7,1,false,(MethodInfo *)0x0);
      pNVar7 = (__this->fields).super._selectTable;
      if (pNVar7 == (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) goto LAB_033a634c;
      Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetPlayerActive(pNVar7,0,true,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
                (__this,0,0,0,0,(__this->klass->vtable)._13_BHOPECNMJAC.method);
      (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
                (__this,1,0,0,0,(__this->klass->vtable)._13_BHOPECNMJAC.method);
      pNVar8 = (__this->fields)._playerTwoChooseOrSelect;
      if ((pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar9 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
         pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033a634c;
      UnityEngine_GameObject__SetActive(pUVar9,true,(MethodInfo *)0x0);
      lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01b81620();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01b81620();
      }
      if ((**(long **)(lVar10 + 0xb8) == 0) ||
         (pNVar11 = *(Nekki_SF2_GUI_Pvp_PlayerMenu_o **)(**(long **)(lVar10 + 0xb8) + 0x90),
         pNVar11 == (Nekki_SF2_GUI_Pvp_PlayerMenu_o *)0x0)) goto LAB_033a634c;
      Nekki_SF2_GUI_Pvp_PlayerMenu__SetHeader(pNVar11,StringLiteral_17771/*"dlgChooseHero"*/,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Pvp_SelectModule__FNLHNDOFOIG
                ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(__this->fields).HKKEEPMCBFO,false,
                 (MethodInfo *)0x0);
      pNVar5 = (__this->fields)._playerOne;
    }
    else {
      Nekki_SF2_GUI_Pvp_SelectModule__FNLHNDOFOIG
                ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,HEHMPFLAEGE_00,false,(MethodInfo *)0x0);
      lVar10 = 0x88;
      if (HEHMPFLAEGE != 0) {
        lVar10 = 0x90;
      }
      pNVar5 = *(Nekki_SF2_GUI_Pvp_PhaseBox_o **)((long)&__this->klass + lVar10);
    }
    if (pNVar5 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
      Nekki_SF2_GUI_Pvp_PhaseBox__ConfirmItem(pNVar5,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_033a634c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void JMOMGHNMHGM()  [RVA 0x32A6350]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$JMOMGHNMHGM @ RVA 0x32A6350

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__JMOMGHNMHGM
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseBox_o *pNVar1;
  
  Nekki_SF2_GUI_Pvp_SelectModule__JMOMGHNMHGM
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
  pNVar1 = (__this->fields)._playerOne;
  if (pNVar1 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PhaseBox__Free(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._playerTwo;
    if (pNVar1 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
      Nekki_SF2_GUI_Pvp_PhaseBox__Free(pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void FDDCDDKINHH()  [RVA 0x32A6388]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$FDDCDDKINHH @ RVA 0x32A6388

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__FDDCDDKINHH
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  NLPJLHOEAOE_o *pNVar1;
  PvpSettings_o *__this_00;
  
  if ((DAT_045673f5 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045673f5 = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__FDDCDDKINHH
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((pNVar1 != (NLPJLHOEAOE_o *)0x0) &&
     (__this_00 = (pNVar1->fields).OMDCNDHOACL, __this_00 != (PvpSettings_o *)0x0)) {
    PvpSettings__LKFDFJLMBHN
              (__this_00,&(__this->fields).super.LDJBDDJCPBO,&(__this->fields).super.HKGKJIAPLPO,
               &(__this->fields).super.PCNNFNFPJNH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GKHAKLDEIJI(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x32A640C]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$GKHAKLDEIJI @ RVA 0x32A640C

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__GKHAKLDEIJI
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *__this_00;
  NLIDHEAMLMC_o *pNVar3;
  
  if ((DAT_045673f6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_045673f6 = 1;
  }
  bVar2 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                    ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
  if (bVar2) {
    if (__this == (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) goto LAB_033a6510;
  }
  else if ((__this->fields).HKKEEPMCBFO == 1) {
    OPHMGAKOJLP = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__GKHAKLDEIJI
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,NAIJBCMHBFK,OPHMGAKOJLP,AAJGEHHPMGH,
             (MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565e5c == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04565e5c = '\x01';
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar3 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
  if (pNVar3 != (NLIDHEAMLMC_o *)0x0) {
    lVar1 = 0x88;
    if (OPHMGAKOJLP != (pNVar3->fields).OFFPEKODFPE) {
      lVar1 = 0x90;
    }
    __this_00 = *(Nekki_SF2_GUI_Pvp_PhaseBox_o **)((long)&__this->klass + lVar1);
    if (__this_00 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
      Nekki_SF2_GUI_Pvp_PhaseBox__OnControlUp(__this_00,AAJGEHHPMGH,(MethodInfo *)0x0);
      return;
    }
  }
LAB_033a6510:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void PCJCDPOMJJN(AMJPDLOCCNP HEHMPFLAEGE, bool IFNFDFALLMG = True)  [RVA 0x32A6514]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$PCJCDPOMJJN @ RVA 0x32A6514

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__PCJCDPOMJJN
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t HEHMPFLAEGE,
               bool IFNFDFALLMG,MethodInfo *method)

{
  bool bVar1;
  HintButton_o *pHVar2;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *pNVar3;
  NLIDHEAMLMC_o *pNVar4;
  
  if ((DAT_045673f7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_045673f7 = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__PCJCDPOMJJN
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,HEHMPFLAEGE,IFNFDFALLMG,(MethodInfo *)0x0);
  pNVar3 = (__this->fields)._playerOne;
  if ((pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) &&
     (pHVar2 = (pNVar3->fields)._TagHint, pHVar2 != (HintButton_o *)0x0)) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)pHVar2,(__this->fields).super.FPFGDOBNLCP == false,
               (MethodInfo *)0x0);
    pNVar3 = (__this->fields)._playerTwo;
    if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
      pHVar2 = (pNVar3->fields)._TagHint;
      bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                        ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
      if ((bVar1) || ((__this->fields).super.FPFGDOBNLCP == false)) {
        bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                          ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
        if (bVar1) {
          bVar1 = (__this->fields).super.FODJGPABKLP == false;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = true;
      }
      if (pHVar2 != (HintButton_o *)0x0) {
        UnityEngine_Behaviour__set_enabled
                  ((UnityEngine_Behaviour_o *)pHVar2,bVar1,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._playerTwo;
        bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                          ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
        if ((bVar1) || ((__this->fields).super.FPFGDOBNLCP == false)) {
          if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565e5b == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
            DAT_04565e5b = '\x01';
          }
          if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pNVar4 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
        }
        else {
          if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565e5c == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
            DAT_04565e5c = '\x01';
          }
          if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pNVar4 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
        }
        if ((pNVar4 != (NLIDHEAMLMC_o *)0x0) && (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0)) {
          Nekki_SF2_GUI_Pvp_PhaseBox__set_TrackingDeviceID
                    (pNVar3,(pNVar4->fields).OFFPEKODFPE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void BEBGOPNMHON(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x32A66D0]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$BEBGOPNMHON @ RVA 0x32A66D0

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__BEBGOPNMHON
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *__this_00;
  NLIDHEAMLMC_o *pNVar3;
  
  if ((DAT_045673f8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_045673f8 = 1;
  }
  bVar2 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                    ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
  if ((!bVar2) && ((__this->fields).HKKEEPMCBFO == 1)) {
    OPHMGAKOJLP = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__BEBGOPNMHON
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,NAIJBCMHBFK,OPHMGAKOJLP,AAJGEHHPMGH,
             (MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565e5c == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04565e5c = '\x01';
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar3 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
  if (pNVar3 != (NLIDHEAMLMC_o *)0x0) {
    lVar1 = 0x88;
    if (OPHMGAKOJLP != (pNVar3->fields).OFFPEKODFPE) {
      lVar1 = 0x90;
    }
    __this_00 = *(Nekki_SF2_GUI_Pvp_PhaseBox_o **)((long)&__this->klass + lVar1);
    if (__this_00 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
      Nekki_SF2_GUI_Pvp_PhaseBox__OnControlDown(__this_00,AAJGEHHPMGH,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void SetSecondPlayerAvailable(bool EHJMCCFLOLK)  [RVA 0x32A67D4]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$SetSecondPlayerAvailable @ RVA 0x32A67D4

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__SetSecondPlayerAvailable
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,bool EHJMCCFLOLK,
               MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *__this_00;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *pNVar3;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar4;
  Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this_01;
  HintButton_o *pHVar5;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  undefined8 *puVar6;
  NLIDHEAMLMC_o *pNVar7;
  
  if ((DAT_045673f9 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__);
    FUN_01bab630(&StringLiteral_17771/*"dlgChooseHero"*/);
    FUN_01bab630(&StringLiteral_10597/*"PvP_ChooseCharacter"*/);
    DAT_045673f9 = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__SetSecondPlayerAvailable
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,EHJMCCFLOLK,(MethodInfo *)0x0);
  bVar1 = Nekki_SF2_GUI_UIModule__get_IsActive((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0)
  ;
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((**(long **)(lVar2 + 0xb8) == 0) ||
       (__this_00 = *(Nekki_SF2_GUI_Pvp_PvPHintController_o **)(**(long **)(lVar2 + 0xb8) + 200),
       __this_00 == (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0)) goto LAB_033a6b68;
    Nekki_SF2_GUI_Pvp_PvPHintController__set_IsSinglePlayer
              (__this_00,(bool)(~EHJMCCFLOLK & 1),(MethodInfo *)0x0);
    if ((~EHJMCCFLOLK & 1U) == 0) {
      pNVar3 = (__this->fields)._playerTwo;
      if ((pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) ||
         (pNVar4 = Nekki_SF2_GUI_Pvp_PhaseBox__get_Avatar(pNVar3,(MethodInfo *)0x0),
         pNVar4 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0)) goto LAB_033a6b68;
      (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pNVar4,
                 (pNVar4->klass->vtable)._23_set_color.method);
      (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
                (__this,1,0,0,0,(__this->klass->vtable)._13_BHOPECNMJAC.method);
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if ((**(long **)(lVar2 + 0xb8) == 0) ||
         (__this_01 = *(Nekki_SF2_GUI_Pvp_PlayerMenu_o **)(**(long **)(lVar2 + 0xb8) + 0x90),
         __this_01 == (Nekki_SF2_GUI_Pvp_PlayerMenu_o *)0x0)) goto LAB_033a6b68;
      puVar6 = &StringLiteral_10597/*"PvP_ChooseCharacter"*/;
    }
    else {
      (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
                (__this,1,0,0,0,(__this->klass->vtable)._13_BHOPECNMJAC.method);
      pNVar3 = (__this->fields)._playerTwo;
      if ((pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) ||
         (pNVar4 = Nekki_SF2_GUI_Pvp_PhaseBox__get_Avatar(pNVar3,(MethodInfo *)0x0),
         pNVar4 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0)) goto LAB_033a6b68;
      (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                (0x3f000000,0x3f000000,0x3f000000,0x3f800000,pNVar4,
                 (pNVar4->klass->vtable)._23_set_color.method);
      pNVar3 = (__this->fields)._playerTwo;
      if (pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) goto LAB_033a6b68;
      Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(pNVar3,2,(MethodInfo *)0x0);
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if ((**(long **)(lVar2 + 0xb8) == 0) ||
         (__this_01 = *(Nekki_SF2_GUI_Pvp_PlayerMenu_o **)(**(long **)(lVar2 + 0xb8) + 0x90),
         __this_01 == (Nekki_SF2_GUI_Pvp_PlayerMenu_o *)0x0)) goto LAB_033a6b68;
      puVar6 = &StringLiteral_17771/*"dlgChooseHero"*/;
    }
    Nekki_SF2_GUI_Pvp_PlayerMenu__SetHeader(__this_01,(System_String_o *)*puVar6,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._playerOne;
    if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565e5c == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
      DAT_04565e5c = '\x01';
    }
    if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar7 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
    if ((pNVar7 == (NLIDHEAMLMC_o *)0x0) || (pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0))
    goto LAB_033a6b68;
    Nekki_SF2_GUI_Pvp_PhaseBox__set_TrackingDeviceID
              (pNVar3,(pNVar7->fields).OFFPEKODFPE,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._playerTwo;
    if ((pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) ||
       (pHVar5 = (pNVar3->fields)._TagHint, pHVar5 == (HintButton_o *)0x0)) goto LAB_033a6b68;
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)pHVar5,EHJMCCFLOLK,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._playerTwo;
    if ((pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) ||
       (pHVar5 = (pNVar3->fields)._TagHint, pHVar5 == (HintButton_o *)0x0)) goto LAB_033a6b68;
    bVar1 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pHVar5,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar3 = (__this->fields)._playerTwo;
      if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565e5b == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
        DAT_04565e5b = '\x01';
      }
      if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar7 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
      if ((pNVar7 == (NLIDHEAMLMC_o *)0x0) || (pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0))
      goto LAB_033a6b68;
      Nekki_SF2_GUI_Pvp_PhaseBox__set_TrackingDeviceID
                (pNVar3,(pNVar7->fields).OFFPEKODFPE,(MethodInfo *)0x0);
    }
    pNVar3 = (__this->fields)._playerOne;
    if (pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) goto LAB_033a6b68;
    Nekki_SF2_GUI_Pvp_PhaseBox__ConfirmItem(pNVar3,false,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._playerTwo;
    if (pNVar3 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) goto LAB_033a6b68;
    Nekki_SF2_GUI_Pvp_PhaseBox__ConfirmItem(pNVar3,false,(MethodInfo *)0x0);
  }
  __this_02 = (__this->fields)._playerTwoChooseOrSelect;
  if ((__this_02 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_03 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
     __this_03 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_03,(bool)(~EHJMCCFLOLK & 1),(MethodInfo *)0x0);
    return;
  }
LAB_033a6b68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ItemTemplate(AMJPDLOCCNP OGPGLGPMEPD)  [RVA 0x32A6B6C]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$ItemTemplate @ RVA 0x32A6B6C

System_String_o *
Nekki_SF2_GUI_Pvp_CharacterSelectModule__ItemTemplate
          (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  uint uVar1;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  BNAIBAODKAK_array *pBVar2;
  
  __this_00 = (__this->fields).super._selectTable;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
    pBVar2 = (__this->fields).DLCCJFCKAJL;
    uVar1 = Nekki_SF2_GUI_Pvp_PlayersSelectTable__GetSelectionID
                      (__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
    if (pBVar2 != (BNAIBAODKAK_array *)0x0) {
      if ((uint)pBVar2->max_length <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (pBVar2->m_Items[(int)uVar1] != (BNAIBAODKAK_o *)0x0) {
        return (pBVar2->m_Items[(int)uVar1]->fields).PKJEMIDJPAG;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private PhaseBox MOANPFHGEGP(AMJPDLOCCNP HEHMPFLAEGE)  [RVA 0x32A5EC8]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$MOANPFHGEGP @ RVA 0x32A5EC8

Nekki_SF2_GUI_Pvp_PhaseBox_o *
Nekki_SF2_GUI_Pvp_CharacterSelectModule__MOANPFHGEGP
          (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t HEHMPFLAEGE,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = 0x88;
  if (HEHMPFLAEGE != 0) {
    lVar1 = 0x90;
  }
  return *(Nekki_SF2_GUI_Pvp_PhaseBox_o **)((long)&__this->klass + lVar1);
}


// ===== public string GetRandomItem()  [RVA 0x32A6BB8]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$GetRandomItem @ RVA 0x32A6BB8

System_String_o *
Nekki_SF2_GUI_Pvp_CharacterSelectModule__GetRandomItem
          (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  System_String_o *__this_00;
  BNAIBAODKAK_array *pBVar3;
  BNAIBAODKAK_o *__this_01;
  int iVar4;
  
  if ((DAT_045673fa & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_20433/*"random"*/);
    FUN_01bab630(&StringLiteral_17999/*"emm, something wrong with random"*/);
    DAT_045673fa = 1;
  }
  pBVar3 = (__this->fields).DLCCJFCKAJL;
  if (pBVar3 != (BNAIBAODKAK_array *)0x0) {
    iVar4 = 0x3ea;
    do {
      uVar2 = UnityEngine_Random__Range(0,(int32_t)pBVar3->max_length,(MethodInfo *)0x0);
      if ((uint)pBVar3->max_length <= uVar2) {
LAB_033a6cd8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_17999/*"emm, something wrong with random"*/,(MethodInfo *)0x0);
        pBVar3 = (__this->fields).DLCCJFCKAJL;
        if (pBVar3 != (BNAIBAODKAK_array *)0x0) {
          if ((int)pBVar3->max_length == 0) goto LAB_033a6cd8;
          __this_01 = pBVar3->m_Items[0];
          if (__this_01 != (BNAIBAODKAK_o *)0x0) {
LAB_033a6cc0:
            return (__this_01->fields).PKJEMIDJPAG;
          }
        }
        break;
      }
      __this_01 = pBVar3->m_Items[(int)uVar2];
      if (__this_01 == (BNAIBAODKAK_o *)0x0) break;
      bVar1 = BNAIBAODKAK__AAAMBLLDPHJ(__this_01,(MethodInfo *)0x0);
      if (bVar1) {
        __this_00 = (__this_01->fields).PKJEMIDJPAG;
        if (__this_00 == (System_String_o *)0x0) break;
        bVar1 = System_String__Equals(__this_00,StringLiteral_20433/*"random"*/,(MethodInfo *)0x0);
        if (!bVar1) goto LAB_033a6cc0;
      }
      pBVar3 = (__this->fields).DLCCJFCKAJL;
    } while (pBVar3 != (BNAIBAODKAK_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void COFBGCFPCPM(AMJPDLOCCNP FGBMMFIFMGM)  [RVA 0x32A6CDC]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$COFBGCFPCPM @ RVA 0x32A6CDC

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__COFBGCFPCPM
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t FGBMMFIFMGM,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *__this_00;
  
  __this_00 = (__this->fields)._playerTwo;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(__this_00,2,(MethodInfo *)0x0);
    bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                      ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
    if (!bVar1) {
      FGBMMFIFMGM = (int32_t)(__this->fields).super.FODJGPABKLP;
    }
    Nekki_SF2_GUI_Pvp_SelectModule__COFBGCFPCPM
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,FGBMMFIFMGM,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void LLGCACMKNAN()  [RVA 0x32A6D30]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$LLGCACMKNAN @ RVA 0x32A6D30

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__LLGCACMKNAN
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *pNVar2;
  NLIDHEAMLMC_o *pNVar3;
  
  if ((DAT_045673fb & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_045673fb = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__LLGCACMKNAN
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._playerOne;
  if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PhaseBox__HidePhaseList(pNVar2,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._playerTwo;
    if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
      Nekki_SF2_GUI_Pvp_PhaseBox__HidePhaseList(pNVar2,(MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                        ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pNVar2 = (__this->fields)._playerTwo;
      if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565e5c == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
        DAT_04565e5c = '\x01';
      }
      if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
      if ((pNVar3 != (NLIDHEAMLMC_o *)0x0) && (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0)) {
        Nekki_SF2_GUI_Pvp_PhaseBox__set_TrackingDeviceID
                  (pNVar2,(pNVar3->fields).OFFPEKODFPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void BHOPECNMJAC(AMJPDLOCCNP HEHMPFLAEGE, int MKACJBMOMHC, int JJBKAMIAMNE, bool OFKBEIFPFMN)  [RVA 0x32A6E20]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$BHOPECNMJAC @ RVA 0x32A6E20

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__BHOPECNMJAC
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,int32_t HEHMPFLAEGE,
               int32_t MKACJBMOMHC,int32_t JJBKAMIAMNE,bool OFKBEIFPFMN,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *__this_01;
  BNAIBAODKAK_array *pBVar4;
  
  bVar2 = Nekki_SF2_GUI_Pvp_SelectModule__ONKNKLHEGGN
                    ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,HEHMPFLAEGE,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__BHOPECNMJAC
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,HEHMPFLAEGE,MKACJBMOMHC,JJBKAMIAMNE,
             OFKBEIFPFMN,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super._selectTable;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
    pBVar4 = (__this->fields).DLCCJFCKAJL;
    uVar3 = Nekki_SF2_GUI_Pvp_PlayersSelectTable__GetSelectionID
                      (__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
    if (pBVar4 != (BNAIBAODKAK_array *)0x0) {
      if ((uint)pBVar4->max_length <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      lVar1 = 0x88;
      if (HEHMPFLAEGE != 0) {
        lVar1 = 0x90;
      }
      __this_01 = *(Nekki_SF2_GUI_Pvp_PhaseBox_o **)((long)&__this->klass + lVar1);
      if (__this_01 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
        Nekki_SF2_GUI_Pvp_PhaseBox__ChangeCharacter
                  (__this_01,pBVar4->m_Items[(int)uVar3],(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32A6EE0]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$.ctor @ RVA 0x32A6EE0

void Nekki_SF2_GUI_Pvp_CharacterSelectModule___ctor
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_SelectModule___ctor
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void HCKMKFBGPIM()  [RVA 0x32A6EE8]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$HCKMKFBGPIM @ RVA 0x32A6EE8

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__HCKMKFBGPIM
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *pNVar3;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  BNAIBAODKAK_o *__this_01;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_GameObject_o *__this_02;
  BNAIBAODKAK_array *pBVar6;
  uint uVar7;
  
  if ((DAT_045673fc & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<SelectCell>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045673fc = 1;
  }
  if ((__this->fields).super.NKIKDJEPECM != false) {
    return;
  }
  pNVar3 = (__this->fields)._playerOne;
  if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PhaseBox__Init(pNVar3,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._playerTwo;
    if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
      Nekki_SF2_GUI_Pvp_PhaseBox__Init(pNVar3,(MethodInfo *)0x0);
      pBVar6 = (__this->fields).DLCCJFCKAJL;
      if (pBVar6 != (BNAIBAODKAK_array *)0x0) {
        uVar1 = (uint)pBVar6->max_length;
        method_00 = extraout_x1;
        if (0 < (int)uVar1) {
          uVar7 = 0;
          do {
            if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            __this_01 = pBVar6->m_Items[(int)uVar7];
            if (__this_01 == (BNAIBAODKAK_o *)0x0) goto LAB_033a70c8;
            bVar2 = BNAIBAODKAK__AAAMBLLDPHJ(__this_01,(MethodInfo *)0x0);
            if (bVar2) {
              pUVar5 = (__this->fields).super.selectCellPrefab;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pUVar5 = (UnityEngine_GameObject_o *)
                       UnityEngine_Object__Instantiate<object>
                                 ((Il2CppObject *)pUVar5,
                                  Method_UnityEngine_Object_Instantiate<GameObject>__);
              if (((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
                  (pIVar4 = UnityEngine_GameObject__GetComponent<object>
                                      (pUVar5,
                                       Method_UnityEngine_GameObject_GetComponent<SelectCell>__),
                  pIVar4 == (Il2CppObject *)0x0)) || (pIVar4[2].klass == (Il2CppClass *)0x0))
              goto LAB_033a70c8;
              Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                        ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar4[2].klass,
                         (__this_01->fields).DGGHNFBCNGI,(MethodInfo *)0x0);
              __this_02 = pIVar4[2].monitor;
              bVar2 = BNAIBAODKAK__PLGBAOHOBLE(__this_01,(MethodInfo *)0x0);
              if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_033a70c8;
              UnityEngine_GameObject__SetActive(__this_02,bVar2,(MethodInfo *)0x0);
            }
            else {
              pUVar5 = (__this->fields).super.lockedCellPrefab;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pUVar5 = (UnityEngine_GameObject_o *)
                       UnityEngine_Object__Instantiate<object>
                                 ((Il2CppObject *)pUVar5,
                                  Method_UnityEngine_Object_Instantiate<GameObject>__);
            }
            __this_00 = (__this->fields).super._selectTable;
            if (__this_00 == (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) goto LAB_033a70c8;
            Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetItem(__this_00,pUVar5,(MethodInfo *)0x0);
            uVar1 = (uint)pBVar6->max_length;
            uVar7 = uVar7 + 1;
            method_00 = extraout_x1_00;
          } while ((int)uVar7 < (int)uVar1);
        }
        if ((__this->fields).PNCOPANDAGE == false) {
          routine = Nekki_SF2_GUI_Pvp_CharacterSelectModule__LoadWeaponImages(__this,method_00);
          UnityEngine_MonoBehaviour__StartCoroutine
                    ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        }
        Nekki_SF2_GUI_Pvp_SelectModule__HCKMKFBGPIM
                  ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_033a70c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void BJBEBBGINAH()  [RVA 0x32A70D0]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$BJBEBBGINAH @ RVA 0x32A70D0

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__BJBEBBGINAH
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  NLPJLHOEAOE_o *pNVar3;
  PvpSettings_o *__this_00;
  BNAIBAODKAK_array *pBVar4;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *pNVar5;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *pNVar6;
  MethodInfo *extraout_x1;
  
  if ((DAT_045673fd & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045673fd = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((pNVar3 != (NLPJLHOEAOE_o *)0x0) &&
     (__this_00 = (pNVar3->fields).OMDCNDHOACL, __this_00 != (PvpSettings_o *)0x0)) {
    pBVar4 = PvpSettings__PPLFNEHDHCM(__this_00,(MethodInfo *)0x0);
    (__this->fields).DLCCJFCKAJL = pBVar4;
    thunk_FUN_01c20e04();
    Nekki_SF2_GUI_Pvp_SelectModule__BJBEBBGINAH
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._playerOne;
    (__this->fields).HKKEEPMCBFO = 0;
    if (pNVar5 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
      Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(pNVar5,2,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._playerTwo;
      if (pNVar5 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
        Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(pNVar5,2,(MethodInfo *)0x0);
        bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
                          ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
        if (bVar1) {
          return;
        }
        pNVar6 = (__this->fields).super._selectTable;
        if (pNVar6 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
          Nekki_SF2_GUI_Pvp_PlayersSelectTable__ResetSelection(pNVar6,1,(MethodInfo *)0x0);
          pNVar6 = (__this->fields).super._selectTable;
          if (pNVar6 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
            pNVar5 = (__this->fields)._playerTwo;
            pBVar4 = (__this->fields).DLCCJFCKAJL;
            uVar2 = Nekki_SF2_GUI_Pvp_PlayersSelectTable__GetSelectionID(pNVar6,1,(MethodInfo *)0x0)
            ;
            if (pBVar4 != (BNAIBAODKAK_array *)0x0) {
              if ((uint)pBVar4->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              if (pNVar5 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
                Nekki_SF2_GUI_Pvp_PhaseBox__ChangeCharacter
                          (pNVar5,pBVar4->m_Items[(int)uVar2],(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

