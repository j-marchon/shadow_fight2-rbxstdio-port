// IOCCJDEBNHF$$FLJAKFOPOOD @ RVA 0x3302444

void IOCCJDEBNHF__FLJAKFOPOOD(IOCCJDEBNHF_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Profile_InfoPanel_o *__this_00;
  LabelButton_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_02;
  UnityEngine_Events_UnityEvent_o *__this_03;
  undefined1 auVar2 [16];
  
                    /* try { // try from 03402444 to 03502447 has its CatchHandler @ 03402138 */
                    /* try { // try from 03402448 to 0350244b has its CatchHandler @ 03402454 */
                    /* try { // try from 0340244c to 0350247f has its CatchHandler @ 03402138 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03402448 with catch @ 03402454
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034023a4 with catch @ 03402458
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03402440 with catch @ 0340245c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03402390 with catch @ 03402460
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340235c with catch @ 03402464
                        */
  if ((DAT_04567729 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03402300 with catch @ 03402468
                        */
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&Method_IOCCJDEBNHF_FLJAKFOPOOD__);
                    /* try { // try from 03402480 to 03502483 has its CatchHandler @ 03402490 */
    FUN_01bab630(&Method_IOCCJDEBNHF_LJMPHCIKIIJ__);
                    /* catch() { ... } // from try @ 03402480 with catch @ 03402490 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567729 = 1;
    method = extraout_x1;
  }
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  auVar2._8_8_ = method;
  auVar2._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    auVar2 = FUN_01b81620(lVar1,method);
  }
  lVar1 = *(long *)(*(long *)(auVar2._0_8_ + 0xc0) + 0x10);
                    /* try { // try from 034024c8 to 035024ef has its CatchHandler @ 03402504 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620(lVar1,auVar2._8_8_);
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    __this_02 = *(Nekki_SF2_Core_Fights_ModelContainer_o **)(**(long **)(lVar1 + 0xb8) + 0x90);
                    /* try { // try from 034024f0 to 035024fb has its CatchHandler @ 03402138 */
    CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                  thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
                    /* try { // try from 034024fc to 03502503 has its CatchHandler @ 03402504 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034024c8 with catch @ 03402504
                       catch(type#2 @ 00000000) { ... } // from try @ 034024fc with catch @ 03402504
                        */
    System_Action<object>___ctor();
    if (__this_02 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
      Nekki_SF2_Core_Fights_ModelContainer__add_OnAnimationEnd
                (__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
      lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01b81620();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01b81620();
      }
      if (((**(long **)(lVar1 + 0xb8) != 0) &&
          (__this_00 = *(Nekki_SF2_GUI_Profile_InfoPanel_o **)(**(long **)(lVar1 + 0xb8) + 0xa8),
          __this_00 != (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0)) &&
         (__this_01 = Nekki_SF2_GUI_Profile_InfoPanel__get_TrickPlayButton
                                (__this_00,(MethodInfo *)0x0), __this_01 != (LabelButton_o *)0x0)) {
        SFButton__set_IsFlashing((SFButton_o *)__this_01,false,(MethodInfo *)0x0);
        AKJJAPEHKCG__HJDDBKPCAFJ((UnityEngine_UI_Selectable_o *)__this_01,(MethodInfo *)0x0);
        __this_03 = (UnityEngine_Events_UnityEvent_o *)
                    (__this_01->fields).super.super.super.m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__RemoveListener(__this_03,call,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

