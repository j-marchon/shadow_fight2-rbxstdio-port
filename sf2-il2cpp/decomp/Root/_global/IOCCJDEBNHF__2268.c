// TypeDefIndex 2268
// Namespace: 
// public class IOCCJDEBNHF : BOFEMGGNODC
// Fields:
//   private LabelButton EMLPLDDPCKO; // 0x68

// ===== private void LJMPHCIKIIJ(OLKKAIFGGAK.EAOIGPODIAI PGPLLGEIFPI)  [RVA 0x3301FA8]
// IOCCJDEBNHF$$LJMPHCIKIIJ @ RVA 0x3301FA8

void IOCCJDEBNHF__LJMPHCIKIIJ
               (IOCCJDEBNHF_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *PGPLLGEIFPI,MethodInfo *method)

{
  long lVar1;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  OLKKAIFGGAK_EAOIGPODIAI_o *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  undefined1 auVar2 [16];
  
  if ((DAT_04567727 & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&Method_IOCCJDEBNHF_LJMPHCIKIIJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_04567727 = 1;
    PGPLLGEIFPI = extraout_x1;
  }
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  auVar2._8_8_ = PGPLLGEIFPI;
  auVar2._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    auVar2 = FUN_01b81620(lVar1,PGPLLGEIFPI);
  }
  lVar1 = *(long *)(*(long *)(auVar2._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620(lVar1,auVar2._8_8_);
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    __this_00 = *(Nekki_SF2_Core_Fights_ModelContainer_o **)(**(long **)(lVar1 + 0xb8) + 0x90);
    CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                  thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
      Nekki_SF2_Core_Fights_ModelContainer__remove_OnAnimationEnd
                (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      IOCCJDEBNHF__EAOKHLJCOHH(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EAOKHLJCOHH()  [RVA 0x3302080]
// IOCCJDEBNHF$$EAOKHLJCOHH @ RVA 0x3302080

void IOCCJDEBNHF__EAOKHLJCOHH(IOCCJDEBNHF_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  
  __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,false,(MethodInfo *)0x0);
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x33020B4]
// IOCCJDEBNHF$$MAHFCKJGBPP @ RVA 0x33020B4

void IOCCJDEBNHF__MAHFCKJGBPP(IOCCJDEBNHF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_01;
  System_Comparison_KCLPNDAPADO__o **ppSVar3;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_Profile_InfoPanel_o *__this_02;
  LabelButton_o *__this_03;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  UnityEngine_Events_UnityEvent_o *__this_04;
  System_Comparison_KCLPNDAPADO__o *comparison;
  Nekki_SF2_GUI_Profile_ProfileScene_o *__this_05;
  
  if ((DAT_04567728 & 1) == 0) {
    FUN_01bab630(&System_Comparison<KCLPNDAPADO>_TypeInfo);
    FUN_01bab630(&Method_IOCCJDEBNHF_FLJAKFOPOOD__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
                    /* try { // try from 03402138 to 035022ff has its CatchHandler @ 03402138
                       catch() { ... } // from try @ 03402138 with catch @ 03402138
                       catch() { ... } // from try @ 034023b0 with catch @ 03402138
                       catch() { ... } // from try @ 03402444 with catch @ 03402138
                       catch() { ... } // from try @ 0340244c with catch @ 03402138
                       catch() { ... } // from try @ 034024f0 with catch @ 03402138 */
    FUN_01bab630(&Method_IOCCJDEBNHF_<>c_AKJBDKKCCFP__);
    FUN_01bab630(&IOCCJDEBNHF_<>c_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567728 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
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
  __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,true,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = MGNPHCAAEIO__DCOFAPICGBA(10,(MethodInfo *)0x0);
    if ((IOCCJDEBNHF_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IOCCJDEBNHF_<>c_TypeInfo);
    }
    comparison = IOCCJDEBNHF_<>c_TypeInfo->static_fields->__9__1_0;
    if (comparison == (System_Comparison_KCLPNDAPADO__o *)0x0) {
      if ((IOCCJDEBNHF_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(IOCCJDEBNHF_<>c_TypeInfo);
      }
      comparison = (System_Comparison_KCLPNDAPADO__o *)
                   thunk_FUN_01bda818(System_Comparison<KCLPNDAPADO>_TypeInfo);
      System_Comparison<object>___ctor();
      ppSVar3 = &IOCCJDEBNHF_<>c_TypeInfo->static_fields->__9__1_0;
      *ppSVar3 = comparison;
      thunk_FUN_01c20e04(ppSVar3,comparison);
    }
    if (__this_01 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)__this_01,
                 (System_Comparison_T__o *)comparison,
                 Method_System_Collections_Generic_List<KCLPNDAPADO>_Sort__);
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
                    /* try { // try from 03402300 to 03502327 has its CatchHandler @ 03402468 */
      __this_05 = (Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8);
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,0,
                          Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
      if (((pIVar4 != (Il2CppObject *)0x0) && (pIVar4[3].monitor != (void *)0x0)) &&
         (__this_05 != (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0)) {
        Nekki_SF2_GUI_Profile_ProfileScene__ScrollToItemByName
                  (__this_05,1,*(System_String_o **)((long)pIVar4[3].monitor + 0x68),
                   (MethodInfo *)0x0);
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
                    /* try { // try from 0340235c to 03502383 has its CatchHandler @ 03402464 */
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if ((**(long **)(lVar2 + 0xb8) != 0) &&
           (__this_02 = *(Nekki_SF2_GUI_Profile_InfoPanel_o **)(**(long **)(lVar2 + 0xb8) + 0xa8),
           __this_02 != (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0)) {
          __this_03 = Nekki_SF2_GUI_Profile_InfoPanel__get_TrickPlayButton
                                (__this_02,(MethodInfo *)0x0);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03402390 to 0350239b has its CatchHandler @ 03402460 */
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
                    /* try { // try from 034023a4 to 035023af has its CatchHandler @ 03402458 */
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (!bVar1) {
            IOCCJDEBNHF__EAOKHLJCOHH(__this,method_00);
            return;
          }
          if (__this_03 != (LabelButton_o *)0x0) {
                    /* try { // try from 034023b0 to 0350243f has its CatchHandler @ 03402138 */
            SFButton__set_IsFlashing((SFButton_o *)__this_03,true,(MethodInfo *)0x0);
            AKJJAPEHKCG__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)__this_03,(MethodInfo *)0x0);
            __this_04 = (UnityEngine_Events_UnityEvent_o *)
                        (__this_03->fields).super.super.super.m_OnClick;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_04 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_04,call,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x330243C]
// IOCCJDEBNHF$$.ctor @ RVA 0x330243C

void IOCCJDEBNHF___ctor(IOCCJDEBNHF_o *__this,MethodInfo *method)

{
                    /* try { // try from 03402440 to 03502443 has its CatchHandler @ 0340245c */
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void FLJAKFOPOOD()  [RVA 0x3302444]
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

