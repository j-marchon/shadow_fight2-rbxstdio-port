// Nekki.SF2.GUI.Map.InfoBattle$$CLNAOMIIBLH @ RVA 0x3418E24

void Nekki_SF2_GUI_Map_InfoBattle__CLNAOMIIBLH
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  EEGDOGKBLNG_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  KKLJIDJBFEI_o *pKVar4;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  NDPMLPGANCI_o *__this_01;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_ContentDuel_o *pNVar5;
  System_Action_OOMHDDBCBJP__o **ppSVar6;
  Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *pNVar7;
  DCHAJIMIFHP_o *__this_02;
  System_Action_OOMHDDBCBJP__o *pSVar8;
  System_Action_OOMHDDBCBJP__c *pSVar9;
  
  if ((DAT_045680b0 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_IKKGKJLMHOP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_OGPINCKBAKE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_PDLLNOGBJMP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_UpdateBattleInfo__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_20397);
    DAT_045680b0 = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields)._contentDuel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields)._contentDuel;
    if (pNVar5 == (Nekki_SF2_GUI_Map_ContentDuel_o *)0x0) goto LAB_03519174;
    ppSVar6 = &(pNVar5->fields).super.OnUpdateBattleInfo;
    pSVar8 = *ppSVar6;
    pSVar2 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
    System_Action<object>___ctor();
    pSVar2 = System_Delegate__Remove((System_Delegate_o *)pSVar8,pSVar2,(MethodInfo *)0x0);
    pSVar9 = System_Action<OOMHDDBCBJP>_TypeInfo;
    if (pSVar2 == (System_Delegate_o *)0x0) {
      lVar3 = 0;
      *ppSVar6 = (System_Action_OOMHDDBCBJP__o *)0x0;
    }
    else {
      pSVar8 = (System_Action_OOMHDDBCBJP__o *)
               thunk_FUN_01bda71c(pSVar2,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (pSVar8 == (System_Action_OOMHDDBCBJP__o *)0x0) goto LAB_03519034;
      *ppSVar6 = pSVar8;
      pSVar9 = System_Action<OOMHDDBCBJP>_TypeInfo;
      lVar3 = thunk_FUN_01bda71c(pSVar2,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (lVar3 == 0) goto LAB_03519034;
    }
    thunk_FUN_01c20e04(ppSVar6,lVar3);
  }
  pNVar7 = (__this->fields)._contentCompleteOrLocked;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields)._contentCompleteOrLocked;
    if (pNVar7 == (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *)0x0) goto LAB_03519174;
    ppSVar6 = &(pNVar7->fields).super.OnUpdateBattleInfo;
    pSVar8 = *ppSVar6;
    pSVar2 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
    System_Action<object>___ctor();
    pSVar2 = System_Delegate__Remove((System_Delegate_o *)pSVar8,pSVar2,(MethodInfo *)0x0);
    pSVar9 = System_Action<OOMHDDBCBJP>_TypeInfo;
    if (pSVar2 == (System_Delegate_o *)0x0) {
      lVar3 = 0;
      *ppSVar6 = (System_Action_OOMHDDBCBJP__o *)0x0;
    }
    else {
      pSVar8 = (System_Action_OOMHDDBCBJP__o *)
               thunk_FUN_01bda71c(pSVar2,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (pSVar8 == (System_Action_OOMHDDBCBJP__o *)0x0) {
LAB_03519034:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2,pSVar9);
      }
      *ppSVar6 = pSVar8;
      pSVar9 = System_Action<OOMHDDBCBJP>_TypeInfo;
      lVar3 = thunk_FUN_01bda71c(pSVar2,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (lVar3 == 0) goto LAB_03519034;
    }
    thunk_FUN_01c20e04(ppSVar6,lVar3);
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    EEGDOGKBLNG__KBPKLBHOGAP(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
      __this_02 = (pKVar4->fields).super.FNHOHLGNHGN;
      EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (DCHAJIMIFHP_o *)0x0) {
        DCHAJIMIFHP__COEFNEICBLH(__this_02,StringLiteral_20397,EKDIECDFOIO,(MethodInfo *)0x0);
        __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        CJNHFNHJHPE_00 =
             (System_Action_DBMPKPJGIPI__o *)thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo)
        ;
        System_Action<Int32Enum>___ctor();
        if (__this_01 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__LMMJGPKGCDJ(__this_01,CJNHFNHJHPE_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03519174:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

