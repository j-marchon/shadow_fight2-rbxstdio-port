// TypeDefIndex 2021
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class MainClanDialog : ClanBaseDialog, JEFOMACMAAD
// Fields:
//   private ResolutionButton _membersButton; // 0xC8
//   private ResolutionButton _clanInfoButton; // 0xD0
//   private ResolutionButton _clanFindButton; // 0xD8
//   private RectTransform _viewsMountPoint; // 0xE0
//   private MembersClanView _tabMembersPrefab; // 0xE8
//   private ClanInfoView _tabGeneralInfoPrefab; // 0xF0
//   private FindClanView _tabFindClanPrefab; // 0xF8
//   private MembersClanView CFJDODBFDKL; // 0x100
//   private ClanInfoView NNNOHBNKKPP; // 0x108
//   private FindClanView BJHMGKHMGLH; // 0x110
//   private OJEHKJHEBID FBILHKCKHEJ; // 0x118
//   private TabView HIOOMAJPEJP; // 0x120
//   private int CLPMCCMHELK; // 0x128
//   private Button BNIGIFNBGJE; // 0x130
//   private bool <LLDCLDBEMKA>k__BackingField; // 0x138
//   private bool AKIDPDANOCD; // 0x139

// ===== private void EIOBMJIMBPM()  [RVA 0x329C500]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$EIOBMJIMBPM @ RVA 0x329C500

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__EIOBMJIMBPM
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,MethodInfo *method)

{
  TabView_o **ppFVar1;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  TabView_o *pFVar3;
  TabView_o *FNCBJFJMIPB;
  MethodInfo *pMVar4;
  
  if ((DAT_045673a2 & 1) == 0) {
    FUN_01bab630(&TabView_TypeInfo);
    FUN_01bab630(&StringLiteral_10813/*"RaidChat.tab_light_active"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_045673a2 = 1;
  }
  if ((__this->fields).HIOOMAJPEJP != (TabView_o *)0x0) {
    return;
  }
  pNVar2 = (__this->fields)._membersButton;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
              (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10813/*"RaidChat.tab_light_active"*/,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._membersButton;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10813/*"RaidChat.tab_light_active"*/,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._membersButton;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                  (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10813/*"RaidChat.tab_light_active"*/,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._clanInfoButton;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
          Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
                    (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10813/*"RaidChat.tab_light_active"*/,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._clanInfoButton;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                      (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10813/*"RaidChat.tab_light_active"*/,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._clanInfoButton;
            if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
              Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                        (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10813/*"RaidChat.tab_light_active"*/,(MethodInfo *)0x0);
              pNVar2 = (__this->fields)._clanFindButton;
              if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
                          (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10813/*"RaidChat.tab_light_active"*/,(MethodInfo *)0x0);
                pNVar2 = (__this->fields)._clanFindButton;
                if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                  Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                            (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10813/*"RaidChat.tab_light_active"*/,(MethodInfo *)0x0);
                  pNVar2 = (__this->fields)._clanFindButton;
                  if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    ppFVar1 = &(__this->fields).HIOOMAJPEJP;
                    Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                              (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10813/*"RaidChat.tab_light_active"*/,(MethodInfo *)0x0);
                    pFVar3 = (TabView_o *)thunk_FUN_01bda818(TabView_TypeInfo);
                    TabView___ctor(pFVar3,(MethodInfo *)0x0);
                    *ppFVar1 = pFVar3;
                    thunk_FUN_01c20e04(ppFVar1,pFVar3);
                    if (*ppFVar1 != (TabView_o *)0x0) {
                      pMVar4 = (MethodInfo *)0x0;
                      TabView__GIENGNEGHPJ(*ppFVar1,(JEFOMACMAAD_o *)__this,(MethodInfo *)0x0);
                      pFVar3 = (__this->fields).HIOOMAJPEJP;
                      pNVar2 = (__this->fields)._membersButton;
                      pMVar4 = (MethodInfo *)
                               Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__NBMBGKIMBBE
                                         (__this,0,pMVar4);
                      if (pFVar3 != (TabView_o *)0x0) {
                        TabView__GDCPIEANEJF
                                  (pFVar3,(UnityEngine_UI_Button_o *)pNVar2,(TabView_o *)pMVar4,
                                   (MethodInfo *)0x0);
                        pFVar3 = (__this->fields).HIOOMAJPEJP;
                        pNVar2 = (__this->fields)._clanInfoButton;
                        pMVar4 = (MethodInfo *)
                                 Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__NBMBGKIMBBE
                                           (__this,1,pMVar4);
                        if (pFVar3 != (TabView_o *)0x0) {
                          TabView__GDCPIEANEJF
                                    (pFVar3,(UnityEngine_UI_Button_o *)pNVar2,(TabView_o *)pMVar4,
                                     (MethodInfo *)0x0);
                          if ((__this->fields)._LLDCLDBEMKA_k__BackingField == false) {
                            return;
                          }
                          pFVar3 = (__this->fields).HIOOMAJPEJP;
                          pNVar2 = (__this->fields)._clanFindButton;
                          FNCBJFJMIPB = Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__NBMBGKIMBBE
                                                  (__this,2,pMVar4);
                          if (pFVar3 != (TabView_o *)0x0) {
                            TabView__GDCPIEANEJF
                                      (pFVar3,(UnityEngine_UI_Button_o *)pNVar2,FNCBJFJMIPB,
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EBBMADMCCCG(int DPJIDNBJIBG)  [RVA 0x329CAC8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$EBBMADMCCCG @ RVA 0x329CAC8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__EBBMADMCCCG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  return;
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x329CACC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$IGDDKJJMDLP @ RVA 0x329CACC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void OnDisable()  [RVA 0x329CAD0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$OnDisable @ RVA 0x329CAD0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__OnDisable
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *HODGKDNOHLP;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  
  if ((DAT_045673a3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045673a3 = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    HODGKDNOHLP = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
      Nekki_SF2_GUI_Menu_MainMenu__RestoreParentAndTryShowScroll
                (pNVar2,HODGKDNOHLP,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void OnEnable()  [RVA 0x329CBC8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$OnEnable @ RVA 0x329CBC8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__OnEnable
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *HODGKDNOHLP;
  UnityEngine_Transform_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar3;
  
  if ((DAT_045673a4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045673a4 = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar3 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar3 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if (pNVar3 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
      Nekki_SF2_GUI_Menu_MainMenu__Show(pNVar3,(MethodInfo *)0x0);
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      pNVar3 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      HODGKDNOHLP = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0),
         pNVar3 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0)) {
        Nekki_SF2_GUI_Menu_MainMenu__ChangeParentAndHideScroll
                  (pNVar3,HODGKDNOHLP,pUVar2,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x329CD14]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$GKPJMHOFIOO @ RVA 0x329CD14

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,MethodInfo *method)

{
  TabView_o *__this_00;
  
  (__this->fields).AKIDPDANOCD = true;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__EIOBMJIMBPM(__this,method);
  __this_00 = (__this->fields).HIOOMAJPEJP;
  if (__this_00 != (TabView_o *)0x0) {
    TabView__AAOLKEFFIIN(__this_00,(__this->fields).CLPMCCMHELK,(MethodInfo *)0x0);
    (__this->fields).AKIDPDANOCD = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DODAMFKMJCE(bool CJNHFNHJHPE)  [RVA 0x329CD4C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$DODAMFKMJCE @ RVA 0x329CD4C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__DODAMFKMJCE
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._LLDCLDBEMKA_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x329CD58]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$Init @ RVA 0x329CD58

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  RaidClansManager_o *__this_02;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar2;
  
  if ((DAT_045673a5 & 1) == 0) {
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&BCDCMCKBKEN_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_JNCKDHJJBPM__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_8789/*"MainClanDialog::Init: info == null"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045673a5 = 1;
  }
  (__this->fields)._LLDCLDBEMKA_k__BackingField = false;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,StringLiteral_1/*""*/,
             StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,0,(MethodInfo *)0x0);
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (BCDCMCKBKEN_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)BCDCMCKBKEN_TypeInfo)) {
      (__this->fields).FBILHKCKHEJ = (OJEHKJHEBID_o *)IMMNELPBGIF[1].klass;
      thunk_FUN_01c20e04(&(__this->fields).FBILHKCKHEJ);
      __this_00 = (__this->fields)._clanFindButton;
      (__this->fields)._LLDCLDBEMKA_k__BackingField =
           *(bool_conflict *)((long)&IMMNELPBGIF[1].monitor + 4);
      (__this->fields).CLPMCCMHELK = *(int32_t *)&IMMNELPBGIF[1].monitor;
      if ((__this_00 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
        CJNHFNHJHPE = (System_Action_OJEHKJHEBID__o *)
                      thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_02 != (RaidClansManager_o *)0x0) {
          RaidClansManager__MFDOCMJONOH(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
          if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
          if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0339cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pNVar2->klass->vtable)._20_Show.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._20_Show.method);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_8789/*"MainClanDialog::Init: info == null"*/,(MethodInfo *)0x0);
  return;
}


// ===== protected TabView NBMBGKIMBBE(MainClanDialog.CPBMIPAPFCG PAPNCMCIJNN)  [RVA 0x329C71C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$NBMBGKIMBBE @ RVA 0x329C71C

TabView_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__NBMBGKIMBBE
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,int32_t PAPNCMCIJNN,
          MethodInfo *method)

{
  bool bVar1;
  PlayerData_o *__this_00;
  int64_t FKIGDGJPIAC;
  UnityEngine_Component_o *pUVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *pNVar5;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o **ppNVar6;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *pNVar7;
  System_Action_object__o **ppSVar8;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *pNVar9;
  System_Action_object__o *pSVar10;
  System_Action_object__c *pSVar11;
  
  if ((DAT_045673a6 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ClanInfoView>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<FindClanView>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<MembersClanView>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ClanInfoView>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<FindClanView>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<MembersClanView>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045673a6 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 == (PlayerData_o *)0x0) goto LAB_0339cac4;
  FKIGDGJPIAC = PlayerData__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
  if (PAPNCMCIJNN == 2) {
    pNVar7 = (__this->fields).BJHMGKHMGLH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o **)&(__this->fields).BJHMGKHMGLH;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar7 = (__this->fields)._tabFindClanPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar2 = (UnityEngine_Component_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pNVar7,
                          Method_UnityEngine_Object_Instantiate<FindClanView>__);
      if (pUVar2 == (UnityEngine_Component_o *)0x0) goto LAB_0339cac4;
      pNVar7 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *)
               UnityEngine_Component__GetComponent<object>
                         (pUVar2,Method_UnityEngine_Component_GetComponent<FindClanView>__);
      *ppNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *)pNVar7;
      thunk_FUN_01c20e04(ppNVar6,pNVar7);
    }
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *)*ppNVar6 ==
        (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *)0x0) goto LAB_0339cac4;
    Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView__Init
              ((Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanView_o *)*ppNVar6,(MethodInfo *)0x0);
LAB_0339c9b0:
    pNVar5 = *ppNVar6;
  }
  else {
    if (PAPNCMCIJNN == 1) {
      pNVar5 = (__this->fields).NNNOHBNKKPP;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      ppNVar6 = &(__this->fields).NNNOHBNKKPP;
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar5 = (__this->fields)._tabGeneralInfoPrefab;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pUVar2 = (UnityEngine_Component_o *)
                 UnityEngine_Object__Instantiate<object>
                           ((Il2CppObject *)pNVar5,
                            Method_UnityEngine_Object_Instantiate<ClanInfoView>__);
        if (pUVar2 == (UnityEngine_Component_o *)0x0) goto LAB_0339cac4;
        pNVar5 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *)
                 UnityEngine_Component__GetComponent<object>
                           (pUVar2,Method_UnityEngine_Component_GetComponent<ClanInfoView>__);
        *ppNVar6 = pNVar5;
        thunk_FUN_01c20e04(ppNVar6,pNVar5);
      }
      if (*ppNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *)0x0) goto LAB_0339cac4;
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__Init(*ppNVar6,FKIGDGJPIAC,(MethodInfo *)0x0);
      goto LAB_0339c9b0;
    }
    pNVar5 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *)0x0;
    if (PAPNCMCIJNN == 0) {
      pNVar9 = (__this->fields).CFJDODBFDKL;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      ppNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o **)&(__this->fields).CFJDODBFDKL;
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar9 = (__this->fields)._tabMembersPrefab;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pUVar2 = (UnityEngine_Component_o *)
                 UnityEngine_Object__Instantiate<object>
                           ((Il2CppObject *)pNVar9,
                            Method_UnityEngine_Object_Instantiate<MembersClanView>__);
        if (pUVar2 == (UnityEngine_Component_o *)0x0) goto LAB_0339cac4;
        pNVar9 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *)
                 UnityEngine_Component__GetComponent<object>
                           (pUVar2,Method_UnityEngine_Component_GetComponent<MembersClanView>__);
        *ppNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *)pNVar9;
        thunk_FUN_01c20e04(ppNVar6,pNVar9);
      }
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *)*ppNVar6 ==
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *)0x0) goto LAB_0339cac4;
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__Init
                ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *)*ppNVar6,FKIGDGJPIAC,
                 (__this->fields)._viewsMountPoint,(MethodInfo *)0x0);
      goto LAB_0339c9b0;
    }
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return (TabView_o *)pNVar5;
  }
  if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *)0x0) {
    ppSVar8 = &(pNVar5->fields).super.OnCloseClickAction;
    pSVar10 = *ppSVar8;
    pSVar3 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    if (__this != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *)0x0) {
      System_Action<object>___ctor();
      pSVar3 = System_Delegate__Combine((System_Delegate_o *)pSVar10,pSVar3,(MethodInfo *)0x0);
      pSVar11 = System_Action<object>_TypeInfo;
      if (pSVar3 == (System_Delegate_o *)0x0) {
        lVar4 = 0;
        *ppSVar8 = (System_Action_object__o *)0x0;
      }
      else {
        pSVar10 = (System_Action_object__o *)
                  thunk_FUN_01bda71c(pSVar3,System_Action<object>_TypeInfo);
        if (pSVar10 == (System_Action_object__o *)0x0) {
LAB_0339ca54:
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar3,pSVar11);
        }
        *ppSVar8 = pSVar10;
        pSVar11 = System_Action<object>_TypeInfo;
        lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<object>_TypeInfo);
        if (lVar4 == 0) goto LAB_0339ca54;
      }
      thunk_FUN_01c20e04(ppSVar8,lVar4);
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._viewsMountPoint;
      if ((__this_02 != (UnityEngine_RectTransform_o *)0x0) &&
         (parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
        return (TabView_o *)pNVar5;
      }
    }
  }
LAB_0339cac4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AGOFLEMMFNJ(Button PAOPMKEAGBI, TabView EOACICBFBAM, int ACMHJAJPANF, Button BECCOGAMKJL, TabView FNCBJFJMIPB, int OGPGLGPMEPD)  [RVA 0x329CF98]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$AGOFLEMMFNJ @ RVA 0x329CF98

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__AGOFLEMMFNJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,
               UnityEngine_UI_Button_o *PAOPMKEAGBI,TabView_o *EOACICBFBAM,int32_t ACMHJAJPANF,
               UnityEngine_UI_Button_o *BECCOGAMKJL,TabView_o *FNCBJFJMIPB,int32_t OGPGLGPMEPD,
               MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x329CF9C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$.ctor @ RVA 0x329CF9C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void DLOKPLFDEJA(MGDJPGGPDJI KGCNBJOCNHC)  [RVA 0x329CFA4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$DLOKPLFDEJA @ RVA 0x329CFA4

/* WARNING: Removing unreachable block (ram,0x0339d1a8) */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__DLOKPLFDEJA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,
               MGDJPGGPDJI_o *KGCNBJOCNHC,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  OJEHKJHEBID_o *pOVar7;
  System_Collections_Generic_IEnumerator_T__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_045673a7 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__);
    DAT_045673a7 = 1;
  }
  if ((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField == false) {
    pOVar7 = (__this->fields).FBILHKCKHEJ;
    if ((pOVar7 == (OJEHKJHEBID_o *)0x0) ||
       (__this_00 = (pOVar7->fields).MABPCBMOECE,
       __this_00 == (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                        Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__
                       );
    if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar8 = pSVar4->klass;
      uVar1._0_1_ = (pSVar8->_2).rank;
      uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_0339d088;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0339d088:
      uVar9 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if ((uVar9 & 1) == 0) goto LAB_0339d11c;
      pSVar8 = pSVar4->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_0339d0e4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo,0);
LAB_0339d0e4:
      auVar11 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      lVar6 = auVar11._0_8_;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (KGCNBJOCNHC == (MGDJPGGPDJI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (*(long *)(lVar6 + 0x18) != (KGCNBJOCNHC->fields).ANAJGHJEEOC);
    *(int32_t *)(lVar6 + 0x28) = (KGCNBJOCNHC->fields).BDPMJNBHKIJ;
    Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__LBDDPJHLKPG(__this,auVar11._8_8_);
LAB_0339d11c:
    if (pSVar4 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
      pSVar8 = pSVar4->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_0339d178;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_0339d178:
      (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    }
  }
  return;
}


// ===== private void NIAGIDFKNLL(int DPJIDNBJIBG)  [RVA 0x329D310]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$NIAGIDFKNLL @ RVA 0x329D310

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__NIAGIDFKNLL
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  UnityEngine_UI_Button_o **ppUVar1;
  bool bVar2;
  TabView_o *pFVar3;
  TabView_o *x;
  UnityEngine_UI_Button_o *pUVar4;
  
  if ((DAT_045673a8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045673a8 = 1;
  }
  pFVar3 = (__this->fields).HIOOMAJPEJP;
  if (pFVar3 != (TabView_o *)0x0) {
    x = TabView__IDLJKBJEEHF(pFVar3,DPJIDNBJIBG,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (x == (TabView_o *)0x0) goto LAB_0339d42c;
      (*x->klass[1]._1.image)(x,(__this->fields).FBILHKCKHEJ,x->klass[1]._1.gc_desc);
    }
    pUVar4 = (__this->fields).BNIGIFNBGJE;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppUVar1 = &(__this->fields).BNIGIFNBGJE;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      if (*ppUVar1 == (UnityEngine_UI_Button_o *)0x0) goto LAB_0339d42c;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)*ppUVar1,true,(MethodInfo *)0x0);
    }
    pFVar3 = (__this->fields).HIOOMAJPEJP;
    if (pFVar3 != (TabView_o *)0x0) {
      pUVar4 = TabView__MJEMLECEAHI(pFVar3,DPJIDNBJIBG,(MethodInfo *)0x0);
      *ppUVar1 = pUVar4;
      thunk_FUN_01c20e04(ppUVar1,pUVar4);
      if (*ppUVar1 != (UnityEngine_UI_Button_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)*ppUVar1,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0339d42c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BBAAIOMLBKH(int DPJIDNBJIBG)  [RVA 0x329D430]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$BBAAIOMLBKH @ RVA 0x329D430

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__BBAAIOMLBKH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__NIAGIDFKNLL(__this,DPJIDNBJIBG,method);
  if ((__this->fields).AKIDPDANOCD != false) {
    return;
  }
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  return;
}


// ===== private void JNCKDHJJBPM(object IMMNELPBGIF)  [RVA 0x329D45C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$JNCKDHJJBPM @ RVA 0x329D45C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__JNCKDHJJBPM
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  MethodInfo *method_00;
  OJEHKJHEBID_o *pOVar1;
  
  if ((DAT_045673a9 & 1) == 0) {
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    DAT_045673a9 = 1;
  }
  if (((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField == false) &&
     (IMMNELPBGIF != (Il2CppObject *)0x0)) {
    if (IMMNELPBGIF->klass != (Il2CppClass *)OJEHKJHEBID_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    pOVar1 = (__this->fields).FBILHKCKHEJ;
    if (pOVar1 == (OJEHKJHEBID_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (IMMNELPBGIF[1].monitor == (void *)(pOVar1->fields).ADEIKPGDIPM) {
      (__this->fields).FBILHKCKHEJ = (OJEHKJHEBID_o *)IMMNELPBGIF;
      thunk_FUN_01c20e04(&(__this->fields).FBILHKCKHEJ,IMMNELPBGIF);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__LBDDPJHLKPG(__this,method_00);
      return;
    }
  }
  return;
}


// ===== private void GKNMDAMGCJG(int DPJIDNBJIBG)  [RVA 0x329D500]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$GKNMDAMGCJG @ RVA 0x329D500

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__GKNMDAMGCJG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x329D504]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$OnDestroy @ RVA 0x329D504

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,MethodInfo *method)

{
  RaidClansManager_o *__this_00;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_045673aa & 1) == 0) {
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_JNCKDHJJBPM__);
    DAT_045673aa = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_OJEHKJHEBID__o *)
                thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (RaidClansManager_o *)0x0) {
    RaidClansManager__OKAMOFKHOLK(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__OnDestroy
              ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_ShowFinder()  [RVA 0x329D5C8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$get_ShowFinder @ RVA 0x329D5C8

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__get_ShowFinder
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,MethodInfo *method)

{
  return (__this->fields)._LLDCLDBEMKA_k__BackingField;
}


// ===== private void LBDDPJHLKPG()  [RVA 0x329D26C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$LBDDPJHLKPG @ RVA 0x329D26C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__LBDDPJHLKPG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  TabView_o *__this_00;
  TabView_o *x;
  
  if ((DAT_045673ab & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045673ab = 1;
  }
  __this_00 = (__this->fields).HIOOMAJPEJP;
  if (__this_00 != (TabView_o *)0x0) {
    x = TabView__CKNDOOPOOEF(__this_00,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x != (TabView_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0339d2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*x->klass[1]._1.image)(x,(__this->fields).FBILHKCKHEJ,x->klass[1]._1.gc_desc);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x329D5D0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$EJHAPHAHMHG @ RVA 0x329D5D0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,
               System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  return;
}

