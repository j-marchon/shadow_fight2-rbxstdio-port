// NGCEHDLJOMI$$APBMPBNOOHK @ RVA 0x3224120

void NGCEHDLJOMI__APBMPBNOOHK(NGCEHDLJOMI_o *__this,MethodInfo *method)

{
  int32_t KGBNBLGMCBF;
  System_Action_o *CJNHFNHJHPE;
  UnityEngine_UI_Button_o *PFNMDNHEFEC;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar1;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  UnityEngine_UI_Image_o *__this_00;
  PKHMIGFEJCL_o *HLAGOHADLKH;
  Nekki_SF2_GUI_Common_SectionButton_o **ppNVar3;
  System_String_o *pSVar4;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04566f62 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&Method_NGCEHDLJOMI_APBMPBNOOHK__);
    FUN_01bab630(&Method_NGCEHDLJOMI_GNLDBPBJBOA__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566f62 = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
    __this_00 = (pNVar2->fields)._backgroundPicture;
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
      Nekki_SF2_GUI_Menu_MenuScroll__remove_OnOpen
                ((Nekki_SF2_GUI_Menu_MenuScroll_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_NotificationsGame__CloseNotifications((MethodInfo *)0x0);
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        PFNMDNHEFEC = Nekki_SF2_GUI_Menu_MainMenu__GetScrollBtn(pNVar2,(MethodInfo *)0x0);
        AKJJAPEHKCG__HJDDBKPCAFJ((UnityEngine_UI_Selectable_o *)PFNMDNHEFEC,(MethodInfo *)0x0);
        HLAGOHADLKH = (__this->fields).super.IJOKKFKPBEP;
        pSVar4 = (__this->fields).NFMLNNPCOEA;
        if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = MFBNFJGBPBB__ACJKLBMNMEJ(HLAGOHADLKH,pSVar4,(MethodInfo *)0x0);
        KGBNBLGMCBF = MEJPIPJPKNP__GDDGNMOMMCE(pSVar4,(MethodInfo *)0x0);
        if (DAT_04565b84 == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
          DAT_04565b84 = '\x01';
        }
        pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
        if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
          pNVar1 = Nekki_SF2_GUI_Menu_MainMenu__GetButtonFromScreen
                             (pNVar2,KGBNBLGMCBF,(MethodInfo *)0x0);
          ppNVar3 = &(__this->fields).PKJPFDMJLKM;
          *ppNVar3 = pNVar1;
          thunk_FUN_01c20e04(ppNVar3);
          if (*ppNVar3 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
            SFButton__set_IsFlashing((SFButton_o *)*ppNVar3,true,(MethodInfo *)0x0);
            if (*ppNVar3 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
              __this_01 = (UnityEngine_Events_UnityEvent_o *)
                          ((*ppNVar3)->fields).super.super.super.m_OnClick;
              call = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
                AKJJAPEHKCG__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)*ppNVar3,(MethodInfo *)0x0);
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

