// HAIGJHOMMPL$$OAHINKDIKOH @ RVA 0x32DB3A0

void HAIGJHOMMPL__OAHINKDIKOH(HAIGJHOMMPL_o *__this,MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  Core_Network_ServerProvider_o *__this_02;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  GCIFMNHADDF_o *__this_03;
  NDPMLPGANCI_o *__this_04;
  AAPGCAPGBLG_o *__this_05;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_06;
  MethodInfo *extraout_x1;
  
  if ((DAT_045675bc & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_JODGPLBHHIA__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_045675bc = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (__this_00 != (JMDPBFOCHHP_o *)0x0) {
    JMDPBFOCHHP__HFCBMLPLEAN(__this_00,(MethodInfo *)0x0);
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
      KKLJIDJBFEI__FHIODBIPGBG(__this_01,(MethodInfo *)0x0);
      __this_02 = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
      if (__this_02 != (Core_Network_ServerProvider_o *)0x0) {
        Core_Network_ServerProvider__StopLogin(__this_02,(MethodInfo *)0x0);
        pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          Nekki_SF2_Core_Quests_QuestsManager__ClearStack
                    (pNVar2,(System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
          pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
          if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
            Nekki_SF2_Core_Quests_QuestsManager__ClearActions(pNVar2,(MethodInfo *)0x0);
            Nekki_SF2_Core_Quests_QuestsManager__Destroy((MethodInfo *)0x0);
            __this_03 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
            if (__this_03 != (GCIFMNHADDF_o *)0x0) {
              GCIFMNHADDF__DEAPPIKAHEP(__this_03,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Dialogs_NotificationsGame__ImmediateCloseNotifications
                        ((MethodInfo *)0x0);
              __this_04 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
              if (__this_04 != (NDPMLPGANCI_o *)0x0) {
                NDPMLPGANCI__KJGGEPNHOBK(__this_04,(MethodInfo *)0x0);
                if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                MGNPHCAAEIO__DGLJCGNHLIG((MethodInfo *)0x0);
                NDPMLPGANCI__DGLJCGNHLIG((MethodInfo *)0x0);
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                NLPJLHOEAOE__DGLJCGNHLIG((MethodInfo *)0x0);
                Core_Network_ServerProvider__Reset((MethodInfo *)0x0);
                if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                LDHBHPILNMA__EIPFMFENGKA((MethodInfo *)0x0);
                if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar1 = OCMLPCKBHPN__GBNKDCDOECL((MethodInfo *)0x0);
                OCMLPCKBHPN__CCCOGGIBFNI((bool)(~bVar1 & 1),(MethodInfo *)0x0);
                if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                IOIKBGAJIGO__PCPILFKFNFJ((MethodInfo *)0x0);
                EHOFKBDKGBK<object,_object>__JODGPLBHHIA
                          (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_JODGPLBHHIA__);
                __this_05 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
                if (__this_05 != (AAPGCAPGBLG_o *)0x0) {
                  AAPGCAPGBLG__DGLJCGNHLIG(__this_05,(MethodInfo *)0x0);
                  bVar1 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__IsInstanceExists((MethodInfo *)0x0)
                  ;
                  if (!bVar1) {
                    return;
                  }
                  __this_06 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0)
                  ;
                  if (__this_06 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
                    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn
                              (__this_06,false,(MethodInfo *)0x0);
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

