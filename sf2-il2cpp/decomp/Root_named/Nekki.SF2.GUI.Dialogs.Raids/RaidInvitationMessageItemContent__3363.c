// TypeDefIndex 3363
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidInvitationMessageItemContent : MessageItemContent
// Fields:
//   private Button _contentButton; // 0x20
//   private GameObject _hintPrefab; // 0x28
//   private RectTransform _hintPos; // 0x30
//   private ResolutionImage _danImage; // 0x38
//   private LabelAlias _danLabel; // 0x40
//   private LabelAlias _nick; // 0x48
//   private TextButton _buttonProfile; // 0x50
//   private LabelAlias _invitationMessage; // 0x58
//   private ResolutionImage _bossIcon; // 0x60
//   private Color _bossIconRestrictionColor; // 0x68
//   private LabelAlias _bossLabel; // 0x78
//   private RectTransform _playersRoot; // 0x80
//   private ProgressBar _playersBar; // 0x88
//   private LabelAlias _playersBarLabel; // 0x90
//   private ResolutionImage _playersBarIcon; // 0x98
//   private ResolutionImage _danRestrictionIcon; // 0xA0
//   private LabelAlias _danRestrictionNumber; // 0xA8
//   private LabelButton _acceptButton; // 0xB0
//   private float _acceptButtonActiveOpacity; // 0xB8
//   private float _acceptButtonInactiveOpacity; // 0xBC
//   private int GPLBBNOPMID; // 0xC0
//   private int EIMPNFFLONC; // 0xC4
//   private int DLEPGBBEFAK; // 0xC8
//   private long HOJBIBBGOIH; // 0xD0
//   private Vector3 AJPHAMEDLHP; // 0xD8
//   private bool JOBALMMDPAF; // 0xE4
//   private bool CLGKDPLPKGE; // 0xE5
//   private bool LFKBADICOFG; // 0xE6

// ===== private void HGPNEDGAAJB()  [RVA 0x353A1BC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$HGPNEDGAAJB @ RVA 0x353A1BC

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__HGPNEDGAAJB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  float fVar2;
  UnityEngine_Vector3_o value;
  
  pNVar1 = (__this->fields)._invitationMessage;
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = (__this->fields)._playersRoot, __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
    fVar2 = (pNVar1->fields).super._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z;
    value.fields.z = (__this->fields).AJPHAMEDLHP.fields.z + 0.0;
    value.fields.y = (__this->fields).AJPHAMEDLHP.fields.y - (fVar2 + fVar2);
    value.fields.x = (__this->fields).AJPHAMEDLHP.fields.x + 0.0;
    UnityEngine_RectTransform__set_anchoredPosition3D(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnAccept()  [RVA 0x353A204]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$OnAccept @ RVA 0x353A204

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__OnAccept
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  int32_t iVar6;
  CNLGMNIEGFG_o *FBFPLEFCDOK;
  RaidClansManager_o *pEVar7;
  System_Action_NLFLMJPNOLF__o *IELDNEAAPBE;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar8;
  PlayerData_o *__this_01;
  System_String_o *pSVar9;
  Il2CppObject *arg0;
  Il2CppObject *arg2;
  RaidConfig_o *__this_02;
  RaidConfig_ENBCJNLAHAC_o *pJVar10;
  System_String_o *pSVar11;
  System_Action_object__o *IELDNEAAPBE_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar12;
  RaidPaymentService_o *__this_03;
  LabelButton_o *__this_04;
  MethodInfo *extraout_x1;
  ClanRaidsController_o *__this_05;
  System_String_o *pSVar13;
  OHDDKGHEEPA_o *__this_06;
  UnityEngine_Color_o CJNHFNHJHPE;
  MethodInfo *in_stack_ffffffffffffffa8;
  int32_t local_48;
  undefined4 local_44;
  
  if ((DAT_04568abf & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FPLOLKHJIAF_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_CEOEIJFKMOG__)
    ;
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_MGOANPBKOCK__)
    ;
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_22511/*"}{img::MiscSprites.ruby}"*/);
    FUN_01bab630(&StringLiteral_10994/*"RaidsNotEnoughKeysText{{{0}}}{{{1}}}{{{2}}}{{{1}}}"*/);
    FUN_01bab630(&StringLiteral_10873/*"RaidInvitationCell::onAccept fight or battle is NULL"*/);
    FUN_01bab630(&StringLiteral_10992/*"RaidsNotEnoughKeysHeader"*/);
    FUN_01bab630(&StringLiteral_16814/*"btnEnterNow{"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_18941/*"img::"*/);
    DAT_04568abf = 1;
    method = extraout_x1;
  }
  iVar6 = (__this->fields).EIMPNFFLONC;
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
  }
  FBFPLEFCDOK = GameUtils__MJDCGINJMOP(iVar6,false,(MethodInfo *)0x0);
  if ((FBFPLEFCDOK != (CNLGMNIEGFG_o *)0x0) &&
     (__this_06 = (OHDDKGHEEPA_o *)(FBFPLEFCDOK->fields).super.IFJLLGPGMHM,
     __this_06 != (OHDDKGHEEPA_o *)0x0)) {
    bVar3 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
    if ((bVar3 <= (__this_06->klass->_2).naturalAligment) &&
       ((__this_06->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
        (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
      if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      LPGPNBGHDBD__CFBCMMEBKHN((MethodInfo *)0x0);
      bVar5 = OHDDKGHEEPA__EPLDDILOPAJ(__this_06,(FightList_o *)FBFPLEFCDOK,(MethodInfo *)0x0);
      if (bVar5) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar7 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
        if (pEVar7 != (RaidClansManager_o *)0x0) {
          __this_05 = (pEVar7->fields).GMNJEBCECDA;
          iVar4 = (__this->fields).GPLBBNOPMID;
          IELDNEAAPBE = (System_Action_NLFLMJPNOLF__o *)
                        thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_05 != (ClanRaidsController_o *)0x0) {
            ClanRaidsController__DCBIBAGFAIG(__this_05,(long)iVar4,IELDNEAAPBE,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        __this_00 = (System_Collections_Generic_List_object__o *)
                    (*(FBFPLEFCDOK->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                              (FBFPLEFCDOK,(FBFPLEFCDOK->klass->vtable)._4_NIKCNPMKAFK.method);
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          if ((0 < (__this_00->fields)._size) &&
             (pIVar8 = System_Collections_Generic_List<object>__get_Item
                                 (__this_00,0,
                                  Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__),
             pIVar8 != (Il2CppObject *)0x0)) {
            bVar3 = (FPLOLKHJIAF_TypeInfo->_2).naturalAligment;
            if ((bVar3 <= (pIVar8->klass->_2).naturalAligment) &&
               ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
                (Il2CppClass *)FPLOLKHJIAF_TypeInfo)) {
              pSVar13 = pIVar8[5].monitor;
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
              if (__this_01 != (PlayerData_o *)0x0) {
                iVar6 = PlayerData__APFFEAJBAEK(__this_01,pSVar13,(MethodInfo *)0x0);
                uVar2 = *(undefined4 *)&pIVar8[6].klass;
                pSVar13 = OFFIONDOEPM__CDGICMOFKHE(pSVar13,(MethodInfo *)0x0);
                pSVar9 = System_String__Concat(StringLiteral_18941/*"img::"*/,pSVar13,(MethodInfo *)0x0);
                pSVar13 = StringLiteral_10992/*"RaidsNotEnoughKeysHeader"*/;
                local_44 = uVar2;
                arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
                local_48 = iVar6;
                arg2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
                pSVar9 = System_String__Format
                                   (StringLiteral_10994/*"RaidsNotEnoughKeysText{{{0}}}{{{1}}}{{{2}}}{{{1}}}"*/,arg0,(Il2CppObject *)pSVar9,arg2,
                                    (MethodInfo *)0x0);
                __this_02 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                if (__this_02 != (RaidConfig_o *)0x0) {
                  pJVar10 = RaidConfig__DIFLKMKBENA
                                      (__this_02,pIVar8[6].monitor,false,(MethodInfo *)0x0);
                  if (pJVar10 == (RaidConfig_ENBCJNLAHAC_o *)0x0) {
                    DialogsOpener__OJEGBDGIKGH
                              (0x154,pSVar13,pSVar9,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
                               (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,
                               true,true,true,in_stack_ffffffffffffffa8);
                    return;
                  }
                  piVar1 = &(pJVar10->fields).NGMFKGGBHND;
                  pSVar11 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
                  pSVar11 = System_String__Concat
                                      (StringLiteral_16814/*"btnEnterNow{"*/,pSVar11,StringLiteral_22511/*"}{img::MiscSprites.ruby}"*/,
                                       (MethodInfo *)0x0);
                  IELDNEAAPBE_00 =
                       (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo)
                  ;
                  System_Action<object>___ctor();
                  pNVar12 = DialogsOpener__OJEGBDGIKGH
                                      (0x154,pSVar13,pSVar9,pSVar11,StringLiteral_3640/*"CANCEL"*/,
                                       IELDNEAAPBE_00,2,1,false,false,StringLiteral_1/*""*/,true,true,true
                                       ,true,in_stack_ffffffffffffffa8);
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
                  }
                  __this_03 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
                  if (__this_03 != (RaidPaymentService_o *)0x0) {
                    bVar5 = RaidPaymentService__MIBNBHKOIEI(__this_03,*piVar1,false,(MethodInfo *)0x0);
                    if (bVar5) {
                      return;
                    }
                    if ((pNVar12 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) &&
                       (__this_04 = (pNVar12->fields)._btnOK, __this_04 != (LabelButton_o *)0x0)) {
                      CJNHFNHJHPE.fields.b = 0.02745098;
                      CJNHFNHJHPE.fields.a = 1.0;
                      CJNHFNHJHPE.fields.r = 0.60784316;
                      CJNHFNHJHPE.fields.g = 0.10980392;
                      LabelButton__set_Color(__this_04,CJNHFNHJHPE,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
              goto LAB_0363a7a8;
            }
          }
          return;
        }
      }
LAB_0363a7a8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_10873/*"RaidInvitationCell::onAccept fight or battle is NULL"*/,(MethodInfo *)0x0);
  return;
}


// ===== private void CEOEIJFKMOG(object IMMNELPBGIF)  [RVA 0x353A7AC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$CEOEIJFKMOG @ RVA 0x353A7AC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__CEOEIJFKMOG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int32_t OILECKFDMDB;
  int *piVar1;
  CNLGMNIEGFG_o *AGONJKOMAAA;
  System_Action_BKKPAKHJDKB__o *CPECAEHDDDB;
  
  if ((DAT_04568ac0 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_OGCPNAAGKAK__)
    ;
    DAT_04568ac0 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  piVar1 = (int *)thunk_FUN_01bda96c();
  if (*piVar1 == 1) {
    OILECKFDMDB = (__this->fields).EIMPNFFLONC;
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    AGONJKOMAAA = GameUtils__MJDCGINJMOP(OILECKFDMDB,false,(MethodInfo *)0x0);
    CPECAEHDDDB = (System_Action_BKKPAKHJDKB__o *)
                  thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
    System_Action<object>___ctor();
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LPGPNBGHDBD__CEOEIJFKMOG((FightList_o *)AGONJKOMAAA,CPECAEHDDDB,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x353A8E8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$.ctor @ RVA 0x353A8E8

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               MethodInfo *method)

{
  (__this->fields).CLGKDPLPKGE = true;
  (__this->fields).LFKBADICOFG = true;
  Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void HCKCCFCAODO()  [RVA 0x353A8F8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$HCKCCFCAODO @ RVA 0x353A8F8

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__HCKCCFCAODO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               MethodInfo *method)

{
  RaidPlayerInfoHelper_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568ac1 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568ac1 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  if (__this_00 != (RaidPlayerInfoHelper_o *)0x0) {
    RaidPlayerInfoHelper__JDONKPBCNLL(__this_00,(__this->fields).HOJBIBBGOIH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void UpdateContent(ODKDFMHHLIP NONPLOOOOAG)  [RVA 0x353A960]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$UpdateContent @ RVA 0x353A960

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               ODKDFMHHLIP_o *NONPLOOOOAG,MethodInfo *method)

{
  ODKDFMHHLIP_o *pOVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int32_t iVar7;
  int iVar8;
  PlayerData_o *pEVar9;
  int64_t iVar10;
  OHDDKGHEEPA_o *__this_00;
  RaidClansManager_o *pEVar11;
  ClanRaidsController_o *__this_01;
  RaidManager_o *__this_02;
  UnityEngine_UI_Button_o *__this_03;
  UnityEngine_RectTransform_o *__this_04;
  System_Action_o *pSVar12;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_05;
  UnityEngine_Events_UnityAction_o *call;
  HCKCBFOGMMJ_o *__this_06;
  GKLPDMLELJF_o *pGVar13;
  System_String_o *pSVar14;
  RaidLeaderboardsManager_o *__this_07;
  RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *pJVar15;
  UnityEngine_GameObject_o *pUVar16;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_array *values;
  char cVar17;
  ODKDFMHHLIP_Fields *pOVar18;
  ProgressBar_o *pPVar19;
  LabelButton_o *pLVar20;
  Nekki_SF2_GUI_LabelAlias_o *pNVar21;
  Nekki_SF2_GUI_TextButton_o *pNVar22;
  UnityEngine_Events_UnityEvent_o *__this_08;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar23;
  bool_conflict *pbVar24;
  byte bVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Color_o UVar32;
  int32_t local_6c;
  undefined4 local_68;
  int32_t local_64;
  
  if ((DAT_04568ac2 & 1) == 0) {
    FUN_01bab630(&ADOCEKEFHJN_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_HCKCCFCAODO__)
    ;
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_HGPNEDGAAJB__)
    ;
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_18050/*"enterRaid"*/);
    FUN_01bab630(&StringLiteral_22294/*"{0} / {1}"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_16814/*"btnEnterNow{"*/);
    FUN_01bab630(&StringLiteral_22510/*"}{img::"*/);
    DAT_04568ac2 = 1;
  }
  local_64 = 0;
  if (NONPLOOOOAG != (ODKDFMHHLIP_o *)0x0) {
    bVar25 = (ADOCEKEFHJN_TypeInfo->_2).naturalAligment;
    if (bVar25 <= (NONPLOOOOAG->klass->_2).naturalAligment) {
      pOVar1 = NONPLOOOOAG;
      if ((NONPLOOOOAG->klass->_2).typeHierarchy[(ulong)bVar25 - 1] !=
          (Il2CppClass *)ADOCEKEFHJN_TypeInfo) {
        pOVar1 = (ODKDFMHHLIP_o *)0x0;
      }
      if (pOVar1 != (ODKDFMHHLIP_o *)0x0) {
        iVar7 = pOVar1[1].fields.DNPAFIFHKIP;
        (__this->fields).GPLBBNOPMID = pOVar1[1].fields.MOIGDPBNMNI;
        (__this->fields).EIMPNFFLONC = iVar7;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar9 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar9 != (PlayerData_o *)0x0) {
          iVar10 = PlayerData__APCMGOCHMGC(pEVar9,(MethodInfo *)0x0);
          pOVar18 = &pOVar1[2].fields;
          lVar26 = pOVar1[1].fields.AAOLHLPDBPN;
          (__this->fields).DLEPGBBEFAK = (int32_t)pOVar18->AAOLHLPDBPN;
          pEVar9 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (pEVar9 != (PlayerData_o *)0x0) {
            iVar7 = PlayerData__IGIHHCEONEM(pEVar9,(MethodInfo *)0x0);
            (__this->fields).CLGKDPLPKGE = (int)pOVar18->AAOLHLPDBPN <= iVar7;
            iVar7 = (__this->fields).EIMPNFFLONC;
            if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_00 = GameUtils__NKGMFCALKAM(iVar7,(MethodInfo *)0x0);
            if (__this_00 == (OHDDKGHEEPA_o *)0x0) {
              bVar5 = false;
            }
            else {
              if ((__this_00->fields).super.HHDBIGKBMEC == false) {
                bVar5 = false;
              }
              else {
                bVar5 = OOMHDDBCBJP__KFMAFEPOEIB((OOMHDDBCBJP_o *)__this_00,(MethodInfo *)0x0);
                if (bVar5) {
                  bVar5 = false;
                }
                else {
                  iVar8 = (*(__this_00->klass->vtable)._15_AAHLCCCONKI.methodPtr)
                                    (__this_00,(__this_00->klass->vtable)._15_AAHLCCCONKI.method);
                  bVar5 = iVar8 == 2;
                }
              }
              if (__this == (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *)0x0)
              goto LAB_0363b4b0;
            }
            (__this->fields).LFKBADICOFG = bVar5;
            if ((__this->fields).LFKBADICOFG == false) {
              bVar25 = 1;
            }
            else {
              bVar25 = (__this->fields).CLGKDPLPKGE ^ 1;
            }
            iVar8 = *(int *)((long)&pOVar1[2].fields.AAOLHLPDBPN + 4);
            iVar2 = pOVar1[2].fields.MOIGDPBNMNI;
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pEVar11 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
            if ((pEVar11 != (RaidClansManager_o *)0x0) &&
               (__this_01 = (pEVar11->fields).GMNJEBCECDA, __this_01 != (ClanRaidsController_o *)0x0)) {
              bVar5 = ClanRaidsController__HOMIFFIACAC(__this_01,(MethodInfo *)0x0);
              if (bVar5) {
                bVar5 = true;
              }
              else {
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                __this_02 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                if (__this_02 == (RaidManager_o *)0x0) goto LAB_0363b4b0;
                bVar5 = RaidManager__BHHNJDDGDHF(__this_02,(MethodInfo *)0x0);
              }
              bVar3 = iVar8 != iVar2;
              __this_03 = (__this->fields)._contentButton;
              bVar4 = lVar26 != iVar10;
              if (__this_03 != (UnityEngine_UI_Button_o *)0x0) {
                UnityEngine_UI_Selectable__set_interactable
                          ((UnityEngine_UI_Selectable_o *)__this_03,bVar25 != 0,(MethodInfo *)0x0);
                if ((__this->fields).JOBALMMDPAF == false) {
                  __this_04 = (__this->fields)._playersRoot;
                  if (__this_04 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0363b4b0;
                  UVar31 = UnityEngine_RectTransform__get_anchoredPosition3D
                                     (__this_04,(MethodInfo *)0x0);
                  (__this->fields).AJPHAMEDLHP.fields.x = UVar31.fields.x;
                  (__this->fields).AJPHAMEDLHP.fields.y = UVar31.fields.y;
                  (__this->fields).AJPHAMEDLHP.fields.z = UVar31.fields.z;
                }
                pNVar21 = (__this->fields)._invitationMessage;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar6 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pNVar21,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar6) {
                  pNVar21 = (__this->fields)._invitationMessage;
                  if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                  (*(pNVar21->klass->vtable)._75_set_text.methodPtr)
                            (pNVar21,(pOVar1->fields).ABCHAOKFLGL,
                             (pNVar21->klass->vtable)._75_set_text.method);
                  pNVar21 = (__this->fields)._invitationMessage;
                  pSVar12 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                  System_Action___ctor();
                  if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                  Nekki_SF2_GUI_TextPic__remove_OnBoundsUpdated
                            ((Nekki_SF2_GUI_TextPic_o *)pNVar21,pSVar12,(MethodInfo *)0x0);
                  pNVar21 = (__this->fields)._invitationMessage;
                  pSVar12 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                  System_Action___ctor();
                  if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                  Nekki_SF2_GUI_TextPic__add_OnBoundsUpdated
                            ((Nekki_SF2_GUI_TextPic_o *)pNVar21,pSVar12,(MethodInfo *)0x0);
                }
                pNVar21 = (__this->fields)._nick;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar6 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pNVar21,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar6) {
                  pNVar21 = (__this->fields)._nick;
                  if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                  (*(pNVar21->klass->vtable)._75_set_text.methodPtr)
                            (pNVar21,NONPLOOOOAG[1].klass,
                             (pNVar21->klass->vtable)._75_set_text.method);
                }
                pNVar22 = (__this->fields)._buttonProfile;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar6 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pNVar22,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar6) {
                  pNVar22 = (__this->fields)._buttonProfile;
                  if ((pNVar22 == (Nekki_SF2_GUI_TextButton_o *)0x0) ||
                     (__this_05 = (pNVar22->fields).super.super.super.m_OnClick,
                     __this_05 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0))
                  goto LAB_0363b4b0;
                  UnityEngine_Events_UnityEventBase__RemoveAllListeners
                            ((UnityEngine_Events_UnityEventBase_o *)__this_05,(MethodInfo *)0x0);
                  pNVar22 = (__this->fields)._buttonProfile;
                  if (pNVar22 == (Nekki_SF2_GUI_TextButton_o *)0x0) goto LAB_0363b4b0;
                  __this_08 = (UnityEngine_Events_UnityEvent_o *)
                              (pNVar22->fields).super.super.super.m_OnClick;
                  call = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (__this_08 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_0363b4b0;
                  UnityEngine_Events_UnityEvent__AddListener(__this_08,call,(MethodInfo *)0x0);
                }
                (__this->fields).HOJBIBBGOIH = pOVar1[1].fields.AAOLHLPDBPN;
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                __this_06 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
                if (__this_06 != (HCKCBFOGMMJ_o *)0x0) {
                  pGVar13 = HCKCBFOGMMJ__LLEJFHJIBHC
                                      (__this_06,(__this->fields).HOJBIBBGOIH,(MethodInfo *)0x0);
                  pNVar21 = (__this->fields)._danLabel;
                  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
                  }
                  bVar6 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pNVar21,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((pGVar13 != (GKLPDMLELJF_o *)0x0) && (bVar6)) {
                    local_64 = (pGVar13->fields).PEBHLKLGDBM;
                    pNVar21 = (__this->fields)._danLabel;
                    pSVar14 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                    if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                    (*(pNVar21->klass->vtable)._75_set_text.methodPtr)
                              (pNVar21,pSVar14,(pNVar21->klass->vtable)._75_set_text.method);
                  }
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  __this_07 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
                  if (__this_07 != (RaidLeaderboardsManager_o *)0x0) {
                    pJVar15 = RaidLeaderboardsManager__PDEBCPPCEJP
                                        (__this_07,(__this->fields).HOJBIBBGOIH,(MethodInfo *)0x0);
                    if (pJVar15 != (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
                      pNVar23 = (__this->fields)._danImage;
                      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      bVar6 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)pNVar23,(UnityEngine_Object_o *)0x0
                                         ,(MethodInfo *)0x0);
                      if (bVar6) {
                        pNVar23 = (__this->fields)._danImage;
                        if (pNVar23 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0363b4b0;
                        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                                  (pNVar23,(pJVar15->fields).KJAIPLMIAGP,(MethodInfo *)0x0);
                      }
                    }
                    pNVar23 = (__this->fields)._bossIcon;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar6 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pNVar23,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar6) {
                      pNVar23 = (__this->fields)._bossIcon;
                      if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pSVar14 = SF2Paths__OPLAHNAJGAJ((MethodInfo *)0x0);
                      if (pNVar23 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0363b4b0;
                      *(System_String_o **)&(pNVar23->fields).super.m_PixelsPerUnitMultiplier =
                           pSVar14;
                      thunk_FUN_01c20e04(&(pNVar23->fields).super.m_PixelsPerUnitMultiplier);
                      pNVar23 = (__this->fields)._bossIcon;
                      if (pNVar23 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0363b4b0;
                      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                                (pNVar23,NONPLOOOOAG[2].monitor,(MethodInfo *)0x0);
                      pNVar23 = (__this->fields)._bossIcon;
                    /* try { // try from 0363afa8 to 0373b097 has its CatchHandler @ 0363afa8
                       catch() { ... } // from try @ 0363afa8 with catch @ 0363afa8
                       catch() { ... } // from try @ 0363b100 with catch @ 0363afa8
                       catch() { ... } // from try @ 0363b13c with catch @ 0363afa8
                       catch() { ... } // from try @ 0363b174 with catch @ 0363afa8
                       catch() { ... } // from try @ 0363b1a4 with catch @ 0363afa8 */
                      if (pNVar23 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0363b4b0;
                      (*(pNVar23->klass->vtable)._45_SetNativeSize.methodPtr)
                                (pNVar23,(pNVar23->klass->vtable)._45_SetNativeSize.method);
                      pNVar23 = (__this->fields)._bossIcon;
                      if (bVar25 == 0) {
                        fVar30 = 1.0;
                        fVar29 = 1.0;
                        fVar28 = 1.0;
                        fVar27 = 1.0;
                      }
                      else {
                        fVar27 = (__this->fields)._bossIconRestrictionColor.fields.r;
                        fVar28 = (__this->fields)._bossIconRestrictionColor.fields.g;
                        fVar29 = (__this->fields)._bossIconRestrictionColor.fields.b;
                        fVar30 = (__this->fields)._bossIconRestrictionColor.fields.a;
                      }
                      if (pNVar23 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0363b4b0;
                      (*(pNVar23->klass->vtable)._23_set_color.methodPtr)
                                ((ulong)(uint)fVar27,fVar28,fVar29,fVar30,pNVar23,
                                 (pNVar23->klass->vtable)._23_set_color.method);
                    }
                    pNVar23 = (__this->fields)._danRestrictionIcon;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar6 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pNVar23,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar6) {
                      pNVar23 = (__this->fields)._danRestrictionIcon;
                      if (pNVar23 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0363b4b0;
                      pUVar16 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pNVar23,(MethodInfo *)0x0);
                      if ((__this->fields).CLGKDPLPKGE == false) {
                        cVar17 = (__this->fields).LFKBADICOFG;
                      }
                      else {
                        cVar17 = '\0';
                      }
                      if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto LAB_0363b4b0;
                      UnityEngine_GameObject__SetActive(pUVar16,cVar17 != '\0',(MethodInfo *)0x0);
                    }
                    pNVar21 = (__this->fields)._danRestrictionNumber;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar6 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pNVar21,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar6) {
                      pNVar21 = (__this->fields)._danRestrictionNumber;
                      if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                      pUVar16 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pNVar21,(MethodInfo *)0x0);
                    /* try { // try from 0363b098 to 0373b09f has its CatchHandler @ 0363b158 */
                      if ((__this->fields).CLGKDPLPKGE == false) {
                    /* try { // try from 0363b0a8 to 0373b0b7 has its CatchHandler @ 0363b154 */
                        cVar17 = (__this->fields).LFKBADICOFG;
                      }
                      else {
                        cVar17 = '\0';
                      }
                      if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto LAB_0363b4b0;
                      UnityEngine_GameObject__SetActive(pUVar16,cVar17 != '\0',(MethodInfo *)0x0);
                    /* try { // try from 0363b0c0 to 0373b0cf has its CatchHandler @ 0363b150 */
                      pNVar21 = (__this->fields)._danRestrictionNumber;
                      pSVar14 = System_Int32__ToString((int32_t)pOVar18,(MethodInfo *)0x0);
                      if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                    /* try { // try from 0363b0dc to 0373b0e7 has its CatchHandler @ 0363b144 */
                      (*(pNVar21->klass->vtable)._75_set_text.methodPtr)
                                (pNVar21,pSVar14,(pNVar21->klass->vtable)._75_set_text.method);
                    }
                    /* try { // try from 0363b0ec to 0373b0ff has its CatchHandler @ 0363b140 */
                    pNVar21 = (__this->fields)._bossLabel;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    /* try { // try from 0363b100 to 0373b133 has its CatchHandler @ 0363afa8 */
                    bVar6 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pNVar21,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar6) {
                      pNVar21 = (__this->fields)._bossLabel;
                      if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                      Nekki_SF2_GUI_LabelAlias__set_Alias
                                (pNVar21,(System_String_o *)NONPLOOOOAG[2].klass,(MethodInfo *)0x0);
                    }
                    pPVar19 = (__this->fields)._playersBar;
                    /* try { // try from 0363b134 to 0373b137 has its CatchHandler @ 0363b14c */
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0363b138 to 0373b13b has its CatchHandler @ 0363b148 */
                      thunk_FUN_01ba7564();
                    }
                    /* try { // try from 0363b13c to 0373b16f has its CatchHandler @ 0363afa8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363b0ec with catch @ 0363b140
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363b0dc with catch @ 0363b144
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363b138 with catch @ 0363b148
                        */
                    bVar6 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pPVar19,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363b134 with catch @ 0363b14c
                        */
                    if (bVar6) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363b0c0 with catch @ 0363b150
                        */
                      pPVar19 = (__this->fields)._playersBar;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363b0a8 with catch @ 0363b154
                        */
                      if (pPVar19 == (ProgressBar_o *)0x0) goto LAB_0363b4b0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363b098 with catch @ 0363b158
                        */
                      (*(pPVar19->klass->vtable)._6_Init.methodPtr)
                                (pPVar19,(pPVar19->klass->vtable)._6_Init.method);
                      pPVar19 = (__this->fields)._playersBar;
                      if (pPVar19 == (ProgressBar_o *)0x0) goto LAB_0363b4b0;
                    /* try { // try from 0363b170 to 0373b173 has its CatchHandler @ 0363b194 */
                    /* try { // try from 0363b174 to 0373b19b has its CatchHandler @ 0363afa8 */
                      (*(pPVar19->klass->vtable)._11_SetValueBorders.methodPtr)
                                (0,(float)pOVar1[2].fields.MOIGDPBNMNI,pPVar19,
                                 (pPVar19->klass->vtable)._11_SetValueBorders.method);
                      pPVar19 = (__this->fields)._playersBar;
                      if (pPVar19 == (ProgressBar_o *)0x0) goto LAB_0363b4b0;
                    /* catch() { ... } // from try @ 0363b170 with catch @ 0363b194 */
                    /* try { // try from 0363b19c to 0373b1a3 has its CatchHandler @ 0363b1b8 */
                    /* try { // try from 0363b1a4 to 0373b1af has its CatchHandler @ 0363afa8 */
                      (*(pPVar19->klass->vtable)._8_SetValue.methodPtr)
                                ((ulong)(uint)(float)*(int *)((long)&pOVar1[2].fields.AAOLHLPDBPN +
                                                             4),0,pPVar19,0,
                                 (pPVar19->klass->vtable)._8_SetValue.method);
                    }
                    pNVar21 = (__this->fields)._playersBarLabel;
                    /* try { // try from 0363b1b0 to 0373b1b7 has its CatchHandler @ 0363b1b8 */
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0363b19c with catch @ 0363b1b8
                       catch(type#2 @ 00000000) { ... } // from try @ 0363b1b0 with catch @ 0363b1b8
                        */
                      thunk_FUN_01ba7564();
                    }
                    bVar6 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pNVar21,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar6) {
                      pNVar21 = (__this->fields)._playersBarLabel;
                      local_68 = *(undefined4 *)((long)&pOVar1[2].fields.AAOLHLPDBPN + 4);
                      arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_68);
                      local_6c = pOVar1[2].fields.MOIGDPBNMNI;
                      arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
                      pSVar14 = System_String__Format
                                          (StringLiteral_22294/*"{0} / {1}"*/,arg0,arg1,(MethodInfo *)0x0);
                      if (pNVar21 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0363b4b0;
                      (*(pNVar21->klass->vtable)._75_set_text.methodPtr)
                                (pNVar21,pSVar14,(pNVar21->klass->vtable)._75_set_text.method);
                    }
                    pLVar20 = (__this->fields)._acceptButton;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar6 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pLVar20,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (!bVar6) goto LAB_0363b488;
                    pLVar20 = (__this->fields)._acceptButton;
                    if ((pLVar20 != (LabelButton_o *)0x0) &&
                       (pUVar16 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pLVar20,(MethodInfo *)0x0),
                       pUVar16 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive
                                (pUVar16,bVar4 && (bVar3 && bVar5 == false),(MethodInfo *)0x0);
                      LJLLAKHOFFF__JAEOMHIAHJB
                                ((UnityEngine_UI_Button_o *)(__this->fields)._acceptButton,
                                 (uint)(bVar25 != 0) << 1,true,(MethodInfo *)0x0);
                      pLVar20 = (__this->fields)._acceptButton;
                      if (pLVar20 != (LabelButton_o *)0x0) {
                        lVar26 = 0xbc;
                        if (bVar25 == 0) {
                          lVar26 = 0xb8;
                        }
                        (*(pLVar20->klass->vtable)._51_set_Opacity.methodPtr)
                                  ((ulong)*(uint *)((long)&__this->klass + lVar26),pLVar20,
                                   (pLVar20->klass->vtable)._51_set_Opacity.method);
                        if (!bVar4 || (!bVar3 || bVar5 != false)) {
LAB_0363b488:
                          (__this->fields).JOBALMMDPAF = true;
                          return;
                        }
                        pbVar24 = &NONPLOOOOAG[1].fields.JEFOELMOCEI;
                        pLVar20 = (__this->fields)._acceptButton;
                        if (*(int *)pbVar24 == 0) {
                          if (pLVar20 != (LabelButton_o *)0x0) {
                            LabelButton__set_Alias(pLVar20,StringLiteral_18050/*"enterRaid"*/,(MethodInfo *)0x0);
                            goto LAB_0363b488;
                          }
                        }
                        else {
                          values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
                          if (values != (System_String_array *)0x0) {
                            if ((int)values->max_length != 0) {
                              values->m_Items[0] = StringLiteral_16814/*"btnEnterNow{"*/;
                              thunk_FUN_01c20e04(values->m_Items);
                              pSVar14 = System_Int32__ToString((int32_t)pbVar24,(MethodInfo *)0x0);
                              if (1 < (uint)values->max_length) {
                                values->m_Items[1] = pSVar14;
                                thunk_FUN_01c20e04(values->m_Items + 1,pSVar14);
                                if (2 < (uint)values->max_length) {
                                  values->m_Items[2] = StringLiteral_22510/*"}{img::"*/;
                                  thunk_FUN_01c20e04(values->m_Items + 2);
                                  if (3 < (uint)values->max_length) {
                                    values->m_Items[3] =
                                         (System_String_o *)NONPLOOOOAG[1].fields.HCNDEELOKHA;
                                    thunk_FUN_01c20e04(values->m_Items + 3);
                                    if (4 < (uint)values->max_length) {
                                      values->m_Items[4] = StringLiteral_22500/*"}"*/;
                                      thunk_FUN_01c20e04();
                                      pSVar14 = System_String__Concat(values,(MethodInfo *)0x0);
                                      if (pLVar20 != (LabelButton_o *)0x0) {
                                        LabelButton__set_Alias(pLVar20,pSVar14,(MethodInfo *)0x0);
                                        pLVar20 = (__this->fields)._acceptButton;
                                        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                                          thunk_FUN_01ba7564();
                                        }
                                        pEVar9 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                                        if (pEVar9 != (PlayerData_o *)0x0) {
                                          iVar7 = PlayerData__APFFEAJBAEK
                                                            (pEVar9,NONPLOOOOAG[1].fields.
                                                                    ABCHAOKFLGL,(MethodInfo *)0x0);
                                          if (iVar7 < *(int *)&NONPLOOOOAG[1].fields.JEFOELMOCEI) {
                                            if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
                                              thunk_FUN_01ba7564();
                                            }
                                            UVar32 = MainSettings__IALPNFOEEBP((MethodInfo *)0x0);
                                            fVar27 = UVar32.fields.a;
                                            fVar28 = UVar32.fields.b;
                                            fVar29 = UVar32.fields.g;
                                            fVar30 = UVar32.fields.r;
                                          }
                                          else {
                                            fVar27 = 1.0;
                                            fVar30 = 0.0;
                                            fVar29 = 0.0;
                                            fVar28 = 0.0;
                                          }
                                          if (pLVar20 != (LabelButton_o *)0x0) {
                                            UVar32.fields.g = fVar29;
                                            UVar32.fields.r = fVar30;
                                            UVar32.fields.a = fVar27;
                                            UVar32.fields.b = fVar28;
                                            LabelButton__set_Color(pLVar20,UVar32,(MethodInfo *)0x0)
                                            ;
                                            goto LAB_0363b488;
                                          }
                                        }
                                      }
                                      goto LAB_0363b4b0;
                                    }
                                  }
                                }
                              }
                            }
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8d0();
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_0363b4b0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}


// ===== public void OnContentClick()  [RVA 0x353B4B8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$OnContentClick @ RVA 0x353B4B8

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__OnContentClick
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar3;
  Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *__this_00;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_01;
  Il2CppObject *pIVar4;
  long lVar5;
  System_String_o *pSVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *__this_02;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Vector3_o HHPABFGHALF;
  
  if ((DAT_04568ac3 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_5076/*"DanInsufficient"*/);
    FUN_01bab630(&StringLiteral_20391/*"raidUnavailable"*/);
    DAT_04568ac3 = 1;
    method = extraout_x1;
  }
  DKIDCBPNMPD = (__this->fields)._hintPrefab;
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
  }
  pNVar3 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if ((pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) &&
     (__this_00 = (pNVar3->fields)._chatContent,
     __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *)0x0)) {
    HOKHHGFLMNA = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    __this_02 = (__this->fields)._hintPos;
    if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
      HHPABFGHALF = UnityEngine_Transform__get_position
                              ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04566664 == '\0') {
        FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
        DAT_04566664 = '\x01';
      }
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                            (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,
                             DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM,-1.0,-1.0,
                             (MethodInfo *)0x0);
      if ((__this->fields).LFKBADICOFG == false) {
        if (__this_01 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
          Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias
                    (__this_01,StringLiteral_20391/*"raidUnavailable"*/,(MethodInfo *)0x0);
LAB_0363b720:
          Nekki_SF2_GUI_HintBox__Flip((Nekki_SF2_GUI_HintBox_o *)__this_01,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar5 = FUN_01bab718(string___TypeInfo,1);
        pSVar6 = System_Int32__ToString((int)__this + 200,(MethodInfo *)0x0);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          *(System_String_o **)(lVar5 + 0x20) = pSVar6;
          thunk_FUN_01c20e04();
          uVar2 = StringLiteral_5076/*"DanInsufficient"*/;
          if (pIVar4 != (Il2CppObject *)0x0) {
            pIVar8 = pIVar4->klass;
            uVar1._0_1_ = (pIVar8->_2).rank;
            uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
            uVar9 = (ulong)uVar1;
            if (uVar9 != 0) {
              piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar7 = pIVar8->vtable + (*piVar10 + 0xc);
                  goto LAB_0363b6f8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0363b6f8:
            pSVar6 = (System_String_o *)(*pVVar7->methodPtr)(pIVar4,uVar2,lVar5,pVVar7->method);
            if (__this_01 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
              Nekki_SF2_GUI_HintBoxAutoKilled__SetDescText(__this_01,pSVar6,(MethodInfo *)0x0);
              goto LAB_0363b720;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OGCPNAAGKAK(BKKPAKHJDKB MEJOGHDACNG)  [RVA 0x353B748]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$OGCPNAAGKAK @ RVA 0x353B748

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__OGCPNAAGKAK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               BKKPAKHJDKB_o *MEJOGHDACNG,MethodInfo *method)

{
  if ((MEJOGHDACNG != (BKKPAKHJDKB_o *)0x0) && ((MEJOGHDACNG->fields).HHJIJKJCEOF == 0)) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__OnAccept
              (__this,(MethodInfo *)MEJOGHDACNG);
    return;
  }
  return;
}


// ===== private void MGOANPBKOCK(NLFLMJPNOLF DKMMBMBMJBO)  [RVA 0x353B75C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$MGOANPBKOCK @ RVA 0x353B75C

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__MGOANPBKOCK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               NLFLMJPNOLF_o *DKMMBMBMJBO,MethodInfo *method)

{
  DialogsManager_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar1;
  MethodInfo *method_00;
  
  if ((DAT_04568ac4 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    DAT_04568ac4 = 1;
  }
  __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (DialogsManager_o *)0x0) {
    DialogsManager__IDKIMGGFFNH(__this_00,(MethodInfo *)0x0);
    DialogsOpener__LKDGKEJFPLL(DKMMBMBMJBO,method_00);
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363b7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar1->klass->vtable)._18_Close.methodPtr)
                (pNVar1,(pNVar1->klass->vtable)._18_Close.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

