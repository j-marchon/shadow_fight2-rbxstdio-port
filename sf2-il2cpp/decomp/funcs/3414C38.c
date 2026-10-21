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

