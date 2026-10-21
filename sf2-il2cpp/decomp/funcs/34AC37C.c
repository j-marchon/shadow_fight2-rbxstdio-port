// Nekki.SF2.GUI.Map.ContentRaid$$Init @ RVA 0x34AC37C

void Nekki_SF2_GUI_Map_ContentRaid__Init
               (Nekki_SF2_GUI_Map_ContentRaid_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  bool value;
  bool bVar4;
  int32_t iVar5;
  EEGDOGKBLNG_o *__this_00;
  RaidInfoPrize_o *pRVar6;
  RaidInfo_o *pRVar7;
  UnityEngine_CanvasGroup_o *pUVar8;
  RaidInfoBattlePassRewards_o *pRVar9;
  RaidInfoTimeLeft_o *pRVar10;
  APJKDKCGNHG_o *pAVar11;
  APJKDKCGNHG_CCPCHLLGJJE_o *pAVar12;
  APJKDKCGNHG_CCPCHLLGJJE_o **ppAVar13;
  APJKDKCGNHG_PABADKLLFHB_o *pAVar14;
  Il2CppObject *pIVar15;
  long lVar16;
  VirtualInvokeData *pVVar17;
  undefined8 uVar18;
  System_String_o *pSVar19;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  System_IDisposable_o *value_00;
  EGMONPGHHDP_o *pEVar20;
  Il2CppRGCTXData *KJODHCEONMG;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar21;
  UnityEngine_GameObject_o *pUVar22;
  MOAHCJAFGNJ_ODGLOLLAENF_o *pMVar23;
  System_Collections_Generic_List_KCEKMOECEJK__o *pSVar24;
  System_Object_array *pSVar25;
  Il2CppClass *pIVar26;
  BHEDGAKGKPO_StaticFields *pBVar27;
  ulong uVar28;
  int32_t *piVar29;
  Nekki_SF2_GUI_LabelAlias_o *pNVar30;
  UniRx_SerialDisposable_o *__this_01;
  UnityEngine_CanvasGroup_o **ppUVar31;
  bool value_01;
  UnityEngine_CanvasGroup_o **ppUVar32;
  UnityEngine_CanvasGroup_o **ppUVar33;
  UnityEngine_CanvasGroup_o **ppUVar34;
  System_Collections_Generic_List_object__o *pSVar35;
  int32_t local_64;
  
  if ((DAT_04568538 & 1) == 0) {
    FUN_01bab630(&APJKDKCGNHG_TypeInfo);
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&APJKDKCGNHG_CCPCHLLGJJE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentRaid_KPDBPHNOALH__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_LJLLAKHOFFF_EIJGFNBCPLK__);
    FUN_01bab630(&Method_LJLLAKHOFFF_IFBBIDIEBEL__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_Clear__);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&APJKDKCGNHG_PABADKLLFHB_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_16668);
    FUN_01bab630(&StringLiteral_2435);
    DAT_04568538 = 1;
  }
  local_64 = 0;
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) {
    return;
  }
  bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
  if (((BANHBMINMMP->klass->_2).naturalAligment < bVar1) ||
     ((BANHBMINMMP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(BANHBMINMMP);
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    iVar5 = EEGDOGKBLNG__IGIHHCEONEM(__this_00,(MethodInfo *)0x0);
    value = OHDDKGHEEPA__BIFOFLHLABM((OHDDKGHEEPA_o *)BANHBMINMMP,iVar5,(MethodInfo *)0x0);
    (*(BANHBMINMMP->klass->vtable)._8_PEOJNPEINED.methodPtr)
              (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._8_PEOJNPEINED.method);
    if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar23 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
    if ((pMVar23 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) &&
       (__this != (Nekki_SF2_GUI_Map_ContentRaid_o *)0x0)) {
      pSVar24 = (__this->fields).super.MAPPKOGKCBA;
      (__this->fields).super.FDGAGAEIAOO = (uint)((pMVar23->fields).CGEBFCBMLKC == 0);
      if (pSVar24 != (System_Collections_Generic_List_KCEKMOECEJK__o *)0x0) {
        iVar5 = (pSVar24->fields)._size;
        (pSVar24->fields)._size = 0;
        (pSVar24->fields)._version = (pSVar24->fields)._version + 1;
        if (0 < iVar5) {
          System_Array__Clear((System_Array_o *)(pSVar24->fields)._items,0,iVar5,(MethodInfo *)0x0);
        }
        if (value) {
          pRVar6 = (__this->fields)._raidInfoPrize;
          if (pRVar6 == (RaidInfoPrize_o *)0x0) goto LAB_035ace98;
          RaidInfoPrize__Init(pRVar6,(MethodInfo *)0x0);
          pRVar6 = (__this->fields)._raidInfoPrize;
          if (pRVar6 == (RaidInfoPrize_o *)0x0) goto LAB_035ace98;
          RaidInfoPrize__UpdateInfo(pRVar6,(OHDDKGHEEPA_o *)BANHBMINMMP,(MethodInfo *)0x0);
          pRVar7 = (__this->fields)._raidInfo;
          if (pRVar7 == (RaidInfo_o *)0x0) goto LAB_035ace98;
          RaidInfo__Init(pRVar7,(MethodInfo *)0x0);
          pRVar7 = (__this->fields)._raidInfo;
          if (pRVar7 == (RaidInfo_o *)0x0) goto LAB_035ace98;
          RaidInfo__UpdateInfo(pRVar7,(OHDDKGHEEPA_o *)BANHBMINMMP,(MethodInfo *)0x0);
          pRVar7 = (__this->fields)._raidInfo;
          if (pRVar7 == (RaidInfo_o *)0x0) goto LAB_035ace98;
          pUVar8 = (UnityEngine_CanvasGroup_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pRVar7,
                              Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
          ppUVar34 = &(__this->fields).IHIJKCOAINP;
          *ppUVar34 = pUVar8;
          thunk_FUN_01c20e04(ppUVar34,pUVar8);
          pRVar6 = (__this->fields)._raidInfoPrize;
          if (pRVar6 == (RaidInfoPrize_o *)0x0) goto LAB_035ace98;
          pUVar8 = (UnityEngine_CanvasGroup_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pRVar6,
                              Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
          ppUVar33 = &(__this->fields).NPCLEFDKJCL;
          *ppUVar33 = pUVar8;
          thunk_FUN_01c20e04(ppUVar33,pUVar8);
          pRVar9 = (__this->fields)._raidInfoBattlePassRewards;
          if (pRVar9 == (RaidInfoBattlePassRewards_o *)0x0) goto LAB_035ace98;
          pUVar8 = (UnityEngine_CanvasGroup_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pRVar9,
                              Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
          ppUVar31 = &(__this->fields).ODHKGOHNPME;
          *ppUVar31 = pUVar8;
          thunk_FUN_01c20e04(ppUVar31,pUVar8);
          pRVar10 = (__this->fields)._raidInfoEventTime;
          if (pRVar10 == (RaidInfoTimeLeft_o *)0x0) goto LAB_035ace98;
          pUVar8 = (UnityEngine_CanvasGroup_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pRVar10,
                              Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
          ppUVar32 = &(__this->fields).FLOKCFLKENB;
          *ppUVar32 = pUVar8;
          thunk_FUN_01c20e04(ppUVar32,pUVar8);
          pSVar35 = (System_Collections_Generic_List_object__o *)(__this->fields).super.MAPPKOGKCBA;
          pAVar11 = (APJKDKCGNHG_o *)thunk_FUN_01bda818(APJKDKCGNHG_TypeInfo);
          APJKDKCGNHG___ctor(pAVar11,(MethodInfo *)0x0);
          pUVar8 = (__this->fields).IHIJKCOAINP;
          pAVar12 = (APJKDKCGNHG_CCPCHLLGJJE_o *)
                    thunk_FUN_01bda818(APJKDKCGNHG_CCPCHLLGJJE_TypeInfo);
          APJKDKCGNHG_CCPCHLLGJJE___ctor
                    (pAVar12,(Il2CppObject *)pUVar8,Method_LJLLAKHOFFF_EIJGFNBCPLK__,
                     (MethodInfo *)0x0);
          if (pAVar11 == (APJKDKCGNHG_o *)0x0) goto LAB_035ace98;
          ppAVar13 = &(pAVar11->fields).PJIACDFEPAP;
          *ppAVar13 = pAVar12;
          thunk_FUN_01c20e04(ppAVar13,pAVar12);
          pUVar8 = *ppUVar34;
          pAVar14 = (APJKDKCGNHG_PABADKLLFHB_o *)
                    thunk_FUN_01bda818(APJKDKCGNHG_PABADKLLFHB_TypeInfo);
          APJKDKCGNHG_PABADKLLFHB___ctor
                    (pAVar14,(Il2CppObject *)pUVar8,Method_LJLLAKHOFFF_IFBBIDIEBEL__,
                     (MethodInfo *)0x0);
          (pAVar11->fields).GLGIFNCMMAK = pAVar14;
          thunk_FUN_01c20e04(&pAVar11->fields,pAVar14);
          lVar16 = Method_System_Collections_Generic_List<KCEKMOECEJK>_Add__;
          if (pSVar35 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035ace98;
          pSVar25 = (pSVar35->fields)._items;
          (pSVar35->fields)._version = (pSVar35->fields)._version + 1;
          if (pSVar25 == (System_Object_array *)0x0) goto LAB_035ace98;
          uVar3 = (pSVar35->fields)._size;
          if (uVar3 < (uint)pSVar25->max_length) {
            (pSVar35->fields)._size = uVar3 + 1;
            pSVar25->m_Items[(int)uVar3] = (Il2CppObject *)pAVar11;
            thunk_FUN_01c20e04(pSVar25->m_Items + (int)uVar3,pAVar11);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar35,(Il2CppObject *)pAVar11,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          pRVar10 = (__this->fields)._raidInfoEventTime;
          if (pRVar10 == (RaidInfoTimeLeft_o *)0x0) goto LAB_035ace98;
          bVar4 = RaidInfoTimeLeft__IsTimeEnded(pRVar10,BANHBMINMMP,(MethodInfo *)0x0);
          if (bVar4) {
            value_01 = false;
          }
          else {
            pRVar10 = (__this->fields)._raidInfoEventTime;
            if (pRVar10 == (RaidInfoTimeLeft_o *)0x0) goto LAB_035ace98;
            RaidInfoTimeLeft__UpdateInfo(pRVar10,BANHBMINMMP,(MethodInfo *)0x0);
            pSVar35 = (System_Collections_Generic_List_object__o *)
                      (__this->fields).super.MAPPKOGKCBA;
            pAVar11 = (APJKDKCGNHG_o *)thunk_FUN_01bda818(APJKDKCGNHG_TypeInfo);
            APJKDKCGNHG___ctor(pAVar11,(MethodInfo *)0x0);
            pUVar8 = (__this->fields).FLOKCFLKENB;
            pAVar12 = (APJKDKCGNHG_CCPCHLLGJJE_o *)
                      thunk_FUN_01bda818(APJKDKCGNHG_CCPCHLLGJJE_TypeInfo);
            APJKDKCGNHG_CCPCHLLGJJE___ctor
                      (pAVar12,(Il2CppObject *)pUVar8,Method_LJLLAKHOFFF_EIJGFNBCPLK__,
                       (MethodInfo *)0x0);
            if (pAVar11 == (APJKDKCGNHG_o *)0x0) goto LAB_035ace98;
            ppAVar13 = &(pAVar11->fields).PJIACDFEPAP;
            *ppAVar13 = pAVar12;
            thunk_FUN_01c20e04(ppAVar13,pAVar12);
            pUVar8 = *ppUVar32;
            pAVar14 = (APJKDKCGNHG_PABADKLLFHB_o *)
                      thunk_FUN_01bda818(APJKDKCGNHG_PABADKLLFHB_TypeInfo);
            APJKDKCGNHG_PABADKLLFHB___ctor
                      (pAVar14,(Il2CppObject *)pUVar8,Method_LJLLAKHOFFF_IFBBIDIEBEL__,
                       (MethodInfo *)0x0);
            (pAVar11->fields).GLGIFNCMMAK = pAVar14;
            thunk_FUN_01c20e04(&pAVar11->fields,pAVar14);
            lVar16 = Method_System_Collections_Generic_List<KCEKMOECEJK>_Add__;
            if (pSVar35 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035ace98;
            pSVar25 = (pSVar35->fields)._items;
            (pSVar35->fields)._version = (pSVar35->fields)._version + 1;
            if (pSVar25 == (System_Object_array *)0x0) goto LAB_035ace98;
            uVar3 = (pSVar35->fields)._size;
            if (uVar3 < (uint)pSVar25->max_length) {
              (pSVar35->fields)._size = uVar3 + 1;
              pSVar25->m_Items[(int)uVar3] = (Il2CppObject *)pAVar11;
              thunk_FUN_01c20e04(pSVar25->m_Items + (int)uVar3,pAVar11);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar35,(Il2CppObject *)pAVar11,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                        );
            }
            value_01 = true;
          }
          pSVar35 = (System_Collections_Generic_List_object__o *)(__this->fields).super.MAPPKOGKCBA;
          pAVar11 = (APJKDKCGNHG_o *)thunk_FUN_01bda818(APJKDKCGNHG_TypeInfo);
          APJKDKCGNHG___ctor(pAVar11,(MethodInfo *)0x0);
          pUVar8 = (__this->fields).NPCLEFDKJCL;
          pAVar12 = (APJKDKCGNHG_CCPCHLLGJJE_o *)
                    thunk_FUN_01bda818(APJKDKCGNHG_CCPCHLLGJJE_TypeInfo);
          APJKDKCGNHG_CCPCHLLGJJE___ctor
                    (pAVar12,(Il2CppObject *)pUVar8,Method_LJLLAKHOFFF_EIJGFNBCPLK__,
                     (MethodInfo *)0x0);
          if (pAVar11 == (APJKDKCGNHG_o *)0x0) goto LAB_035ace98;
          ppAVar13 = &(pAVar11->fields).PJIACDFEPAP;
          *ppAVar13 = pAVar12;
          thunk_FUN_01c20e04(ppAVar13,pAVar12);
          pUVar8 = *ppUVar33;
          pAVar14 = (APJKDKCGNHG_PABADKLLFHB_o *)
                    thunk_FUN_01bda818(APJKDKCGNHG_PABADKLLFHB_TypeInfo);
          APJKDKCGNHG_PABADKLLFHB___ctor
                    (pAVar14,(Il2CppObject *)pUVar8,Method_LJLLAKHOFFF_IFBBIDIEBEL__,
                     (MethodInfo *)0x0);
          (pAVar11->fields).GLGIFNCMMAK = pAVar14;
          thunk_FUN_01c20e04(&pAVar11->fields,pAVar14);
          lVar16 = Method_System_Collections_Generic_List<KCEKMOECEJK>_Add__;
          if (pSVar35 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035ace98;
          pSVar25 = (pSVar35->fields)._items;
          (pSVar35->fields)._version = (pSVar35->fields)._version + 1;
          if (pSVar25 == (System_Object_array *)0x0) goto LAB_035ace98;
          uVar3 = (pSVar35->fields)._size;
          if (uVar3 < (uint)pSVar25->max_length) {
            (pSVar35->fields)._size = uVar3 + 1;
            pSVar25->m_Items[(int)uVar3] = (Il2CppObject *)pAVar11;
            thunk_FUN_01c20e04(pSVar25->m_Items + (int)uVar3,pAVar11);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar35,(Il2CppObject *)pAVar11,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar20 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
          if (pEVar20 == (EGMONPGHHDP_o *)0x0) goto LAB_035ace98;
          KJODHCEONMG = (Il2CppRGCTXData *)EGMONPGHHDP__AAKENHFIHJF(pEVar20,(MethodInfo *)0x0);
          if (BANHBMINMMP[1].klass == (OOMHDDBCBJP_c *)0x0) goto LAB_035ace98;
          bVar4 = PCOEHCPGBBG__BDLEIEHBFAD
                            ((System_String_o *)(BANHBMINMMP[1].klass)->rgctx_data,(MethodInfo *)0x0
                            );
          if (!bVar4) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pEVar20 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
            if (pEVar20 == (EGMONPGHHDP_o *)0x0) goto LAB_035ace98;
            pJVar21 = EGMONPGHHDP__OKBKFJKEAAG(pEVar20,(MethodInfo *)0x0);
            if (pJVar21 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
              if (BANHBMINMMP[1].klass == (OOMHDDBCBJP_c *)0x0) goto LAB_035ace98;
              KJODHCEONMG = (BANHBMINMMP[1].klass)->rgctx_data;
            }
          }
          pRVar9 = (__this->fields)._raidInfoBattlePassRewards;
          if (pRVar9 == (RaidInfoBattlePassRewards_o *)0x0) goto LAB_035ace98;
          bVar4 = RaidInfoBattlePassRewards__CheckBattlePassRewards
                            (pRVar9,(OHDDKGHEEPA_o *)BANHBMINMMP,(System_String_o *)KJODHCEONMG,
                             (MethodInfo *)0x0);
          if (bVar4) {
            pRVar9 = (__this->fields)._raidInfoBattlePassRewards;
            if (pRVar9 == (RaidInfoBattlePassRewards_o *)0x0) goto LAB_035ace98;
            RaidInfoBattlePassRewards__UpdateInfo
                      (pRVar9,(OHDDKGHEEPA_o *)BANHBMINMMP,(System_String_o *)KJODHCEONMG,
                       (MethodInfo *)0x0);
            pSVar35 = (System_Collections_Generic_List_object__o *)
                      (__this->fields).super.MAPPKOGKCBA;
            pAVar11 = (APJKDKCGNHG_o *)thunk_FUN_01bda818(APJKDKCGNHG_TypeInfo);
            APJKDKCGNHG___ctor(pAVar11,(MethodInfo *)0x0);
            pUVar8 = (__this->fields).ODHKGOHNPME;
            pAVar12 = (APJKDKCGNHG_CCPCHLLGJJE_o *)
                      thunk_FUN_01bda818(APJKDKCGNHG_CCPCHLLGJJE_TypeInfo);
            APJKDKCGNHG_CCPCHLLGJJE___ctor
                      (pAVar12,(Il2CppObject *)pUVar8,Method_LJLLAKHOFFF_EIJGFNBCPLK__,
                       (MethodInfo *)0x0);
            if (pAVar11 == (APJKDKCGNHG_o *)0x0) goto LAB_035ace98;
            ppAVar13 = &(pAVar11->fields).PJIACDFEPAP;
            *ppAVar13 = pAVar12;
            thunk_FUN_01c20e04(ppAVar13,pAVar12);
            pUVar8 = *ppUVar31;
            pAVar14 = (APJKDKCGNHG_PABADKLLFHB_o *)
                      thunk_FUN_01bda818(APJKDKCGNHG_PABADKLLFHB_TypeInfo);
            APJKDKCGNHG_PABADKLLFHB___ctor
                      (pAVar14,(Il2CppObject *)pUVar8,Method_LJLLAKHOFFF_IFBBIDIEBEL__,
                       (MethodInfo *)0x0);
            (pAVar11->fields).GLGIFNCMMAK = pAVar14;
            thunk_FUN_01c20e04(&pAVar11->fields,pAVar14);
            lVar16 = Method_System_Collections_Generic_List<KCEKMOECEJK>_Add__;
            if (pSVar35 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035ace98;
            pSVar25 = (pSVar35->fields)._items;
            (pSVar35->fields)._version = (pSVar35->fields)._version + 1;
            if (pSVar25 == (System_Object_array *)0x0) goto LAB_035ace98;
            uVar3 = (pSVar35->fields)._size;
            if (uVar3 < (uint)pSVar25->max_length) {
              (pSVar35->fields)._size = uVar3 + 1;
              pSVar25->m_Items[(int)uVar3] = (Il2CppObject *)pAVar11;
              thunk_FUN_01c20e04(pSVar25->m_Items + (int)uVar3,pAVar11);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar35,(Il2CppObject *)pAVar11,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                        );
            }
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          pUVar22 = (__this->fields)._deniedEnterRaid;
          if (pUVar22 == (UnityEngine_GameObject_o *)0x0) goto LAB_035ace98;
          UnityEngine_GameObject__SetActive(pUVar22,false,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_ContentToggle__JDPMKEABGPA
                    ((Nekki_SF2_GUI_Map_ContentToggle_o *)__this,(MethodInfo *)0x0);
        }
        else {
          pIVar15 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                              (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar16 = FUN_01bab718(string___TypeInfo,1);
          if (lVar16 == 0) goto LAB_035ace98;
          if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          *(undefined8 *)(lVar16 + 0x20) = StringLiteral_2435;
          thunk_FUN_01c20e04();
          uVar18 = StringLiteral_16668;
          if (pIVar15 == (Il2CppObject *)0x0) goto LAB_035ace98;
          pIVar26 = pIVar15->klass;
          uVar2._0_1_ = (pIVar26->_2).rank;
          uVar2._1_1_ = (pIVar26->_2).minimumAlignment;
          uVar28 = (ulong)uVar2;
          if (uVar28 != 0) {
            piVar29 = &((pIVar26->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar29 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar17 = pIVar26->vtable + (*piVar29 + 0xc);
                goto LAB_035ac964;
              }
              uVar28 = uVar28 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar28 != 0);
          }
          pVVar17 = (VirtualInvokeData *)FUN_01b81914(pIVar15,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035ac964:
          uVar18 = (*pVVar17->methodPtr)(pIVar15,uVar18,lVar16,pVVar17->method);
          pNVar30 = (__this->fields)._danLbl;
          if (pNVar30 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035ace98;
          (*(pNVar30->klass->vtable)._23_set_color.methodPtr)
                    (0,0,0,0,pNVar30,(pNVar30->klass->vtable)._23_set_color.method);
          pNVar30 = (__this->fields)._danLbl;
          local_64 = OHDDKGHEEPA__GOKIINPLKFL((OHDDKGHEEPA_o *)BANHBMINMMP,(MethodInfo *)0x0);
          pSVar19 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
          if (pNVar30 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035ace98;
          (*(pNVar30->klass->vtable)._75_set_text.methodPtr)
                    (pNVar30,pSVar19,(pNVar30->klass->vtable)._75_set_text.method);
          pNVar30 = (__this->fields)._tourLabel;
          if (pNVar30 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035ace98;
          (*(pNVar30->klass->vtable)._75_set_text.methodPtr)
                    (pNVar30,uVar18,(pNVar30->klass->vtable)._75_set_text.method);
          pUVar22 = (__this->fields)._deniedEnterRaid;
          if (pUVar22 == (UnityEngine_GameObject_o *)0x0) goto LAB_035ace98;
          UnityEngine_GameObject__SetActive(pUVar22,true,(MethodInfo *)0x0);
          pNVar30 = (__this->fields)._danLbl;
          if ((pNVar30 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
             (pUVar22 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar30,(MethodInfo *)0x0),
             pUVar22 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035ace98;
          UnityEngine_GameObject__SetActive(pUVar22,true,(MethodInfo *)0x0);
          __this_01 = (__this->fields).LIFKALBPENI;
          pIVar15 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                              (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          source = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar15,(MethodInfo *)0x0);
          onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
          System_Action<Unit>___ctor();
          value_00 = UniRx_ObservableExtensions__Subscribe<Unit>
                               ((System_IObservable_T__o *)source,onNext,
                                Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
          if (__this_01 == (UniRx_SerialDisposable_o *)0x0) goto LAB_035ace98;
          UniRx_SerialDisposable__set_Disposable(__this_01,value_00,(MethodInfo *)0x0);
          value_01 = false;
          bVar4 = false;
        }
        pRVar7 = (__this->fields)._raidInfo;
        if ((pRVar7 != (RaidInfo_o *)0x0) &&
           (pUVar22 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pRVar7,(MethodInfo *)0x0),
           pUVar22 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar22,value,(MethodInfo *)0x0);
          pRVar6 = (__this->fields)._raidInfoPrize;
          if ((pRVar6 != (RaidInfoPrize_o *)0x0) &&
             (pUVar22 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pRVar6,(MethodInfo *)0x0),
             pUVar22 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar22,value,(MethodInfo *)0x0);
            pRVar9 = (__this->fields)._raidInfoBattlePassRewards;
            if ((pRVar9 != (RaidInfoBattlePassRewards_o *)0x0) &&
               (pUVar22 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pRVar9,(MethodInfo *)0x0),
               pUVar22 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar22,bVar4,(MethodInfo *)0x0);
              pRVar10 = (__this->fields)._raidInfoEventTime;
              if ((pRVar10 != (RaidInfoTimeLeft_o *)0x0) &&
                 (pUVar22 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pRVar10,(MethodInfo *)0x0),
                 pUVar22 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar22,value_01,(MethodInfo *)0x0);
                pNVar30 = (__this->fields)._danLbl;
                if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                if (pNVar30 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  pBVar27 = BHEDGAKGKPO_TypeInfo->static_fields;
                  (*(pNVar30->klass->vtable)._23_set_color.methodPtr)
                            ((pBVar27->FHIAKPJBBCB).fields.r,(pBVar27->FHIAKPJBBCB).fields.g,
                             (pBVar27->FHIAKPJBBCB).fields.b,(pBVar27->FHIAKPJBBCB).fields.a,pNVar30
                             ,(pNVar30->klass->vtable)._23_set_color.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_035ace98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

