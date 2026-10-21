// Nekki.SF2.GUI.Map.InfoBattle$$GIENGNEGHPJ @ RVA 0x3417F34

void Nekki_SF2_GUI_Map_InfoBattle__GIENGNEGHPJ
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  long lVar2;
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  EEGDOGKBLNG_o *__this_02;
  System_Action_o *CJNHFNHJHPE;
  KKLJIDJBFEI_o *pKVar3;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  NDPMLPGANCI_o *__this_03;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  Nekki_SF2_GUI_Map_ContentDuel_o *pNVar4;
  System_Action_OOMHDDBCBJP__o **ppSVar5;
  DCHAJIMIFHP_o *__this_04;
  System_Action_OOMHDDBCBJP__o *pSVar6;
  System_Action_OOMHDDBCBJP__c *pSVar7;
  
  if ((DAT_045680ab & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_IKKGKJLMHOP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_OGPINCKBAKE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_PDLLNOGBJMP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_UpdateBattleInfo__);
    FUN_01bab630(&StringLiteral_20397);
    DAT_045680ab = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields)._contentDuel;
  if (pNVar4 != (Nekki_SF2_GUI_Map_ContentDuel_o *)0x0) {
    ppSVar5 = &(pNVar4->fields).super.OnUpdateBattleInfo;
    pSVar6 = *ppSVar5;
    pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo,method);
    System_Action<object>___ctor();
    pSVar1 = System_Delegate__Combine((System_Delegate_o *)pSVar6,pSVar1,(MethodInfo *)0x0);
    pSVar7 = System_Action<OOMHDDBCBJP>_TypeInfo;
    if (pSVar1 == (System_Delegate_o *)0x0) {
      lVar2 = 0;
      *ppSVar5 = (System_Action_OOMHDDBCBJP__o *)0x0;
    }
    else {
      pSVar6 = (System_Action_OOMHDDBCBJP__o *)
               thunk_FUN_01bda71c(pSVar1,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (pSVar6 == (System_Action_OOMHDDBCBJP__o *)0x0) {
LAB_0351804c:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar1,pSVar7);
      }
      *ppSVar5 = pSVar6;
      pSVar7 = System_Action<OOMHDDBCBJP>_TypeInfo;
      lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (lVar2 == 0) goto LAB_0351804c;
    }
    thunk_FUN_01c20e04(ppSVar5,lVar2);
    __this_00 = (__this->fields)._btnFight;
    if ((__this_00 != (LabelButton_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Map_InfoBattle__JLCLHIINBBM(__this,method_00);
      Nekki_SF2_GUI_Map_InfoBattle__JKLIPAHCAHF(__this,method_01);
      Nekki_SF2_GUI_Map_InfoBattle__ELOHHHOLNHF(__this,method_02);
      Nekki_SF2_GUI_Map_InfoBattle__ClearInfo(__this,method_03);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (__this_02 != (EEGDOGKBLNG_o *)0x0) {
        EEGDOGKBLNG__DNJPBDHOMOI(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
        pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
          __this_04 = (pKVar3->fields).super.FNHOHLGNHGN;
          EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                        thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_04 != (DCHAJIMIFHP_o *)0x0) {
            DCHAJIMIFHP__MPFFOIIBAKO(__this_04,StringLiteral_20397,EKDIECDFOIO,(MethodInfo *)0x0);
            __this_03 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
            CJNHFNHJHPE_00 =
                 (System_Action_DBMPKPJGIPI__o *)
                 thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
            System_Action<Int32Enum>___ctor();
            if (__this_03 != (NDPMLPGANCI_o *)0x0) {
              NDPMLPGANCI__IFJFFPAKLKB(__this_03,CJNHFNHJHPE_00,(MethodInfo *)0x0);
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

