// TypeDefIndex 214
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public abstract class LeaderboardSeasonViewController : MonoBehaviour
// Fields:
//   private Transform PDEAGAFHDFI; // 0x20
//   private GameObject OHBLFFNDIDC; // 0x28
//   private SFButton IELNFDNPDEM; // 0x30
//   private SFButton NJHJPOAKMNP; // 0x38
//   private RaidLeaderboardView JMAFDBBBNEC; // 0x40
//   private RaidLeaderboardView MAAPMDHDDGL; // 0x48
//   private LabelAlias JICANOFGOJF; // 0x50
//   private LoadingCircle PGEOMGONABB; // 0x58
//   private SimpleScroll PDHMLFAMNCO; // 0x60
//   private GameObject ECJHPNCFJMM; // 0x68
//   private GameObject LLPHICIPDBC; // 0x70
//   public BANPLPOPIGI PlayersLeaderboardSource; // 0x78
//   public PBHDPJBLDLG ClansLeaderboardSource; // 0x80
//   private IFOIPICDFHN ILIAKNEMPHH; // 0x88
//   private RaidTopHundredDialog ILCGLGPADOK; // 0x90
//   private IEnumerator JJNJMJMBOLN; // 0x98
//   public bool FakeLastCell; // 0xA0
//   private bool <BOGAKJOFOEK>k__BackingField; // 0xA1
//   protected bool JCCKLCBGABE; // 0xA2

// ===== private void Update()  [RVA 0x311FDD8]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$Update @ RVA 0x311FDD8

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Update
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  bool bVar1;
  BANPLPOPIGI_o *__this_00;
  PBHDPJBLDLG_o *__this_01;
  MethodInfo *method_00;
  
  bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OOIAOANJOFO(__this,method_00);
  }
  if ((__this->fields).ILIAKNEMPHH == 1) {
    __this_00 = (__this->fields).PlayersLeaderboardSource;
    if (__this_00 != (BANPLPOPIGI_o *)0x0) {
      BANPLPOPIGI__LLCONNGHGKD(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    __this_01 = (__this->fields).ClansLeaderboardSource;
    if (__this_01 != (PBHDPJBLDLG_o *)0x0) {
      PBHDPJBLDLG__LLCONNGHGKD(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FLOCPEALPFB()  [RVA 0x311FF1C]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$FLOCPEALPFB @ RVA 0x311FF1C

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__FLOCPEALPFB
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  bool bVar1;
  PBHDPJBLDLG_o *__this_00;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar3;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this_02;
  
  if ((DAT_0456661b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_4420/*"Clans"*/);
    DAT_0456661b = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if ((__this->fields).ClansLeaderboardSource != (PBHDPJBLDLG_o *)0x0) {
    pNVar3 = (__this->fields).MAAPMDHDDGL;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      __this_00 = (__this->fields).ClansLeaderboardSource;
      if (__this_00 == (PBHDPJBLDLG_o *)0x0) goto LAB_03220028;
      bVar1 = PBHDPJBLDLG__OIDEAAIMGMA(__this_00,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = (__this->fields).JCCKLCBGABE != false;
      }
      else {
        bVar1 = false;
      }
      pNVar3 = (__this->fields).MAAPMDHDDGL;
      if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) goto LAB_03220028;
      (pNVar3->fields).HOKHHIBHFBM = bVar1;
    }
  }
  __this_02 = (__this->fields).ILCGLGPADOK;
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._6_unknown.methodPtr)
                     (__this,(__this->klass->vtable)._6_unknown.method);
  pSVar2 = System_String__Concat(pSVar2,StringLiteral_4420/*"Clans"*/,(MethodInfo *)0x0);
  if (__this_02 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__OnLoadedScrollItems
              (__this_02,pSVar2,(MethodInfo *)0x0);
    __this_01 = (__this->fields).PDHMLFAMNCO;
    if (__this_01 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__RebuildLayout(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03220028:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void IGPPHMFFLKJ(object IMMNELPBGIF)  [RVA 0x312002C]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$IGPPHMFFLKJ @ RVA 0x312002C

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__IGPPHMFFLKJ
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  System_String_o *pSVar1;
  JCFJFJCKLKG_o *NLKBNMDMJEB;
  
  if ((DAT_0456661c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    FUN_01bab630(&StringLiteral_1331/*"-Clan"*/);
    FUN_01bab630(&StringLiteral_8359/*"LeaderboardSeasonViewController::OnGetLeaderboardClansSuccess, "*/);
    FUN_01bab630(&StringLiteral_8362/*"LeaderboardSeasonViewController::onGetLeaderboardClansSuccess - data is corrupted"*/);
    DAT_0456661c = 1;
  }
  if ((__this->fields)._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8362/*"LeaderboardSeasonViewController::onGetLeaderboardClansSuccess - data is corrupted"*/,(MethodInfo *)0x0);
    NLKBNMDMJEB = (JCFJFJCKLKG_o *)0x0;
  }
  else {
    if (IMMNELPBGIF->klass != (Il2CppClass *)JCFJFJCKLKG_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OHJHOPAHPCM
              (__this,(JCFJFJCKLKG_o *)IMMNELPBGIF,method);
    NLKBNMDMJEB = (JCFJFJCKLKG_o *)IMMNELPBGIF;
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._6_unknown.methodPtr)
                     (__this,(__this->klass->vtable)._6_unknown.method);
  pSVar1 = System_String__Concat(StringLiteral_8359/*"LeaderboardSeasonViewController::OnGetLeaderboardClansSuccess, "*/,pSVar1,StringLiteral_1331/*"-Clan"*/,(MethodInfo *)0x0);
  RaidLeaderboardsManager__MAAFGOJFCHD(IMMNELPBGIF != (Il2CppObject *)0x0,pSVar1,NLKBNMDMJEB,(MethodInfo *)0x0);
  return;
}


// ===== public void StopAddingItems()  [RVA 0x3120254]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$StopAddingItems @ RVA 0x3120254

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__StopAddingItems
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  BANPLPOPIGI_o *__this_00;
  PBHDPJBLDLG_o *__this_01;
  
  __this_00 = (__this->fields).PlayersLeaderboardSource;
  if (__this_00 != (BANPLPOPIGI_o *)0x0) {
    BANPLPOPIGI__JOIFLMJEEJK(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).ClansLeaderboardSource;
    if (__this_01 != (PBHDPJBLDLG_o *)0x0) {
      PBHDPJBLDLG__DNNPDIPCCEN(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HJJOGMALEOH()  [RVA 0x3120284]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$HJJOGMALEOH @ RVA 0x3120284

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__HJJOGMALEOH
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  bool bVar1;
  BANPLPOPIGI_o *__this_00;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar3;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this_02;
  
  if ((DAT_0456661d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10333/*"Players"*/);
    DAT_0456661d = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if ((__this->fields).PlayersLeaderboardSource != (BANPLPOPIGI_o *)0x0) {
    pNVar3 = (__this->fields).JMAFDBBBNEC;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      __this_00 = (__this->fields).PlayersLeaderboardSource;
      if (__this_00 == (BANPLPOPIGI_o *)0x0) goto LAB_03220390;
      bVar1 = BANPLPOPIGI__OIDEAAIMGMA(__this_00,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = (__this->fields).JCCKLCBGABE != false;
      }
      else {
        bVar1 = false;
      }
      pNVar3 = (__this->fields).JMAFDBBBNEC;
      if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) goto LAB_03220390;
      (pNVar3->fields).HOKHHIBHFBM = bVar1;
    }
  }
  __this_02 = (__this->fields).ILCGLGPADOK;
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._6_unknown.methodPtr)
                     (__this,(__this->klass->vtable)._6_unknown.method);
  pSVar2 = System_String__Concat(pSVar2,StringLiteral_10333/*"Players"*/,(MethodInfo *)0x0);
  if (__this_02 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__OnLoadedScrollItems
              (__this_02,pSVar2,(MethodInfo *)0x0);
    __this_01 = (__this->fields).PDHMLFAMNCO;
    if (__this_01 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__RebuildLayout(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03220390:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void MDLODDGPPAH(object IMMNELPBGIF)  [RVA 0x3120394]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$MDLODDGPPAH @ RVA 0x3120394

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__MDLODDGPPAH
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  Il2CppObject *extraout_x1;
  
  if ((DAT_0456661e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_8363/*"LeaderboardSeasonViewController::onGetLeaderboardPlayersFail"*/);
    DAT_0456661e = 1;
    IMMNELPBGIF = extraout_x1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,IMMNELPBGIF);
  }
  UnityEngine_Debug__LogError(StringLiteral_8363/*"LeaderboardSeasonViewController::onGetLeaderboardPlayersFail"*/,(MethodInfo *)0x0);
  return;
}


// ===== private void OHJHOPAHPCM(JCFJFJCKLKG DJFFMPLBCKC)  [RVA 0x3120164]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$OHJHOPAHPCM @ RVA 0x3120164

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OHJHOPAHPCM
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               JCFJFJCKLKG_o *DJFFMPLBCKC,MethodInfo *method)

{
  bool bVar1;
  System_Action_o *NAKEOECMGIG;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar2;
  PBHDPJBLDLG_o *__this_00;
  
  if ((DAT_0456661f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_FLOCPEALPFB__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456661f = 1;
  }
  pNVar2 = (__this->fields).MAAPMDHDDGL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).MAAPMDHDDGL;
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pNVar2->fields).HOKHHIBHFBM = true;
  }
  __this_00 = (__this->fields).ClansLeaderboardSource;
  if (__this_00 != (PBHDPJBLDLG_o *)0x0) {
    NAKEOECMGIG = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    PBHDPJBLDLG__LPNCEHPFOAF(__this_00,DJFFMPLBCKC,NAKEOECMGIG,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void MJMMIEKDIAK()  [RVA 0x31203FC]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$MJMMIEKDIAK @ RVA 0x31203FC

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__MJMMIEKDIAK
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__EKAMMIMDIPJ(__this,true,in_x2);
  return;
}


// ===== protected void EKAMMIMDIPJ(bool LODKPINFHCO)  [RVA 0x3120404]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$EKAMMIMDIPJ @ RVA 0x3120404

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__EKAMMIMDIPJ
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               bool LODKPINFHCO,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  SFButton_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar6;
  
  if ((DAT_04566620 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10978/*"RaidTop100Dialog.tab_top100_active"*/);
    FUN_01bab630(&StringLiteral_10979/*"RaidTop100Dialog.tab_top100_inactive"*/);
    DAT_04566620 = 1;
  }
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if ((!bVar1) || ((LODKPINFHCO && ((__this->fields).ILIAKNEMPHH == 1)))) {
      return;
    }
    pSVar3 = (__this->fields).NJHJPOAKMNP;
    (__this->fields).ILIAKNEMPHH = 1;
    if (pSVar3 != (SFButton_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,-15.0,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).NJHJPOAKMNP;
      if ((pSVar3 != (SFButton_o *)0x0) &&
         (pNVar5 = (Nekki_SF2_GUI_ResolutionImage_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pSVar3,
                              Method_UnityEngine_Component_GetComponent<ResolutionImage>__),
         pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,StringLiteral_10978/*"RaidTop100Dialog.tab_top100_active"*/,(MethodInfo *)0x0);
        pSVar3 = (__this->fields).IELNFDNPDEM;
        if (pSVar3 != (SFButton_o *)0x0) {
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,15.0,(MethodInfo *)0x0);
          pSVar3 = (__this->fields).IELNFDNPDEM;
          if ((pSVar3 != (SFButton_o *)0x0) &&
             (pNVar5 = (Nekki_SF2_GUI_ResolutionImage_o *)
                       UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)pSVar3,
                                  Method_UnityEngine_Component_GetComponent<ResolutionImage>__),
             pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (pNVar5,StringLiteral_10979/*"RaidTop100Dialog.tab_top100_inactive"*/,(MethodInfo *)0x0);
            pNVar6 = (__this->fields).MAAPMDHDDGL;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Implicit
                              ((UnityEngine_Object_o *)pNVar6,(MethodInfo *)0x0);
            if (bVar1) {
              pNVar6 = (__this->fields).MAAPMDHDDGL;
              if ((pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) ||
                 (pUVar2 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
                 pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032205e4;
              UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
            }
            pNVar6 = (__this->fields).JMAFDBBBNEC;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Implicit
                              ((UnityEngine_Object_o *)pNVar6,(MethodInfo *)0x0);
            method_00 = extraout_x1;
            if (bVar1) {
              pNVar6 = (__this->fields).JMAFDBBBNEC;
              if ((pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) ||
                 (pUVar2 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
                 pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032205e4;
              UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
              method_00 = extraout_x1_00;
            }
            Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Refresh(__this,method_00);
            if (!LODKPINFHCO) {
              return;
            }
            EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_032205e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(RaidTopHundredDialog LMEHKLFGEHI, Transform LHJDDHHOLPC, GameObject LDKAFJPEAPA, SFButton MIOHNKFGENK, SFButton KAKKIFMDDMO, LabelAlias BIMIBKKLPLB, LoadingCircle JMBOIPJLIDO, SimpleScroll MGFBPKIBNJI, GameObject JEHGAGMHBIO, GameObject EJPPCCJNDAN)  [RVA 0x312066C]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$Init @ RVA 0x312066C

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Init
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *LMEHKLFGEHI,
               UnityEngine_Transform_o *LHJDDHHOLPC,UnityEngine_GameObject_o *LDKAFJPEAPA,
               SFButton_o *MIOHNKFGENK,SFButton_o *KAKKIFMDDMO,
               Nekki_SF2_GUI_LabelAlias_o *BIMIBKKLPLB,
               Nekki_SF2_GUI_Scripts_LoadingCircle_o *JMBOIPJLIDO,
               Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,UnityEngine_GameObject_o *JEHGAGMHBIO,
               UnityEngine_GameObject_o *EJPPCCJNDAN,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o **ppNVar1;
  UnityEngine_Transform_o **ppUVar2;
  UnityEngine_GameObject_o **ppUVar3;
  Nekki_SF2_GUI_Scripts_LoadingCircle_o **ppNVar4;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  MethodInfo *method_00;
  BHEDGAKGKPO_StaticFields *pBVar7;
  Nekki_SF2_GUI_LabelAlias_o **ppNVar8;
  Nekki_SF2_GUI_LabelAlias_o *pNVar9;
  UnityEngine_Events_UnityEvent_o *pUVar10;
  SFButton_o **ppSVar11;
  SFButton_o **ppSVar12;
  
  if ((DAT_04566621 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_KBPLKNNFMHH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_MJMMIEKDIAK__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566621 = 1;
  }
  ppNVar1 = &(__this->fields).ILCGLGPADOK;
  *ppNVar1 = LMEHKLFGEHI;
  thunk_FUN_01c20e04(ppNVar1,LMEHKLFGEHI);
  ppUVar2 = &(__this->fields).PDEAGAFHDFI;
  *ppUVar2 = LHJDDHHOLPC;
  thunk_FUN_01c20e04(ppUVar2,LHJDDHHOLPC);
  ppUVar3 = &(__this->fields).OHBLFFNDIDC;
  *ppUVar3 = LDKAFJPEAPA;
  thunk_FUN_01c20e04(ppUVar3,LDKAFJPEAPA);
  ppSVar12 = &(__this->fields).IELNFDNPDEM;
  *ppSVar12 = MIOHNKFGENK;
  thunk_FUN_01c20e04(ppSVar12,MIOHNKFGENK);
  ppSVar11 = &(__this->fields).NJHJPOAKMNP;
  *ppSVar11 = KAKKIFMDDMO;
  thunk_FUN_01c20e04(ppSVar11,KAKKIFMDDMO);
  ppNVar8 = &(__this->fields).JICANOFGOJF;
  *ppNVar8 = BIMIBKKLPLB;
  thunk_FUN_01c20e04(ppNVar8,BIMIBKKLPLB);
  ppNVar4 = &(__this->fields).PGEOMGONABB;
  *ppNVar4 = JMBOIPJLIDO;
  thunk_FUN_01c20e04(ppNVar4,JMBOIPJLIDO);
  ppNVar5 = &(__this->fields).PDHMLFAMNCO;
  *ppNVar5 = MGFBPKIBNJI;
  thunk_FUN_01c20e04(ppNVar5,MGFBPKIBNJI);
  ppUVar3 = &(__this->fields).ECJHPNCFJMM;
  *ppUVar3 = JEHGAGMHBIO;
  thunk_FUN_01c20e04(ppUVar3,JEHGAGMHBIO);
  ppUVar3 = &(__this->fields).LLPHICIPDBC;
  *ppUVar3 = EJPPCCJNDAN;
  thunk_FUN_01c20e04(ppUVar3,EJPPCCJNDAN);
  if (*ppSVar12 != (SFButton_o *)0x0) {
    pUVar10 = (UnityEngine_Events_UnityEvent_o *)((*ppSVar12)->fields).super.m_OnClick;
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar10 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar10,pUVar6,(MethodInfo *)0x0);
      if (*ppSVar11 != (SFButton_o *)0x0) {
        pUVar10 = (UnityEngine_Events_UnityEvent_o *)((*ppSVar11)->fields).super.m_OnClick;
        pUVar6 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar10 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar10,pUVar6,(MethodInfo *)0x0);
          pNVar9 = *ppNVar8;
          if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pBVar7 = BHEDGAKGKPO_TypeInfo->static_fields;
            (*(pNVar9->klass->vtable)._23_set_color.methodPtr)
                      ((pBVar7->FHIAKPJBBCB).fields.r,(pBVar7->FHIAKPJBBCB).fields.g,
                       (pBVar7->FHIAKPJBBCB).fields.b,(pBVar7->FHIAKPJBBCB).fields.a,pNVar9,
                       (pNVar9->klass->vtable)._23_set_color.method);
            (*(__this->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                      (__this,(__this->klass->vtable)._9_HNIHOIAMDPC.method);
            Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__BJDBAKABLCF
                      (__this,method_00);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GCGMACNOCJA(bool CJNHFNHJHPE)  [RVA 0x3120BD0]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$GCGMACNOCJA @ RVA 0x3120BD0

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__GCGMACNOCJA
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BOGAKJOFOEK_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== protected void KCPEJAPPAJP(object IMMNELPBGIF)  [RVA 0x3120BDC]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$KCPEJAPPAJP @ RVA 0x3120BDC

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__KCPEJAPPAJP
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  Il2CppObject *extraout_x1;
  
  if ((DAT_04566622 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_8361/*"LeaderboardSeasonViewController::onGetLeaderboardClansFail"*/);
    DAT_04566622 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,IMMNELPBGIF);
  }
  UnityEngine_Debug__LogError(StringLiteral_8361/*"LeaderboardSeasonViewController::onGetLeaderboardClansFail"*/,(MethodInfo *)0x0);
  return;
}


// ===== protected void .ctor()  [RVA 0x3120C44]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$.ctor @ RVA 0x3120C44

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  (__this->fields).FakeLastCell = true;
  (__this->fields).JCCKLCBGABE = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Refresh()  [RVA 0x31205E8]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$Refresh @ RVA 0x31205E8

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Refresh
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *__this_00;
  JCFJFJCKLKG_o *pJVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__StopAddingItems(__this,method);
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if (bVar2) {
    iVar3 = Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__GetActiveBoard
                      (__this,method_00);
    pIVar1 = (__this->klass->vtable)._4_unknown.methodPtr;
    method_01 = (__this->klass->vtable)._4_unknown.method;
    if (iVar3 == 1) {
      pJVar4 = (JCFJFJCKLKG_o *)(*pIVar1)(__this,1);
      Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OLKKPOKMJHP
                (__this,pJVar4,method_01);
      return;
    }
    pJVar4 = (JCFJFJCKLKG_o *)(*pIVar1)(__this,2);
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OHJHOPAHPCM
              (__this,pJVar4,method_01);
    return;
  }
  return;
}


// ===== private void OOIAOANJOFO()  [RVA 0x311FE2C]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$OOIAOANJOFO @ RVA 0x311FE2C

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OOIAOANJOFO
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  UnityEngine_GameObject_o *pUVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o **ppSVar8;
  System_Collections_IEnumerator_o *pSVar9;
  
  if ((DAT_04566623 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566623 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar8 = &(__this->fields).JJNJMJMBOLN;
  pSVar9 = *ppSVar8;
  if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
    pPVar5 = pPVar2->klass;
    uVar1._0_1_ = (pPVar5->_2).rank;
    uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar3 = pPVar5->vtable + (*piVar7 + 1);
          goto LAB_0321fecc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0321fecc:
    (*pVVar3->methodPtr)(pPVar2,pSVar9,pVVar3->method);
    (__this->fields).JJNJMJMBOLN = (System_Collections_IEnumerator_o *)0x0;
    thunk_FUN_01c20e04(ppSVar8,0);
    pUVar4 = (__this->fields).OHBLFFNDIDC;
    if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar4 = UnityEngine_GameObject__get_gameObject(pUVar4,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JEJPCCIPOEI(bool LODKPINFHCO)  [RVA 0x3120DBC]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$JEJPCCIPOEI @ RVA 0x3120DBC

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__JEJPCCIPOEI
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               bool LODKPINFHCO,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  PlayerData_o *__this_00;
  SFButton_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar6;
  
  if ((DAT_04566624 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImage>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10978/*"RaidTop100Dialog.tab_top100_active"*/);
    FUN_01bab630(&StringLiteral_10979/*"RaidTop100Dialog.tab_top100_inactive"*/);
    DAT_04566624 = 1;
  }
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if ((!bVar1) || ((LODKPINFHCO && ((__this->fields).ILIAKNEMPHH == 2)))) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (PlayerData_o *)0x0) {
      bVar1 = PlayerData__NMFKMEFIIMP(__this_00,(MethodInfo *)0x0);
      if (!bVar1) {
        Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__LHHLFBBBJLD(__this,method_00);
        return;
      }
      pSVar3 = (__this->fields).NJHJPOAKMNP;
      (__this->fields).ILIAKNEMPHH = 2;
      if (pSVar3 != (SFButton_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,15.0,(MethodInfo *)0x0);
        pSVar3 = (__this->fields).NJHJPOAKMNP;
        if ((pSVar3 != (SFButton_o *)0x0) &&
           (pNVar5 = (Nekki_SF2_GUI_ResolutionImage_o *)
                     UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pSVar3,
                                Method_UnityEngine_Component_GetComponent<ResolutionImage>__),
           pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar5,StringLiteral_10979/*"RaidTop100Dialog.tab_top100_inactive"*/,(MethodInfo *)0x0);
          pSVar3 = (__this->fields).IELNFDNPDEM;
          if (pSVar3 != (SFButton_o *)0x0) {
            pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
            UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,-15.0,(MethodInfo *)0x0);
            pSVar3 = (__this->fields).IELNFDNPDEM;
            if ((pSVar3 != (SFButton_o *)0x0) &&
               (pNVar5 = (Nekki_SF2_GUI_ResolutionImage_o *)
                         UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)pSVar3,
                                    Method_UnityEngine_Component_GetComponent<ResolutionImage>__),
               pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
              Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                        (pNVar5,StringLiteral_10978/*"RaidTop100Dialog.tab_top100_active"*/,(MethodInfo *)0x0);
              pNVar6 = (__this->fields).MAAPMDHDDGL;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar1 = UnityEngine_Object__op_Implicit
                                ((UnityEngine_Object_o *)pNVar6,(MethodInfo *)0x0);
              if (bVar1) {
                pNVar6 = (__this->fields).MAAPMDHDDGL;
                if ((pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) ||
                   (pUVar2 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
                   pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03220fec;
                UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
              }
              pNVar6 = (__this->fields).JMAFDBBBNEC;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar1 = UnityEngine_Object__op_Implicit
                                ((UnityEngine_Object_o *)pNVar6,(MethodInfo *)0x0);
              method_01 = extraout_x1;
              if (bVar1) {
                pNVar6 = (__this->fields).JMAFDBBBNEC;
                if ((pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) ||
                   (pUVar2 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
                   pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03220fec;
                UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
                method_01 = extraout_x1_00;
              }
              Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Refresh(__this,method_01)
              ;
              if (!LODKPINFHCO) {
                return;
              }
              EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_03220fec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetActiveBoard(IFOIPICDFHN ACCIHBHMFPN)  [RVA 0x31211BC]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$SetActiveBoard @ RVA 0x31211BC

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__SetActiveBoard
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               int32_t ACCIHBHMFPN,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  
  iVar1 = Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__GetActiveBoard
                    (__this,(MethodInfo *)(ulong)(uint)ACCIHBHMFPN);
  if (iVar1 == ACCIHBHMFPN) {
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Refresh(__this,method_00);
    return;
  }
  if (ACCIHBHMFPN == 2) {
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__JEJPCCIPOEI(__this,false,method);
    return;
  }
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__EKAMMIMDIPJ(__this,false,method);
  return;
}


// ===== private void LHHLFBBBJLD()  [RVA 0x3120FF0]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$LHHLFBBBJLD @ RVA 0x3120FF0

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__LHHLFBBBJLD
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  PBAKFOBIHEG_o *pPVar4;
  undefined8 uVar5;
  VirtualInvokeData *pVVar6;
  System_Collections_IEnumerator_o *pSVar7;
  MethodInfo *extraout_x1;
  PBAKFOBIHEG_c *pPVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Collections_IEnumerator_o **ppSVar11;
  float fVar12;
  
  if ((DAT_04566625 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_OOIAOANJOFO__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566625 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OOIAOANJOFO(__this,method);
  pUVar3 = (__this->fields).OHBLFFNDIDC;
  if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).OHBLFFNDIDC;
    if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,(bool)(~bVar2 & 1),(MethodInfo *)0x0);
      pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar5 = thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
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
      if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
        pPVar8 = pPVar4->klass;
        fVar12 = DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM;
        uVar1._0_1_ = (pPVar8->_2).rank;
        uVar1._1_1_ = (pPVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar1;
        if (uVar9 != 0) {
          piVar10 = &((pPVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar6 = pPVar8->vtable + (*piVar10 + 2);
              goto LAB_03221184;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,2);
LAB_03221184:
        pSVar7 = (System_Collections_IEnumerator_o *)
                 (*pVVar6->methodPtr)((ulong)(uint)fVar12,pPVar4,uVar5,pVVar6->method);
        ppSVar11 = &(__this->fields).JJNJMJMBOLN;
        *ppSVar11 = pSVar7;
        thunk_FUN_01c20e04(ppSVar11,pSVar7);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void HKEGMNIBLIG(object IMMNELPBGIF)  [RVA 0x3121214]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$HKEGMNIBLIG @ RVA 0x3121214

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__HKEGMNIBLIG
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  System_String_o *pSVar1;
  JCFJFJCKLKG_o *NLKBNMDMJEB;
  
  if ((DAT_04566626 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    FUN_01bab630(&StringLiteral_8364/*"LeaderboardSeasonViewController::onGetLeaderboardPlayersSuccess - data is corrupted"*/);
    FUN_01bab630(&StringLiteral_1334/*"-Player"*/);
    FUN_01bab630(&StringLiteral_8360/*"LeaderboardSeasonViewController::OnGetLeaderboardPlayersSuccess, "*/);
    DAT_04566626 = 1;
  }
  if ((__this->fields)._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8364/*"LeaderboardSeasonViewController::onGetLeaderboardPlayersSuccess - data is corrupted"*/,(MethodInfo *)0x0);
    NLKBNMDMJEB = (JCFJFJCKLKG_o *)0x0;
  }
  else {
    if (IMMNELPBGIF->klass != (Il2CppClass *)JCFJFJCKLKG_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OLKKPOKMJHP
              (__this,(JCFJFJCKLKG_o *)IMMNELPBGIF,method);
    NLKBNMDMJEB = (JCFJFJCKLKG_o *)IMMNELPBGIF;
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._6_unknown.methodPtr)
                     (__this,(__this->klass->vtable)._6_unknown.method);
  pSVar1 = System_String__Concat(StringLiteral_8360/*"LeaderboardSeasonViewController::OnGetLeaderboardPlayersSuccess, "*/,pSVar1,StringLiteral_1334/*"-Player"*/,(MethodInfo *)0x0);
  RaidLeaderboardsManager__MAAFGOJFCHD(IMMNELPBGIF != (Il2CppObject *)0x0,pSVar1,NLKBNMDMJEB,(MethodInfo *)0x0);
  return;
}


// ===== private void OnDestroy()  [RVA 0x312134C]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$OnDestroy @ RVA 0x312134C

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  SFButton_o *pSVar2;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_c *pNVar3;
  
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OOIAOANJOFO(__this,method);
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__StopAddingItems(__this,method_00);
  pSVar2 = (__this->fields).IELNFDNPDEM;
  if ((pSVar2 != (SFButton_o *)0x0) &&
     (pUVar1 = (pSVar2->fields).super.m_OnClick,
     pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).NJHJPOAKMNP;
    if ((pSVar2 != (SFButton_o *)0x0) &&
       (pUVar1 = (pSVar2->fields).super.m_OnClick,
       pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
      __this_00 = (__this->fields).PDHMLFAMNCO;
      if ((__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
        pNVar3 = __this->klass;
        (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
                    /* WARNING: Could not recover jumptable at 0x032213c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar3->vtable)._7_unknown.methodPtr)(__this,(pNVar3->vtable)._7_unknown.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OLKKPOKMJHP(JCFJFJCKLKG DJFFMPLBCKC)  [RVA 0x3120CCC]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$OLKKPOKMJHP @ RVA 0x3120CCC

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OLKKPOKMJHP
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               JCFJFJCKLKG_o *DJFFMPLBCKC,MethodInfo *method)

{
  bool bVar1;
  System_Action_o *NAKEOECMGIG;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar2;
  BANPLPOPIGI_o *__this_00;
  
  if ((DAT_04566627 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_HJJOGMALEOH__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566627 = 1;
  }
  pNVar2 = (__this->fields).JMAFDBBBNEC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).JMAFDBBBNEC;
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pNVar2->fields).HOKHHIBHFBM = true;
  }
  __this_00 = (__this->fields).PlayersLeaderboardSource;
  if (__this_00 != (BANPLPOPIGI_o *)0x0) {
    NAKEOECMGIG = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    BANPLPOPIGI__LPNCEHPFOAF(__this_00,DJFFMPLBCKC,NAKEOECMGIG,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public bool get_IsDestroyed()  [RVA 0x31213D0]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$get_IsDestroyed @ RVA 0x31213D0

bool Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__get_IsDestroyed
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  return (__this->fields)._BOGAKJOFOEK_k__BackingField;
}


// ===== public bool get_IsActive()  [RVA 0x31213D8]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$get_IsActive @ RVA 0x31213D8

bool Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__get_IsActive
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IFOIPICDFHN GetActiveBoard()  [RVA 0x3120C58]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$GetActiveBoard @ RVA 0x3120C58

int32_t Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__GetActiveBoard
                  (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
                  MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  SFButton_o *x;
  
  if ((DAT_04566628 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566628 = 1;
    method = extraout_x1;
  }
  x = (__this->fields).NJHJPOAKMNP;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = (__this->fields).ILIAKNEMPHH;
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}


// ===== private void BJDBAKABLCF()  [RVA 0x31208A8]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$BJDBAKABLCF @ RVA 0x31208A8

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__BJDBAKABLCF
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar6;
  BANPLPOPIGI_o *__this_00;
  BANPLPOPIGI_o **ppBVar7;
  PBHDPJBLDLG_o *__this_01;
  UnityEngine_Transform_o *pUVar8;
  PBHDPJBLDLG_o **ppPVar9;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o **ppNVar10;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar11;
  UnityEngine_Vector2_o UVar12;
  
  if ((DAT_04566629 & 1) == 0) {
    FUN_01bab630(&BANPLPOPIGI_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RaidLeaderboardView>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&PBHDPJBLDLG_TypeInfo);
    FUN_01bab630(&Method_Util_OHBILOGJCLA<RectTransform>__);
    FUN_01bab630(&StringLiteral_10334/*"Players Leaderboard View"*/);
    FUN_01bab630(&StringLiteral_4421/*"Clans Leaderboard View"*/);
    DAT_04566629 = 1;
  }
  (*(__this->klass->vtable)._5_unknown.methodPtr)(__this,(__this->klass->vtable)._5_unknown.method);
  pUVar2 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(pUVar2,StringLiteral_10334/*"Players Leaderboard View"*/,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    pUVar8 = (__this->fields).PDEAGAFHDFI;
    if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar8 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar3,pUVar8,false,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_RectTransform_o *)
               Util__OHBILOGJCLA<object>(pUVar2,Method_Util_OHBILOGJCLA<RectTransform>__);
      pUVar3 = (__this->fields).PDEAGAFHDFI;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar5 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar3,
                            Method_UnityEngine_Component_GetComponent<RectTransform>__);
        if ((pUVar5 != (UnityEngine_RectTransform_o *)0x0) &&
           (UVar12 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
          UnityEngine_RectTransform__set_sizeDelta(pUVar4,UVar12,(MethodInfo *)0x0);
          pNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)
                   UnityEngine_GameObject__AddComponent<object>
                             (pUVar2,
                              Method_UnityEngine_GameObject_AddComponent<RaidLeaderboardView>__);
          ppNVar10 = &(__this->fields).JMAFDBBBNEC;
          *ppNVar10 = pNVar6;
          thunk_FUN_01c20e04(ppNVar10,pNVar6);
          if (*ppNVar10 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__Init
                      (*ppNVar10,__this,(__this->fields).JICANOFGOJF,(__this->fields).PGEOMGONABB,
                       (__this->fields).PDHMLFAMNCO,(MethodInfo *)0x0);
            pNVar6 = (__this->fields).JMAFDBBBNEC;
            pNVar11 = (__this->fields).PDHMLFAMNCO;
            pUVar2 = (__this->fields).ECJHPNCFJMM;
            bVar1 = (__this->fields).FakeLastCell;
            __this_00 = (BANPLPOPIGI_o *)thunk_FUN_01bda818(BANPLPOPIGI_TypeInfo);
            BANPLPOPIGI___ctor(__this_00,pNVar6,pNVar11,pUVar2,bVar1,(MethodInfo *)0x0);
            ppBVar7 = &(__this->fields).PlayersLeaderboardSource;
            *ppBVar7 = __this_00;
            thunk_FUN_01c20e04(ppBVar7,__this_00);
            pUVar2 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo)
            ;
            UnityEngine_GameObject___ctor(pUVar2,StringLiteral_4421/*"Clans Leaderboard View"*/,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
              pUVar8 = (__this->fields).PDEAGAFHDFI;
              if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
                 (pUVar8 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent(pUVar3,pUVar8,false,(MethodInfo *)0x0);
                pUVar4 = (UnityEngine_RectTransform_o *)
                         Util__OHBILOGJCLA<object>(pUVar2,Method_Util_OHBILOGJCLA<RectTransform>__);
                pUVar3 = (__this->fields).PDEAGAFHDFI;
                if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
                   ((pUVar5 = (UnityEngine_RectTransform_o *)
                              UnityEngine_Component__GetComponent<object>
                                        ((UnityEngine_Component_o *)pUVar3,
                                         Method_UnityEngine_Component_GetComponent<RectTransform>__)
                    , pUVar5 != (UnityEngine_RectTransform_o *)0x0 &&
                    (UVar12 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0),
                    pUVar4 != (UnityEngine_RectTransform_o *)0x0)))) {
                  UnityEngine_RectTransform__set_sizeDelta(pUVar4,UVar12,(MethodInfo *)0x0);
                  pNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)
                           UnityEngine_GameObject__AddComponent<object>
                                     (pUVar2,
                                      Method_UnityEngine_GameObject_AddComponent<RaidLeaderboardView>__
                                     );
                  ppNVar10 = &(__this->fields).MAAPMDHDDGL;
                  *ppNVar10 = pNVar6;
                  thunk_FUN_01c20e04(ppNVar10,pNVar6);
                  if (*ppNVar10 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
                    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__Init
                              (*ppNVar10,__this,(__this->fields).JICANOFGOJF,
                               (__this->fields).PGEOMGONABB,(__this->fields).PDHMLFAMNCO,
                               (MethodInfo *)0x0);
                    pNVar6 = (__this->fields).MAAPMDHDDGL;
                    pNVar11 = (__this->fields).PDHMLFAMNCO;
                    pUVar2 = (__this->fields).LLPHICIPDBC;
                    bVar1 = (__this->fields).FakeLastCell;
                    __this_01 = (PBHDPJBLDLG_o *)thunk_FUN_01bda818(PBHDPJBLDLG_TypeInfo);
                    PBHDPJBLDLG___ctor(__this_01,pNVar6,pNVar11,pUVar2,bVar1,(MethodInfo *)0x0);
                    ppPVar9 = &(__this->fields).ClansLeaderboardSource;
                    *ppPVar9 = __this_01;
                    thunk_FUN_01c20e04(ppPVar9,__this_01);
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


// ===== private void KBPLKNNFMHH()  [RVA 0x31213F8]
// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$KBPLKNNFMHH @ RVA 0x31213F8

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__KBPLKNNFMHH
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__JEJPCCIPOEI(__this,true,in_x2);
  return;
}

