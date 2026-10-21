// TypeDefIndex 2789
// Namespace: 
// public class IMJHLANAMIK : BOFEMGGNODC
// Fields:
//   private RaidBuyConsumablesDialog GMLKPKIJKJE; // 0x68
//   private LabelButton PJECIFAMGHF; // 0x70
//   private LabelButton CCHECBLHFEH; // 0x78

// ===== private void NKGIJKODGAN()  [RVA 0x341466C]
// IMJHLANAMIK$$NKGIJKODGAN @ RVA 0x341466C

void IMJHLANAMIK__NKGIJKODGAN(IMJHLANAMIK_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *call;
  System_Action_T__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  LabelButton_o **ppLVar2;
  LabelButton_o *pLVar3;
  UnityEngine_Events_UnityEvent_o *__this_00;
  LabelButton_o **ppLVar4;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o **ppNVar5;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *pNVar6;
  
  if ((DAT_0456809b & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_IMJHLANAMIK_MHLJCCAEHML__);
    FUN_01bab630(&Method_IMJHLANAMIK_MOAOJPDPMBB__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveEventListener__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456809b = 1;
    method = extraout_x1;
  }
  ppLVar2 = &(__this->fields).CCHECBLHFEH;
  pLVar3 = *ppLVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppLVar2 == (LabelButton_o *)0x0) goto LAB_03514868;
    __this_00 = (UnityEngine_Events_UnityEvent_o *)((*ppLVar2)->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_03514868;
    UnityEngine_Events_UnityEvent__RemoveListener(__this_00,call,(MethodInfo *)0x0);
    AKJJAPEHKCG__HJDDBKPCAFJ((UnityEngine_UI_Selectable_o *)*ppLVar2,(MethodInfo *)0x0);
  }
  ppLVar4 = &(__this->fields).PJECIFAMGHF;
  pLVar3 = *ppLVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    AKJJAPEHKCG__HJDDBKPCAFJ((UnityEngine_UI_Selectable_o *)*ppLVar4,(MethodInfo *)0x0);
  }
  ppNVar5 = &(__this->fields).GMLKPKIJKJE;
  pNVar6 = *ppNVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar6 = (__this->fields).GMLKPKIJKJE;
    IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) {
LAB_03514868:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_SFMonoBehaviour<object>__RemoveEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)pNVar6,0,IELDNEAAPBE,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveEventListener__);
  }
  (__this->fields).GMLKPKIJKJE = (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0;
  thunk_FUN_01c20e04(ppNVar5,0);
  (__this->fields).PJECIFAMGHF = (LabelButton_o *)0x0;
  thunk_FUN_01c20e04(ppLVar4,0);
  (__this->fields).CCHECBLHFEH = (LabelButton_o *)0x0;
  thunk_FUN_01c20e04(ppLVar2,0);
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x341486C]
// IMJHLANAMIK$$MAHFCKJGBPP @ RVA 0x341486C

void IMJHLANAMIK__MAHFCKJGBPP(IMJHLANAMIK_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *pNVar2;
  System_Action_T__o *IELDNEAAPBE;
  LabelButton_o *pLVar3;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *pNVar4;
  System_Action_o *CJNHFNHJHPE;
  ProgressLabelButton_o *pPVar5;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o **ppNVar6;
  LabelButton_o **ppLVar7;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Nekki_SF2_GUI_SimpleScroll_o *__this_02;
  
  if ((DAT_0456809c & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidBuyConsumablesDialog>__);
    FUN_01bab630(&Method_IMJHLANAMIK_DDMIOIAHJAP__);
    FUN_01bab630(&Method_IMJHLANAMIK_MHLJCCAEHML__);
    FUN_01bab630(&Method_IMJHLANAMIK_MOAOJPDPMBB__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10841/*"RaidFightActionFlashBuyBtn::run: no BuyConsumablesDialog!"*/);
    DAT_0456809c = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)
             GCIFMNHADDF__BFJGHKKGOJC<object>
                       (__this_00,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidBuyConsumablesDialog>__);
    ppNVar6 = &(__this->fields).GMLKPKIJKJE;
    *ppNVar6 = pNVar2;
    thunk_FUN_01c20e04(ppNVar6,pNVar2);
    pNVar2 = *ppNVar6;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10841/*"RaidFightActionFlashBuyBtn::run: no BuyConsumablesDialog!"*/,(MethodInfo *)0x0);
      IMJHLANAMIK__NKGIJKODGAN(__this,method_00);
      return;
    }
    pNVar2 = *ppNVar6;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) {
      pPVar5 = (pNVar2->fields)._btnFight;
      (pNVar2->fields).super.super.IsIgnoreBack = true;
      (__this->fields).PJECIFAMGHF = (LabelButton_o *)pPVar5;
      thunk_FUN_01c20e04();
      pNVar2 = (__this->fields).GMLKPKIJKJE;
      IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) {
        Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                  ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)pNVar2,0,IELDNEAAPBE,
                   Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
        if (*ppNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) {
          pLVar3 = Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__GetBuyChargesBtn
                             (*ppNVar6,(MethodInfo *)0x0);
          ppLVar7 = &(__this->fields).CCHECBLHFEH;
          *ppLVar7 = pLVar3;
          thunk_FUN_01c20e04(ppLVar7,pLVar3);
          if (*ppLVar7 != (LabelButton_o *)0x0) {
            __this_01 = (UnityEngine_Events_UnityEvent_o *)
                        ((*ppLVar7)->fields).super.super.super.m_OnClick;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
              if ((*ppNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) &&
                 (pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__GetChargesContainer
                                     (*ppNVar6,(MethodInfo *)0x0),
                 pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0)) {
                __this_02 = (pNVar4->fields)._scroll;
                CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                System_Action___ctor();
                if (__this_02 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                  Nekki_SF2_GUI_SimpleScroll__add_OnScrollEnded
                            (__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
                  if ((*ppNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) &&
                     (pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__GetChargesContainer
                                         (*ppNVar6,(MethodInfo *)0x0),
                     pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0)) {
                    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ScrollBackward
                              (pNVar4,false,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MHLJCCAEHML()  [RVA 0x3414B2C]
// IMJHLANAMIK$$MHLJCCAEHML @ RVA 0x3414B2C

void IMJHLANAMIK__MHLJCCAEHML(IMJHLANAMIK_o *__this,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  
  pLVar1 = (__this->fields).CCHECBLHFEH;
  if (pLVar1 != (LabelButton_o *)0x0) {
    SFButton__set_IsFlashing((SFButton_o *)pLVar1,false,(MethodInfo *)0x0);
    AKJJAPEHKCG__HJDDBKPCAFJ
              ((UnityEngine_UI_Selectable_o *)(__this->fields).CCHECBLHFEH,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).PJECIFAMGHF;
    if (pLVar1 != (LabelButton_o *)0x0) {
      SFButton__set_IsFlashing((SFButton_o *)pLVar1,true,(MethodInfo *)0x0);
      AKJJAPEHKCG__GOCEMJOCNEE
                ((UnityEngine_UI_Selectable_o *)(__this->fields).PJECIFAMGHF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DDMIOIAHJAP()  [RVA 0x3414B7C]
// IMJHLANAMIK$$DDMIOIAHJAP @ RVA 0x3414B7C

void IMJHLANAMIK__DDMIOIAHJAP(IMJHLANAMIK_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *pNVar1;
  System_Action_o *CJNHFNHJHPE;
  LabelButton_o *__this_01;
  Nekki_SF2_GUI_SimpleScroll_o *__this_02;
  
  if ((DAT_0456809d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_IMJHLANAMIK_DDMIOIAHJAP__);
    DAT_0456809d = 1;
  }
  __this_00 = (__this->fields).GMLKPKIJKJE;
  if ((__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) &&
     (pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__GetChargesContainer
                         (__this_00,(MethodInfo *)0x0),
     pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0)) {
    __this_02 = (pNVar1->fields)._scroll;
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_02 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__remove_OnScrollEnded(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_01 = (__this->fields).CCHECBLHFEH;
      if (__this_01 != (LabelButton_o *)0x0) {
        SFButton__set_IsFlashing((SFButton_o *)__this_01,true,(MethodInfo *)0x0);
        AKJJAPEHKCG__GOCEMJOCNEE
                  ((UnityEngine_UI_Selectable_o *)(__this->fields).CCHECBLHFEH,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MOAOJPDPMBB(object IMMNELPBGIF)  [RVA 0x3414C38]
// IMJHLANAMIK$$MOAOJPDPMBB @ RVA 0x3414C38

void IMJHLANAMIK__MOAOJPDPMBB(IMJHLANAMIK_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *call;
  System_Action_T__o *IELDNEAAPBE;
  Il2CppObject *extraout_x1;
  LabelButton_o **ppLVar2;
  LabelButton_o *pLVar3;
  UnityEngine_Events_UnityEvent_o *__this_00;
  LabelButton_o **ppLVar4;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o **ppNVar5;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *pNVar6;
  
  if ((DAT_0456809b & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_IMJHLANAMIK_MHLJCCAEHML__);
    FUN_01bab630(&Method_IMJHLANAMIK_MOAOJPDPMBB__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveEventListener__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456809b = 1;
    IMMNELPBGIF = extraout_x1;
  }
  ppLVar2 = &(__this->fields).CCHECBLHFEH;
  pLVar3 = *ppLVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,IMMNELPBGIF);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppLVar2 == (LabelButton_o *)0x0) goto LAB_03514868;
    __this_00 = (UnityEngine_Events_UnityEvent_o *)((*ppLVar2)->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_03514868;
    UnityEngine_Events_UnityEvent__RemoveListener(__this_00,call,(MethodInfo *)0x0);
    AKJJAPEHKCG__HJDDBKPCAFJ((UnityEngine_UI_Selectable_o *)*ppLVar2,(MethodInfo *)0x0);
  }
  ppLVar4 = &(__this->fields).PJECIFAMGHF;
  pLVar3 = *ppLVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    AKJJAPEHKCG__HJDDBKPCAFJ((UnityEngine_UI_Selectable_o *)*ppLVar4,(MethodInfo *)0x0);
  }
  ppNVar5 = &(__this->fields).GMLKPKIJKJE;
  pNVar6 = *ppNVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar6 = (__this->fields).GMLKPKIJKJE;
    IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) {
LAB_03514868:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_SFMonoBehaviour<object>__RemoveEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)pNVar6,0,IELDNEAAPBE,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveEventListener__);
  }
  (__this->fields).GMLKPKIJKJE = (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0;
  thunk_FUN_01c20e04(ppNVar5,0);
  (__this->fields).PJECIFAMGHF = (LabelButton_o *)0x0;
  thunk_FUN_01c20e04(ppLVar4,0);
  (__this->fields).CCHECBLHFEH = (LabelButton_o *)0x0;
  thunk_FUN_01c20e04(ppLVar2,0);
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x3414C3C]
// IMJHLANAMIK$$.ctor @ RVA 0x3414C3C

void IMJHLANAMIK___ctor(IMJHLANAMIK_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

