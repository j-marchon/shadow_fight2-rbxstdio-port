// NGCEHDLJOMI$$KECOGKPNCNN @ RVA 0x3223D28

void NGCEHDLJOMI__KECOGKPNCNN(NGCEHDLJOMI_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  UnityEngine_UI_Button_o *PFNMDNHEFEC;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_01;
  UnityEngine_Transform_o *INPDGILCEBL;
  System_Action_MenuScroll_OAPJJKKCANC__o *CJNHFNHJHPE;
  System_Action_o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_UI_Selectable_o *PFNMDNHEFEC_00;
  UnityEngine_UI_Selectable_c *__this_02;
  
  if ((DAT_04566f60 & 1) == 0) {
    FUN_01bab630(&System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_NGCEHDLJOMI_ABJHGPKGMLH__);
    FUN_01bab630(&Method_NGCEHDLJOMI_APBMPBNOOHK__);
    FUN_01bab630(&Method_NGCEHDLJOMI_BKDDOKCPGJI__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566f60 = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
    Nekki_SF2_GUI_Menu_MainMenu__CloseMenu(pNVar2,0.0,(MethodInfo *)0x0);
    __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
      Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,true,(MethodInfo *)0x0);
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        PFNMDNHEFEC = Nekki_SF2_GUI_Menu_MainMenu__GetScrollBtn(pNVar2,(MethodInfo *)0x0);
        AKJJAPEHKCG__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)PFNMDNHEFEC,(MethodInfo *)0x0);
        if (DAT_04565b84 == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
          DAT_04565b84 = '\x01';
        }
        pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
        if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
          PFNMDNHEFEC_00 = (UnityEngine_UI_Selectable_o *)(pNVar2->fields)._raidRating;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)PFNMDNHEFEC_00,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar1) {
            AKJJAPEHKCG__GOCEMJOCNEE(PFNMDNHEFEC_00,(MethodInfo *)0x0);
            if (PFNMDNHEFEC_00 == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_03324020;
            __this_02 = PFNMDNHEFEC_00[1].klass;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_02 == (UnityEngine_UI_Selectable_c *)0x0) goto LAB_03324020;
            UnityEngine_Events_UnityEvent__AddListener
                      ((UnityEngine_Events_UnityEvent_o *)__this_02,call,(MethodInfo *)0x0);
          }
          __this_01 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
          if ((PFNMDNHEFEC != (UnityEngine_UI_Button_o *)0x0) &&
             (INPDGILCEBL = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)PFNMDNHEFEC,(MethodInfo *)0x0),
             __this_01 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0)) {
            Nekki_SF2_GUI_Tutorial_ArrowCanvas__ShowArrow
                      (__this_01,INPDGILCEBL,(UnityEngine_Vector2_o)0xc2fa000000000000,0.0,
                       (MethodInfo *)0x0);
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                     _JPDNDPEAJAL_k__BackingField;
            if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
              pUVar3 = (pNVar2->fields)._backgroundPicture;
              CJNHFNHJHPE = (System_Action_MenuScroll_OAPJJKKCANC__o *)
                            thunk_FUN_01bda818(System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
              System_Action<Int32Enum>___ctor();
              if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                Nekki_SF2_GUI_Menu_MenuScroll__add_OnRolling
                          ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
                if (DAT_04565b84 == '\0') {
                  FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                  DAT_04565b84 = '\x01';
                }
                pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                         _JPDNDPEAJAL_k__BackingField;
                if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
                  pUVar3 = (pNVar2->fields)._backgroundPicture;
                  CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                  System_Action___ctor();
                  if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                    Nekki_SF2_GUI_Menu_MenuScroll__add_OnOpen
                              ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar3,CJNHFNHJHPE_00,
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
LAB_03324020:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

