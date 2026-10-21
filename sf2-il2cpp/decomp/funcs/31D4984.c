// AABOAOAKHJG$$MAHFCKJGBPP @ RVA 0x31D4984

void AABOAOAKHJG__MAHFCKJGBPP(AABOAOAKHJG_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  long lVar2;
  Nekki_SF2_GUI_Profile_InfoPanel_o *__this_01;
  LabelButton_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Object_o *x;
  UnityEngine_Events_UnityEvent_o *__this_03;
  
  if ((DAT_04566cd0 & 1) == 0) {
    FUN_01bab630(&Method_AABOAOAKHJG_OANGGKCBAOJ__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10024);
    DAT_04566cd0 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,true,(MethodInfo *)0x0);
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
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
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
                    /* try { // try from 032d4ab0 to 033d4ab7 has its CatchHandler @ 032d4c9c */
    if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
        (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
                    /* try { // try from 032d4acc to 033d4acf has its CatchHandler @ 032d4c80 */
      Nekki_SF2_GUI_Profile_ProfileScene__ScrollToItemByName
                ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8),0,
                 StringLiteral_10024,(MethodInfo *)0x0);
                    /* try { // try from 032d4ad8 to 033d4af3 has its CatchHandler @ 032d4c84 */
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
                    /* try { // try from 032d4b04 to 033d4b0f has its CatchHandler @ 032d4c88 */
                    /* try { // try from 032d4b14 to 033d4b1f has its CatchHandler @ 032d4c8c */
      if (((**(long **)(lVar2 + 0xb8) != 0) &&
          (__this_01 = *(Nekki_SF2_GUI_Profile_InfoPanel_o **)(**(long **)(lVar2 + 0xb8) + 0xa8),
          __this_01 != (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0)) &&
         (__this_02 = Nekki_SF2_GUI_Profile_InfoPanel__get_PerkImproveButton
                                (__this_01,(MethodInfo *)0x0), __this_02 != (LabelButton_o *)0x0)) {
                    /* try { // try from 032d4b20 to 033d4c6f has its CatchHandler @ 032d4850 */
        SFButton__set_IsFlashing((SFButton_o *)__this_02,true,(MethodInfo *)0x0);
        AKJJAPEHKCG__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)__this_02,(MethodInfo *)0x0);
        __this_03 = (UnityEngine_Events_UnityEvent_o *)
                    (__this_02->fields).super.super.super.m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

