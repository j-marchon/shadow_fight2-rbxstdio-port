// TypeDefIndex 2545
// Namespace: Nekki.SF2.GUI.Profile
// public class ProfileScene : Scene<ProfileScene>
// Fields:
//   private const float ONDLKJLNBEF = 0.5;
//   private ModelContainer _ModelContainer; // 0x90
//   private SpriteRendererQuality _Background; // 0x98
//   private UserPerksPanel _LeftPanel; // 0xA0
//   private InfoPanel _RightPanel; // 0xA8
//   private RectTransform _ItemsPanel; // 0xB0
//   private PerksController _PerksController; // 0xB8
//   private TricksController _TricksController; // 0xC0
//   private AchievementsController _AchievementsController; // 0xC8
//   private SealsController _SealsController; // 0xD0
//   private BattlePassPanel _battlePassPanel; // 0xD8
//   private LabelButton _ShowAchievementButton; // 0xE0
//   private CanvasGroup _ProfileUIGroup; // 0xE8
//   private ItemsSelectionManager _ItemsSelectionManager; // 0xF0
//   private SFButton _PerksResetButton; // 0xF8
//   private MainMenu CCKIFMALFBA; // 0x100
//   private ProfileBottomPanel GJIPOBCNEPG; // 0x108
//   private ItemsController FOGBEOLOAGF; // 0x110
//   private IEnumerator NMKGGFKBHID; // 0x118
//   private ECENNHNBAME GCPBEAFOPOA; // 0x120
//   private bool GGIEDAGJFHO; // 0x128
//   private EBGNICNEJFJ AIAODGKGPEI; // 0x12C
//   private float EJPDLDOMICI; // 0x130
//   private float DIADJHEAPCA; // 0x134
//   private Tween LOGCCNNGOAG; // 0x138
//   private Tween KPIIFJBPODO; // 0x140
//   private SubItem PFKHDCBBDOG; // 0x148

// ===== private void CBGCMJCJJKP()  [RVA 0x33942A0]
// Nekki.SF2.GUI.Profile.ProfileScene$$CBGCMJCJJKP @ RVA 0x33942A0

void Nekki_SF2_GUI_Profile_ProfileScene__CBGCMJCJJKP
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  ECENNHNBAME_o *pEVar1;
  
  pEVar1 = (__this->fields).GCPBEAFOPOA;
  if (pEVar1 == (ECENNHNBAME_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields)._ModelContainer;
  if (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__PlayAnimation
              (__this_00,(pEVar1->fields).JIJLBFGKNJK,1,(MethodInfo *)0x0);
    (__this->fields).GGIEDAGJFHO = true;
    (__this->fields).GCPBEAFOPOA = (ECENNHNBAME_o *)0x0;
    thunk_FUN_01c20e04(&(__this->fields).GCPBEAFOPOA,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HFHCHGEFAFD()  [RVA 0x3394300]
// Nekki.SF2.GUI.Profile.ProfileScene$$HFHCHGEFAFD @ RVA 0x3394300

void Nekki_SF2_GUI_Profile_ProfileScene__HFHCHGEFAFD
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **LKJHINHIIHD;
  Nekki_SF2_GUI_Profile_ProfileScene_o *__this_00;
  Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this_01;
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar1;
  MethodInfo *in_x2;
  
  __this_00 = __this;
  if ((DAT_04567c45 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_JCNJDMMNGCL__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    __this_00 = (Nekki_SF2_GUI_Profile_ProfileScene_o *)
                FUN_01bab630(&
                             Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                            );
    DAT_04567c45 = 1;
  }
  LKJHINHIIHD = &(__this->fields).LOGCCNNGOAG;
  Nekki_SF2_GUI_Profile_ProfileScene__CCPABLFBFFA(__this_00,LKJHINHIIHD,in_x2);
  __this_01 = (__this->fields)._LeftPanel;
  if (__this_01 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) {
    target = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    t = DG_Tweening_ShortcutExtensions__DOLocalMoveX
                  (target,(__this->fields).DIADJHEAPCA,0.34,false,(MethodInfo *)0x0);
    action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
    DG_Tweening_TweenCallback___ctor();
    pDVar1 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                       ((Il2CppObject *)t,action,
                        Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                       );
    (__this->fields).LOGCCNNGOAG = pDVar1;
    thunk_FUN_01c20e04(LKJHINHIIHD,pDVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SelectSubItem(SubItem OLNJMPMPLOB)  [RVA 0x3394420]
// Nekki.SF2.GUI.Profile.ProfileScene$$SelectSubItem @ RVA 0x3394420

void Nekki_SF2_GUI_Profile_ProfileScene__SelectSubItem
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,
               Nekki_SF2_GUI_Profile_SubItem_o *OLNJMPMPLOB,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_SubItem_o **ppNVar1;
  int iVar2;
  bool bVar3;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *OLNJMPMPLOB_00;
  Nekki_SF2_GUI_Profile_AchievementSubItem_o *OLNJMPMPLOB_01;
  Nekki_SF2_GUI_Profile_TrickSubItem_o *OLNJMPMPLOB_02;
  JEIEEMKCNOJ_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Profile_InfoPanel_o *pNVar4;
  Nekki_SF2_GUI_Profile_SubItem_o *pNVar5;
  Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *pNVar6;
  Nekki_SF2_GUI_Profile_ProfileCell_o *pNVar7;
  
  if ((DAT_04567c46 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_FLIPKMFLGNB<AchievementSubItem>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_FLIPKMFLGNB<PerkSubItem>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_FLIPKMFLGNB<TrickSubItem>__);
    DAT_04567c46 = 1;
  }
  pNVar5 = (__this->fields).PFKHDCBBDOG;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)OLNJMPMPLOB,
                     (MethodInfo *)0x0);
  if (!bVar3) {
    ppNVar1 = &(__this->fields).PFKHDCBBDOG;
    pNVar5 = *ppNVar1;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar3) {
      pNVar5 = *ppNVar1;
      if (pNVar5 == (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) goto LAB_03494678;
      (*(pNVar5->klass->vtable)._55_SetSelected.methodPtr)
                (pNVar5,0,(pNVar5->klass->vtable)._55_SetSelected.method);
    }
    *ppNVar1 = OLNJMPMPLOB;
    thunk_FUN_01c20e04(ppNVar1,OLNJMPMPLOB);
    pNVar5 = *ppNVar1;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar3) {
      if (OLNJMPMPLOB != (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) {
        pNVar6 = (__this->fields)._ItemsSelectionManager;
        pNVar7 = (OLNJMPMPLOB->fields).PEJMMOONAHC;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        CJNHFNHJHPE = (JEIEEMKCNOJ_o *)0x0;
        if (bVar3) {
          pNVar7 = (OLNJMPMPLOB->fields).PEJMMOONAHC;
          if (pNVar7 == (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0) goto LAB_03494678;
          CJNHFNHJHPE = (pNVar7->fields).MKAAKGJNBHI;
        }
        if (pNVar6 != (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) {
          Nekki_SF2_GUI_Profile_ItemsSelectionManager__set_SubItemsContainer
                    (pNVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
          pNVar6 = (__this->fields)._ItemsSelectionManager;
          if (pNVar6 != (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) {
            Nekki_SF2_GUI_Profile_ItemsSelectionManager__set_SelectedSubItem
                      (pNVar6,OLNJMPMPLOB,(MethodInfo *)0x0);
            pNVar5 = *ppNVar1;
            if (pNVar5 != (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) {
              (*(pNVar5->klass->vtable)._55_SetSelected.methodPtr)
                        (pNVar5,1,(pNVar5->klass->vtable)._55_SetSelected.method);
              iVar2 = (__this->fields).AIAODGKGPEI;
              if (iVar2 == 2) {
                pNVar4 = (__this->fields)._RightPanel;
                OLNJMPMPLOB_01 =
                     (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)
                     Nekki_SF2_GUI_Profile_ProfileScene__FLIPKMFLGNB<object>
                               (__this,
                                Method_Nekki_SF2_GUI_Profile_ProfileScene_FLIPKMFLGNB<AchievementSubItem>__
                               );
                if (pNVar4 != (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0) {
                  Nekki_SF2_GUI_Profile_InfoPanel__Refresh(pNVar4,OLNJMPMPLOB_01,(MethodInfo *)0x0);
                  return;
                }
              }
              else if (iVar2 == 1) {
                pNVar4 = (__this->fields)._RightPanel;
                OLNJMPMPLOB_02 =
                     (Nekki_SF2_GUI_Profile_TrickSubItem_o *)
                     Nekki_SF2_GUI_Profile_ProfileScene__FLIPKMFLGNB<object>
                               (__this,
                                Method_Nekki_SF2_GUI_Profile_ProfileScene_FLIPKMFLGNB<TrickSubItem>__
                               );
                if (pNVar4 != (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0) {
                  Nekki_SF2_GUI_Profile_InfoPanel__Refresh(pNVar4,OLNJMPMPLOB_02,(MethodInfo *)0x0);
                  return;
                }
              }
              else {
                if (iVar2 != 0) {
                  return;
                }
                pNVar4 = (__this->fields)._RightPanel;
                OLNJMPMPLOB_00 =
                     (Nekki_SF2_GUI_Profile_PerkSubItem_o *)
                     Nekki_SF2_GUI_Profile_ProfileScene__FLIPKMFLGNB<object>
                               (__this,
                                Method_Nekki_SF2_GUI_Profile_ProfileScene_FLIPKMFLGNB<PerkSubItem>__
                               );
                if (pNVar4 != (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0) {
                  Nekki_SF2_GUI_Profile_InfoPanel__Refresh(pNVar4,OLNJMPMPLOB_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
LAB_03494678:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void OnPerkResetButtonClick()  [RVA 0x339467C]
// Nekki.SF2.GUI.Profile.ProfileScene$$OnPerkResetButtonClick @ RVA 0x339467C

void Nekki_SF2_GUI_Profile_ProfileScene__OnPerkResetButtonClick
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *pSVar6;
  HOOAAGABMBL_o *__this_00;
  System_String_o *pSVar7;
  System_Action_object__o *IELDNEAAPBE;
  long lVar8;
  Il2CppClass *pIVar9;
  DOPEEDABNEK_o *pDVar10;
  ulong uVar11;
  int32_t *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int64_t local_68;
  
  if ((DAT_04567c47 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_IBLPDNHGONE__);
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    FUN_01bab630(&StringLiteral_20991/*"shopBuy"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_10238/*"Perk_Reset_Text"*/);
    FUN_01bab630(&StringLiteral_10461/*"PriceLineProposal{img::MiscSprites.ruby}{"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_10237/*"Perk_Reset"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567c47 = 1;
  }
  local_68 = 0;
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar4 = Method_System_Array_Empty<string>__;
  lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar8 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar8 = *(long *)(lVar4 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01b81620();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  uVar14 = StringLiteral_10238/*"Perk_Reset_Text"*/;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar3->klass;
    uVar13 = **(undefined8 **)(lVar4 + 0xb8);
    uVar1._0_1_ = (pIVar9->_2).rank;
    uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
    uVar11 = (ulong)uVar1;
    if (uVar11 != 0) {
      piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar9->vtable + (*piVar12 + 0xc);
          goto LAB_03494844;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03494844:
    pSVar6 = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar14,uVar13,pVVar5->method);
    pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if ((pDVar10 != (DOPEEDABNEK_o *)0x0) &&
       (__this_00 = (pDVar10->fields)._PCFMNDLDEMC_k__BackingField,
       __this_00 != (HOOAAGABMBL_o *)0x0)) {
      local_68 = HOOAAGABMBL__MNKCHHFDEGH(__this_00,(MethodInfo *)0x0);
      pSVar7 = System_Int64__ToString((int64_t)&local_68,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat
                         (StringLiteral_10461/*"PriceLineProposal{img::MiscSprites.ruby}{"*/,pSVar7,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0);
      lVar4 = Method_System_Array_Empty<string>__;
      lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar8 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar8 = *(long *)(lVar4 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01b81620();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar9 = pIVar3->klass;
        uVar14 = **(undefined8 **)(lVar4 + 0xb8);
        uVar2._0_1_ = (pIVar9->_2).rank;
        uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar11 = (ulong)uVar2;
        if (uVar11 != 0) {
          piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar5 = pIVar9->vtable + (*piVar12 + 0xc);
              goto LAB_034949e0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034949e0:
        pSVar7 = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,pSVar7,uVar14,pVVar5->method);
        pSVar6 = System_String__Concat(pSVar6,StringLiteral_47/*"\n"*/,pSVar7,(MethodInfo *)0x0);
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        JJPNLEPEAFM__JNDPLPKDPCP
                  (StringLiteral_10237/*"Perk_Reset"*/,pSVar6,StringLiteral_20991/*"shopBuy"*/,StringLiteral_3640/*"CANCEL"*/,IELDNEAAPBE,1,0
                   ,false,false,StringLiteral_1/*""*/,false,true,true,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3394AA0]
// Nekki.SF2.GUI.Profile.ProfileScene$$.ctor @ RVA 0x3394AA0

void Nekki_SF2_GUI_Profile_ProfileScene___ctor
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  if ((DAT_04567c48 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>__ctor__);
    DAT_04567c48 = 1;
  }
  (__this->fields).AIAODGKGPEI = 5;
  Nekki_SF2_GUI_Scene<object>___ctor
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<ProfileScene>__ctor__);
  return;
}


// ===== private void CCPABLFBFFA(ref Tween LKJHINHIIHD)  [RVA 0x33943E8]
// Nekki.SF2.GUI.Profile.ProfileScene$$CCPABLFBFFA @ RVA 0x33943E8

void Nekki_SF2_GUI_Profile_ProfileScene__CCPABLFBFFA
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,DG_Tweening_Tween_o **LKJHINHIIHD,
               MethodInfo *method)

{
  if (*LKJHINHIIHD != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(*LKJHINHIIHD,true,(MethodInfo *)0x0);
    *LKJHINHIIHD = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(LKJHINHIIHD,0);
    return;
  }
  return;
}


// ===== public bool CanStartImprovePerk()  [RVA 0x3394AF0]
// Nekki.SF2.GUI.Profile.ProfileScene$$CanStartImprovePerk @ RVA 0x3394AF0

bool Nekki_SF2_GUI_Profile_ProfileScene__CanStartImprovePerk
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  return (__this->fields).NMKGGFKBHID == (System_Collections_IEnumerator_o *)0x0;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x3394B00]
// Nekki.SF2.GUI.Profile.ProfileScene$$RandomizeObscuredVars @ RVA 0x3394B00

void Nekki_SF2_GUI_Profile_ProfileScene__RandomizeObscuredVars
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  
  __this_00 = (__this->fields)._ModelContainer;
  if (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private JLGNBOILFLN EIEHBAIIJJI(int JLAFGLDIFOC, HNFFPPPDKDK HPLHPPKHDHK)  [RVA 0x3394B1C]
// Nekki.SF2.GUI.Profile.ProfileScene$$EIEHBAIIJJI @ RVA 0x3394B1C

JLGNBOILFLN_o *
Nekki_SF2_GUI_Profile_ProfileScene__EIEHBAIIJJI
          (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,int32_t JLAFGLDIFOC,
          HNFFPPPDKDK_o *HPLHPPKHDHK,MethodInfo *method)

{
  bool bVar1;
  EPFMFHDGMCE_o *__this_00;
  EANNACPOJFA_o *pEVar2;
  JLGNBOILFLN_o *pJVar3;
  System_String_o *a;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_01;
  int index;
  
  if ((DAT_04567c49 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    DAT_04567c49 = 1;
  }
  __this_00 = EPFMFHDGMCE__ICEPMHDMFLM((MethodInfo *)0x0);
  if (((__this_00 != (EPFMFHDGMCE_o *)0x0) &&
      (pEVar2 = EPFMFHDGMCE__FLCAGIJMPKA(__this_00,JLAFGLDIFOC,(MethodInfo *)0x0),
      pEVar2 != (EANNACPOJFA_o *)0x0)) &&
     (__this_01 = (pEVar2->fields).GJBLBEALOBO,
     __this_01 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)) {
    if (0 < (__this_01->fields)._size) {
      index = 0;
      do {
        pJVar3 = (JLGNBOILFLN_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
        if ((pJVar3 == (JLGNBOILFLN_o *)0x0) ||
           (a = JLGNBOILFLN__GKMAFGODLLG(pJVar3,(MethodInfo *)0x0),
           HPLHPPKHDHK == (HNFFPPPDKDK_o *)0x0)) goto LAB_03494c08;
        bVar1 = System_String__op_Inequality(a,(HPLHPPKHDHK->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
        if (bVar1) {
          pJVar3 = (JLGNBOILFLN_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,index,
                              Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
          return pJVar3;
        }
        index = index + 1;
      } while (index < (__this_01->fields)._size);
    }
    return (JLGNBOILFLN_o *)0x0;
  }
LAB_03494c08:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HDMIBCGPDPL()  [RVA 0x3394C0C]
// Nekki.SF2.GUI.Profile.ProfileScene$$HDMIBCGPDPL @ RVA 0x3394C0C

void Nekki_SF2_GUI_Profile_ProfileScene__HDMIBCGPDPL
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this_00;
  Nekki_SF2_GUI_Common_SectionButton_o *__this_01;
  Il2CppObject *pIVar2;
  Nekki_SF2_GUI_Profile_SealsController_o *pNVar3;
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar4;
  undefined4 uVar5;
  
  if ((DAT_04567c4a & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_GetButtonBySection__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Image>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Count__);
    DAT_04567c4a = 1;
  }
  __this_00 = (__this->fields).GJIPOBCNEPG;
  if (__this_00 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
    __this_01 = Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__GetButtonBySection
                          ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this_00,3,
                           Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_GetButtonBySection__
                          );
    pNVar3 = (__this->fields)._SealsController;
    if (((pNVar3 != (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) &&
        (pSVar4 = (pNVar3->fields).BMEJJFBFFIH,
        pSVar4 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) &&
       (__this_01 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0)) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)__this_01,0 < (pSVar4->fields)._size,(MethodInfo *)0x0);
      pIVar2 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this_01,
                          Method_UnityEngine_Component_GetComponent<Image>__);
      bVar1 = UnityEngine_Behaviour__get_enabled
                        ((UnityEngine_Behaviour_o *)__this_01,(MethodInfo *)0x0);
      if (pIVar2 != (Il2CppObject *)0x0) {
        uVar5 = 0x3f800000;
        if (!bVar1) {
          uVar5 = 0x3f000000;
        }
                    /* WARNING: Could not recover jumptable at 0x03494cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pIVar2->klass->vtable[0x17].methodPtr)
                  (0x3f800000,0x3f800000,0x3f800000,uVar5,pIVar2,pIVar2->klass->vtable[0x17].method)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator LDNIFMLAKHM(JLGNBOILFLN CDEABOAKDEJ)  [RVA 0x3394D00]
// Nekki.SF2.GUI.Profile.ProfileScene$$LDNIFMLAKHM @ RVA 0x3394D00

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Profile_ProfileScene__LDNIFMLAKHM
          (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,JLGNBOILFLN_o *CDEABOAKDEJ,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04567c4b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileScene_ADBKDCAJPFM_TypeInfo);
    DAT_04567c4b = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Profile_ProfileScene_ADBKDCAJPFM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  __this_00[2].monitor = CDEABOAKDEJ;
  thunk_FUN_01c20e04(&__this_00[2].monitor,CDEABOAKDEJ);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void ScrollToItemByName(EBGNICNEJFJ HIIGJGLEOFH, string JEPIGCLHAMI)  [RVA 0x3394DB0]
// Nekki.SF2.GUI.Profile.ProfileScene$$ScrollToItemByName @ RVA 0x3394DB0

void Nekki_SF2_GUI_Profile_ProfileScene__ScrollToItemByName
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,int32_t HIIGJGLEOFH,
               System_String_o *JEPIGCLHAMI,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_ItemsController_o *pNVar2;
  
  Nekki_SF2_GUI_Profile_ProfileScene__set_CurrentSection
            (__this,HIIGJGLEOFH,(MethodInfo *)JEPIGCLHAMI);
  bVar1 = System_String__IsNullOrEmpty(JEPIGCLHAMI,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar2 = (__this->fields).FOGBEOLOAGF;
  if (pNVar2 != (Nekki_SF2_GUI_Profile_ItemsController_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03494e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pNVar2->klass[1]._1.image)(0,pNVar2,JEPIGCLHAMI,pNVar2->klass[1]._1.gc_desc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HKKFPJJNMCE()  [RVA 0x33954F4]
// Nekki.SF2.GUI.Profile.ProfileScene$$HKKFPJJNMCE @ RVA 0x33954F4

void Nekki_SF2_GUI_Profile_ProfileScene__HKKFPJJNMCE
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  IMAPABEJECG__KNLFICNFHBE((MethodInfo *)0x0);
  return;
}


// ===== public ModelContainer get_ModelContainer()  [RVA 0x33954FC]
// Nekki.SF2.GUI.Profile.ProfileScene$$get_ModelContainer @ RVA 0x33954FC

Nekki_SF2_Core_Fights_ModelContainer_o *
Nekki_SF2_GUI_Profile_ProfileScene__get_ModelContainer
          (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  return (__this->fields)._ModelContainer;
}


// ===== private void JAJMCAAJCDE()  [RVA 0x3395504]
// Nekki.SF2.GUI.Profile.ProfileScene$$JAJMCAAJCDE @ RVA 0x3395504

void Nekki_SF2_GUI_Profile_ProfileScene__JAJMCAAJCDE
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  if ((DAT_04567c4c & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
    DAT_04567c4c = 1;
  }
  (__this->fields).KPIIFJBPODO = (DG_Tweening_Tween_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).KPIIFJBPODO,0);
  __this_00 = (__this->fields)._LeftPanel;
  if ((__this_00 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04567c94 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
      DAT_04567c94 = '\x01';
    }
    if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_Profile_SubItem_TypeInfo->static_fields->EEDBEBPEPJL = true;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034955e8 to 03595677 has its CatchHandler @ 034955e8
                       catch() { ... } // from try @ 034955e8 with catch @ 034955e8
                       catch() { ... } // from try @ 034956ec with catch @ 034955e8
                       catch() { ... } // from try @ 03495738 with catch @ 034955e8
                       catch() { ... } // from try @ 034957b8 with catch @ 034955e8 */
    MGNPHCAAEIO__MHNCGDFKIJN((MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void TakeAchievementReward(KMJDCOABCCG HKCIMMBPDLP)  [RVA 0x33955F0]
// Nekki.SF2.GUI.Profile.ProfileScene$$TakeAchievementReward @ RVA 0x33955F0

void Nekki_SF2_GUI_Profile_ProfileScene__TakeAchievementReward
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,KMJDCOABCCG_o *HKCIMMBPDLP,
               MethodInfo *method)

{
  bool bVar1;
  FEPPOONJCGI_o *__this_00;
  ACHLOMELAJE_o *pAVar2;
  int64_t iVar3;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_01;
  KKLJIDJBFEI_o *pKVar4;
  Nekki_SF2_GUI_Profile_AchievementsController_o *pNVar5;
  Nekki_SF2_GUI_Profile_AchievementCell_o *x;
  Nekki_SF2_GUI_Profile_AchievementSubItem_o *pNVar6;
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this_02;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar7;
  
  if ((DAT_04567c4d & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    FUN_01bab630(&FIPOABEGELK_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c4d = 1;
  }
  if (HKCIMMBPDLP == (KMJDCOABCCG_o *)0x0) goto LAB_03495968;
  if ((HKCIMMBPDLP->fields).AHKHDBIDDIH == false) {
    (HKCIMMBPDLP->fields).AHKHDBIDDIH = true;
    KMJDCOABCCG__GEBIJFANLGH(HKCIMMBPDLP,false,(MethodInfo *)0x0);
                    /* try { // try from 03495678 to 0359569b has its CatchHandler @ 03495704 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0349569c to 035956a3 has its CatchHandler @ 03495700 */
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 034956b4 to 035956d3 has its CatchHandler @ 03495708 */
    }
    pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar7 == (ACHLOMELAJE_o *)0x0) ||
       (__this_00 = (pAVar7->fields).IMJJJJJMMHL, __this_00 == (FEPPOONJCGI_o *)0x0))
    goto LAB_03495968;
    FEPPOONJCGI__IMHHMPMNGKB(__this_00,HKCIMMBPDLP,true,true,(MethodInfo *)0x0);
                    /* try { // try from 034956e0 to 035956eb has its CatchHandler @ 034956fc */
    if (0 < (HKCIMMBPDLP->fields).ICOLJMCHFEC) {
                    /* try { // try from 034956ec to 0359571f has its CatchHandler @ 034955e8 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034956e0 with catch @ 034956fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349569c with catch @ 03495700
                        */
      if (DAT_04565b7d == '\0') {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03495678 with catch @ 03495704
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034956b4 with catch @ 03495708
                        */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
                    /* try { // try from 03495720 to 03595737 has its CatchHandler @ 034957b0 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 03495738 to 0359579f has its CatchHandler @ 034955e8 */
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
      }
      else {
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar2 == (ACHLOMELAJE_o *)0x0) ||
         (iVar3 = ACHLOMELAJE__IMLCNMCBEEN(pAVar2,(MethodInfo *)0x0), pAVar7 == (ACHLOMELAJE_o *)0x0
         )) goto LAB_03495968;
      ACHLOMELAJE__CEICBEHCCDA
                (pAVar7,iVar3 + (HKCIMMBPDLP->fields).ICOLJMCHFEC,false,(MethodInfo *)0x0);
    }
                    /* try { // try from 034957a0 to 035957af has its CatchHandler @ 034957b0 */
    if (0 < (HKCIMMBPDLP->fields).DBDIDOBPFMC) {
                    /* catch() { ... } // from try @ 03495720 with catch @ 034957b0
                       catch() { ... } // from try @ 034957a0 with catch @ 034957b0 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034957b4 to 035957b7 has its CatchHandler @ 034957c0 */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 034957b8 to 035957c3 has its CatchHandler @ 034955e8 */
      if (DAT_04565b7d == '\0') {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034957b4 with catch @ 034957c0
                        */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
      }
      else {
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar2 == (ACHLOMELAJE_o *)0x0) ||
         (iVar3 = ACHLOMELAJE__HEHFNBKGJLP(pAVar2,(MethodInfo *)0x0), pAVar7 == (ACHLOMELAJE_o *)0x0
         )) goto LAB_03495968;
      ACHLOMELAJE__OGPHHGFFKHD
                (pAVar7,iVar3 + (HKCIMMBPDLP->fields).DBDIDOBPFMC,2,false,(MethodInfo *)0x0);
    }
    __this_01 = (__this->fields).CCKIFMALFBA;
    if (__this_01 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03495968;
    Nekki_SF2_GUI_Menu_MainMenu__UpdateMenu(__this_01,(MethodInfo *)0x0);
    EDFDANKEBGF__HKPLJCDJKMB((MethodInfo *)0x0);
    pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar4 == (KKLJIDJBFEI_o *)0x0) goto LAB_03495968;
    if ((pKVar4->fields).super._MGGBEPKMPCF_k__BackingField != false) {
      pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if (pKVar4 == (KKLJIDJBFEI_o *)0x0) goto LAB_03495968;
      KKLJIDJBFEI__LIKCPEBFCEC(pKVar4,(MethodInfo *)0x0);
    }
  }
  pNVar5 = (__this->fields)._AchievementsController;
  if (pNVar5 == (Nekki_SF2_GUI_Profile_AchievementsController_o *)0x0) goto LAB_03495968;
  x = Nekki_SF2_GUI_Profile_AchievementsController__GetCellByAchievement
                (pNVar5,HKCIMMBPDLP,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((x == (Nekki_SF2_GUI_Profile_AchievementCell_o *)0x0) ||
       (pNVar6 = (x->fields).achievSubItem,
       pNVar6 == (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0)) goto LAB_03495968;
    Nekki_SF2_GUI_Profile_AchievementSubItem__ResetOpacity(pNVar6,method_00);
    pNVar6 = (x->fields).achievSubItem;
    if (pNVar6 == (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) goto LAB_03495968;
    (*(pNVar6->klass->vtable)._59_Choose.methodPtr)
              (pNVar6,(pNVar6->klass->vtable)._59_Choose.method);
  }
  __this_02 = (__this->fields).GJIPOBCNEPG;
  if (__this_02 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
    Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__UpdateIndicators
              ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this_02,
               Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    pNVar5 = (__this->fields)._AchievementsController;
    if ((FIPOABEGELK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar5 != (Nekki_SF2_GUI_Profile_AchievementsController_o *)0x0) {
      Nekki_SF2_GUI_Profile_AchievementsController__ScrollToItemWithReward
                (pNVar5,FIPOABEGELK_TypeInfo->static_fields->BCBHBHADEJL,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03495968:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OJBOAJINLCD()  [RVA 0x339596C]
// Nekki.SF2.GUI.Profile.ProfileScene$$OJBOAJINLCD @ RVA 0x339596C

void Nekki_SF2_GUI_Profile_ProfileScene__OJBOAJINLCD
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  (__this->fields).LOGCCNNGOAG = (DG_Tweening_Tween_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).LOGCCNNGOAG,0);
  return;
}


// ===== public void set_CurrentSection(EBGNICNEJFJ CJNHFNHJHPE)  [RVA 0x3394E0C]
// Nekki.SF2.GUI.Profile.ProfileScene$$set_CurrentSection @ RVA 0x3394E0C

void Nekki_SF2_GUI_Profile_ProfileScene__set_CurrentSection
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_ItemsController_o **ppNVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t CPGKPBEINGA;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar6;
  System_String_o *pSVar7;
  Nekki_SF2_GUI_TableView_o *__this_00;
  UnityEngine_GameObject_o *pUVar8;
  Nekki_SF2_GUI_Profile_InfoPanel_o *pNVar9;
  Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this_01;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_RectTransform_o *__this_02;
  Nekki_SF2_GUI_Profile_BattlePassPanel_o *pNVar11;
  NDPMLPGANCI_o *__this_03;
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *pNVar12;
  LabelButton_o *pLVar13;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  DOPEEDABNEK_o *pDVar14;
  System_String_StaticFields *pSVar15;
  PKHMIGFEJCL_o *pPVar16;
  System_String_o **ppSVar17;
  Nekki_SF2_GUI_Profile_ItemsController_o *pNVar18;
  Nekki_SF2_GUI_Profile_PerksController_o *pNVar19;
  Nekki_SF2_GUI_LabelAlias_o *__this_04;
  Nekki_SF2_GUI_Profile_TricksController_o *pNVar20;
  Nekki_SF2_GUI_Profile_AchievementsController_o *pNVar21;
  Nekki_SF2_GUI_Profile_SealsController_o *pNVar22;
  System_Collections_Generic_List_HOOAAGABMBL__o *DHBBIJMJPNL;
  Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *pNVar23;
  
  if ((DAT_04567c4e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_DisableButton__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_EnableAllButtons__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_20303/*"profileSelectSkill"*/);
    FUN_01bab630(&StringLiteral_11964/*"Settings_GooglePlay"*/);
    FUN_01bab630(&StringLiteral_11963/*"Settings_GameCenter"*/);
    FUN_01bab630(&StringLiteral_20302/*"profileNoSkills"*/);
    DAT_04567c4e = 1;
  }
  if ((CJNHFNHJHPE == 5) || ((__this->fields).AIAODGKGPEI == CJNHFNHJHPE)) {
    return;
  }
  if (CJNHFNHJHPE == 4) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = MGNPHCAAEIO__BJIAIGCNFDJ((MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
  }
  pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar6 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
     (pPVar16 = (pNVar6->fields).QuestParameters, pPVar16 == (PKHMIGFEJCL_o *)0x0))
  goto LAB_034954f0;
  ppSVar17 = &(pPVar16->fields).CHFDDNODLGP;
  iVar5 = MMOGKBGEPGM__GFLCMDMEOBN(*ppSVar17,(MethodInfo *)0x0);
  CPGKPBEINGA = HLHCKNLCOBM__PPENGKDOGFE(CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 03494f3c to 03595177 has its CatchHandler @ 03494f3c
                       catch() { ... } // from try @ 03494f3c with catch @ 03494f3c
                       catch() { ... } // from try @ 03495250 with catch @ 03494f3c
                       catch() { ... } // from try @ 0349531c with catch @ 03494f3c
                       catch() { ... } // from try @ 034953d4 with catch @ 03494f3c */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
  }
  MGNPHCAAEIO__BIFPGEGFDLK(iVar5,CPGKPBEINGA,(MethodInfo *)0x0);
  (__this->fields).AIAODGKGPEI = CJNHFNHJHPE;
  iVar5 = HLHCKNLCOBM__PPENGKDOGFE(CJNHFNHJHPE,(MethodInfo *)0x0);
  pSVar7 = MMOGKBGEPGM__GKMAFGODLLG(iVar5,(MethodInfo *)0x0);
  *ppSVar17 = pSVar7;
  thunk_FUN_01c20e04(ppSVar17,pSVar7);
  pNVar18 = (__this->fields).FOGBEOLOAGF;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppNVar1 = &(__this->fields).FOGBEOLOAGF;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((*ppNVar1 == (Nekki_SF2_GUI_Profile_ItemsController_o *)0x0) ||
       (__this_00 = ((*ppNVar1)->fields)._TableView, __this_00 == (Nekki_SF2_GUI_TableView_o *)0x0))
    goto LAB_034954f0;
    Nekki_SF2_GUI_TableView__KillTween(__this_00,(MethodInfo *)0x0);
    if ((*ppNVar1 == (Nekki_SF2_GUI_Profile_ItemsController_o *)0x0) ||
       (pUVar8 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppNVar1,(MethodInfo *)0x0),
       pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034954f0;
    UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
  }
  pNVar9 = (__this->fields)._RightPanel;
  if (pNVar9 == (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0) goto LAB_034954f0;
  Nekki_SF2_GUI_Profile_InfoPanel__Clear(pNVar9,(MethodInfo *)0x0);
  __this_01 = (__this->fields)._LeftPanel;
  if ((((__this_01 == (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) ||
       (pUVar10 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_Transform_o *)0x0)) ||
      (pUVar10 = UnityEngine_Transform__get_parent(pUVar10,(MethodInfo *)0x0),
      pUVar10 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar8 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
     pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034954f0;
  UnityEngine_GameObject__SetActive(pUVar8,(__this->fields).AIAODGKGPEI != 4,(MethodInfo *)0x0);
  __this_02 = (__this->fields)._ItemsPanel;
  if ((__this_02 == (UnityEngine_RectTransform_o *)0x0) ||
     (pUVar8 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
     pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034954f0;
  UnityEngine_GameObject__SetActive(pUVar8,(__this->fields).AIAODGKGPEI != 4,(MethodInfo *)0x0);
  pNVar11 = (__this->fields)._battlePassPanel;
  if ((pNVar11 == (Nekki_SF2_GUI_Profile_BattlePassPanel_o *)0x0) ||
     (pUVar8 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
     pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034954f0;
  UnityEngine_GameObject__SetActive(pUVar8,(__this->fields).AIAODGKGPEI == 4,(MethodInfo *)0x0);
  iVar3 = (__this->fields).AIAODGKGPEI;
  __this_03 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_03 == (NDPMLPGANCI_o *)0x0) goto LAB_034954f0;
  if (iVar3 == 4) {
    NDPMLPGANCI__KJGGEPNHOBK(__this_03,(MethodInfo *)0x0);
    method_00 = extraout_x1;
  }
  else {
    NDPMLPGANCI__NPDADBCINPL(__this_03,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  switch((__this->fields).AIAODGKGPEI) {
  case 0:
    Nekki_SF2_GUI_Profile_ProfileScene__HFHCHGEFAFD(__this,method_00);
    pNVar19 = (__this->fields)._PerksController;
    pNVar23 = (__this->fields)._ItemsSelectionManager;
    (__this->fields).FOGBEOLOAGF = (Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar19;
    thunk_FUN_01c20e04(ppNVar1,pNVar19);
    if (pNVar23 == (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsSelectionManager__set_SubItemsContainer
              (pNVar23,(JEIEEMKCNOJ_o *)pNVar19,(MethodInfo *)0x0);
    pNVar23 = (__this->fields)._ItemsSelectionManager;
    if (pNVar23 == (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsSelectionManager__RestoreSelection(pNVar23,false,(MethodInfo *)0x0);
    pNVar9 = (__this->fields)._RightPanel;
    if ((pNVar9 == (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0) ||
       (pNVar19 = (__this->fields)._PerksController,
       pNVar19 == (Nekki_SF2_GUI_Profile_PerksController_o *)0x0)) goto LAB_034954f0;
    __this_04 = (pNVar9->fields)._NoContentMessageLabel;
    bVar4 = Nekki_SF2_GUI_Profile_PerksController__get_IsAvailablePerk(pNVar19,(MethodInfo *)0x0);
    if (__this_04 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_034954f0;
    puVar2 = &StringLiteral_20303/*"profileSelectSkill"*/;
                    /* try { // try from 03495178 to 0359519f has its CatchHandler @ 0349533c */
    if (!bVar4) {
      puVar2 = &StringLiteral_20302/*"profileNoSkills"*/;
    }
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_04,(System_String_o *)*puVar2,(MethodInfo *)0x0);
    break;
  case 1:
    Nekki_SF2_GUI_Profile_ProfileScene__BIKNKNAPCJB(__this,method_00);
    pNVar20 = (__this->fields)._TricksController;
    pNVar23 = (__this->fields)._ItemsSelectionManager;
    (__this->fields).FOGBEOLOAGF = (Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar20;
    thunk_FUN_01c20e04(ppNVar1,pNVar20);
    if (pNVar23 == (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsSelectionManager__set_SubItemsContainer
              (pNVar23,(JEIEEMKCNOJ_o *)pNVar20,(MethodInfo *)0x0);
    pNVar23 = (__this->fields)._ItemsSelectionManager;
    if (pNVar23 == (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) goto LAB_034954f0;
                    /* try { // try from 034951d4 to 035951fb has its CatchHandler @ 03495338 */
    Nekki_SF2_GUI_Profile_ItemsSelectionManager__RestoreSelection(pNVar23,false,(MethodInfo *)0x0);
    pNVar20 = (__this->fields)._TricksController;
    if (pNVar20 == (Nekki_SF2_GUI_Profile_TricksController_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsController__ScrollToFirstCell
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar20,0.0,(MethodInfo *)0x0);
    pNVar20 = (__this->fields)._TricksController;
    if (pNVar20 == (Nekki_SF2_GUI_Profile_TricksController_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsController__UpdateSelection
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar20,(MethodInfo *)0x0);
    pNVar20 = (__this->fields)._TricksController;
    if (pNVar20 == (Nekki_SF2_GUI_Profile_TricksController_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsController__UpdateCellsState
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar20,(MethodInfo *)0x0);
    pNVar20 = (__this->fields)._TricksController;
    if (pNVar20 == (Nekki_SF2_GUI_Profile_TricksController_o *)0x0) goto LAB_034954f0;
                    /* try { // try from 03495220 to 0359522b has its CatchHandler @ 03495330 */
    Nekki_SF2_GUI_Profile_TricksController__ScrollToFirstOpenItem(pNVar20,0.0,(MethodInfo *)0x0);
    break;
  case 2:
    Nekki_SF2_GUI_Profile_ProfileScene__BIKNKNAPCJB(__this,method_00);
                    /* try { // try from 03495230 to 0359523f has its CatchHandler @ 03495334 */
    pNVar21 = (__this->fields)._AchievementsController;
    pNVar23 = (__this->fields)._ItemsSelectionManager;
    (__this->fields).FOGBEOLOAGF = (Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar21;
                    /* try { // try from 03495244 to 0359524f has its CatchHandler @ 0349532c */
    thunk_FUN_01c20e04(ppNVar1,pNVar21);
    if (pNVar23 == (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) goto LAB_034954f0;
                    /* try { // try from 03495250 to 03595313 has its CatchHandler @ 03494f3c */
    Nekki_SF2_GUI_Profile_ItemsSelectionManager__set_SubItemsContainer
              (pNVar23,(JEIEEMKCNOJ_o *)pNVar21,(MethodInfo *)0x0);
    pNVar23 = (__this->fields)._ItemsSelectionManager;
    if (pNVar23 == (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsSelectionManager__RestoreSelection(pNVar23,false,(MethodInfo *)0x0);
    pNVar21 = (__this->fields)._AchievementsController;
    if (pNVar21 == (Nekki_SF2_GUI_Profile_AchievementsController_o *)0x0) goto LAB_034954f0;
    bVar4 = Nekki_SF2_GUI_Profile_AchievementsController__IsAchievementWithReward
                      (pNVar21,(MethodInfo *)0x0);
    pNVar21 = (__this->fields)._AchievementsController;
    if (pNVar21 == (Nekki_SF2_GUI_Profile_AchievementsController_o *)0x0) goto LAB_034954f0;
    if (bVar4) {
      Nekki_SF2_GUI_Profile_AchievementsController__ScrollToItemWithReward
                (pNVar21,0.0,(MethodInfo *)0x0);
    }
    else {
      Nekki_SF2_GUI_Profile_ItemsController__ScrollToFirstCell
                ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar21,0.0,(MethodInfo *)0x0);
    }
    pNVar22 = (Nekki_SF2_GUI_Profile_SealsController_o *)(__this->fields)._AchievementsController;
    goto joined_r0x034952ec;
  case 3:
    Nekki_SF2_GUI_Profile_ProfileScene__BIKNKNAPCJB(__this,method_00);
    pNVar22 = (__this->fields)._SealsController;
    pNVar23 = (__this->fields)._ItemsSelectionManager;
    (__this->fields).FOGBEOLOAGF = (Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar22;
    thunk_FUN_01c20e04(ppNVar1,pNVar22);
    if (pNVar23 == (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsSelectionManager__set_SubItemsContainer
              (pNVar23,(JEIEEMKCNOJ_o *)pNVar22,(MethodInfo *)0x0);
    pNVar22 = (__this->fields)._SealsController;
    if (pNVar22 == (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsController__ScrollToFirstCell
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar22,0.0,(MethodInfo *)0x0);
    pNVar22 = (__this->fields)._SealsController;
joined_r0x034952ec:
    if (pNVar22 == (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsController__UpdateSelection
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar22,(MethodInfo *)0x0);
    break;
  case 4:
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03495314 to 03595317 has its CatchHandler @ 03495328 */
    if (DAT_04563eaa == '\0') {
                    /* try { // try from 03495318 to 0359531b has its CatchHandler @ 03495324 */
                    /* try { // try from 0349531c to 03595353 has its CatchHandler @ 03494f3c */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03495318 with catch @ 03495324
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03495314 with catch @ 03495328
                        */
      DAT_04563eaa = '\x01';
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03495244 with catch @ 0349532c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03495220 with catch @ 03495330
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03495230 with catch @ 03495334
                        */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034951d4 with catch @ 03495338
                        */
      thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03495178 with catch @ 0349533c
                        */
    }
    pDVar14 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (pDVar14 == (DOPEEDABNEK_o *)0x0) goto LAB_034954f0;
    DHBBIJMJPNL = (pDVar14->fields)._BDIDINACBBH_k__BackingField;
                    /* try { // try from 03495354 to 03595357 has its CatchHandler @ 0349536c */
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__DAPBLAMONKL(DHBBIJMJPNL,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03495354 with catch @ 0349536c */
    pNVar11 = (__this->fields)._battlePassPanel;
    if (pNVar11 == (Nekki_SF2_GUI_Profile_BattlePassPanel_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_BattlePassPanel__Refresh(pNVar11,(MethodInfo *)0x0);
  }
  pNVar18 = *ppNVar1;
  if (pNVar18 != (Nekki_SF2_GUI_Profile_ItemsController_o *)0x0) {
                    /* try { // try from 034953ac to 035953d3 has its CatchHandler @ 034953e8 */
    (*(pNVar18->klass->vtable)._39_MarkItemsAsViewed.methodPtr)
              (pNVar18,(pNVar18->klass->vtable)._39_MarkItemsAsViewed.method);
    if (*ppNVar1 != (Nekki_SF2_GUI_Profile_ItemsController_o *)0x0) {
      pUVar8 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*ppNVar1,(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_034954f0;
      UnityEngine_GameObject__SetActive(pUVar8,true,(MethodInfo *)0x0);
    }
  }
                    /* try { // try from 034953d4 to 035953df has its CatchHandler @ 03494f3c */
  pNVar12 = (__this->fields).GJIPOBCNEPG;
  if (pNVar12 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
                    /* try { // try from 034953e0 to 035953e7 has its CatchHandler @ 034953e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034953ac with catch @ 034953e8
                       catch(type#2 @ 00000000) { ... } // from try @ 034953e0 with catch @ 034953e8
                        */
    Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__UpdateIndicators
              ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar12,
               Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    pNVar12 = (__this->fields).GJIPOBCNEPG;
    if (pNVar12 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
      Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__EnableAllButtons
                ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar12,
                 Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_EnableAllButtons__);
      pNVar12 = (__this->fields).GJIPOBCNEPG;
      if (pNVar12 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
        Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__DisableButton
                  ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar12,CJNHFNHJHPE,
                   Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_DisableButton__);
        pLVar13 = (__this->fields)._ShowAchievementButton;
        if (pLVar13 != (LabelButton_o *)0x0) {
          pUVar8 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar13,(MethodInfo *)0x0);
          bVar4 = IMAPABEJECG__NCJLBDIMPED((MethodInfo *)0x0);
          if ((bVar4) && (bVar4 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0), bVar4)) {
            bVar4 = (__this->fields).AIAODGKGPEI == 2;
          }
          else {
            bVar4 = false;
          }
          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar8,bVar4,(MethodInfo *)0x0);
            pLVar13 = (__this->fields)._ShowAchievementButton;
            if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            iVar5 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
            if (iVar5 == 8) {
              pSVar15 = (System_String_StaticFields *)&StringLiteral_11963/*"Settings_GameCenter"*/;
            }
            else if (iVar5 == 0xb) {
              pSVar15 = (System_String_StaticFields *)&StringLiteral_11964/*"Settings_GooglePlay"*/;
            }
            else {
              pSVar15 = string_TypeInfo->static_fields;
            }
            if (pLVar13 != (LabelButton_o *)0x0) {
              LabelButton__set_Alias(pLVar13,pSVar15->Empty,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_034954f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KFLAHKONDBL()  [RVA 0x3395A68]
// Nekki.SF2.GUI.Profile.ProfileScene$$KFLAHKONDBL @ RVA 0x3395A68

void Nekki_SF2_GUI_Profile_ProfileScene__KFLAHKONDBL
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  ushort uVar1;
  NFGLEDADCGL_o *__this_00;
  Nekki_SF2_GUI_Profile_PerksController_o *__this_01;
  Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this_02;
  Nekki_SF2_GUI_Profile_InfoPanel_o *__this_03;
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this_04;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar5;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04567c4f & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567c4f = 1;
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
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar5->fields).CKJAGLDEMAE, __this_00 != (NFGLEDADCGL_o *)0x0)) {
    NFGLEDADCGL__JHJPKAJCJHF(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._PerksController;
    if (__this_01 != (Nekki_SF2_GUI_Profile_PerksController_o *)0x0) {
      Nekki_SF2_GUI_Profile_ItemsController__UpdateTable
                ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this_01,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._LeftPanel;
      if (__this_02 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) {
        Nekki_SF2_GUI_Profile_UserPerksPanel__Clear(__this_02,(MethodInfo *)0x0);
        __this_03 = (__this->fields)._RightPanel;
        if (__this_03 != (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0) {
          Nekki_SF2_GUI_Profile_InfoPanel__Clear(__this_03,(MethodInfo *)0x0);
          __this_04 = (__this->fields).GJIPOBCNEPG;
          if (__this_04 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
            Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__UpdateIndicators
                      ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this_04,
                       Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
            pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
            pSVar3 = Nekki_SF2_GUI_Profile_ProfileScene__DIGPCDFMFBD(__this,method_00);
            if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
              pPVar6 = pPVar2->klass;
              uVar1._0_1_ = (pPVar6->_2).rank;
              uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
              uVar7 = (ulong)uVar1;
              if (uVar7 != 0) {
                piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                      (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    pVVar4 = pPVar6->vtable + *piVar8;
                    goto LAB_03495bcc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_03495bcc:
                    /* WARNING: Could not recover jumptable at 0x03495be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateBottomIndicators()  [RVA 0x3395C58]
// Nekki.SF2.GUI.Profile.ProfileScene$$UpdateBottomIndicators @ RVA 0x3395C58

void Nekki_SF2_GUI_Profile_ProfileScene__UpdateBottomIndicators
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c50 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    DAT_04567c50 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).GJIPOBCNEPG;
  if (__this_00 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
    Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__UpdateIndicators
              ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this_00,
               Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void BMBFKFKIMJJ()  [RVA 0x3395CA8]
// Nekki.SF2.GUI.Profile.ProfileScene$$BMBFKFKIMJJ @ RVA 0x3395CA8

void Nekki_SF2_GUI_Profile_ProfileScene__BMBFKFKIMJJ
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields).KPIIFJBPODO = (DG_Tweening_Tween_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).KPIIFJBPODO,0);
  Nekki_SF2_GUI_Profile_ProfileScene__CBGCMJCJJKP(__this,method_00);
  return;
}


// ===== private void BAOFPAIAGIO()  [RVA 0x3395CCC]
// Nekki.SF2.GUI.Profile.ProfileScene$$BAOFPAIAGIO @ RVA 0x3395CCC

void Nekki_SF2_GUI_Profile_ProfileScene__BAOFPAIAGIO
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **LKJHINHIIHD;
  UnityEngine_CanvasGroup_o *pUVar1;
  Nekki_SF2_GUI_Profile_ProfileScene_o *__this_00;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *pNVar3;
  
  if ((DAT_04567c51 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_JAJMCAAJCDE__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<float,_float,_FloatOptions>>__
                );
    DAT_04567c51 = 1;
  }
  pUVar1 = (__this->fields)._ProfileUIGroup;
  if (pUVar1 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar1,true,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).GJIPOBCNEPG;
    if ((pNVar3 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) &&
       (pUVar1 = (pNVar3->fields)._CanvasGroup, pUVar1 != (UnityEngine_CanvasGroup_o *)0x0)) {
      method_00 = (MethodInfo *)0x0;
      UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar1,true,(MethodInfo *)0x0);
      LKJHINHIIHD = &(__this->fields).KPIIFJBPODO;
      Nekki_SF2_GUI_Profile_ProfileScene__CCPABLFBFFA(__this_00,LKJHINHIIHD,method_00);
      t = DG_Tweening_DOTweenModuleUI__DOFade
                    ((__this->fields)._ProfileUIGroup,1.0,0.5,(MethodInfo *)0x0);
      action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      pDVar2 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                         ((Il2CppObject *)t,action,
                          Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<float,_float,_FloatOptions>>__
                         );
      (__this->fields).KPIIFJBPODO = pDVar2;
      thunk_FUN_01c20e04(LKJHINHIIHD,pDVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public EBGNICNEJFJ get_CurrentSection()  [RVA 0x3395DD0]
// Nekki.SF2.GUI.Profile.ProfileScene$$get_CurrentSection @ RVA 0x3395DD0

int32_t Nekki_SF2_GUI_Profile_ProfileScene__get_CurrentSection
                  (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  return (__this->fields).AIAODGKGPEI;
}


// ===== public bool ImprovePerk(JLGNBOILFLN CDEABOAKDEJ)  [RVA 0x3395DD8]
// Nekki.SF2.GUI.Profile.ProfileScene$$ImprovePerk @ RVA 0x3395DD8

bool Nekki_SF2_GUI_Profile_ProfileScene__ImprovePerk
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,JLGNBOILFLN_o *CDEABOAKDEJ,
               MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  bool bVar9;
  
  if ((DAT_04567c52 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567c52 = 1;
  }
  if ((CDEABOAKDEJ == (JLGNBOILFLN_o *)0x0) ||
     ((__this->fields).NMKGGFKBHID != (System_Collections_IEnumerator_o *)0x0)) {
    bVar9 = false;
  }
  else {
    pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar4 = Nekki_SF2_GUI_Profile_ProfileScene__LDNIFMLAKHM(__this,CDEABOAKDEJ,method);
    if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar6 = pPVar3->klass;
    ppSVar1 = &(__this->fields).NMKGGFKBHID;
    uVar2._0_1_ = (pPVar6->_2).rank;
    uVar2._1_1_ = (pPVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar5 = pPVar6->vtable + *piVar8;
          goto LAB_03495e98;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_03495e98:
    bVar9 = true;
    pSVar4 = (System_Collections_IEnumerator_o *)
             (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
  }
  return bVar9;
}


// ===== protected override void GIENGNEGHPJ(object IMMNELPBGIF)  [RVA 0x3395ED8]
// Nekki.SF2.GUI.Profile.ProfileScene$$GIENGNEGHPJ @ RVA 0x3395ED8

void Nekki_SF2_GUI_Profile_ProfileScene__GIENGNEGHPJ
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar3;
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *pNVar4;
  SFButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  HJNDPNIMBBG_o *__this_02;
  UnityEngine_Object_o *exists;
  Nekki_SF2_GUI_SpriteRendererQuality_o *__this_03;
  Nekki_SF2_GUI_Profile_UserPerksPanel_o *pNVar5;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_RectTransform_o *__this_05;
  Nekki_SF2_GUI_Profile_PerksController_o *pNVar6;
  Nekki_SF2_GUI_Profile_TricksController_o *pNVar7;
  Nekki_SF2_GUI_Profile_AchievementsController_o *pNVar8;
  Nekki_SF2_GUI_Profile_SealsController_o *pNVar9;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this_06;
  UnityEngine_Events_UnityAction_o *call_00;
  int32_t CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  LabelButton_o *pLVar10;
  Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *__this_07;
  UnityEngine_Events_UnityEvent_o *__this_08;
  float fVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Vector3_o UVar13;
  
  if ((DAT_04567c53 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&MJHMHBEJFBH_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<MainMenu>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<ProfileBottomPanel>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_HFBCLPBICGN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_HKKFPJJNMCE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_GIENGNEGHPJ__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<SealsTableViewCell>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SealsTableViewCell>_AddListener__);
    DAT_04567c53 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Scene_T__o *)__this,IMMNELPBGIF,
             Method_Nekki_SF2_GUI_Scene<ProfileScene>_GIENGNEGHPJ__);
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
LAB_03495fec:
    IMMNELPBGIF = (Il2CppObject *)0x0;
  }
  else {
    bVar1 = (MJHMHBEJFBH_TypeInfo->_2).naturalAligment;
    if ((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) goto LAB_03495fec;
    if ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)MJHMHBEJFBH_TypeInfo) {
      IMMNELPBGIF = (Il2CppObject *)0x0;
    }
  }
  pNVar3 = (Nekki_SF2_GUI_Menu_MainMenu_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<MainMenu>__);
  (__this->fields).CCKIFMALFBA = pNVar3;
  thunk_FUN_01c20e04(&(__this->fields).CCKIFMALFBA);
  pNVar4 = (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<ProfileBottomPanel>__);
  (__this->fields).GJIPOBCNEPG = pNVar4;
  thunk_FUN_01c20e04(&(__this->fields).GJIPOBCNEPG);
  pNVar4 = (__this->fields).GJIPOBCNEPG;
  if (pNVar4 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
    Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__UpdateIndicators
              ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar4,
               Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    __this_00 = (__this->fields)._PerksResetButton;
    if ((__this_00 != (SFButton_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Profile_ProfileScene__LOCGOCHBNFM(__this,method_00);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7e == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7e = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
      if (__this_02 != (HJNDPNIMBBG_o *)0x0) {
        exists = (UnityEngine_Object_o *)HJNDPNIMBBG__JDHIIDFJMBM(__this_02,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar2 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
        if (bVar2) {
          __this_03 = (__this->fields)._Background;
          if (__this_03 == (Nekki_SF2_GUI_SpriteRendererQuality_o *)0x0) goto LAB_034962f4;
          Nekki_SF2_GUI_SpriteRendererQuality__ChangeSprite
                    (__this_03,(UnityEngine_Sprite_o *)exists,(MethodInfo *)0x0);
        }
        pNVar5 = (__this->fields)._LeftPanel;
        if (pNVar5 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) {
          Nekki_SF2_GUI_Profile_UserPerksPanel__Init(pNVar5,(MethodInfo *)0x0);
          pNVar5 = (__this->fields)._LeftPanel;
          if ((pNVar5 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) &&
             (__this_04 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
             __this_04 != (UnityEngine_Transform_o *)0x0)) {
            UVar13 = UnityEngine_Transform__get_localPosition(__this_04,(MethodInfo *)0x0);
            pNVar5 = (__this->fields)._LeftPanel;
            (__this->fields).DIADJHEAPCA = UVar13.fields.x;
            if ((pNVar5 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) &&
               (__this_05 = (UnityEngine_RectTransform_o *)
                            UnityEngine_Component__GetComponent<object>
                                      ((UnityEngine_Component_o *)pNVar5,
                                       Method_UnityEngine_Component_GetComponent<RectTransform>__),
               __this_05 != (UnityEngine_RectTransform_o *)0x0)) {
              UVar12 = UnityEngine_RectTransform__get_rect(__this_05,(MethodInfo *)0x0);
              pNVar6 = (__this->fields)._PerksController;
              fVar11 = UVar13.fields.x + UVar12.fields.m_Width;
              (__this->fields).EJPDLDOMICI = fVar11;
              if (pNVar6 != (Nekki_SF2_GUI_Profile_PerksController_o *)0x0) {
                (*(pNVar6->klass->vtable)._37_Init.methodPtr)
                          (fVar11,UVar12.fields.m_YMin,UVar12.fields.m_Width,UVar12.fields.m_Height,
                           pNVar6,(pNVar6->klass->vtable)._37_Init.method);
                pNVar6 = (__this->fields)._PerksController;
                if (pNVar6 != (Nekki_SF2_GUI_Profile_PerksController_o *)0x0) {
                  Nekki_SF2_GUI_Profile_PerksController__ScrollToLastOpenItem
                            (pNVar6,0.0,(MethodInfo *)0x0);
                  pNVar7 = (__this->fields)._TricksController;
                  if (pNVar7 != (Nekki_SF2_GUI_Profile_TricksController_o *)0x0) {
                    (*(pNVar7->klass->vtable)._37_Init.methodPtr)
                              (pNVar7,(pNVar7->klass->vtable)._37_Init.method);
                    pNVar8 = (__this->fields)._AchievementsController;
                    if (pNVar8 != (Nekki_SF2_GUI_Profile_AchievementsController_o *)0x0) {
                      (*(pNVar8->klass->vtable)._37_Init.methodPtr)
                                (pNVar8,(pNVar8->klass->vtable)._37_Init.method);
                      pNVar9 = (__this->fields)._SealsController;
                      if (pNVar9 != (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) {
                        (*(pNVar9->klass->vtable)._37_Init.methodPtr)
                                  (pNVar9,(pNVar9->klass->vtable)._37_Init.method);
                        pNVar9 = (__this->fields)._SealsController;
                        if (pNVar9 != (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) {
                          __this_07 = (pNVar9->fields)._OnCellSelected;
                          call = (UnityEngine_Events_UnityAction_T0__o *)
                                 thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<SealsTableViewCell>_TypeInfo
                                                  );
                          UnityEngine_Events_UnityAction<object>___ctor();
                          if (__this_07 !=
                              (Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *)0x0) {
                            UnityEngine_Events_UnityEvent<object>__AddListener
                                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_07,call,
                                       Method_UnityEngine_Events_UnityEvent<SealsTableViewCell>_AddListener__
                                      );
                            pNVar9 = (__this->fields)._SealsController;
                            if (pNVar9 != (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) {
                              Nekki_SF2_GUI_Profile_ItemsController__ScrollToLastCell
                                        ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar9,0.0,
                                         (MethodInfo *)0x0);
                              __this_06 = (__this->fields)._battlePassPanel;
                              if (__this_06 != (Nekki_SF2_GUI_Profile_BattlePassPanel_o *)0x0) {
                                Nekki_SF2_GUI_Profile_BattlePassPanel__Init
                                          (__this_06,(MethodInfo *)0x0);
                                pLVar10 = (__this->fields)._ShowAchievementButton;
                                if (pLVar10 != (LabelButton_o *)0x0) {
                                  __this_08 = (UnityEngine_Events_UnityEvent_o *)
                                              (pLVar10->fields).super.super.super.m_OnClick;
                                  call_00 = (UnityEngine_Events_UnityAction_o *)
                                            thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                                  UnityEngine_Events_UnityAction___ctor();
                                  if (__this_08 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                    method_02 = (MethodInfo *)0x0;
                                    UnityEngine_Events_UnityEvent__AddListener
                                              (__this_08,call_00,(MethodInfo *)0x0);
                                    Nekki_SF2_GUI_Profile_ProfileScene__HDMIBCGPDPL
                                              (__this,method_01);
                                    if (IMMNELPBGIF == (Il2CppObject *)0x0) {
                                      CJNHFNHJHPE = 0;
                                    }
                                    else {
                                      CJNHFNHJHPE = 0;
                                      if (*(int *)&IMMNELPBGIF[1].klass != 5) {
                                        CJNHFNHJHPE = *(int *)&IMMNELPBGIF[1].klass;
                                      }
                                    }
                                    Nekki_SF2_GUI_Profile_ProfileScene__set_CurrentSection
                                              (__this,CJNHFNHJHPE,method_02);
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
                }
              }
            }
          }
        }
      }
    }
  }
LAB_034962f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator DIGPCDFMFBD()  [RVA 0x3395BEC]
// Nekki.SF2.GUI.Profile.ProfileScene$$DIGPCDFMFBD @ RVA 0x3395BEC

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Profile_ProfileScene__DIGPCDFMFBD
          (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c54 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileScene_JMFBANHHIPM_TypeInfo);
    DAT_04567c54 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Profile_ProfileScene_JMFBANHHIPM_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public bool get_IsTrickPlaying()  [RVA 0x339648C]
// Nekki.SF2.GUI.Profile.ProfileScene$$get_IsTrickPlaying @ RVA 0x339648C

bool Nekki_SF2_GUI_Profile_ProfileScene__get_IsTrickPlaying
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  if (((__this->fields).GCPBEAFOPOA == (ECENNHNBAME_o *)0x0) &&
     ((__this->fields).KPIIFJBPODO == (DG_Tweening_Tween_o *)0x0)) {
    return (__this->fields).GGIEDAGJFHO != false;
  }
  return true;
}


// ===== private void EFNENLMNEII(OLKKAIFGGAK.EAOIGPODIAI PGPLLGEIFPI)  [RVA 0x33964B4]
// Nekki.SF2.GUI.Profile.ProfileScene$$EFNENLMNEII @ RVA 0x33964B4

void Nekki_SF2_GUI_Profile_ProfileScene__EFNENLMNEII
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *PGPLLGEIFPI,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_SpriteRendererQuality_o *__this_01;
  
  if ((DAT_04567c55 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04567c55 = 1;
  }
  if ((__this->fields).GGIEDAGJFHO == false) {
    return;
  }
  __this_00 = (__this->fields)._ModelContainer;
  if (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__ResetModel(__this_00,(MethodInfo *)0x0);
    (__this->fields).GGIEDAGJFHO = false;
    __this_01 = (__this->fields)._Background;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_01 != (Nekki_SF2_GUI_SpriteRendererQuality_o *)0x0) {
      Nekki_SF2_GUI_SpriteRendererQuality__ChangeColor
                (__this_01,
                 (UnityEngine_Color_o)(BHEDGAKGKPO_TypeInfo->static_fields->JMKOGEHDLIC).fields,
                 (MethodInfo *)0x0);
      Nekki_SF2_GUI_Profile_ProfileScene__BAOFPAIAGIO(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HFBCLPBICGN(SealsTableViewCell AHICPBEJIKJ)  [RVA 0x339655C]
// Nekki.SF2.GUI.Profile.ProfileScene$$HFBCLPBICGN @ RVA 0x339655C

void Nekki_SF2_GUI_Profile_ProfileScene__HFBCLPBICGN
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,
               Nekki_SF2_GUI_Profile_SealsTableViewCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_InfoPanel_o *__this_00;
  
  if ((AHICPBEJIKJ != (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *)0x0) &&
     (__this_00 = (__this->fields)._RightPanel,
     __this_00 != (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0)) {
    Nekki_SF2_GUI_Profile_InfoPanel__Refresh
              (__this_00,(AHICPBEJIKJ->fields)._AHFHJKDMDMO_k__BackingField,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public InfoPanel get_RightPanel()  [RVA 0x3396580]
// Nekki.SF2.GUI.Profile.ProfileScene$$get_RightPanel @ RVA 0x3396580

Nekki_SF2_GUI_Profile_InfoPanel_o *
Nekki_SF2_GUI_Profile_ProfileScene__get_RightPanel
          (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  return (__this->fields)._RightPanel;
}


// ===== public void PlayTrick(KCLPNDAPADO EKBENIDNAEE)  [RVA 0x3396588]
// Nekki.SF2.GUI.Profile.ProfileScene$$PlayTrick @ RVA 0x3396588

void Nekki_SF2_GUI_Profile_ProfileScene__PlayTrick
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,KCLPNDAPADO_o *EKBENIDNAEE,
               MethodInfo *method)

{
  MethodInfo *method_00;
  Nekki_SF2_GUI_SpriteRendererQuality_o *__this_00;
  
  if ((DAT_04567c56 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04567c56 = 1;
  }
  if ((((__this->fields).GCPBEAFOPOA != (ECENNHNBAME_o *)0x0) ||
      ((__this->fields).KPIIFJBPODO != (DG_Tweening_Tween_o *)0x0)) ||
     ((__this->fields).GGIEDAGJFHO != false)) {
    return;
  }
  if (EKBENIDNAEE != (KCLPNDAPADO_o *)0x0) {
    (__this->fields).GCPBEAFOPOA = (EKBENIDNAEE->fields).FLIONKHMLLB;
    thunk_FUN_01c20e04(&(__this->fields).GCPBEAFOPOA);
    __this_00 = (__this->fields)._Background;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_00 != (Nekki_SF2_GUI_SpriteRendererQuality_o *)0x0) {
      Nekki_SF2_GUI_SpriteRendererQuality__ChangeColor
                (__this_00,
                 (UnityEngine_Color_o)(BHEDGAKGKPO_TypeInfo->static_fields->IDLNHECBHND).fields,
                 (MethodInfo *)0x0);
      Nekki_SF2_GUI_Profile_ProfileScene__CFBMLNECFEF(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JCNJDMMNGCL()  [RVA 0x33967FC]
// Nekki.SF2.GUI.Profile.ProfileScene$$JCNJDMMNGCL @ RVA 0x33967FC

void Nekki_SF2_GUI_Profile_ProfileScene__JCNJDMMNGCL
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  (__this->fields).LOGCCNNGOAG = (DG_Tweening_Tween_o *)0x0;
                    /* try { // try from 03496808 to 03596813 has its CatchHandler @ 03496f08 */
  thunk_FUN_01c20e04(&(__this->fields).LOGCCNNGOAG,0);
  return;
}


// ===== private void BNKJEJJNHNG(bool JAMIDMCKOBL)  [RVA 0x3396810]
// Nekki.SF2.GUI.Profile.ProfileScene$$BNKJEJJNHNG @ RVA 0x3396810

void Nekki_SF2_GUI_Profile_ProfileScene__BNKJEJJNHNG
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,bool JAMIDMCKOBL,MethodInfo *method)

{
  (__this->fields).NMKGGFKBHID = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).NMKGGFKBHID,0);
  return;
}


// ===== private void IBLPDNHGONE(object IMMNELPBGIF)  [RVA 0x3396824]
// Nekki.SF2.GUI.Profile.ProfileScene$$IBLPDNHGONE @ RVA 0x3396824

void Nekki_SF2_GUI_Profile_ProfileScene__IBLPDNHGONE
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  MethodInfo *method_00;
  DOPEEDABNEK_o *pDVar3;
  
  if ((DAT_04567c57 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 03496850 to 03596857 has its CatchHandler @ 03496f0c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0349685c to 03596867 has its CatchHandler @ 03496f04 */
    DAT_04567c57 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar2 = (int *)thunk_FUN_01bda96c();
    if (0 < *piVar2) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
                    /* try { // try from 034968bc to 035968c7 has its CatchHandler @ 03496eac */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
                    /* try { // try from 034968d8 to 035968e7 has its CatchHandler @ 03496e94 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if (pDVar3 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 034968f8 to 03596903 has its CatchHandler @ 03496f0c */
      bVar1 = AMIINPEKKFB__CNDGBHMOMJB
                        ((pDVar3->fields)._PCFMNDLDEMC_k__BackingField,(MethodInfo *)0x0);
      if (bVar1) {
        Nekki_SF2_GUI_Profile_ProfileScene__KFLAHKONDBL(__this,method_00);
        return;
      }
    }
  }
  return;
}


// ===== private void LOCGOCHBNFM()  [RVA 0x33962F8]
// Nekki.SF2.GUI.Profile.ProfileScene$$LOCGOCHBNFM @ RVA 0x33962F8

void Nekki_SF2_GUI_Profile_ProfileScene__LOCGOCHBNFM
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_ModelContainer_o *pNVar1;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  HJNDPNIMBBG_o *__this_00;
  OLKKAIFGGAK_o *__this_01;
  UnityEngine_Color_o EFJKPCADGJH;
  
  if ((DAT_04567c58 & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_EFNENLMNEII__);
    FUN_01bab630(&StringLiteral_10491/*"Profile"*/);
    DAT_04567c58 = 1;
  }
  pNVar1 = (__this->fields)._ModelContainer;
  if (pNVar1 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__Init(pNVar1,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._ModelContainer;
    if (pNVar1 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
      Nekki_SF2_Core_Fights_ModelContainer__UpdateModel_ItemInfo
                (pNVar1,(HOOAAGABMBL_o *)0x0,4,StringLiteral_10491/*"Profile"*/,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._ModelContainer;
      CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                    thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar1 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
        Nekki_SF2_Core_Fights_ModelContainer__add_OnAnimationEnd
                  (pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._ModelContainer;
        if (pNVar1 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
          __this_01 = (pNVar1->fields).MAODNBMLDEG;
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7e == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7e = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
          if ((__this_00 != (HJNDPNIMBBG_o *)0x0) &&
             (EFJKPCADGJH = HJNDPNIMBBG__EMBBBGLKPNN(__this_00,(MethodInfo *)0x0),
             __this_01 != (OLKKAIFGGAK_o *)0x0)) {
                    /* try { // try from 03496448 to 035966fb has its CatchHandler @ 03496448
                       catch() { ... } // from try @ 03496448 with catch @ 03496448
                       catch() { ... } // from try @ 03496db4 with catch @ 03496448
                       catch() { ... } // from try @ 03496e68 with catch @ 03496448
                       catch() { ... } // from try @ 03496e70 with catch @ 03496448
                       catch() { ... } // from try @ 03496e7c with catch @ 03496448
                       catch() { ... } // from try @ 03496fe0 with catch @ 03496448 */
            OLKKAIFGGAK__HLCMLOBHLDA(__this_01,EFJKPCADGJH,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override DBMPKPJGIPI get_SceneId()  [RVA 0x3396924]
// Nekki.SF2.GUI.Profile.ProfileScene$$get_SceneId @ RVA 0x3396924

int32_t Nekki_SF2_GUI_Profile_ProfileScene__get_SceneId
                  (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  return 7;
}


// ===== private void CFBMLNECFEF()  [RVA 0x3396648]
// Nekki.SF2.GUI.Profile.ProfileScene$$CFBMLNECFEF @ RVA 0x3396648

void Nekki_SF2_GUI_Profile_ProfileScene__CFBMLNECFEF
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **LKJHINHIIHD;
  Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_CanvasGroup_o *pUVar1;
  Nekki_SF2_GUI_Profile_ProfileScene_o *__this_02;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *pNVar3;
  
  if ((DAT_04567c59 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_BMBFKFKIMJJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<float,_float,_FloatOptions>>__
                );
    DAT_04567c59 = 1;
  }
  __this_00 = (__this->fields)._LeftPanel;
  if ((__this_00 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._ProfileUIGroup;
    if (pUVar1 != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar1,false,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).GJIPOBCNEPG;
      if ((pNVar3 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) &&
         (pUVar1 = (pNVar3->fields)._CanvasGroup, pUVar1 != (UnityEngine_CanvasGroup_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
                    /* try { // try from 034966fc to 03596723 has its CatchHandler @ 03496f2c */
        UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar1,false,(MethodInfo *)0x0);
        if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04567c94 == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
          DAT_04567c94 = '\x01';
        }
        if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 03496758 to 03596783 has its CatchHandler @ 03496f28 */
        Nekki_SF2_GUI_Profile_SubItem_TypeInfo->static_fields->EEDBEBPEPJL = false;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MGNPHCAAEIO__JEGCBLKOEGN(false,(MethodInfo *)0x0);
        LKJHINHIIHD = &(__this->fields).KPIIFJBPODO;
        Nekki_SF2_GUI_Profile_ProfileScene__CCPABLFBFFA(__this_02,LKJHINHIIHD,method_00);
        t = DG_Tweening_DOTweenModuleUI__DOFade
                      ((__this->fields)._ProfileUIGroup,0.0,0.5,(MethodInfo *)0x0);
        action = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 034967c0 to 035967c7 has its CatchHandler @ 03496f1c */
        DG_Tweening_TweenCallback___ctor();
                    /* try { // try from 034967cc to 035967d3 has its CatchHandler @ 03496f18 */
        pDVar2 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                           ((Il2CppObject *)t,action,
                            Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<float,_float,_FloatOptions>>__
                           );
                    /* try { // try from 034967dc to 035967eb has its CatchHandler @ 03496f24 */
        (__this->fields).KPIIFJBPODO = pDVar2;
        thunk_FUN_01c20e04(LKJHINHIIHD,pDVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034967f8 to 035967ff has its CatchHandler @ 03496f10 */
  FUN_01bab8c8();
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x339692C]
// Nekki.SF2.GUI.Profile.ProfileScene$$CLNAOMIIBLH @ RVA 0x339692C

void Nekki_SF2_GUI_Profile_ProfileScene__CLNAOMIIBLH
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  Nekki_SF2_GUI_Profile_PerksController_MIJHABAAONP_o *__this_00;
  Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_o *__this_01;
  Nekki_SF2_GUI_Profile_AchievementsController_GBDHPKJIHJH_o *__this_02;
  Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *__this_03;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  LabelButton_o *__this_04;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  Nekki_SF2_GUI_Profile_PerksController_o *pNVar5;
  Nekki_SF2_GUI_Profile_TricksController_o *pNVar6;
  Nekki_SF2_GUI_Profile_AchievementsController_o *pNVar7;
  Nekki_SF2_GUI_Profile_SealsController_o *pNVar8;
  PBAKFOBIHEG_c *pPVar9;
  ulong uVar10;
  int32_t *piVar11;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_05;
  System_Collections_IEnumerator_o *pSVar12;
  
  if ((DAT_04567c5a & 1) == 0) {
                    /* try { // try from 03496954 to 0359695f has its CatchHandler @ 03496ed0 */
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 03496970 to 0359697f has its CatchHandler @ 03496e90 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_EFNENLMNEII__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_CLNAOMIIBLH__);
    DAT_04567c5a = 1;
  }
  Nekki_SF2_GUI_Scene<object>__CLNAOMIIBLH
            ((Nekki_SF2_GUI_Scene_T__o *)__this,
             Method_Nekki_SF2_GUI_Scene<ProfileScene>_CLNAOMIIBLH__);
  pNVar5 = (__this->fields)._PerksController;
  if ((pNVar5 != (Nekki_SF2_GUI_Profile_PerksController_o *)0x0) &&
     (__this_00 = (pNVar5->fields)._OnCellSelected,
     __this_00 != (Nekki_SF2_GUI_Profile_PerksController_MIJHABAAONP_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._PerksController;
    if (pNVar5 != (Nekki_SF2_GUI_Profile_PerksController_o *)0x0) {
                    /* try { // try from 034969c0 to 035969cb has its CatchHandler @ 03496ed8 */
      (*(pNVar5->klass->vtable)._41_Free.methodPtr)(pNVar5,(pNVar5->klass->vtable)._41_Free.method);
      pNVar6 = (__this->fields)._TricksController;
      if ((pNVar6 != (Nekki_SF2_GUI_Profile_TricksController_o *)0x0) &&
         (__this_01 = (pNVar6->fields)._OnCellSelected,
         __this_01 != (Nekki_SF2_GUI_Profile_TricksController_PCJAFLKMKPF_o *)0x0)) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
        pNVar6 = (__this->fields)._TricksController;
        if (pNVar6 != (Nekki_SF2_GUI_Profile_TricksController_o *)0x0) {
                    /* try { // try from 034969e4 to 035969f7 has its CatchHandler @ 03496e8c */
          (*(pNVar6->klass->vtable)._41_Free.methodPtr)
                    (pNVar6,(pNVar6->klass->vtable)._41_Free.method);
          pNVar7 = (__this->fields)._AchievementsController;
          if ((pNVar7 != (Nekki_SF2_GUI_Profile_AchievementsController_o *)0x0) &&
             (__this_02 = (pNVar7->fields)._OnCellSelected,
             __this_02 != (Nekki_SF2_GUI_Profile_AchievementsController_GBDHPKJIHJH_o *)0x0)) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)__this_02,(MethodInfo *)0x0);
            pNVar7 = (__this->fields)._AchievementsController;
            if (pNVar7 != (Nekki_SF2_GUI_Profile_AchievementsController_o *)0x0) {
              (*(pNVar7->klass->vtable)._41_Free.methodPtr)
                        (pNVar7,(pNVar7->klass->vtable)._41_Free.method);
              pNVar8 = (__this->fields)._SealsController;
              if ((pNVar8 != (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) &&
                 (__this_03 = (pNVar8->fields)._OnCellSelected,
                 __this_03 != (Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *)0x0)) {
                    /* try { // try from 03496a38 to 03596a43 has its CatchHandler @ 03496ea8 */
                UnityEngine_Events_UnityEventBase__RemoveAllListeners
                          ((UnityEngine_Events_UnityEventBase_o *)__this_03,(MethodInfo *)0x0);
                pNVar8 = (__this->fields)._SealsController;
                if (pNVar8 != (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) {
                    /* try { // try from 03496a54 to 03596a63 has its CatchHandler @ 03496ee8 */
                  (*(pNVar8->klass->vtable)._41_Free.methodPtr)
                            (pNVar8,(pNVar8->klass->vtable)._41_Free.method);
                  __this_05 = (__this->fields)._ModelContainer;
                  CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                                thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
                  System_Action<object>___ctor();
                  if (__this_05 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
                    /* try { // try from 03496a94 to 03596a9f has its CatchHandler @ 03496ef4 */
                    Nekki_SF2_Core_Fights_ModelContainer__remove_OnAnimationEnd
                              (__this_05,CJNHFNHJHPE,(MethodInfo *)0x0);
                    __this_04 = (__this->fields)._ShowAchievementButton;
                    if (__this_04 != (LabelButton_o *)0x0) {
                      SFButton__RemoveAllEventListener((SFButton_o *)__this_04,(MethodInfo *)0x0);
                      if ((__this->fields).NMKGGFKBHID == (System_Collections_IEnumerator_o *)0x0) {
                        return;
                      }
                    /* try { // try from 03496ab0 to 03596abf has its CatchHandler @ 03496e98 */
                      pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
                      if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
                        pPVar9 = pPVar3->klass;
                        ppSVar1 = &(__this->fields).NMKGGFKBHID;
                        pSVar12 = *ppSVar1;
                        uVar2._0_1_ = (pPVar9->_2).rank;
                        uVar2._1_1_ = (pPVar9->_2).minimumAlignment;
                        uVar10 = (ulong)uVar2;
                        if (uVar10 != 0) {
                          piVar11 = &((pPVar9->_1).interfaceOffsets)->offset;
                          do {
                    /* try { // try from 03496af0 to 03596afb has its CatchHandler @ 03496ec4 */
                            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType
                                == (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                              pVVar4 = pPVar9->vtable + (*piVar11 + 1);
                              goto LAB_03496b30;
                            }
                            uVar10 = uVar10 - 1;
                            piVar11 = piVar11 + 4;
                          } while (uVar10 != 0);
                        }
                        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
                    /* try { // try from 03496b0c to 03596b1b has its CatchHandler @ 03496ea0 */
LAB_03496b30:
                        (*pVVar4->methodPtr)(pPVar3,pSVar12,pVVar4->method);
                        *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
                    /* try { // try from 03496b4c to 03596b57 has its CatchHandler @ 03496e80 */
                        thunk_FUN_01c20e04(ppSVar1,0);
                        *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
                    /* try { // try from 03496b68 to 03596b77 has its CatchHandler @ 03496e9c */
                        thunk_FUN_01c20e04(ppSVar1,0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BIKNKNAPCJB()  [RVA 0x3395980]
// Nekki.SF2.GUI.Profile.ProfileScene$$BIKNKNAPCJB @ RVA 0x3395980

void Nekki_SF2_GUI_Profile_ProfileScene__BIKNKNAPCJB
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **LKJHINHIIHD;
  Nekki_SF2_GUI_Profile_ProfileScene_o *__this_00;
  Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this_01;
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar1;
  MethodInfo *in_x2;
  
  __this_00 = __this;
  if ((DAT_04567c5b & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_OJBOAJINLCD__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    __this_00 = (Nekki_SF2_GUI_Profile_ProfileScene_o *)
                FUN_01bab630(&
                             Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                            );
    DAT_04567c5b = 1;
  }
  LKJHINHIIHD = &(__this->fields).LOGCCNNGOAG;
  Nekki_SF2_GUI_Profile_ProfileScene__CCPABLFBFFA(__this_00,LKJHINHIIHD,in_x2);
  __this_01 = (__this->fields)._LeftPanel;
  if (__this_01 != (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) {
    target = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    t = DG_Tweening_ShortcutExtensions__DOLocalMoveX
                  (target,(__this->fields).EJPDLDOMICI,0.34,false,(MethodInfo *)0x0);
    action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
    DG_Tweening_TweenCallback___ctor();
    pDVar1 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                       ((Il2CppObject *)t,action,
                        Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                       );
    (__this->fields).LOGCCNNGOAG = pDVar1;
    thunk_FUN_01c20e04(LKJHINHIIHD,pDVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

