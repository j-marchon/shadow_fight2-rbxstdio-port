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
  MGNPHCAAEIO_LLBEEBNCOND_o *pMVar6;
  ACHLOMELAJE_o *pAVar7;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar8;
  System_String_o *KGLJICLJHEL;
  IconLabelButton_o *__this_03;
  UnityEngine_UI_Selectable_o *PFNMDNHEFEC;
  UnityEngine_UI_Selectable_c *__this_04;
  UnityEngine_Events_UnityEvent_o *__this_05;
  
  if ((DAT_0456762e & 1) == 0) {
    FUN_01bab630(&Method_BEFJPGCDBEE_BKDDOKCPGJI__);
    FUN_01bab630(&Method_BEFJPGCDBEE_OANGGKCBAOJ__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456762e = 1;
    AAJBIMFNMBB = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,AAJBIMFNMBB);
    AAJBIMFNMBB = extraout_x1_00;
  }
  pMVar6 = MGNPHCAAEIO_TypeInfo->static_fields->DMMGOHFKKCA;
  if (pMVar6 != (MGNPHCAAEIO_LLBEEBNCOND_o *)0x0) {
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
    if ((pAVar7 != (ACHLOMELAJE_o *)0x0) &&
       (__this_00 = (pAVar7->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
      pIVar2 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
      if (pIVar2 != (IGFGDDANEPE_o *)0x0) {
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
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
                AKJJAPEHKCG__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)__this_03,(MethodInfo *)0x0)
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
                  AKJJAPEHKCG__GOCEMJOCNEE(PFNMDNHEFEC,(MethodInfo *)0x0);
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

