// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$Init @ RVA 0x31771B0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  LabelButton_o *pLVar2;
  System_Action_object__o *IELDNEAAPBE;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *pNVar3;
  System_Action_BattleRaidCell__o *CJNHFNHJHPE;
  FKDLCJJOGIP_o *__this_00;
  System_Action_o *CJNHFNHJHPE_00;
  ACHLOMELAJE_o *__this_01;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar4;
  System_Action_CheckBox_EKFFAMKMBIH__o *CJNHFNHJHPE_01;
  uint CJNHFNHJHPE_02;
  MethodInfo *method_00;
  BHEDGAKGKPO_StaticFields *pBVar5;
  SFButton_o *pSVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  UnityEngine_Events_UnityEvent_o *__this_02;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar8;
  
  if ((DAT_0456695b & 1) == 0) {
    FUN_01bab630(&System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action<BattleRaidCell>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_GLEOGMBBLNH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_ILPJLGPGNMC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_JBOPJALGFHH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_KPBJALPCPAP__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_16006);
    FUN_01bab630(&StringLiteral_4376);
    FUN_01bab630(&StringLiteral_17833);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_2492);
    DAT_0456695b = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,StringLiteral_4376,
             StringLiteral_9679,StringLiteral_3640,0,(MethodInfo *)0x0);
  pNVar7 = (__this->fields)._unknowLabel;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pBVar5 = BHEDGAKGKPO_TypeInfo->static_fields;
    (*(pNVar7->klass->vtable)._23_set_color.methodPtr)
              ((pBVar5->FHIAKPJBBCB).fields.r,(pBVar5->FHIAKPJBBCB).fields.g,
               (pBVar5->FHIAKPJBBCB).fields.b,(pBVar5->FHIAKPJBBCB).fields.a,pNVar7,
               (pNVar7->klass->vtable)._23_set_color.method);
    pNVar7 = (__this->fields)._unknowLabel;
    if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                (pNVar7,StringLiteral_2492,(pNVar7->klass->vtable)._75_set_text.method);
      pLVar2 = (__this->fields).super.super.super._btnCancel;
      if (pLVar2 != (LabelButton_o *)0x0) {
        LabelButton__set_Alias(pLVar2,StringLiteral_3640,(MethodInfo *)0x0);
        pLVar2 = (__this->fields).super.super.super._btnCancel;
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        if (pLVar2 != (LabelButton_o *)0x0) {
          SFButton__AddEventListener((SFButton_o *)pLVar2,2,IELDNEAAPBE,(MethodInfo *)0x0);
          pLVar2 = (__this->fields).super.super.super._btnOK;
          if (pLVar2 != (LabelButton_o *)0x0) {
            LabelButton__set_Alias(pLVar2,StringLiteral_17833,(MethodInfo *)0x0);
            pLVar2 = (__this->fields).super.super.super._btnOK;
            if (pLVar2 != (LabelButton_o *)0x0) {
              __this_02 = (UnityEngine_Events_UnityEvent_o *)
                          (pLVar2->fields).super.super.super.m_OnClick;
              call = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
                pNVar3 = (__this->fields)._battleRaidSlider;
                if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *)0x0) {
                  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__Init
                            (pNVar3,(__this->fields)._hardModeCheck,(MethodInfo *)0x0);
                  pNVar3 = (__this->fields)._battleRaidSlider;
                  CJNHFNHJHPE = (System_Action_BattleRaidCell__o *)
                                thunk_FUN_01bda818(System_Action<BattleRaidCell>_TypeInfo);
                  System_Action<object>___ctor();
                  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *)0x0) {
                    Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__add_OnSelectedCellAction
                              (pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
                    __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
                    CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    System_Action___ctor();
                    if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
                      FKDLCJJOGIP__AJLLLOFFOHF(__this_00,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      if (DAT_04565b7d == '\0') {
                        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                        DAT_04565b7d = '\x01';
                      }
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                      if (__this_01 != (ACHLOMELAJE_o *)0x0) {
                        pMVar4 = ACHLOMELAJE__HKIEGNBOFCD
                                           (__this_01,StringLiteral_16006,0,(MethodInfo *)0x0);
                        pNVar8 = (__this->fields)._hardModeCheck;
                        if (pMVar4 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
                          CJNHFNHJHPE_02 = 1;
                        }
                        else {
                          bVar1 = System_String__op_Equality
                                            ((pMVar4->fields).JAICMIMBIOA,StringLiteral_1606,
                                             (MethodInfo *)0x0);
                          CJNHFNHJHPE_02 = ~(uint)bVar1 & 1;
                        }
                        if (pNVar8 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
                          Nekki_SF2_GUI_Scripts_CheckBox__set_State
                                    (pNVar8,CJNHFNHJHPE_02,(MethodInfo *)0x0);
                          pNVar8 = (__this->fields)._hardModeCheck;
                          CJNHFNHJHPE_01 =
                               (System_Action_CheckBox_EKFFAMKMBIH__o *)
                               thunk_FUN_01bda818(System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
                          System_Action<Int32Enum>___ctor();
                          if (pNVar8 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
                            method_00 = (MethodInfo *)0x0;
                            Nekki_SF2_GUI_Scripts_CheckBox__add_OnChangedState
                                      (pNVar8,CJNHFNHJHPE_01,(MethodInfo *)0x0);
                            pNVar8 = (__this->fields)._hardModeCheck;
                            if (pNVar8 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
                              (pNVar8->fields).super._glowTime = 2.0;
                              pSVar6 = (__this->fields)._hintButton;
                              if (pSVar6 != (SFButton_o *)0x0) {
                                (pSVar6->fields)._glowTime = 2.0;
                                Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__LAHOOGJMEIC
                                          (__this,0,method_00);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

