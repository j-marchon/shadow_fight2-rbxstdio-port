// Nekki.SF2.GUI.Fight.FightHintController$$InitHints @ RVA 0x33BBF6C

void Nekki_SF2_GUI_Fight_FightHintController__InitHints
               (Nekki_SF2_GUI_Fight_FightHintController_o *__this,FCJBEKHDLAF_o *INLJIELDJHI,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NLIDHEAMLMC_o *pNVar3;
  System_String_o *pSVar4;
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *method_00;
  FCJBEKHDLAF_o *pFVar5;
  PJKHAJKEHEL_o *pPVar6;
  DOPEEDABNEK_o *pDVar7;
  FCJBEKHDLAF_o **ppFVar8;
  Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o *__this_00;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar9;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar10;
  
  if ((DAT_04567dac & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_FightHintController_JMOKJIPJKJB__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ODLJFAIHELG>_AddListener__);
    FUN_01bab630(&StringLiteral_2277);
    FUN_01bab630(&StringLiteral_15817);
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
  if ((pFVar5 != (FCJBEKHDLAF_o *)0x0) &&
     (pPVar6 = (pFVar5->fields).KCHOEJOHIMM, pPVar6 != (PJKHAJKEHEL_o *)0x0)) {
    pNVar9 = (__this->fields).LAPCPDGHEIH;
    pSVar4 = System_String__Concat
                       (StringLiteral_2277,(pPVar6->fields).PBKDLDOIIIO,StringLiteral_15817,
                        (MethodInfo *)0x0);
    if (pNVar9 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
      Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupDescription
                (pNVar9,0x2c0,pSVar4,(MethodInfo *)0x0);
      pFVar5 = (__this->fields).NAKHBIFKBGK;
      if (pFVar5 != (FCJBEKHDLAF_o *)0x0) {
        pNVar9 = (__this->fields).LAPCPDGHEIH;
        iVar2 = FCJBEKHDLAF__IHMLDBDLJON(pFVar5,(MethodInfo *)0x0);
        if (iVar2 == 0x11) {
          if ((*ppFVar8 == (FCJBEKHDLAF_o *)0x0) ||
             (pPVar6 = ((*ppFVar8)->fields).KCHOEJOHIMM, pPVar6 == (PJKHAJKEHEL_o *)0x0))
          goto LAB_034bc424;
          bVar1 = PJKHAJKEHEL__MJJJDLMAMAE(pPVar6,(MethodInfo *)0x0);
        }
        else {
          bVar1 = false;
        }
        if (pNVar9 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
          Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                    (pNVar9,0x2c0,bVar1,(MethodInfo *)0x0);
          pFVar5 = (__this->fields).NAKHBIFKBGK;
          if (pFVar5 != (FCJBEKHDLAF_o *)0x0) {
            pNVar9 = (__this->fields).LAPCPDGHEIH;
            iVar2 = FCJBEKHDLAF__IHMLDBDLJON(pFVar5,(MethodInfo *)0x0);
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
              if (pDVar7 == (DOPEEDABNEK_o *)0x0) goto LAB_034bc424;
              pSVar10 = (pDVar7->fields).DLDBBBCMJOC;
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar10 = MGNPHCAAEIO__FHKMIFJBPEN(pSVar10,(MethodInfo *)0x0);
              if (pSVar10 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)
              goto LAB_034bc424;
              bVar1 = 0 < (pSVar10->fields)._size;
            }
            if (pNVar9 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
              Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                        (pNVar9,0x2be,bVar1,(MethodInfo *)0x0);
              pFVar5 = (__this->fields).NAKHBIFKBGK;
              if (pFVar5 != (FCJBEKHDLAF_o *)0x0) {
                pNVar9 = (__this->fields).LAPCPDGHEIH;
                iVar2 = FCJBEKHDLAF__IHMLDBDLJON(pFVar5,(MethodInfo *)0x0);
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
                  if (pDVar7 == (DOPEEDABNEK_o *)0x0) goto LAB_034bc424;
                  pSVar10 = (pDVar7->fields).OGOPJDCOPDF;
                  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pSVar10 = MGNPHCAAEIO__FHKMIFJBPEN(pSVar10,(MethodInfo *)0x0);
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
                  if ((pFVar5 != (FCJBEKHDLAF_o *)0x0) &&
                     (pPVar6 = (pFVar5->fields).JEDELFOBLEN, pPVar6 != (PJKHAJKEHEL_o *)0x0)) {
                    pNVar9 = (__this->fields).MBEDNBHNLOH;
                    pSVar4 = System_String__Concat
                                       (StringLiteral_2277,(pPVar6->fields).PBKDLDOIIIO,
                                        StringLiteral_15817,(MethodInfo *)0x0);
                    if (pNVar9 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
                      Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupDescription
                                (pNVar9,0x2c0,pSVar4,(MethodInfo *)0x0);
                      pFVar5 = (__this->fields).NAKHBIFKBGK;
                      if (pFVar5 != (FCJBEKHDLAF_o *)0x0) {
                        pNVar9 = (__this->fields).MBEDNBHNLOH;
                        iVar2 = FCJBEKHDLAF__IHMLDBDLJON(pFVar5,(MethodInfo *)0x0);
                        if (iVar2 == 0x11) {
                          if ((*ppFVar8 == (FCJBEKHDLAF_o *)0x0) ||
                             (pPVar6 = ((*ppFVar8)->fields).JEDELFOBLEN,
                             pPVar6 == (PJKHAJKEHEL_o *)0x0)) goto LAB_034bc424;
                          bVar1 = PJKHAJKEHEL__MJJJDLMAMAE(pPVar6,(MethodInfo *)0x0);
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

