// AABOAOAKHJG$$OANGGKCBAOJ @ RVA 0x31D4850

void AABOAOAKHJG__OANGGKCBAOJ(AABOAOAKHJG_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  long lVar1;
  Nekki_SF2_GUI_Profile_InfoPanel_o *__this_01;
  LabelButton_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Events_UnityEvent_o *__this_03;
  
                    /* try { // try from 032d4850 to 033d4aaf has its CatchHandler @ 032d4850
                       catch() { ... } // from try @ 032d4850 with catch @ 032d4850
                       catch() { ... } // from try @ 032d4b20 with catch @ 032d4850
                       catch() { ... } // from try @ 032d4c7c with catch @ 032d4850
                       catch() { ... } // from try @ 032d4cb8 with catch @ 032d4850
                       catch() { ... } // from try @ 032d4cf8 with catch @ 032d4850 */
  if ((DAT_04566ccf & 1) == 0) {
    FUN_01bab630(&Method_AABOAOAKHJG_OANGGKCBAOJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566ccf = 1;
  }
  __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,false,(MethodInfo *)0x0);
    lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    if (((**(long **)(lVar1 + 0xb8) != 0) &&
        (__this_01 = *(Nekki_SF2_GUI_Profile_InfoPanel_o **)(**(long **)(lVar1 + 0xb8) + 0xa8),
        __this_01 != (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0)) &&
       (__this_02 = Nekki_SF2_GUI_Profile_InfoPanel__get_PerkImproveButton
                              (__this_01,(MethodInfo *)0x0), __this_02 != (LabelButton_o *)0x0)) {
      SFButton__set_IsFlashing((SFButton_o *)__this_02,false,(MethodInfo *)0x0);
      AKJJAPEHKCG__HJDDBKPCAFJ((UnityEngine_UI_Selectable_o *)__this_02,(MethodInfo *)0x0);
      __this_03 = (UnityEngine_Events_UnityEvent_o *)(__this_02->fields).super.super.super.m_OnClick
      ;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__RemoveListener(__this_03,call,(MethodInfo *)0x0);
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

