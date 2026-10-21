// TypeDefIndex 237
// Namespace: 
// public class NGCEHDLJOMI : QuestAction
// Fields:
//   private string NFMLNNPCOEA; // 0x68
//   private SectionButton PKJPFDMJLKM; // 0x70

// ===== public void .ctor()  [RVA 0x3223B18]
// NGCEHDLJOMI$$.ctor @ RVA 0x3223B18

void NGCEHDLJOMI___ctor(NGCEHDLJOMI_o *__this,MethodInfo *method)

{
  if ((DAT_04566f5d & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566f5d = 1;
  }
  (__this->fields).NFMLNNPCOEA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3223B70]
// NGCEHDLJOMI$$MAHFCKJGBPP @ RVA 0x3223B70

void NGCEHDLJOMI__MAHFCKJGBPP(NGCEHDLJOMI_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  Nekki_SF2_GUI_Menu_MainMenu_o *x;
  
  if ((DAT_04566f5e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566f5e = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
  x = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    NGCEHDLJOMI__KECOGKPNCNN(__this,method_00);
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar4 = NGCEHDLJOMI__JBHIMFBFHCP(__this,method_01);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = pPVar3->klass;
  uVar1._0_1_ = (pPVar6->_2).rank;
  uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar5 = pPVar6->vtable + *piVar8;
        goto LAB_03323c9c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_03323c9c:
                    /* WARNING: Could not recover jumptable at 0x03323cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
  return;
}


// ===== private void GNLDBPBJBOA()  [RVA 0x3224024]
// NGCEHDLJOMI$$GNLDBPBJBOA @ RVA 0x3224024

void NGCEHDLJOMI__GNLDBPBJBOA(NGCEHDLJOMI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar1;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04566f5f & 1) == 0) {
    FUN_01bab630(&Method_NGCEHDLJOMI_GNLDBPBJBOA__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566f5f = 1;
  }
  __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).PKJPFDMJLKM;
    if (pNVar1 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
      SFButton__set_IsFlashing((SFButton_o *)pNVar1,false,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).PKJPFDMJLKM;
      if (pNVar1 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
        __this_01 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.super.m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
          TutorialExtension__HJDDBKPCAFJ
                    ((UnityEngine_UI_Selectable_o *)(__this->fields).PKJPFDMJLKM,(MethodInfo *)0x0);
          QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KECOGKPNCNN()  [RVA 0x3223D28]
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
        TutorialExtension__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)PFNMDNHEFEC,(MethodInfo *)0x0);
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
            TutorialExtension__GOCEMJOCNEE(PFNMDNHEFEC_00,(MethodInfo *)0x0);
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


// ===== private IEnumerator JBHIMFBFHCP()  [RVA 0x3223CBC]
// NGCEHDLJOMI$$JBHIMFBFHCP @ RVA 0x3223CBC

System_Collections_IEnumerator_o *
NGCEHDLJOMI__JBHIMFBFHCP(NGCEHDLJOMI_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f61 & 1) == 0) {
    FUN_01bab630(&NGCEHDLJOMI_AFKKHPCGFJB_TypeInfo);
    DAT_04566f61 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(NGCEHDLJOMI_AFKKHPCGFJB_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void APBMPBNOOHK()  [RVA 0x3224120]
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
        TutorialExtension__HJDDBKPCAFJ((UnityEngine_UI_Selectable_o *)PFNMDNHEFEC,(MethodInfo *)0x0);
        HLAGOHADLKH = (__this->fields).super.IJOKKFKPBEP;
        pSVar4 = (__this->fields).NFMLNNPCOEA;
        if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = MFBNFJGBPBB__ACJKLBMNMEJ(HLAGOHADLKH,pSVar4,(MethodInfo *)0x0);
        KGBNBLGMCBF = ScreenTypeExtension__GDDGNMOMMCE(pSVar4,(MethodInfo *)0x0);
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
                TutorialExtension__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)*ppNVar3,(MethodInfo *)0x0);
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


// ===== private void ABJHGPKGMLH(MenuScroll.OAPJJKKCANC ICJLHMDFMKG)  [RVA 0x3224344]
// NGCEHDLJOMI$$ABJHGPKGMLH @ RVA 0x3224344

void NGCEHDLJOMI__ABJHGPKGMLH(NGCEHDLJOMI_o *__this,int32_t ICJLHMDFMKG,MethodInfo *method)

{
  System_Action_MenuScroll_OAPJJKKCANC__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  ulong uVar1;
  ulong extraout_x1;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  UnityEngine_UI_Image_o *__this_01;
  
  uVar1 = (ulong)(uint)ICJLHMDFMKG;
  if ((DAT_04566f63 & 1) == 0) {
    FUN_01bab630(&System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo,uVar1);
    FUN_01bab630(&Method_NGCEHDLJOMI_ABJHGPKGMLH__);
    DAT_04566f63 = 1;
    uVar1 = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,uVar1);
    DAT_04565b84 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
    __this_01 = (pNVar2->fields)._backgroundPicture;
    CJNHFNHJHPE = (System_Action_MenuScroll_OAPJJKKCANC__o *)
                  thunk_FUN_01bda818(System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
      Nekki_SF2_GUI_Menu_MenuScroll__remove_OnRolling
                ((Nekki_SF2_GUI_Menu_MenuScroll_o *)__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
        Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BKDDOKCPGJI()  [RVA 0x3224418]
// NGCEHDLJOMI$$BKDDOKCPGJI @ RVA 0x3224418

void NGCEHDLJOMI__BKDDOKCPGJI(NGCEHDLJOMI_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  int32_t ICJLHMDFMKG;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar1;
  UnityEngine_UI_Selectable_o *PFNMDNHEFEC;
  UnityEngine_UI_Selectable_c *__this_00;
  
  if ((DAT_04566f64 & 1) == 0) {
    FUN_01bab630(&Method_NGCEHDLJOMI_BKDDOKCPGJI__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566f64 = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar1 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((pNVar1 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) &&
     (PFNMDNHEFEC = (UnityEngine_UI_Selectable_o *)(pNVar1->fields)._raidRating,
     PFNMDNHEFEC != (UnityEngine_UI_Selectable_o *)0x0)) {
    __this_00 = PFNMDNHEFEC[1].klass;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_UI_Selectable_c *)0x0) {
      method_02 = (MethodInfo *)0x0;
      UnityEngine_Events_UnityEvent__RemoveListener
                ((UnityEngine_Events_UnityEvent_o *)__this_00,call,(MethodInfo *)0x0);
      TutorialExtension__HJDDBKPCAFJ(PFNMDNHEFEC,(MethodInfo *)0x0);
      NGCEHDLJOMI__ABJHGPKGMLH(__this,ICJLHMDFMKG,method_02);
      NGCEHDLJOMI__APBMPBNOOHK(__this,method_00);
      NGCEHDLJOMI__GNLDBPBJBOA(__this,method_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x322450C]
// NGCEHDLJOMI$$HNIHOIAMDPC @ RVA 0x322450C

void NGCEHDLJOMI__HNIHOIAMDPC
               (NGCEHDLJOMI_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04566f65 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3575/*"BtnName"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566f65 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_3575/*"BtnName"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).NFMLNNPCOEA;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

