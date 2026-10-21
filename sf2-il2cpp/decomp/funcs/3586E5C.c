// Nekki.SF2.GUI.Map.MapScene$$CLNAOMIIBLH @ RVA 0x3586E5C

void Nekki_SF2_GUI_Map_MapScene__CLNAOMIIBLH
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  System_Action_Color__o *CJNHFNHJHPE;
  System_Action_o *pSVar3;
  System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE_00;
  System_Action_ZoneScrollItem__o *CJNHFNHJHPE_01;
  NCNJEIBHGBH_o *pNVar4;
  System_Action_FKNCNNOOOIO__o *pSVar5;
  FKDLCJJOGIP_o *__this_00;
  PBAKFOBIHEG_o *pPVar6;
  VirtualInvokeData *pVVar7;
  PBAKFOBIHEG_c *pPVar8;
  ulong uVar9;
  int32_t *piVar10;
  ACHLOMELAJE_o *pAVar11;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar12;
  System_Collections_IEnumerator_o *pSVar13;
  
  if ((DAT_04568d00 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    FUN_01bab630(&System_Action<Color>_TypeInfo);
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_AIIOJJEPJMD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_BHLHBBKAFHH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_IIDMBPKLJME__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_MEDCMFMKLED__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_NICMCKIBIAC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_OnClickBattle__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_OnStorySliderScroll__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_CLNAOMIIBLH__);
    DAT_04568d00 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__CLNAOMIIBLH
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<MapScene>_CLNAOMIIBLH__);
  pAVar11 = (__this->fields).OKNKKHGBECG;
  CJNHFNHJHPE = (System_Action_Color__o *)thunk_FUN_01bda818(System_Action<Color>_TypeInfo);
  System_Action<Color>___ctor();
                    /* try { // try from 03686f7c to 03787013 has its CatchHandler @ 03686f7c
                       catch() { ... } // from try @ 03686f7c with catch @ 03686f7c
                       catch() { ... } // from try @ 0368703c with catch @ 03686f7c
                       catch() { ... } // from try @ 0368708c with catch @ 03686f7c
                       catch() { ... } // from try @ 036870b4 with catch @ 03686f7c
                       catch() { ... } // from try @ 036870f4 with catch @ 03686f7c */
  if (pAVar11 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__MDEDBDFIFEM(pAVar11,CJNHFNHJHPE,(MethodInfo *)0x0);
    pAVar11 = (__this->fields).OKNKKHGBECG;
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pAVar11 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__MJJFLCIHGBO(pAVar11,pSVar3,(MethodInfo *)0x0);
      (__this->fields).OKNKKHGBECG = (ACHLOMELAJE_o *)0x0;
      thunk_FUN_01c20e04(&(__this->fields).OKNKKHGBECG,0);
      pNVar12 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
      CJNHFNHJHPE_00 =
           (System_Action_OOMHDDBCBJP__o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
                    /* try { // try from 03687014 to 0378701b has its CatchHandler @ 03687094 */
      System_Action<object>___ctor();
      if (pNVar12 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
                    /* try { // try from 03687028 to 0378703b has its CatchHandler @ 03687098 */
        Nekki_SF2_GUI_Map_MapContainer__remove_OnBattleClicked
                  (pNVar12,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                    /* try { // try from 0368703c to 03787087 has its CatchHandler @ 03686f7c */
        pNVar12 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
        CJNHFNHJHPE_01 =
             (System_Action_ZoneScrollItem__o *)
             thunk_FUN_01bda818(System_Action<ZoneScrollItem>_TypeInfo);
        System_Action<object>___ctor();
        if (pNVar12 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
          Nekki_SF2_GUI_Map_MapContainer__remove_OnZoneSelected
                    (pNVar12,CJNHFNHJHPE_01,(MethodInfo *)0x0);
          pNVar4 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03687088 to 0378708b has its CatchHandler @ 03687090 */
                    /* try { // try from 0368708c to 037870af has its CatchHandler @ 03686f7c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03687088 with catch @ 03687090
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03687014 with catch @ 03687094
                        */
          pSVar5 = (System_Action_FKNCNNOOOIO__o *)
                   thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03687028 with catch @ 03687098
                        */
          System_Action<object>___ctor();
          if (pNVar4 != (NCNJEIBHGBH_o *)0x0) {
                    /* try { // try from 036870b0 to 037870b3 has its CatchHandler @ 036870dc */
                    /* try { // try from 036870b4 to 037870eb has its CatchHandler @ 03686f7c */
            NCNJEIBHGBH__BDNPBMBKLKE(pNVar4,pSVar5,(MethodInfo *)0x0);
            pNVar4 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
            pSVar5 = (System_Action_FKNCNNOOOIO__o *)
                     thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
                    /* catch() { ... } // from try @ 036870b0 with catch @ 036870dc */
            System_Action<object>___ctor();
                    /* try { // try from 036870ec to 037870f3 has its CatchHandler @ 03687108 */
            if (pNVar4 != (NCNJEIBHGBH_o *)0x0) {
                    /* try { // try from 036870f4 to 037870ff has its CatchHandler @ 03686f7c */
              NCNJEIBHGBH__CFPDPJKHALN(pNVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 03687100 to 03787107 has its CatchHandler @ 03687108 */
              pNVar4 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036870ec with catch @ 03687108
                       catch(type#2 @ 00000000) { ... } // from try @ 03687100 with catch @ 03687108
                        */
              pSVar5 = (System_Action_FKNCNNOOOIO__o *)
                       thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
              System_Action<object>___ctor();
              if (pNVar4 != (NCNJEIBHGBH_o *)0x0) {
                NCNJEIBHGBH__DPBCMGAOJOP(pNVar4,pSVar5,(MethodInfo *)0x0);
                pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                System_Action___ctor();
                if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                Nekki_Utils_GlobalTimer__remove_OnTick(pSVar3,(MethodInfo *)0x0);
                __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
                pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                System_Action___ctor();
                if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
                  FKDLCJJOGIP__DAGFKDGOBBF(__this_00,pSVar3,(MethodInfo *)0x0);
                  if ((__this->fields).JNMOCNBAIMC == (System_Collections_IEnumerator_o *)0x0) {
                    return;
                  }
                  pPVar6 = CoroutineManager__get_Current((MethodInfo *)0x0);
                  if (pPVar6 != (PBAKFOBIHEG_o *)0x0) {
                    /* try { // try from 036871e4 to 0378738f has its CatchHandler @ 036871e4
                       catch() { ... } // from try @ 036871e4 with catch @ 036871e4
                       catch() { ... } // from try @ 036873a8 with catch @ 036871e4
                       catch() { ... } // from try @ 036873f8 with catch @ 036871e4
                       catch() { ... } // from try @ 03687438 with catch @ 036871e4 */
                    pPVar8 = pPVar6->klass;
                    ppSVar1 = &(__this->fields).JNMOCNBAIMC;
                    pSVar13 = *ppSVar1;
                    uVar2._0_1_ = (pPVar8->_2).rank;
                    uVar2._1_1_ = (pPVar8->_2).minimumAlignment;
                    uVar9 = (ulong)uVar2;
                    if (uVar9 != 0) {
                      piVar10 = &((pPVar8->_1).interfaceOffsets)->offset;
                      do {
                        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                          pVVar7 = pPVar8->vtable + (*piVar10 + 1);
                          goto LAB_0368725c;
                        }
                        uVar9 = uVar9 - 1;
                        piVar10 = piVar10 + 4;
                      } while (uVar9 != 0);
                    }
                    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar6,PBAKFOBIHEG_TypeInfo,1);
LAB_0368725c:
                    (*pVVar7->methodPtr)(pPVar6,pSVar13,pVVar7->method);
                    *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
                    thunk_FUN_01c20e04(ppSVar1,0);
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

