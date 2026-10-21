// TypeDefIndex 1269
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class ClanRaidPartyTable : MonoBehaviour
// Fields:
//   private const int LGBEPKEBKEK = 0;
//   public const string MEMBER_STATUS_ONLINE = "MiscSprites.indicatorGreen";
//   public const string MEMBER_STATUS_OFFLINE = "MiscSprites.indicatorRed";
//   public const string MEMBER_STATUS_IN_RAID = "RaidMisc.swords";
//   private SimpleScroll PDHMLFAMNCO; // 0x20
//   private NLFLMJPNOLF PMHMLJDMHFP; // 0x28
//   private bool CBFOBEFKNJG; // 0x30
//   private List<GKLPDMLELJF> IAODMBPIAOC; // 0x38
//   private ClanRaidPartyPlayerCell KFCHMBGIPJK; // 0x40

// ===== private void NCDOMAGEGCF()  [RVA 0x314C5B0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyTable$$NCDOMAGEGCF @ RVA 0x314C5B0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__NCDOMAGEGCF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar2;
  System_Collections_Generic_List_GKLPDMLELJF__o *__this_01;
  GKLPDMLELJF_o *HEHMPFLAEGE;
  UnityEngine_Component_o *__this_02;
  PlayerData_o *__this_03;
  int64_t iVar3;
  int index;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *pNVar4;
  long lVar5;
  
  if ((DAT_045667d2 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ClanRaidPartyPlayerCell>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ClanRaidPartyPlayerCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045667d2 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).PDHMLFAMNCO;
    if (pNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar2,(MethodInfo *)0x0);
      __this_01 = (__this->fields).IAODMBPIAOC;
      if (__this_01 != (System_Collections_Generic_List_GKLPDMLELJF__o *)0x0) {
        index = 0;
        do {
          if ((__this_01->fields)._size <= index) {
            return;
          }
          HEHMPFLAEGE = (GKLPDMLELJF_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_01,index,
                                   Method_System_Collections_Generic_List<GKLPDMLELJF>_get_Item__);
          pNVar4 = (__this->fields).KFCHMBGIPJK;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          __this_02 = (UnityEngine_Component_o *)
                      UnityEngine_Object__Instantiate<object>
                                ((Il2CppObject *)pNVar4,
                                 Method_UnityEngine_Object_Instantiate<ClanRaidPartyPlayerCell>__);
          if ((__this_02 == (UnityEngine_Component_o *)0x0) ||
             (pNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *)
                       UnityEngine_Component__GetComponent<object>
                                 (__this_02,
                                  Method_UnityEngine_Component_GetComponent<ClanRaidPartyPlayerCell>__
                                 ),
             pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *)0x0)) break;
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__Init
                    (pNVar4,HEHMPFLAEGE,(MethodInfo *)0x0);
          if (HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) {
            if ((__this->fields).CBFOBEFKNJG == false) {
              bVar1 = false;
            }
            else {
              lVar5 = (HEHMPFLAEGE->fields).ANAJGHJEEOC;
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_03 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
              if (__this_03 == (PlayerData_o *)0x0) break;
              iVar3 = PlayerData__APCMGOCHMGC(__this_03,(MethodInfo *)0x0);
              bVar1 = lVar5 != iVar3;
            }
            Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__SetKickable
                      (pNVar4,bVar1,(MethodInfo *)0x0);
          }
          pNVar2 = (__this->fields).PDHMLFAMNCO;
          if (pNVar2 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) break;
          Nekki_SF2_GUI_SimpleScroll__AddItem
                    (pNVar2,(Nekki_SF2_GUI_BaseScrollItem_o *)pNVar4,true,(MethodInfo *)0x0);
          __this_01 = (__this->fields).IAODMBPIAOC;
          index = index + 1;
        } while (__this_01 != (System_Collections_Generic_List_GKLPDMLELJF__o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Reload(NLFLMJPNOLF NLOFDAJCIML)  [RVA 0x314C774]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyTable$$Reload @ RVA 0x314C774

/* WARNING: Removing unreachable block (ram,0x0324ca7c) */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__Reload
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this,
               NLFLMJPNOLF_o *NLOFDAJCIML,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  IBMLPPNMDCI_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar4;
  System_Collections_Generic_IEnumerator_T__o *pSVar5;
  VirtualInvokeData *pVVar6;
  int64_t item;
  HCKCBFOGMMJ_o *__this_01;
  System_Action_LFELBGMCDHD__o *BLMFLPJJMPF;
  System_Collections_Generic_IEnumerator_T__c *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  NLFLMJPNOLF_o **ppNVar10;
  
  if ((DAT_045667d3 & 1) == 0) {
    FUN_01bab630(&System_Action<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_MJLGFNFIHFJ__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<long>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_GetEnumerator__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    DAT_045667d3 = 1;
  }
  ppNVar10 = &(__this->fields).PMHMLJDMHFP;
  *ppNVar10 = NLOFDAJCIML;
  thunk_FUN_01c20e04(ppNVar10,NLOFDAJCIML);
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo);
  IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
  if ((*ppNVar10 != (NLFLMJPNOLF_o *)0x0) &&
     (pGVar4 = ((*ppNVar10)->fields).MABPCBMOECE,
     pGVar4 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    pSVar5 = Google_Protobuf_Collections_RepeatedField<long>__GetEnumerator
                       (pGVar4,
                        Method_Google_Protobuf_Collections_RepeatedField<long>_GetEnumerator__);
    if (pSVar5 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar7 = pSVar5->klass;
      uVar1._0_1_ = (pSVar7->_2).rank;
      uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar6 = pSVar7->vtable + *piVar9;
            goto LAB_0324c8dc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0324c8dc:
      uVar8 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      if ((uVar8 & 1) == 0) {
        if (pSVar5 == (System_Collections_Generic_IEnumerator_T__o *)0x0) goto LAB_0324c9c0;
        pSVar7 = pSVar5->klass;
        uVar3._0_1_ = (pSVar7->_2).rank;
        uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar3;
        if (uVar8 == 0) goto LAB_0324c998;
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        goto LAB_0324c980;
      }
      pSVar7 = pSVar5->klass;
      uVar2._0_1_ = (pSVar7->_2).rank;
      uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar2;
      if (uVar8 != 0) {
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerator<long>_TypeInfo) {
            pVVar6 = pSVar7->vtable + *piVar9;
            goto LAB_0324c938;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(pSVar5,System_Collections_Generic_IEnumerator<long>_TypeInfo,0);
LAB_0324c938:
      item = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      if (__this_00 == (IBMLPPNMDCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pGVar4 = (__this_00->fields).EHBNKDHKJNI;
      if (pGVar4 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Google_Protobuf_Collections_RepeatedField<long>__Add
                (pGVar4,item,Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    } while( true );
  }
  goto LAB_0324ca74;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0324c980:
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar6 = pSVar7->vtable + *piVar9;
      goto LAB_0324c9b4;
    }
  }
LAB_0324c998:
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_IDisposable_TypeInfo,0);
LAB_0324c9b4:
  (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
LAB_0324c9c0:
  if ((__this_00 != (IBMLPPNMDCI_o *)0x0) &&
     (pGVar4 = (__this_00->fields).EHBNKDHKJNI,
     pGVar4 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    if ((pGVar4->fields).count < 1) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_LFELBGMCDHD__o *)
                  thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (HCKCBFOGMMJ_o *)0x0) {
      HCKCBFOGMMJ__EFCMPBGIEGJ(__this_01,__this_00,BLMFLPJJMPF,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0324ca74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(SimpleScroll MGFBPKIBNJI, NLFLMJPNOLF AOMBONOOJFP, ClanRaidPartyPlayerCell GEFKGPIDOGL)  [RVA 0x314CB34]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyTable$$Init @ RVA 0x314CB34

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this,
               Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,NLFLMJPNOLF_o *AOMBONOOJFP,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *GEFKGPIDOGL,
               MethodInfo *method)

{
  bool bVar1;
  NLFLMJPNOLF_o **ppNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o **ppNVar3;
  RaidClansManager_o *pEVar4;
  ClanRaidsController_o *__this_00;
  SFRequestSender_o *pKVar5;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  DCHAJIMIFHP_o *__this_01;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar6;
  
  if ((DAT_045667d4 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_BADMDODBKLB__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_20480/*"refresh_player_event"*/);
    DAT_045667d4 = 1;
  }
  ppNVar6 = &(__this->fields).PDHMLFAMNCO;
  *ppNVar6 = MGFBPKIBNJI;
  thunk_FUN_01c20e04(ppNVar6,MGFBPKIBNJI);
  if (*ppNVar6 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(*ppNVar6,(MethodInfo *)0x0);
    ppNVar2 = &(__this->fields).PMHMLJDMHFP;
    *ppNVar2 = AOMBONOOJFP;
    thunk_FUN_01c20e04(ppNVar2,AOMBONOOJFP);
    ppNVar3 = &(__this->fields).KFCHMBGIPJK;
    *ppNVar3 = GEFKGPIDOGL;
    thunk_FUN_01c20e04(ppNVar3,GEFKGPIDOGL);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar4 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    if ((pEVar4 != (RaidClansManager_o *)0x0) &&
       (__this_00 = (pEVar4->fields).GMNJEBCECDA, __this_00 != (ClanRaidsController_o *)0x0)) {
      bVar1 = ClanRaidsController__GPIFDPAIBNH(__this_00,AOMBONOOJFP,(MethodInfo *)0x0);
      (__this->fields).CBFOBEFKNJG = bVar1;
      pKVar5 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)(ulong)bVar1);
      if (pKVar5 != (SFRequestSender_o *)0x0) {
        __this_01 = (pKVar5->fields).super.FNHOHLGNHGN;
        EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (DCHAJIMIFHP_o *)0x0) {
          DCHAJIMIFHP__MPFFOIIBAKO(__this_01,StringLiteral_20480/*"refresh_player_event"*/,EKDIECDFOIO,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BADMDODBKLB(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x314CC80]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyTable$$BADMDODBKLB @ RVA 0x314CC80

/* WARNING: Removing unreachable block (ram,0x0324ce98) */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__BADMDODBKLB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this,
               KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Il2CppObject *pIVar4;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar5;
  VirtualInvokeData *pVVar6;
  void *pvVar7;
  NLFLMJPNOLF_o *pNVar8;
  System_Collections_Generic_IEnumerator_T__c *pSVar9;
  ulong uVar10;
  int32_t *piVar11;
  
  if ((DAT_045667d5 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<long>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<GKLPDMLELJF>__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_GetEnumerator__);
    DAT_045667d5 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar4 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<GKLPDMLELJF>__);
    pNVar8 = (__this->fields).PMHMLJDMHFP;
    if ((pNVar8 != (NLFLMJPNOLF_o *)0x0) &&
       (__this_00 = (pNVar8->fields).MABPCBMOECE,
       __this_00 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
      pSVar5 = Google_Protobuf_Collections_RepeatedField<long>__GetEnumerator
                         (__this_00,
                          Method_Google_Protobuf_Collections_RepeatedField<long>_GetEnumerator__);
      if (pSVar5 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        pSVar9 = pSVar5->klass;
        uVar1._0_1_ = (pSVar9->_2).rank;
        uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) {
          piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar6 = pSVar9->vtable + *piVar11;
              goto LAB_0324cd90;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        method = (MethodInfo *)0x0;
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5);
LAB_0324cd90:
        uVar10 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
        if ((uVar10 & 1) == 0) goto LAB_0324ce14;
        pSVar9 = pSVar5->klass;
        uVar2._0_1_ = (pSVar9->_2).rank;
        uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar2;
        if (uVar10 != 0) {
          piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IEnumerator<long>_TypeInfo) {
              pVVar6 = pSVar9->vtable + *piVar11;
              goto LAB_0324cdec;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        method = (MethodInfo *)0x0;
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5);
LAB_0324cdec:
        pvVar7 = (void *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
        if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while (pIVar4[1].monitor != pvVar7);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__Reload
                (__this,(__this->fields).PMHMLJDMHFP,method);
LAB_0324ce14:
      if (pSVar5 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
        pSVar9 = pSVar5->klass;
        uVar3._0_1_ = (pSVar9->_2).rank;
        uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar3;
        if (uVar10 != 0) {
          piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)System_IDisposable_TypeInfo) {
              pVVar6 = pSVar9->vtable + *piVar11;
              goto LAB_0324ce68;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_IDisposable_TypeInfo,0);
LAB_0324ce68:
        (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x314CF50]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyTable$$.ctor @ RVA 0x314CF50

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GKLPDMLELJF__o *__this_00;
  System_Collections_Generic_List_GKLPDMLELJF__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667d6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GKLPDMLELJF>_TypeInfo);
    DAT_045667d6 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_GKLPDMLELJF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GKLPDMLELJF>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GKLPDMLELJF>__ctor__);
  ppSVar1 = &(__this->fields).IAODMBPIAOC;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void MJLGFNFIHFJ(LFELBGMCDHD IMMNELPBGIF)  [RVA 0x314CFD8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyTable$$MJLGFNFIHFJ @ RVA 0x314CFD8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__MJLGFNFIHFJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this,
               LFELBGMCDHD_o *IMMNELPBGIF,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  uint uVar2;
  long lVar3;
  HCKCBFOGMMJ_o *__this_00;
  int64_t OGPGLGPMEPD;
  GKLPDMLELJF_o *item;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_GKLPDMLELJF__o *pSVar4;
  NLFLMJPNOLF_o *pNVar5;
  GKLPDMLELJF_array *pGVar6;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar7;
  int index;
  
  if ((DAT_045667d7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>_Clear__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    DAT_045667d7 = 1;
  }
  if (IMMNELPBGIF == (LFELBGMCDHD_o *)0x0) {
    return;
  }
  pSVar4 = (__this->fields).IAODMBPIAOC;
  if (pSVar4 != (System_Collections_Generic_List_GKLPDMLELJF__o *)0x0) {
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    pNVar5 = (__this->fields).PMHMLJDMHFP;
    if ((pNVar5 != (NLFLMJPNOLF_o *)0x0) &&
       (pGVar7 = (pNVar5->fields).MABPCBMOECE,
       pGVar7 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
      iVar1 = (pGVar7->fields).count;
      if (iVar1 < 1) {
LAB_0324d168:
        lVar3 = Method_System_Collections_Generic_List<GKLPDMLELJF>_Add__;
        pSVar4 = (__this->fields).IAODMBPIAOC;
        if (pSVar4 != (System_Collections_Generic_List_GKLPDMLELJF__o *)0x0) {
          pGVar6 = (pSVar4->fields)._items;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (pGVar6 != (GKLPDMLELJF_array *)0x0) {
            uVar2 = (pSVar4->fields)._size;
            if (uVar2 < (uint)pGVar6->max_length) {
              (pSVar4->fields)._size = uVar2 + 1;
              pGVar6->m_Items[(int)uVar2] = (GKLPDMLELJF_o *)0x0;
              thunk_FUN_01c20e04(pGVar6->m_Items + (int)uVar2,0);
              method_00 = extraout_x1;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)0x0,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
              method_00 = extraout_x1_00;
            }
            Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__NCDOMAGEGCF(__this,method_00);
            return;
          }
        }
      }
      else {
        index = 0;
        do {
          pGVar7 = (pNVar5->fields).MABPCBMOECE;
          if ((pGVar7 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) ||
             (OGPGLGPMEPD = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                                      (pGVar7,index,
                                       Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__
                                      ), __this_00 == (HCKCBFOGMMJ_o *)0x0)) break;
          item = HCKCBFOGMMJ__LLEJFHJIBHC(__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
          lVar3 = Method_System_Collections_Generic_List<GKLPDMLELJF>_Add__;
          if (item != (GKLPDMLELJF_o *)0x0) {
            pSVar4 = (__this->fields).IAODMBPIAOC;
            if (pSVar4 == (System_Collections_Generic_List_GKLPDMLELJF__o *)0x0) break;
            pGVar6 = (pSVar4->fields)._items;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (pGVar6 == (GKLPDMLELJF_array *)0x0) break;
            uVar2 = (pSVar4->fields)._size;
            if (uVar2 < (uint)pGVar6->max_length) {
              (pSVar4->fields)._size = uVar2 + 1;
              pGVar6->m_Items[(int)uVar2] = item;
              thunk_FUN_01c20e04(pGVar6->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          index = index + 1;
          if (iVar1 == index) goto LAB_0324d168;
          pNVar5 = (__this->fields).PMHMLJDMHFP;
        } while (pNVar5 != (NLFLMJPNOLF_o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void OnDestroy()  [RVA 0x314D1FC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyTable$$OnDestroy @ RVA 0x314D1FC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this,MethodInfo *method)

{
  SFRequestSender_o *pKVar1;
  DCHAJIMIFHP_o *__this_00;
  
  pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)__this);
  if ((pKVar1 != (SFRequestSender_o *)0x0) &&
     (__this_00 = (pKVar1->fields).super.FNHOHLGNHGN, __this_00 != (DCHAJIMIFHP_o *)0x0)) {
    DCHAJIMIFHP__GMNFJKHEJLO(__this_00,(Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

