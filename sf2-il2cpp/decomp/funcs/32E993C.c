// BEFJPGCDBEE$$OANGGKCBAOJ @ RVA 0x32E993C

/* WARNING: Type propagation algorithm not settling */

void BEFJPGCDBEE__OANGGKCBAOJ(BEFJPGCDBEE_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  long lVar2;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *pNVar3;
  UnityEngine_Events_UnityAction_o *call;
  DOPEEDABNEK_o *__this_01;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  GGHCLMEFIGO_o *__this_02;
  MethodInfo *method_00;
  MGNPHCAAEIO_LLBEEBNCOND_o *pMVar4;
  ACHLOMELAJE_o *pAVar5;
  IconLabelButton_o *__this_03;
  System_String_o *KGLJICLJHEL;
  UnityEngine_Events_UnityEvent_o *__this_04;
  
  if ((DAT_0456762d & 1) == 0) {
    FUN_01bab630(&Method_BEFJPGCDBEE_OANGGKCBAOJ__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
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
        AKJJAPEHKCG__HJDDBKPCAFJ((UnityEngine_UI_Selectable_o *)__this_03,(MethodInfo *)0x0);
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pMVar4 = MGNPHCAAEIO_TypeInfo->static_fields->DMMGOHFKKCA;
        if (pMVar4 != (MGNPHCAAEIO_LLBEEBNCOND_o *)0x0) {
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
          if (__this_01 != (DOPEEDABNEK_o *)0x0) {
            IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN(__this_01,KGLJICLJHEL,method_00);
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
                if ((pAVar5 == (ACHLOMELAJE_o *)0x0) ||
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
            BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
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

