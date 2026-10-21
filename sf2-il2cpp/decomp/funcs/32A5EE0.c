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
    FUN_01bab630(&StringLiteral_17771);
    FUN_01bab630(&StringLiteral_17770);
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
                          (pNVar11,StringLiteral_17770,(MethodInfo *)0x0);
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
      Nekki_SF2_GUI_Pvp_PlayerMenu__SetHeader(pNVar11,StringLiteral_17771,(MethodInfo *)0x0);
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

