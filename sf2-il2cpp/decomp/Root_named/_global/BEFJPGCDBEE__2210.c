// TypeDefIndex 2210
// Namespace: 
// public class BEFJPGCDBEE : QuestAction
// Fields:

// ===== public void .ctor()  [RVA 0x32E9858]
// BEFJPGCDBEE$$.ctor @ RVA 0x32E9858

void BEFJPGCDBEE___ctor(BEFJPGCDBEE_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void BKDDOKCPGJI()  [RVA 0x32E9860]
// BEFJPGCDBEE$$BKDDOKCPGJI @ RVA 0x32E9860

void BEFJPGCDBEE__BKDDOKCPGJI(BEFJPGCDBEE_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar1;
  UnityEngine_UI_Selectable_o *PFNMDNHEFEC;
  UnityEngine_UI_Selectable_c *__this_00;
  
  if ((DAT_0456762c & 1) == 0) {
    FUN_01bab630(&Method_BEFJPGCDBEE_BKDDOKCPGJI__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456762c = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar1 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (pNVar1 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
    PFNMDNHEFEC = (UnityEngine_UI_Selectable_o *)(pNVar1->fields)._raidRating;
    TutorialExtension__HJDDBKPCAFJ(PFNMDNHEFEC,(MethodInfo *)0x0);
    if (PFNMDNHEFEC != (UnityEngine_UI_Selectable_o *)0x0) {
      __this_00 = PFNMDNHEFEC[1].klass;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 != (UnityEngine_UI_Selectable_c *)0x0) {
        UnityEngine_Events_UnityEvent__RemoveListener
                  ((UnityEngine_Events_UnityEvent_o *)__this_00,call,(MethodInfo *)0x0);
        BEFJPGCDBEE__OANGGKCBAOJ(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OANGGKCBAOJ()  [RVA 0x32E993C]
// BEFJPGCDBEE$$OANGGKCBAOJ @ RVA 0x32E993C

/* WARNING: Type propagation algorithm not settling */

void BEFJPGCDBEE__OANGGKCBAOJ(BEFJPGCDBEE_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  long lVar2;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *pNVar3;
  UnityEngine_Events_UnityAction_o *call;
  Item_o *__this_01;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  GGHCLMEFIGO_o *__this_02;
  MethodInfo *method_00;
  GameUtils_LLBEEBNCOND_o *pMVar4;
  Roster_o *pAVar5;
  IconLabelButton_o *__this_03;
  System_String_o *KGLJICLJHEL;
  UnityEngine_Events_UnityEvent_o *__this_04;
  
  if ((DAT_0456762d & 1) == 0) {
    FUN_01bab630(&Method_BEFJPGCDBEE_OANGGKCBAOJ__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456762d = 1;
  }
  __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,false,(MethodInfo *)0x0);
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
          (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) &&
        (pNVar3 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent
                            ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                             (MethodInfo *)0x0),
        pNVar3 != (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0)) &&
       (__this_03 = (pNVar3->fields).BMHDNILOKHO, __this_03 != (IconLabelButton_o *)0x0)) {
      SFButton__set_IsFlashing((SFButton_o *)__this_03,false,(MethodInfo *)0x0);
      __this_04 = (UnityEngine_Events_UnityEvent_o *)
                  (__this_03->fields).super.super.super.super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_04 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        UnityEngine_Events_UnityEvent__RemoveListener(__this_04,call,(MethodInfo *)0x0);
        TutorialExtension__HJDDBKPCAFJ((UnityEngine_UI_Selectable_o *)__this_03,(MethodInfo *)0x0);
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pMVar4 = GameUtils_TypeInfo->static_fields->DMMGOHFKKCA;
        if (pMVar4 != (GameUtils_LLBEEBNCOND_o *)0x0) {
          KGLJICLJHEL = (pMVar4->fields).KDLGEDNJDMK;
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
          __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
          if (__this_01 != (Item_o *)0x0) {
            IKKAMAMLIKA = Item__CKKIPBAIEMN(__this_01,KGLJICLJHEL,method_00);
            if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
              bVar1 = AMIINPEKKFB__NLLNEAKJCLB(IKKAMAMLIKA,(MethodInfo *)0x0);
              if (bVar1) {
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
                pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                if ((pAVar5 == (Roster_o *)0x0) ||
                   (__this_02 = (pAVar5->fields).OIDPLCLELEN, __this_02 == (GGHCLMEFIGO_o *)0x0))
                goto LAB_033e9bd4;
                GGHCLMEFIGO__BOEFGIBCIIL(__this_02,IKKAMAMLIKA,true,(MethodInfo *)0x0);
              }
              lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
              if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_01b81620();
              }
              lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
              if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_01b81620();
              }
              if (((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
                   (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) ||
                 (pNVar3 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent
                                     ((Nekki_SF2_GUI_Shop_ShopScene_o *)
                                      **(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0),
                 pNVar3 == (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0)) goto LAB_033e9bd4;
              Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(pNVar3,(MethodInfo *)0x0);
            }
            QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_033e9bd4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x32E9BD8]
// BEFJPGCDBEE$$MAHFCKJGBPP @ RVA 0x32E9BD8

/* WARNING: Type propagation algorithm not settling */

void BEFJPGCDBEE__MAHFCKJGBPP(BEFJPGCDBEE_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *pIVar2;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_01;
  long lVar3;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *pNVar4;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar5;
  PKHMIGFEJCL_o *extraout_x1;
  PKHMIGFEJCL_o *extraout_x1_00;
  PKHMIGFEJCL_o *extraout_x1_01;
  PKHMIGFEJCL_o *extraout_x1_02;
  GameUtils_LLBEEBNCOND_o *pMVar6;
  Roster_o *pAVar7;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar8;
  System_String_o *KGLJICLJHEL;
  IconLabelButton_o *__this_03;
  UnityEngine_UI_Selectable_o *PFNMDNHEFEC;
  UnityEngine_UI_Selectable_c *__this_04;
  UnityEngine_Events_UnityEvent_o *__this_05;
  
  if ((DAT_0456762e & 1) == 0) {
    FUN_01bab630(&Method_BEFJPGCDBEE_BKDDOKCPGJI__);
    FUN_01bab630(&Method_BEFJPGCDBEE_OANGGKCBAOJ__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456762e = 1;
    AAJBIMFNMBB = extraout_x1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,AAJBIMFNMBB);
    AAJBIMFNMBB = extraout_x1_00;
  }
  pMVar6 = GameUtils_TypeInfo->static_fields->DMMGOHFKKCA;
  if (pMVar6 != (GameUtils_LLBEEBNCOND_o *)0x0) {
    KGLJICLJHEL = (pMVar6->fields).KDLGEDNJDMK;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,AAJBIMFNMBB);
      AAJBIMFNMBB = extraout_x1_01;
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
      AAJBIMFNMBB = extraout_x1_02;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,AAJBIMFNMBB);
    }
    pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar7 != (Roster_o *)0x0) &&
       (__this_00 = (pAVar7->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
      pIVar2 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
      if (pIVar2 != (IGFGDDANEPE_o *)0x0) {
        QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
      }
      __this_01 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
      if (__this_01 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
        Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_01,true,(MethodInfo *)0x0);
        lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
            (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
          Nekki_SF2_GUI_Shop_ShopScene__ScrollToItemByName
                    ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),0,KGLJICLJHEL
                     ,(MethodInfo *)0x0);
          lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01b81620();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01b81620();
          }
          if ((((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
                (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) &&
              (pNVar4 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent
                                  ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8)
                                   ,(MethodInfo *)0x0),
              pNVar4 != (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0)) &&
             (__this_03 = (pNVar4->fields).BMHDNILOKHO, __this_03 != (IconLabelButton_o *)0x0)) {
            SFButton__set_IsFlashing((SFButton_o *)__this_03,true,(MethodInfo *)0x0);
            SFButton__RemoveAllEventListener((SFButton_o *)__this_03,(MethodInfo *)0x0);
            __this_02 = (__this_03->fields).super.super.super.super.m_OnClick;
            if (__this_02 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
              UnityEngine_Events_UnityEventBase__RemoveAllListeners
                        ((UnityEngine_Events_UnityEventBase_o *)__this_02,(MethodInfo *)0x0);
              __this_05 = (UnityEngine_Events_UnityEvent_o *)
                          (__this_03->fields).super.super.super.super.m_OnClick;
              pUVar5 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_05 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(__this_05,pUVar5,(MethodInfo *)0x0);
                TutorialExtension__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)__this_03,(MethodInfo *)0x0)
                ;
                if (DAT_04565b84 == '\0') {
                  FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                  DAT_04565b84 = '\x01';
                }
                pNVar8 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                         _JPDNDPEAJAL_k__BackingField;
                if (pNVar8 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
                  PFNMDNHEFEC = (UnityEngine_UI_Selectable_o *)(pNVar8->fields)._raidRating;
                  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  bVar1 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)PFNMDNHEFEC,(UnityEngine_Object_o *)0x0
                                     ,(MethodInfo *)0x0);
                  if (!bVar1) {
                    return;
                  }
                  TutorialExtension__GOCEMJOCNEE(PFNMDNHEFEC,(MethodInfo *)0x0);
                  if (PFNMDNHEFEC != (UnityEngine_UI_Selectable_o *)0x0) {
                    __this_04 = PFNMDNHEFEC[1].klass;
                    pUVar5 = (UnityEngine_Events_UnityAction_o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    UnityEngine_Events_UnityAction___ctor();
                    if (__this_04 != (UnityEngine_UI_Selectable_c *)0x0) {
                      UnityEngine_Events_UnityEvent__AddListener
                                ((UnityEngine_Events_UnityEvent_o *)__this_04,pUVar5,
                                 (MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

