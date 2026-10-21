// TypeDefIndex 2658
// Namespace: Nekki.SF2.GUI.Fight
// public class FightHintController : UIModule
// Fields:
//   private HintList LAPCPDGHEIH; // 0x28
//   private HintList MBEDNBHNLOH; // 0x30
//   private Fight NAKHBIFKBGK; // 0x38

// ===== public void .ctor()  [RVA 0x33BBD94]
// Nekki.SF2.GUI.Fight.FightHintController$$.ctor @ RVA 0x33BBD94

void Nekki_SF2_GUI_Fight_FightHintController___ctor
               (Nekki_SF2_GUI_Fight_FightHintController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567daa & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04567daa = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void RefreshRightHintListState()  [RVA 0x33BBDEC]
// Nekki.SF2.GUI.Fight.FightHintController$$RefreshRightHintListState @ RVA 0x33BBDEC

void Nekki_SF2_GUI_Fight_FightHintController__RefreshRightHintListState
               (Nekki_SF2_GUI_Fight_FightHintController_o *__this,MethodInfo *method)

{
  bool BALACEGEDBN;
  Fight_o *pFVar1;
  ModelParameters_o *pPVar2;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar3;
  
  pFVar1 = (__this->fields).NAKHBIFKBGK;
  if ((pFVar1 != (Fight_o *)0x0) &&
     (pPVar2 = (pFVar1->fields).JEDELFOBLEN, pPVar2 != (ModelParameters_o *)0x0)) {
    BALACEGEDBN = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                             (pPVar2->fields).DHGNGIKCDON.fields,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).MBEDNBHNLOH;
    if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
      Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupExtraImageActive
                (pNVar3,0x2c0,(bool)(~BALACEGEDBN & 1),(MethodInfo *)0x0);
      pNVar3 = (__this->fields).MBEDNBHNLOH;
      if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
        Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupHintsActive
                  (pNVar3,0x2c0,BALACEGEDBN,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).MBEDNBHNLOH;
        if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
          Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                    (pNVar3,700,BALACEGEDBN,(MethodInfo *)0x0);
          pNVar3 = (__this->fields).MBEDNBHNLOH;
          if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
            Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                      (pNVar3,0x2bd,BALACEGEDBN,(MethodInfo *)0x0);
            pNVar3 = (__this->fields).MBEDNBHNLOH;
            if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
              Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                        (pNVar3,0x2be,BALACEGEDBN,(MethodInfo *)0x0);
              pNVar3 = (__this->fields).MBEDNBHNLOH;
              if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
                Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                          (pNVar3,0x2bf,BALACEGEDBN,(MethodInfo *)0x0);
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


// ===== public void FreeHints()  [RVA 0x33BBEC8]
// Nekki.SF2.GUI.Fight.FightHintController$$FreeHints @ RVA 0x33BBEC8

void Nekki_SF2_GUI_Fight_FightHintController__FreeHints
               (Nekki_SF2_GUI_Fight_FightHintController_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o *__this_00;
  
  if ((DAT_04567dab & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_FightHintController_JMOKJIPJKJB__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ODLJFAIHELG>_RemoveListener__);
    DAT_04567dab = 1;
    method = extraout_x1;
  }
  pNVar1 = (__this->fields).MBEDNBHNLOH;
  if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    __this_00 = (pNVar1->fields)._OnHintSchemeChanged;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<ODLJFAIHELG>_TypeInfo,method);
    UnityEngine_Events_UnityAction<Int32Enum>___ctor();
    if (__this_00 != (Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__RemoveListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,
                 Method_UnityEngine_Events_UnityEvent<ODLJFAIHELG>_RemoveListener__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void InitHints(Fight INLJIELDJHI)  [RVA 0x33BBF6C]
// Nekki.SF2.GUI.Fight.FightHintController$$InitHints @ RVA 0x33BBF6C

void Nekki_SF2_GUI_Fight_FightHintController__InitHints
               (Nekki_SF2_GUI_Fight_FightHintController_o *__this,Fight_o *INLJIELDJHI,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NLIDHEAMLMC_o *pNVar3;
  System_String_o *pSVar4;
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *method_00;
  Fight_o *pFVar5;
  ModelParameters_o *pPVar6;
  Item_o *pDVar7;
  Fight_o **ppFVar8;
  Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o *__this_00;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar9;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar10;
  
  if ((DAT_04567dac & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_FightHintController_JMOKJIPJKJB__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ODLJFAIHELG>_AddListener__);
    FUN_01bab630(&StringLiteral_2277/*"<color=#8DB514FF>^"*/);
    FUN_01bab630(&StringLiteral_15817/*"^</color>"*/);
    DAT_04567dac = 1;
  }
  ppFVar8 = &(__this->fields).NAKHBIFKBGK;
  *ppFVar8 = INLJIELDJHI;
  thunk_FUN_01c20e04(ppFVar8,INLJIELDJHI);
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar3 = BGFNOPDHEOM__PFOBJKIPLCK(0,(MethodInfo *)0x0);
  if ((pNVar3 != (NLIDHEAMLMC_o *)0x0) && ((pNVar3->fields).ELHIGHABJBJ == 2)) {
    pNVar9 = (__this->fields).LAPCPDGHEIH;
    if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar3 = BGFNOPDHEOM__PFOBJKIPLCK(0,(MethodInfo *)0x0);
    if ((pNVar3 == (NLIDHEAMLMC_o *)0x0) || (pNVar9 == (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0)
       ) goto LAB_034bc424;
    Nekki_SF2_GUI_Common_Hints_HintList__set_TrackingDeviceID
              (pNVar9,(pNVar3->fields).OFFPEKODFPE,(MethodInfo *)0x0);
  }
  pFVar5 = (__this->fields).NAKHBIFKBGK;
  if ((pFVar5 != (Fight_o *)0x0) &&
     (pPVar6 = (pFVar5->fields).KCHOEJOHIMM, pPVar6 != (ModelParameters_o *)0x0)) {
    pNVar9 = (__this->fields).LAPCPDGHEIH;
    pSVar4 = System_String__Concat
                       (StringLiteral_2277/*"<color=#8DB514FF>^"*/,(pPVar6->fields).PBKDLDOIIIO,StringLiteral_15817/*"^</color>"*/,
                        (MethodInfo *)0x0);
    if (pNVar9 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
      Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupDescription
                (pNVar9,0x2c0,pSVar4,(MethodInfo *)0x0);
      pFVar5 = (__this->fields).NAKHBIFKBGK;
      if (pFVar5 != (Fight_o *)0x0) {
        pNVar9 = (__this->fields).LAPCPDGHEIH;
        iVar2 = Fight__IHMLDBDLJON(pFVar5,(MethodInfo *)0x0);
        if (iVar2 == 0x11) {
          if ((*ppFVar8 == (Fight_o *)0x0) ||
             (pPVar6 = ((*ppFVar8)->fields).KCHOEJOHIMM, pPVar6 == (ModelParameters_o *)0x0))
          goto LAB_034bc424;
          bVar1 = ModelParameters__MJJJDLMAMAE(pPVar6,(MethodInfo *)0x0);
        }
        else {
          bVar1 = false;
        }
        if (pNVar9 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
          Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                    (pNVar9,0x2c0,bVar1,(MethodInfo *)0x0);
          pFVar5 = (__this->fields).NAKHBIFKBGK;
          if (pFVar5 != (Fight_o *)0x0) {
            pNVar9 = (__this->fields).LAPCPDGHEIH;
            iVar2 = Fight__IHMLDBDLJON(pFVar5,(MethodInfo *)0x0);
            if (iVar2 == 0x11) {
              bVar1 = true;
            }
            else {
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (DAT_04563eaa == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04563eaa = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pDVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
              if (pDVar7 == (Item_o *)0x0) goto LAB_034bc424;
              pSVar10 = (pDVar7->fields).DLDBBBCMJOC;
              if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar10 = GameUtils__FHKMIFJBPEN(pSVar10,(MethodInfo *)0x0);
              if (pSVar10 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)
              goto LAB_034bc424;
              bVar1 = 0 < (pSVar10->fields)._size;
            }
            if (pNVar9 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
              Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                        (pNVar9,0x2be,bVar1,(MethodInfo *)0x0);
              pFVar5 = (__this->fields).NAKHBIFKBGK;
              if (pFVar5 != (Fight_o *)0x0) {
                pNVar9 = (__this->fields).LAPCPDGHEIH;
                iVar2 = Fight__IHMLDBDLJON(pFVar5,(MethodInfo *)0x0);
                if (iVar2 == 0x11) {
                  bVar1 = true;
                }
                else {
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  if (DAT_04563eaa == '\0') {
                    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    DAT_04563eaa = '\x01';
                  }
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pDVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                  if (pDVar7 == (Item_o *)0x0) goto LAB_034bc424;
                  pSVar10 = (pDVar7->fields).OGOPJDCOPDF;
                  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pSVar10 = GameUtils__FHKMIFJBPEN(pSVar10,(MethodInfo *)0x0);
                  if (pSVar10 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)
                  goto LAB_034bc424;
                  bVar1 = 0 < (pSVar10->fields)._size;
                }
                if (pNVar9 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
                  Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                            (pNVar9,0x2bf,bVar1,(MethodInfo *)0x0);
                  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pNVar3 = BGFNOPDHEOM__PFOBJKIPLCK(1,(MethodInfo *)0x0);
                  if ((pNVar3 != (NLIDHEAMLMC_o *)0x0) && ((pNVar3->fields).ELHIGHABJBJ == 2)) {
                    pNVar9 = (__this->fields).MBEDNBHNLOH;
                    if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pNVar3 = BGFNOPDHEOM__PFOBJKIPLCK(1,(MethodInfo *)0x0);
                    if ((pNVar3 == (NLIDHEAMLMC_o *)0x0) ||
                       (pNVar9 == (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0)) goto LAB_034bc424;
                    Nekki_SF2_GUI_Common_Hints_HintList__set_TrackingDeviceID
                              (pNVar9,(pNVar3->fields).OFFPEKODFPE,(MethodInfo *)0x0);
                  }
                  pFVar5 = (__this->fields).NAKHBIFKBGK;
                  if ((pFVar5 != (Fight_o *)0x0) &&
                     (pPVar6 = (pFVar5->fields).JEDELFOBLEN, pPVar6 != (ModelParameters_o *)0x0)) {
                    pNVar9 = (__this->fields).MBEDNBHNLOH;
                    pSVar4 = System_String__Concat
                                       (StringLiteral_2277/*"<color=#8DB514FF>^"*/,(pPVar6->fields).PBKDLDOIIIO,
                                        StringLiteral_15817/*"^</color>"*/,(MethodInfo *)0x0);
                    if (pNVar9 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
                      Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupDescription
                                (pNVar9,0x2c0,pSVar4,(MethodInfo *)0x0);
                      pFVar5 = (__this->fields).NAKHBIFKBGK;
                      if (pFVar5 != (Fight_o *)0x0) {
                        pNVar9 = (__this->fields).MBEDNBHNLOH;
                        iVar2 = Fight__IHMLDBDLJON(pFVar5,(MethodInfo *)0x0);
                        if (iVar2 == 0x11) {
                          if ((*ppFVar8 == (Fight_o *)0x0) ||
                             (pPVar6 = ((*ppFVar8)->fields).JEDELFOBLEN,
                             pPVar6 == (ModelParameters_o *)0x0)) goto LAB_034bc424;
                          bVar1 = ModelParameters__MJJJDLMAMAE(pPVar6,(MethodInfo *)0x0);
                        }
                        else {
                          bVar1 = false;
                        }
                        if (pNVar9 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
                          Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                                    (pNVar9,0x2c0,bVar1,(MethodInfo *)0x0);
                          pNVar9 = (__this->fields).MBEDNBHNLOH;
                          if (pNVar9 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
                            __this_00 = (pNVar9->fields)._OnHintSchemeChanged;
                            call = (UnityEngine_Events_UnityAction_T0__o *)
                                   thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<ODLJFAIHELG>_TypeInfo
                                                  );
                            UnityEngine_Events_UnityAction<Int32Enum>___ctor();
                            if (__this_00 !=
                                (Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o *)0x0) {
                              UnityEngine_Events_UnityEvent<Int32Enum>__AddListener
                                        ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,
                                         Method_UnityEngine_Events_UnityEvent<ODLJFAIHELG>_AddListener__
                                        );
                              Nekki_SF2_GUI_Fight_FightHintController__RefreshRightHintListState
                                        (__this,method_00);
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
LAB_034bc424:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JMOKJIPJKJB(ODLJFAIHELG CGLFKKMBHCN)  [RVA 0x33BC428]
// Nekki.SF2.GUI.Fight.FightHintController$$JMOKJIPJKJB @ RVA 0x33BC428

void Nekki_SF2_GUI_Fight_FightHintController__JMOKJIPJKJB
               (Nekki_SF2_GUI_Fight_FightHintController_o *__this,int32_t CGLFKKMBHCN,
               MethodInfo *method)

{
  bool BALACEGEDBN;
  Fight_o *pFVar1;
  ModelParameters_o *pPVar2;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar3;
  
  pFVar1 = (__this->fields).NAKHBIFKBGK;
  if ((pFVar1 != (Fight_o *)0x0) &&
     (pPVar2 = (pFVar1->fields).JEDELFOBLEN, pPVar2 != (ModelParameters_o *)0x0)) {
    BALACEGEDBN = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                             (pPVar2->fields).DHGNGIKCDON.fields,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).MBEDNBHNLOH;
    if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
      Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupExtraImageActive
                (pNVar3,0x2c0,(bool)(~BALACEGEDBN & 1),(MethodInfo *)0x0);
      pNVar3 = (__this->fields).MBEDNBHNLOH;
      if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
        Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupHintsActive
                  (pNVar3,0x2c0,BALACEGEDBN,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).MBEDNBHNLOH;
        if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
          Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                    (pNVar3,700,BALACEGEDBN,(MethodInfo *)0x0);
          pNVar3 = (__this->fields).MBEDNBHNLOH;
          if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
            Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                      (pNVar3,0x2bd,BALACEGEDBN,(MethodInfo *)0x0);
            pNVar3 = (__this->fields).MBEDNBHNLOH;
            if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
              Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                        (pNVar3,0x2be,BALACEGEDBN,(MethodInfo *)0x0);
              pNVar3 = (__this->fields).MBEDNBHNLOH;
              if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
                Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                          (pNVar3,0x2bf,BALACEGEDBN,(MethodInfo *)0x0);
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


// ===== protected override void GIENGNEGHPJ()  [RVA 0x33BC42C]
// Nekki.SF2.GUI.Fight.FightHintController$$GIENGNEGHPJ @ RVA 0x33BC42C

void Nekki_SF2_GUI_Fight_FightHintController__GIENGNEGHPJ
               (Nekki_SF2_GUI_Fight_FightHintController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_o **ppNVar2;
  
  if ((DAT_04567dad & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModuleByName<HintList>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    FUN_01bab630(&StringLiteral_6357/*"FightRightHintList"*/);
    FUN_01bab630(&StringLiteral_6348/*"FightLeftHintList"*/);
    DAT_04567dad = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = (Nekki_SF2_GUI_Common_Hints_HintList_o *)
           Nekki_SF2_GUI_UIModule__GetModuleByName<object>
                     (StringLiteral_6348/*"FightLeftHintList"*/,Method_Nekki_SF2_GUI_UIModule_GetModuleByName<HintList>__);
  ppNVar2 = &(__this->fields).LAPCPDGHEIH;
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  if (*ppNVar2 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)*ppNVar2,(MethodInfo *)0x0);
    pNVar1 = (Nekki_SF2_GUI_Common_Hints_HintList_o *)
             Nekki_SF2_GUI_UIModule__GetModuleByName<object>
                       (StringLiteral_6357/*"FightRightHintList"*/,Method_Nekki_SF2_GUI_UIModule_GetModuleByName<HintList>__
                       );
    ppNVar2 = &(__this->fields).MBEDNBHNLOH;
    *ppNVar2 = pNVar1;
    thunk_FUN_01c20e04(ppNVar2,pNVar1);
    if (*ppNVar2 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
      Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)*ppNVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DeActivateFightHints()  [RVA 0x33BC528]
// Nekki.SF2.GUI.Fight.FightHintController$$DeActivateFightHints @ RVA 0x33BC528

void Nekki_SF2_GUI_Fight_FightHintController__DeActivateFightHints
               (Nekki_SF2_GUI_Fight_FightHintController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar1;
  
  pNVar1 = (__this->fields).LAPCPDGHEIH;
  if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).MBEDNBHNLOH;
    if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
      Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ActivateFightHints()  [RVA 0x33BC558]
// Nekki.SF2.GUI.Fight.FightHintController$$ActivateFightHints @ RVA 0x33BC558

void Nekki_SF2_GUI_Fight_FightHintController__ActivateFightHints
               (Nekki_SF2_GUI_Fight_FightHintController_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar2;
  long lVar3;
  Fight_o *__this_00;
  
  if ((DAT_04567dae & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    DAT_04567dae = 1;
  }
  pNVar2 = (__this->fields).LAPCPDGHEIH;
  if (pNVar2 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)pNVar2,(MethodInfo *)0x0);
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if ((**(long **)(lVar3 + 0xb8) != 0) &&
       (__this_00 = *(Fight_o **)(**(long **)(lVar3 + 0xb8) + 0x90),
       __this_00 != (Fight_o *)0x0)) {
      iVar1 = Fight__IHMLDBDLJON(__this_00,(MethodInfo *)0x0);
      if (iVar1 != 0x11) {
        return;
      }
      pNVar2 = (__this->fields).MBEDNBHNLOH;
      if (pNVar2 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
        Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)pNVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

