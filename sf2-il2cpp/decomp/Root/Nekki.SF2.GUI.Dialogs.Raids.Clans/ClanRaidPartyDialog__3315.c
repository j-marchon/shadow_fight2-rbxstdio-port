// TypeDefIndex 3315
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class ClanRaidPartyDialog : ClanBaseDialog
// Fields:
//   private ProgressBar _playersProgressBar; // 0xC8
//   private LabelAlias _playersCountLabel; // 0xD0
//   private LabelButton _cancelButton; // 0xD8
//   private LabelButton _leaveButton; // 0xE0
//   private LabelButton _raidButton; // 0xE8
//   private ClanRaidPartyTable _tablePlayers; // 0xF0
//   private SimpleScroll _scroll; // 0xF8
//   private ClanRaidPartyPlayerCell _cellPrefab; // 0x100
//   private ResolutionImage _bossAvatar; // 0x108
//   private LabelAlias _hardModeText; // 0x110
//   private int PLNOPJFFELC; // 0x118
//   private int NDOHFCNNKFA; // 0x11C
//   private string IHCBLFFMIIC; // 0x120
//   private bool BMFEDOFHEFE; // 0x128
//   private bool DNFCMDCBGHC; // 0x129
//   private NLFLMJPNOLF PMHMLJDMHFP; // 0x130
//   private CJFBGEEIPBA ECLPCNFNJCP; // 0x138

// ===== private void GHOCNBJIEEN(long OILECKFDMDB)  [RVA 0x3524B8C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$GHOCNBJIEEN @ RVA 0x3524B8C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__GHOCNBJIEEN
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,int64_t OILECKFDMDB,
               MethodInfo *method)

{
  System_Action_long__o *pSVar1;
  NLFLMJPNOLF_o *pNVar2;
  CJFBGEEIPBA_o *pCVar3;
  
  if ((DAT_045689f3 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_GHOCNBJIEEN__);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_17816/*"dlgRaidCancel"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045689f3 = 1;
  }
  if ((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  pNVar2 = (__this->fields).PMHMLJDMHFP;
  if (pNVar2 != (NLFLMJPNOLF_o *)0x0) {
    if (((pNVar2->fields).OHMDCKEDOGH == OILECKFDMDB) && ((pNVar2->fields).BHAOPCFDKCG == false)) {
      JJPNLEPEAFM__JNDPLPKDPCP
                (StringLiteral_17850/*"dlgWarning"*/,StringLiteral_17816/*"dlgRaidCancel"*/,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
                 (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,
                 (MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03624d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._20_Close.methodPtr)
                (__this,(__this->klass->vtable)._20_Close.method);
      return;
    }
    pCVar3 = (__this->fields).ECLPCNFNJCP;
    pSVar1 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
    System_Action<long>___ctor();
    if (pCVar3 != (CJFBGEEIPBA_o *)0x0) {
      CJFBGEEIPBA__OONONOKDLGD(pCVar3,pSVar1,(MethodInfo *)0x0);
      pCVar3 = (__this->fields).ECLPCNFNJCP;
      pSVar1 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
      System_Action<long>___ctor();
      if (pCVar3 != (CJFBGEEIPBA_o *)0x0) {
        CJFBGEEIPBA__EHJDAGPJFAB(pCVar3,pSVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PCJKJOMCGNH()  [RVA 0x3524D4C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$PCJKJOMCGNH @ RVA 0x3524D4C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__PCJKJOMCGNH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,MethodInfo *method)

{
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  
  if ((DAT_045689f4 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_ODJLNCLNAOH__);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_17328/*"confirmRaidCancel"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045689f4 = 1;
    method = extraout_x1;
  }
  IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo,method)
  ;
  System_Action<object>___ctor();
  JJPNLEPEAFM__JNDPLPKDPCP
            (StringLiteral_17850/*"dlgWarning"*/,StringLiteral_17328/*"confirmRaidCancel"*/,StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,
             IELDNEAAPBE,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,(MethodInfo *)0x0);
  return;
}


// ===== private void JFKBMLONHON(object IMMNELPBGIF)  [RVA 0x3524E88]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$JFKBMLONHON @ RVA 0x3524E88

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__JFKBMLONHON
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int *piVar1;
  ACHLOMELAJE_o *__this_00;
  
  if ((DAT_045689f5 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045689f5 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if (*piVar1 == 3) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        ACHLOMELAJE__NDIJMFIANAE(__this_00,false,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private void ODJLNCLNAOH(object IMMNELPBGIF)  [RVA 0x3524F78]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$ODJLNCLNAOH @ RVA 0x3524F78

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__ODJLNCLNAOH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int *piVar1;
  System_Action_long__o *pSVar2;
  CJFBGEEIPBA_o *__this_00;
  CJFBGEEIPBA_o *__this_01;
  
  if ((DAT_045689f6 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_GHOCNBJIEEN__);
    FUN_01bab630(&int_TypeInfo);
    DAT_045689f6 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if (*piVar1 == 1) {
      __this_00 = (__this->fields).ECLPCNFNJCP;
      __this_01 = (CJFBGEEIPBA_o *)0x0;
      if (__this_00 != (CJFBGEEIPBA_o *)0x0) {
        pSVar2 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
        System_Action<long>___ctor();
        CJFBGEEIPBA__OONONOKDLGD(__this_00,pSVar2,(MethodInfo *)0x0);
        __this_01 = (__this->fields).ECLPCNFNJCP;
      }
      pSVar2 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
      System_Action<long>___ctor();
      if (__this_01 != (CJFBGEEIPBA_o *)0x0) {
        CJFBGEEIPBA__FHIDNNFNFMP(__this_01,pSVar2,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== protected override void GLANJNFACKI()  [RVA 0x352509C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$GLANJNFACKI @ RVA 0x352509C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void OnBackKeyClicked(object IMMNELPBGIF)  [RVA 0x35250A0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$OnBackKeyClicked @ RVA 0x35250A0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__OnBackKeyClicked
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  if ((__this->fields).DNFCMDCBGHC != false) {
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__PCJKJOMCGNH
              (__this,(MethodInfo *)IMMNELPBGIF);
    return;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__KBKPMHNOJON
            (__this,(MethodInfo *)IMMNELPBGIF);
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x3525148]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$Init @ RVA 0x3525148

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  System_String_o **ppSVar1;
  CJFBGEEIPBA_o **ppCVar2;
  NLFLMJPNOLF_c *pNVar3;
  bool bVar4;
  int32_t iVar5;
  int64_t iVar6;
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar7;
  EEOMEMBBGNA_o *pEVar8;
  System_Action_NLFLMJPNOLF__o *CJNHFNHJHPE;
  System_Action_long__o *CJNHFNHJHPE_00;
  OHDDKGHEEPA_o *__this_01;
  CNLGMNIEGFG_o *pCVar9;
  PJKHAJKEHEL_o *pPVar10;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE_01;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this_04;
  LabelButton_o *pLVar11;
  UnityEngine_Events_UnityAction_o *pUVar12;
  System_String_o *str1;
  System_String_o *pSVar13;
  Il2CppObject *pIVar14;
  MethodInfo *method_00;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar15;
  NLFLMJPNOLF_o *pNVar16;
  NLFLMJPNOLF_o **ppNVar17;
  UnityEngine_Events_UnityEvent_o *pUVar18;
  Nekki_SF2_GUI_ResolutionImage_o *__this_05;
  CJFBGEEIPBA_o *pCVar19;
  
  if ((DAT_045689f7 & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_DHMEHBNHNJO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_FJIFDGEPKBH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_GHOCNBJIEEN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_JNCKDHJJBPM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_KBKPMHNOJON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_PCJKJOMCGNH__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_3312/*"BOSS_NAME"*/);
    FUN_01bab630(&StringLiteral_4403/*"ClanRaidPartyDialog::Init: data is not ClanRaid: "*/);
    FUN_01bab630(&StringLiteral_4401/*"ClanRaidButton"*/);
    FUN_01bab630(&StringLiteral_17837/*"dlgStoryBtnLeave"*/);
    DAT_045689f7 = 1;
  }
  pNVar3 = NLFLMJPNOLF_TypeInfo;
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    (__this->fields).PMHMLJDMHFP = (NLFLMJPNOLF_o *)0x0;
    pIVar14 = (Il2CppObject *)0x0;
  }
  else {
    pNVar16 = (NLFLMJPNOLF_o *)IMMNELPBGIF;
    if (IMMNELPBGIF->klass != (Il2CppClass *)NLFLMJPNOLF_TypeInfo) {
      pNVar16 = (NLFLMJPNOLF_o *)0x0;
    }
    (__this->fields).PMHMLJDMHFP = pNVar16;
    pIVar14 = IMMNELPBGIF;
    if (IMMNELPBGIF->klass != (Il2CppClass *)pNVar3) {
      pIVar14 = (Il2CppObject *)0x0;
    }
  }
  ppNVar17 = &(__this->fields).PMHMLJDMHFP;
  thunk_FUN_01c20e04(ppNVar17,pIVar14);
  pSVar13 = StringLiteral_4403/*"ClanRaidPartyDialog::Init: data is not ClanRaid: "*/;
  if (*ppNVar17 == (NLFLMJPNOLF_o *)0x0) {
    if (IMMNELPBGIF == (Il2CppObject *)0x0) {
      str1 = (System_String_o *)0x0;
    }
    else {
      str1 = (System_String_o *)
             (*IMMNELPBGIF->klass->vtable[3].methodPtr)
                       (IMMNELPBGIF,IMMNELPBGIF->klass->vtable[3].method);
    }
    pSVar13 = System_String__Concat(pSVar13,str1,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
    return;
  }
  (__this->fields).PLNOPJFFELC = 0;
  pGVar15 = ((*ppNVar17)->fields).MABPCBMOECE;
  if (pGVar15 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) goto LAB_03625738;
  (__this->fields).NDOHFCNNKFA = (pGVar15->fields).count;
  ppSVar1 = &(__this->fields).IHCBLFFMIIC;
  (__this->fields).IHCBLFFMIIC = StringLiteral_3312/*"BOSS_NAME"*/;
  thunk_FUN_01c20e04(ppSVar1);
  pNVar16 = (__this->fields).PMHMLJDMHFP;
  (__this->fields).BMFEDOFHEFE = false;
  bVar4 = false;
  if (pNVar16 != (NLFLMJPNOLF_o *)0x0) {
    pGVar15 = (pNVar16->fields).MABPCBMOECE;
    if (pGVar15 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) goto LAB_03625738;
    iVar6 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                      (pGVar15,0,Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_03625738;
    iVar7 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
    bVar4 = iVar6 == iVar7;
  }
  (__this->fields).DNFCMDCBGHC = bVar4;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar8 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (pEVar8 != (EEOMEMBBGNA_o *)0x0) {
    ppCVar2 = &(__this->fields).ECLPCNFNJCP;
    (__this->fields).ECLPCNFNJCP = (pEVar8->fields).GMNJEBCECDA;
    thunk_FUN_01c20e04(ppCVar2);
    pCVar19 = (__this->fields).ECLPCNFNJCP;
    CJNHFNHJHPE = (System_Action_NLFLMJPNOLF__o *)
                  thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo);
    System_Action<object>___ctor();
    if (pCVar19 != (CJFBGEEIPBA_o *)0x0) {
      CJFBGEEIPBA__APAKFIKINCF(pCVar19,CJNHFNHJHPE,(MethodInfo *)0x0);
      pCVar19 = (__this->fields).ECLPCNFNJCP;
      CJNHFNHJHPE_00 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
      System_Action<long>___ctor();
      if (pCVar19 != (CJFBGEEIPBA_o *)0x0) {
        CJFBGEEIPBA__EHJDAGPJFAB(pCVar19,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        pCVar19 = *ppCVar2;
        if (pCVar19 != (CJFBGEEIPBA_o *)0x0) {
          __this_01 = CJFBGEEIPBA__NKGMFCALKAM(pCVar19,*ppNVar17,(MethodInfo *)0x0);
          if (__this_01 != (OHDDKGHEEPA_o *)0x0) {
            iVar5 = OHDDKGHEEPA__NLMMJCACKPC(__this_01,(MethodInfo *)0x0);
            (__this->fields).PLNOPJFFELC = iVar5;
            (__this->fields).IHCBLFFMIIC = (__this_01->fields).super.FHPNAJENHNG;
            thunk_FUN_01c20e04(ppSVar1);
            pNVar16 = (__this->fields).PMHMLJDMHFP;
            if (pNVar16 == (NLFLMJPNOLF_o *)0x0) goto LAB_03625738;
            __this_05 = (__this->fields)._bossAvatar;
            iVar5 = (pNVar16->fields).IILCHFKCEEH;
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pCVar9 = MGNPHCAAEIO__MJDCGINJMOP(iVar5,false,(MethodInfo *)0x0);
            if (((pCVar9 == (CNLGMNIEGFG_o *)0x0) ||
                (pPVar10 = MGNPHCAAEIO__DDHNCKDHKAC
                                     ((pCVar9->fields).super.MECHOBPGHFJ,(MethodInfo *)0x0),
                pPVar10 == (PJKHAJKEHEL_o *)0x0)) ||
               (__this_05 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) goto LAB_03625738;
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (__this_05,(pPVar10->fields).NILOEHGNJNL,(MethodInfo *)0x0);
            __this_02 = (__this->fields)._hardModeText;
            if ((__this_02 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (__this_03 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
               __this_03 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03625738;
            UnityEngine_GameObject__SetActive
                      (__this_03,(__this_01->fields)._DNENMENCFFI_k__BackingField == 1,
                       (MethodInfo *)0x0);
          }
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__GIENGNEGHPJ
                    ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,
                     (__this->fields).IHCBLFFMIIC,StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,0,
                     (MethodInfo *)0x0);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar8 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
          CJNHFNHJHPE_01 =
               (System_Action_OJEHKJHEBID__o *)
               thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
          System_Action<object>___ctor();
          if (pEVar8 != (EEOMEMBBGNA_o *)0x0) {
            EEOMEMBBGNA__MFDOCMJONOH(pEVar8,CJNHFNHJHPE_01,(MethodInfo *)0x0);
            __this_04 = (__this->fields)._tablePlayers;
            if (__this_04 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__Init
                        (__this_04,(__this->fields)._scroll,(__this->fields).PMHMLJDMHFP,
                         (__this->fields)._cellPrefab,(MethodInfo *)0x0);
              pLVar11 = (__this->fields)._cancelButton;
              if (pLVar11 != (LabelButton_o *)0x0) {
                LabelButton__set_Alias(pLVar11,StringLiteral_3640/*"CANCEL"*/,(MethodInfo *)0x0);
                pLVar11 = (__this->fields)._cancelButton;
                if (pLVar11 != (LabelButton_o *)0x0) {
                  pUVar18 = (UnityEngine_Events_UnityEvent_o *)
                            (pLVar11->fields).super.super.super.m_OnClick;
                  pUVar12 = (UnityEngine_Events_UnityAction_o *)
                            thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (pUVar18 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar18,pUVar12,(MethodInfo *)0x0);
                    pLVar11 = (__this->fields)._leaveButton;
                    if (pLVar11 != (LabelButton_o *)0x0) {
                      LabelButton__set_Alias(pLVar11,StringLiteral_17837/*"dlgStoryBtnLeave"*/,(MethodInfo *)0x0);
                      pLVar11 = (__this->fields)._leaveButton;
                      if (pLVar11 != (LabelButton_o *)0x0) {
                        pUVar18 = (UnityEngine_Events_UnityEvent_o *)
                                  (pLVar11->fields).super.super.super.m_OnClick;
                        pUVar12 = (UnityEngine_Events_UnityAction_o *)
                                  thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                        UnityEngine_Events_UnityAction___ctor();
                        if (pUVar18 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                          UnityEngine_Events_UnityEvent__AddListener
                                    (pUVar18,pUVar12,(MethodInfo *)0x0);
                          pLVar11 = (__this->fields)._raidButton;
                          if (pLVar11 != (LabelButton_o *)0x0) {
                            LabelButton__set_Alias(pLVar11,StringLiteral_4401/*"ClanRaidButton"*/,(MethodInfo *)0x0);
                            pLVar11 = (__this->fields)._raidButton;
                            if (pLVar11 != (LabelButton_o *)0x0) {
                              pUVar18 = (UnityEngine_Events_UnityEvent_o *)
                                        (pLVar11->fields).super.super.super.m_OnClick;
                              pUVar12 = (UnityEngine_Events_UnityAction_o *)
                                        thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                              UnityEngine_Events_UnityAction___ctor();
                              if (pUVar18 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                UnityEngine_Events_UnityEvent__AddListener
                                          (pUVar18,pUVar12,(MethodInfo *)0x0);
                                Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__BEGNFALPJKP
                                          (__this,method_00);
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
            }
          }
        }
      }
    }
  }
LAB_03625738:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LAGJPPHNDBL(NLFLMJPNOLF AOMBONOOJFP)  [RVA 0x3525908]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$LAGJPPHNDBL @ RVA 0x3525908

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__LAGJPPHNDBL
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,
               NLFLMJPNOLF_o *AOMBONOOJFP,MethodInfo *method)

{
  System_Action_object__o *IELDNEAAPBE;
  NLFLMJPNOLF_o *extraout_x1;
  NLFLMJPNOLF_o *extraout_x1_00;
  NLFLMJPNOLF_o *extraout_x1_01;
  ACHLOMELAJE_o *pAVar1;
  
  if ((DAT_045689f8 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_JFKBMLONHON__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_17756/*"dlgAlertTitle"*/);
    FUN_01bab630(&StringLiteral_17779/*"dlgDontShowAgain"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_4405/*"ClanRaidYouLeft"*/);
    DAT_045689f8 = 1;
    AOMBONOOJFP = extraout_x1;
  }
  if ((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,AOMBONOOJFP);
    AOMBONOOJFP = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    AOMBONOOJFP = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,AOMBONOOJFP);
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    if ((pAVar1->fields).DHPLHAKNGOI != false) {
      IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      JJPNLEPEAFM__JNDPLPKDPCP
                (StringLiteral_17756/*"dlgAlertTitle"*/,StringLiteral_4405/*"ClanRaidYouLeft"*/,StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,
                 IELDNEAAPBE,1,0,true,false,StringLiteral_17779/*"dlgDontShowAgain"*/,true,true,true,true,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Could not recover jumptable at 0x03625abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MLBNBCLLKEL(long OILECKFDMDB)  [RVA 0x3525AC4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$MLBNBCLLKEL @ RVA 0x3525AC4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__MLBNBCLLKEL
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,int64_t OILECKFDMDB,
               MethodInfo *method)

{
  System_Action_long__o *pSVar1;
  NLFLMJPNOLF_o *pNVar2;
  CJFBGEEIPBA_o *pCVar3;
  
  if ((DAT_045689f9 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_GHOCNBJIEEN__);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17851/*"dlg_ClanRaidDestroyed"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045689f9 = 1;
  }
  if ((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  pNVar2 = (__this->fields).PMHMLJDMHFP;
  if (pNVar2 != (NLFLMJPNOLF_o *)0x0) {
    if (((pNVar2->fields).OHMDCKEDOGH == OILECKFDMDB) && ((pNVar2->fields).BHAOPCFDKCG == false)) {
      JJPNLEPEAFM__JNDPLPKDPCP
                (StringLiteral_17850/*"dlgWarning"*/,StringLiteral_17851/*"dlg_ClanRaidDestroyed"*/,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
                 (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,
                 (MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03625c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._20_Close.methodPtr)
                (__this,(__this->klass->vtable)._20_Close.method);
      return;
    }
    pCVar3 = (__this->fields).ECLPCNFNJCP;
    pSVar1 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
    System_Action<long>___ctor();
    if (pCVar3 != (CJFBGEEIPBA_o *)0x0) {
      CJFBGEEIPBA__OONONOKDLGD(pCVar3,pSVar1,(MethodInfo *)0x0);
      pCVar3 = (__this->fields).ECLPCNFNJCP;
      pSVar1 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
      System_Action<long>___ctor();
      if (pCVar3 != (CJFBGEEIPBA_o *)0x0) {
        CJFBGEEIPBA__EHJDAGPJFAB(pCVar3,pSVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FNJKKJGNAFF()  [RVA 0x3525C84]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$FNJKKJGNAFF @ RVA 0x3525C84

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__FNJKKJGNAFF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,MethodInfo *method)

{
  if ((DAT_045689fa & 1) == 0) {
    FUN_01bab630(&StringLiteral_17756/*"dlgAlertTitle"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_4406/*"ClanRaidYouWereKicked"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045689fa = 1;
  }
  JJPNLEPEAFM__JNDPLPKDPCP
            (StringLiteral_17756/*"dlgAlertTitle"*/,StringLiteral_4406/*"ClanRaidYouWereKicked"*/,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
             (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,
             (MethodInfo *)0x0);
  return;
}


// ===== public override void UpdateHeaderPosition()  [RVA 0x3525D50]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$UpdateHeaderPosition @ RVA 0x3525D50

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x3525D54]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$IGDDKJJMDLP @ RVA 0x3525D54

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x3525D58]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$GKPJMHOFIOO @ RVA 0x3525D58

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x3525D5C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$OnDestroy @ RVA 0x3525D5C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,MethodInfo *method)

{
  System_Action_NLFLMJPNOLF__o *CJNHFNHJHPE;
  System_Action_long__o *CJNHFNHJHPE_00;
  EEOMEMBBGNA_o *__this_00;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE_01;
  MethodInfo *extraout_x1;
  CJFBGEEIPBA_o *pCVar1;
  
  if ((DAT_045689fb & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_FJIFDGEPKBH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_GHOCNBJIEEN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_JNCKDHJJBPM__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045689fb = 1;
    method = extraout_x1;
  }
  pCVar1 = (__this->fields).ECLPCNFNJCP;
  CJNHFNHJHPE = (System_Action_NLFLMJPNOLF__o *)
                thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo,method);
  System_Action<object>___ctor();
  if (pCVar1 != (CJFBGEEIPBA_o *)0x0) {
    CJFBGEEIPBA__HOGKHGFAJIM(pCVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).ECLPCNFNJCP;
    CJNHFNHJHPE_00 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
    System_Action<long>___ctor();
    if (pCVar1 != (CJFBGEEIPBA_o *)0x0) {
      CJFBGEEIPBA__OONONOKDLGD(pCVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      CJNHFNHJHPE_01 =
           (System_Action_OJEHKJHEBID__o *)thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (EEOMEMBBGNA_o *)0x0) {
        EEOMEMBBGNA__OKAMOFKHOLK(__this_00,CJNHFNHJHPE_01,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__OnDestroy
                  ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x3525EE8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$LCGFJKFJKJK @ RVA 0x3525EE8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
  return;
}


// ===== private void BEGNFALPJKP()  [RVA 0x352573C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$BEGNFALPJKP @ RVA 0x352573C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__BEGNFALPJKP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t *piVar2;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this_00;
  LabelButton_o *pLVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_String_o *pSVar5;
  System_String_o *str3;
  ProgressBar_o *pPVar6;
  NLFLMJPNOLF_o *pNVar7;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar8;
  Nekki_SF2_GUI_LabelAlias_o *pNVar9;
  
  if ((DAT_045689fc & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&StringLiteral_2436/*"<quad name=RaidMisc.players /> "*/);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_045689fc = 1;
  }
  pNVar7 = (__this->fields).PMHMLJDMHFP;
  if (pNVar7 != (NLFLMJPNOLF_o *)0x0) {
    __this_00 = (__this->fields)._tablePlayers;
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__Reload
                (__this_00,pNVar7,(MethodInfo *)0x0);
      pLVar3 = (__this->fields)._leaveButton;
      if ((pLVar3 != (LabelButton_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive
                  (pUVar4,(__this->fields).DNFCMDCBGHC == false,(MethodInfo *)0x0);
        pLVar3 = (__this->fields)._cancelButton;
        if ((pLVar3 != (LabelButton_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar4,(__this->fields).DNFCMDCBGHC,(MethodInfo *)0x0);
          pLVar3 = (__this->fields)._raidButton;
          if ((pLVar3 != (LabelButton_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar4,(__this->fields).DNFCMDCBGHC,(MethodInfo *)0x0)
            ;
            pNVar7 = (__this->fields).PMHMLJDMHFP;
            if ((pNVar7 != (NLFLMJPNOLF_o *)0x0) &&
               (pGVar8 = (pNVar7->fields).MABPCBMOECE,
               pGVar8 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
              pNVar9 = (__this->fields)._playersCountLabel;
              piVar1 = &(__this->fields).NDOHFCNNKFA;
              (__this->fields).NDOHFCNNKFA = (pGVar8->fields).count;
              pSVar5 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
              piVar2 = &(__this->fields).PLNOPJFFELC;
              str3 = System_Int32__ToString((int32_t)piVar2,(MethodInfo *)0x0);
              pSVar5 = System_String__Concat
                                 (StringLiteral_2436/*"<quad name=RaidMisc.players /> "*/,pSVar5,StringLiteral_1492/*"/"*/,str3,
                                  (MethodInfo *)0x0);
              if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                (*(pNVar9->klass->vtable)._75_set_text.methodPtr)
                          (pNVar9,pSVar5,(pNVar9->klass->vtable)._75_set_text.method);
                pPVar6 = (__this->fields)._playersProgressBar;
                if (pPVar6 != (ProgressBar_o *)0x0) {
                  (*(pPVar6->klass->vtable)._8_SetValue.methodPtr)
                            ((float)(__this->fields).NDOHFCNNKFA /
                             (float)(__this->fields).PLNOPJFFELC,0,pPVar6,0,
                             (pPVar6->klass->vtable)._8_SetValue.method);
                  pLVar3 = (__this->fields)._raidButton;
                  if (pLVar3 != (LabelButton_o *)0x0) {
                    UnityEngine_UI_Selectable__set_interactable
                              ((UnityEngine_UI_Selectable_o *)pLVar3,*piVar2 <= *piVar1,
                               (MethodInfo *)0x0);
                    return;
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
  return;
}


// ===== public void .ctor()  [RVA 0x3525F00]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$.ctor @ RVA 0x3525F00

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private bool BDCHHNLNCBO()  [RVA 0x3525EEC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$BDCHHNLNCBO @ RVA 0x3525EEC

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__BDCHHNLNCBO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,MethodInfo *method)

{
  return (__this->fields).PLNOPJFFELC <= (__this->fields).NDOHFCNNKFA;
}


// ===== private void FJIFDGEPKBH(NLFLMJPNOLF DGCIPGMAHCL)  [RVA 0x3525F08]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$FJIFDGEPKBH @ RVA 0x3525F08

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__FJIFDGEPKBH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,
               NLFLMJPNOLF_o *DGCIPGMAHCL,MethodInfo *method)

{
  NLFLMJPNOLF_o **ppNVar1;
  bool bVar2;
  CJFBGEEIPBA_o *__this_00;
  MethodInfo *method_00;
  NLFLMJPNOLF_o *pNVar3;
  
  if ((((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField != false) ||
      (DGCIPGMAHCL == (NLFLMJPNOLF_o *)0x0)) || ((__this->fields).BMFEDOFHEFE != false)) {
    return;
  }
  pNVar3 = (__this->fields).PMHMLJDMHFP;
  if (pNVar3 != (NLFLMJPNOLF_o *)0x0) {
    if ((DGCIPGMAHCL->fields).OHMDCKEDOGH != (pNVar3->fields).OHMDCKEDOGH) {
      return;
    }
    ppNVar1 = &(__this->fields).PMHMLJDMHFP;
    (__this->fields).PMHMLJDMHFP = DGCIPGMAHCL;
    thunk_FUN_01c20e04(ppNVar1,DGCIPGMAHCL);
    __this_00 = (__this->fields).ECLPCNFNJCP;
    if (__this_00 != (CJFBGEEIPBA_o *)0x0) {
      bVar2 = CJFBGEEIPBA__JJCBOPEDCBA(__this_00,DGCIPGMAHCL,(MethodInfo *)0x0);
      if (bVar2) {
        pNVar3 = *ppNVar1;
        if (pNVar3 == (NLFLMJPNOLF_o *)0x0) goto LAB_03625fbc;
        if ((pNVar3->fields).BHAOPCFDKCG == false) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__BEGNFALPJKP(__this,method_00);
          return;
        }
      }
      else {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__FNJKKJGNAFF
                  ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *)(ulong)bVar2,method_00
                  );
      }
                    /* WARNING: Could not recover jumptable at 0x03625fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._20_Close.methodPtr)
                (__this,(__this->klass->vtable)._20_Close.method);
      return;
    }
  }
LAB_03625fbc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KBKPMHNOJON()  [RVA 0x35250B0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$KBKPMHNOJON @ RVA 0x35250B0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__KBKPMHNOJON
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,MethodInfo *method)

{
  System_Action_NLFLMJPNOLF__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  CJFBGEEIPBA_o *__this_00;
  
  if ((DAT_045689fd & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_LAGJPPHNDBL__);
    DAT_045689fd = 1;
    method = extraout_x1;
  }
  (__this->fields).BMFEDOFHEFE = true;
  __this_00 = (__this->fields).ECLPCNFNJCP;
  IELDNEAAPBE = (System_Action_NLFLMJPNOLF__o *)
                thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo,method);
  System_Action<object>___ctor();
  if (__this_00 != (CJFBGEEIPBA_o *)0x0) {
    CJFBGEEIPBA__ACEKGCJIMKP(__this_00,IELDNEAAPBE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void DLOKPLFDEJA(MGDJPGGPDJI KGCNBJOCNHC)  [RVA 0x3525FC0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$DLOKPLFDEJA @ RVA 0x3525FC0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__DLOKPLFDEJA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,
               MGDJPGGPDJI_o *KGCNBJOCNHC,MethodInfo *method)

{
  bool bVar1;
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar2;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  EEOMEMBBGNA_o *pEVar3;
  System_Action_long__o *pSVar4;
  NLFLMJPNOLF_o *pNVar5;
  CJFBGEEIPBA_o *pCVar6;
  long lVar7;
  
  if ((DAT_045689fe & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_GHOCNBJIEEN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_MLBNBCLLKEL__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<long>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    FUN_01bab630(&StringLiteral_4855/*"CreateClanRaid"*/);
    DAT_045689fe = 1;
  }
  if ((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  pNVar5 = (__this->fields).PMHMLJDMHFP;
  if (pNVar5 != (NLFLMJPNOLF_o *)0x0) {
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<long>
                      ((System_Collections_Generic_IList_T__o *)(pNVar5->fields).MABPCBMOECE,
                       Method_DJNBJHPDKDP_OBECCOPBADO<long>__);
    if (bVar1) {
      return;
    }
    if (KGCNBJOCNHC != (MGDJPGGPDJI_o *)0x0) {
      lVar7 = (KGCNBJOCNHC->fields).ANAJGHJEEOC;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
        iVar2 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
        if (lVar7 != iVar2) {
          return;
        }
        pNVar5 = (__this->fields).PMHMLJDMHFP;
        if ((pNVar5 != (NLFLMJPNOLF_o *)0x0) &&
           (__this_01 = (pNVar5->fields).MABPCBMOECE,
           __this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
          lVar7 = (KGCNBJOCNHC->fields).ANAJGHJEEOC;
          iVar2 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                            (__this_01,0,
                             Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
          if (lVar7 != iVar2) {
            return;
          }
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar3 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
          if (pEVar3 != (EEOMEMBBGNA_o *)0x0) {
            bVar1 = DOCPIHOLNOA__BJBGLBAEIJB
                              ((pEVar3->fields).MICFEIBNOLM,StringLiteral_4855/*"CreateClanRaid"*/,
                               (KGCNBJOCNHC->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
            if (bVar1) {
              return;
            }
            pCVar6 = (__this->fields).ECLPCNFNJCP;
            pSVar4 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
            System_Action<long>___ctor();
            if (pCVar6 != (CJFBGEEIPBA_o *)0x0) {
              CJFBGEEIPBA__OONONOKDLGD(pCVar6,pSVar4,(MethodInfo *)0x0);
              pCVar6 = (__this->fields).ECLPCNFNJCP;
              pSVar4 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
              System_Action<long>___ctor();
              if (pCVar6 != (CJFBGEEIPBA_o *)0x0) {
                CJFBGEEIPBA__FHIDNNFNFMP(pCVar6,pSVar4,(MethodInfo *)0x0);
                return;
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


// ===== private void DHMEHBNHNJO()  [RVA 0x35261AC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$DHMEHBNHNJO @ RVA 0x35261AC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__DHMEHBNHNJO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,MethodInfo *method)

{
  CJFBGEEIPBA_o *__this_00;
  
  __this_00 = (__this->fields).ECLPCNFNJCP;
  if (__this_00 != (CJFBGEEIPBA_o *)0x0) {
    CJFBGEEIPBA__PMDADFKDAKJ(__this_00,(System_Action_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JNCKDHJJBPM(OJEHKJHEBID PBNPKBJKFHE)  [RVA 0x35261CC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$JNCKDHJJBPM @ RVA 0x35261CC

/* WARNING: Removing unreachable block (ram,0x03626408) */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__JNCKDHJJBPM
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,
               OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  NLFLMJPNOLF_o *pNVar6;
  System_Collections_Generic_IEnumerator_T__c *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  
  if ((DAT_045689ff & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_GetEnumerator__);
    DAT_045689ff = 1;
  }
  if ((PBNPKBJKFHE != (OJEHKJHEBID_o *)0x0) &&
     ((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField == false)) {
    pNVar6 = (__this->fields).PMHMLJDMHFP;
    if ((pNVar6 == (NLFLMJPNOLF_o *)0x0) ||
       (__this_00 = (PBNPKBJKFHE->fields).MJIHCLLODMF,
       __this_00 == (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar10 = (pNVar6->fields).OHMDCKEDOGH;
    pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                        Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_GetEnumerator__
                       );
    if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar7 = pSVar4->klass;
      uVar1._0_1_ = (pSVar7->_2).rank;
      uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar5 = pSVar7->vtable + *piVar9;
            goto LAB_036262b8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      method = (MethodInfo *)0x0;
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_036262b8:
      uVar8 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if ((uVar8 & 1) == 0) {
        iVar12 = 7;
        iVar11 = 7;
        goto joined_r0x03626358;
      }
      pSVar7 = pSVar4->klass;
      uVar2._0_1_ = (pSVar7->_2).rank;
      uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar2;
      if (uVar8 != 0) {
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerator<NLFLMJPNOLF>_TypeInfo) {
            pVVar5 = pSVar7->vtable + *piVar9;
            goto LAB_03626314;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      method = (MethodInfo *)0x0;
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_03626314:
      pNVar6 = (NLFLMJPNOLF_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if (pNVar6 == (NLFLMJPNOLF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while ((pNVar6->fields).OHMDCKEDOGH != lVar10);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__FJIFDGEPKBH(__this,pNVar6,method);
    iVar12 = 6;
    iVar11 = 6;
joined_r0x03626358:
    if (pSVar4 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
      pSVar7 = pSVar4->klass;
      uVar3._0_1_ = (pSVar7->_2).rank;
      uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar3;
      if (uVar8 != 0) {
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar5 = pSVar7->vtable + *piVar9;
            goto LAB_036263b0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_036263b0:
      (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      iVar11 = iVar12;
    }
    if ((iVar11 == 7) || (iVar11 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x036263e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._20_Close.methodPtr)
                (__this,(__this->klass->vtable)._20_Close.method);
      return;
    }
  }
  return;
}

