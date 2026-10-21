// NOIIFNBIAHC$$KMNFICHPGKD @ RVA 0x32CCB50

void NOIIFNBIAHC__KMNFICHPGKD(NOIIFNBIAHC_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *call;
  long lVar2;
  System_Action_o *pSVar3;
  KKLJIDJBFEI_o *__this_00;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  SFButton_o *pSVar4;
  UnityEngine_Events_UnityEvent_o *__this_02;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Map_MapScene_o *__this_03;
  
  if ((DAT_0456751f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_NOIIFNBIAHC_KMNFICHPGKD__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456751f = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields).JPGIHNHOFGK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    AKJJAPEHKCG__HJDDBKPCAFJ
              ((UnityEngine_UI_Selectable_o *)(__this->fields).JPGIHNHOFGK,(MethodInfo *)0x0);
    pSVar4 = (__this->fields).JPGIHNHOFGK;
    if (pSVar4 == (SFButton_o *)0x0) goto LAB_033cc968;
    __this_02 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_02 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_033cc968;
    UnityEngine_Events_UnityEvent__RemoveListener(__this_02,call,(MethodInfo *)0x0);
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    __this_03 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8);
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_03 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_033cc968;
    Nekki_SF2_GUI_Map_MapScene__remove_OnStoryMapOpenedAction(__this_03,pSVar3,(MethodInfo *)0x0);
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__JGNHEIICALL(__this_00,pSVar3,(MethodInfo *)0x0);
    __this_01 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
      Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_01,(MethodInfo *)0x0);
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,method_00);
      return;
    }
  }
LAB_033cc968:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

