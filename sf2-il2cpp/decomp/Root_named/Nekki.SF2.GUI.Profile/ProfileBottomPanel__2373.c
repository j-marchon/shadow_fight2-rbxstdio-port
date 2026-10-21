// TypeDefIndex 2373
// Namespace: Nekki.SF2.GUI.Profile
// public class ProfileBottomPanel : BottomPanel<EBGNICNEJFJ>
// Fields:
//   private CanvasGroup _CanvasGroup; // 0x78

// ===== protected override void OnClick(EBGNICNEJFJ HIIGJGLEOFH)  [RVA 0x332DAEC]
// Nekki.SF2.GUI.Profile.ProfileBottomPanel$$OnClick @ RVA 0x332DAEC

void Nekki_SF2_GUI_Profile_ProfileBottomPanel__OnClick
               (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this,int32_t HIIGJGLEOFH,
               MethodInfo *method)

{
  long lVar1;
  
                    /* try { // try from 0342daf4 to 0352daf7 has its CatchHandler @ 0342db18 */
                    /* try { // try from 0342daf8 to 0352db1f has its CatchHandler @ 0342d9e4 */
                    /* catch() { ... } // from try @ 0342daf4 with catch @ 0342db18 */
  if ((DAT_045678eb & 1) == 0) {
                    /* try { // try from 0342db20 to 0352db27 has its CatchHandler @ 0342db3c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_OnClick__);
                    /* try { // try from 0342db28 to 0352db33 has its CatchHandler @ 0342d9e4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
                    /* try { // try from 0342db34 to 0352db3b has its CatchHandler @ 0342db3c */
    DAT_045678eb = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0342db20 with catch @ 0342db3c
                       catch(type#2 @ 00000000) { ... } // from try @ 0342db34 with catch @ 0342db3c
                        */
                    /* try { // try from 0342db40 to 0352dda3 has its CatchHandler @ 0342db40
                       catch() { ... } // from try @ 0342db40 with catch @ 0342db40
                       catch() { ... } // from try @ 0342dedc with catch @ 0342db40
                       catch() { ... } // from try @ 0342e180 with catch @ 0342db40
                       catch() { ... } // from try @ 0342e274 with catch @ 0342db40
                       catch() { ... } // from try @ 0342e288 with catch @ 0342db40
                       catch() { ... } // from try @ 0342e350 with catch @ 0342db40
                       catch() { ... } // from try @ 0342e3ec with catch @ 0342db40 */
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__OnClick
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,HIIGJGLEOFH,
             Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_OnClick__);
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
      (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
    Nekki_SF2_GUI_Profile_ProfileScene__set_CurrentSection
              ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar1 + 0xb8),HIIGJGLEOFH,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x332DB9C]
// Nekki.SF2.GUI.Profile.ProfileBottomPanel$$.ctor @ RVA 0x332DB9C

void Nekki_SF2_GUI_Profile_ProfileBottomPanel___ctor
               (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this,MethodInfo *method)

{
  if ((DAT_045678ec & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>__ctor__);
    DAT_045678ec = 1;
  }
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>___ctor
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,
             Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>__ctor__);
  return;
}


// ===== protected override MGNDHCBAPEN<string, string> GEFAAMGLMMC(EBGNICNEJFJ HIIGJGLEOFH)  [RVA 0x332DBE4]
// Nekki.SF2.GUI.Profile.ProfileBottomPanel$$GEFAAMGLMMC @ RVA 0x332DBE4

MGNDHCBAPEN_string__string__o *
Nekki_SF2_GUI_Profile_ProfileBottomPanel__GEFAAMGLMMC
          (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this,int32_t HIIGJGLEOFH,MethodInfo *method
          )

{
  MGNDHCBAPEN_string__string__o *__this_00;
  undefined8 *puVar1;
  
  if ((DAT_045678ed & 1) == 0) {
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_string>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_string>_TypeInfo);
    FUN_01bab630(&StringLiteral_10501/*"ProfileButtons.Pushed_Strikes"*/);
    FUN_01bab630(&StringLiteral_10498/*"ProfileButtons.Pushed_BattlePass"*/);
    FUN_01bab630(&StringLiteral_10500/*"ProfileButtons.Pushed_Seal"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_10499/*"ProfileButtons.Pushed_Progress"*/);
    FUN_01bab630(&StringLiteral_10497/*"ProfileButtons.Pushed_Achiev"*/);
    DAT_045678ed = 1;
  }
  if ((uint)HIIGJGLEOFH < 5) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_10499/*"ProfileButtons.Pushed_Progress"*/_03fc66b0)[HIIGJGLEOFH];
    __this_00 = (MGNDHCBAPEN_string__string__o *)
                thunk_FUN_01bda818(MGNDHCBAPEN<string,_string>_TypeInfo);
    MGNDHCBAPEN<object,_object>___ctor
              ((MGNDHCBAPEN_T1__T2__o *)__this_00,StringLiteral_14092/*"UI/Atlases/"*/,(Il2CppObject *)*puVar1,
               Method_MGNDHCBAPEN<string,_string>__ctor__);
  }
  else {
    __this_00 = (MGNDHCBAPEN_string__string__o *)0x0;
  }
  return __this_00;
}


// ===== protected override bool GOLKEMDPKOP()  [RVA 0x332DCC4]
// Nekki.SF2.GUI.Profile.ProfileBottomPanel$$GOLKEMDPKOP @ RVA 0x332DCC4

bool Nekki_SF2_GUI_Profile_ProfileBottomPanel__GOLKEMDPKOP
               (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this,MethodInfo *method)

{
  return false;
}


// ===== protected override MGNDHCBAPEN<string, string> ACJPCPPOACJ(EBGNICNEJFJ HIIGJGLEOFH)  [RVA 0x332DCCC]
// Nekki.SF2.GUI.Profile.ProfileBottomPanel$$ACJPCPPOACJ @ RVA 0x332DCCC

MGNDHCBAPEN_string__string__o *
Nekki_SF2_GUI_Profile_ProfileBottomPanel__ACJPCPPOACJ
          (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this,int32_t HIIGJGLEOFH,MethodInfo *method
          )

{
  MGNDHCBAPEN_string__string__o *__this_00;
  undefined8 *puVar1;
  
  if ((DAT_045678ee & 1) == 0) {
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_string>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_string>_TypeInfo);
    FUN_01bab630(&StringLiteral_10493/*"ProfileButtons.Active_BattlePass"*/);
    FUN_01bab630(&StringLiteral_10496/*"ProfileButtons.Active_Strikes"*/);
    FUN_01bab630(&StringLiteral_10495/*"ProfileButtons.Active_Seal"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_10492/*"ProfileButtons.Active_Achiev"*/);
    FUN_01bab630(&StringLiteral_10494/*"ProfileButtons.Active_Progress"*/);
    DAT_045678ee = 1;
  }
  if ((uint)HIIGJGLEOFH < 5) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_10494/*"ProfileButtons.Active_Progress"*/_03fc66d8)[HIIGJGLEOFH];
    __this_00 = (MGNDHCBAPEN_string__string__o *)
                thunk_FUN_01bda818(MGNDHCBAPEN<string,_string>_TypeInfo);
    MGNDHCBAPEN<object,_object>___ctor
              ((MGNDHCBAPEN_T1__T2__o *)__this_00,StringLiteral_14092/*"UI/Atlases/"*/,(Il2CppObject *)*puVar1,
               Method_MGNDHCBAPEN<string,_string>__ctor__);
  }
  else {
    __this_00 = (MGNDHCBAPEN_string__string__o *)0x0;
  }
                    /* try { // try from 0342dda4 to 0352ddcb has its CatchHandler @ 0342e2a8 */
  return __this_00;
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x332DDAC]
// Nekki.SF2.GUI.Profile.ProfileBottomPanel$$GIENGNEGHPJ @ RVA 0x332DDAC

void Nekki_SF2_GUI_Profile_ProfileBottomPanel__GIENGNEGHPJ
               (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  SFRequestSender_o *pKVar2;
  EGMONPGHHDP_o *__this_00;
  RaidConfig_CKEMIAEPGKD_o *pJVar3;
  
  if ((DAT_045678ef & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_GIENGNEGHPJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_HideButton__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 0342de00 to 0352de2b has its CatchHandler @ 0342e2a4 */
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_045678ef = 1;
  }
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,
             Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_GIENGNEGHPJ__);
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = GameUtils__PKNDHONBNIF((MethodInfo *)0x0);
  if (bVar1) {
    pKVar2 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar2 == (SFRequestSender_o *)0x0) {
LAB_0342deb0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pKVar2->fields).super._MGGBEPKMPCF_k__BackingField != false) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0342de68 to 0352dedb has its CatchHandler @ 0342e354 */
      __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
      if (__this_00 == (EGMONPGHHDP_o *)0x0) goto LAB_0342deb0;
      pJVar3 = EGMONPGHHDP__OKBKFJKEAAG(__this_00,(MethodInfo *)0x0);
      if (pJVar3 == (RaidConfig_CKEMIAEPGKD_o *)0x0) {
        Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__HideButton
                  ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this,4,
                   Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_HideButton__);
        return;
      }
    }
  }
  return;
}


// ===== public CanvasGroup get_CanvasGroup()  [RVA 0x332DEB4]
// Nekki.SF2.GUI.Profile.ProfileBottomPanel$$get_CanvasGroup @ RVA 0x332DEB4

UnityEngine_CanvasGroup_o *
Nekki_SF2_GUI_Profile_ProfileBottomPanel__get_CanvasGroup
          (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._CanvasGroup;
}


// ===== protected override int CJFJPCHDLAB(EBGNICNEJFJ HIIGJGLEOFH)  [RVA 0x332DEBC]
// Nekki.SF2.GUI.Profile.ProfileBottomPanel$$CJFJPCHDLAB @ RVA 0x332DEBC

int32_t Nekki_SF2_GUI_Profile_ProfileBottomPanel__CJFJPCHDLAB
                  (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this,int32_t HIIGJGLEOFH,
                  MethodInfo *method)

{
  int32_t iVar1;
  NFGLEDADCGL_o *__this_00;
  FEPPOONJCGI_o *__this_01;
  Roster_o *pAVar2;
  EGMONPGHHDP_o *__this_02;
  
  if ((DAT_045678f0 & 1) == 0) {
                    /* try { // try from 0342dedc to 0352e047 has its CatchHandler @ 0342db40 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045678f0 = 1;
  }
  switch(HIIGJGLEOFH) {
  case 0:
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
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar2 != (Roster_o *)0x0) &&
       (__this_00 = (pAVar2->fields).CKJAGLDEMAE, __this_00 != (NFGLEDADCGL_o *)0x0)) {
      iVar1 = NFGLEDADCGL__DBOOGGKPPIP(__this_00,(MethodInfo *)0x0);
      return iVar1;
    }
    break;
  case 1:
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
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (Roster_o *)0x0) {
      iVar1 = Roster__JNFJHGPHLGC(pAVar2,(MethodInfo *)0x0);
      return iVar1;
    }
    break;
  case 2:
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 0342e048 to 0352e06f has its CatchHandler @ 0342e298 */
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar2 != (Roster_o *)0x0) &&
       (__this_01 = (pAVar2->fields).IMJJJJJMMHL, __this_01 != (FEPPOONJCGI_o *)0x0)) {
      iVar1 = FEPPOONJCGI__NIKBIHOFOOD(__this_01,(MethodInfo *)0x0);
      return iVar1;
    }
    break;
  case 3:
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0342e0a4 to 0352e0cf has its CatchHandler @ 0342e294 */
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (Roster_o *)0x0) {
      iVar1 = Roster__DDKLAHEHGBG(pAVar2,(MethodInfo *)0x0);
      return iVar1;
    }
    break;
  case 4:
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
    if (__this_02 != (EGMONPGHHDP_o *)0x0) {
                    /* try { // try from 0342e10c to 0352e17f has its CatchHandler @ 0342e2ac */
      iVar1 = EGMONPGHHDP__BAOGFDIDOMJ(__this_02,(RaidConfig_CKEMIAEPGKD_o *)0x0,(MethodInfo *)0x0)
      ;
      return iVar1;
    }
    break;
  default:
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

