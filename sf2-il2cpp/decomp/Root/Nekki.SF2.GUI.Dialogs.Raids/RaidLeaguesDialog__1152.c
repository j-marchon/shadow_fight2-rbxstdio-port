// TypeDefIndex 1152
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidLeaguesDialog : RaidBaseDialog
// Fields:
//   private const float EPEPFPJOHFG = 5;
//   public const string LEAGUE_ARROW_ACTIVE = "arrow_active";
//   public const string LEAGUE_ARROW_INACTIVE = "arrow_inactive";
//   public const string LEAGUE_ARROW_PRESSED = "arrow_pressed";
//   public const string ROLL_CENTER = "Roll_Top_MAP";
//   public const string ROLL_LEFT = "Top_left_light";
//   public const string ROLL_RIGHT = "Top_left_light";
//   public const string ROLL_LEFT_WOOD = "MenuRoll_left";
//   public const string ROLL_RIGHT_WOOD = "MenuRoll_right";
//   public const string SHADOW_ROLL = "map_shadow";
//   private const string APCDFIMHPMN = "<quad name=RaidMisc.dan />";
//   private LabelAlias _leagueDan; // 0xC8
//   private LabelAlias _timeLabel; // 0xD0
//   private LabelAlias _prevSeasonLabel; // 0xD8
//   private LabelAlias _notParticipatedInSeasonLabel; // 0xE0
//   private ResolutionButton _btnOldLeague; // 0xE8
//   private ResolutionButton _btnCurrentLeague; // 0xF0
//   private ResolutionButton _btnRandomPlayers; // 0xF8
//   private GameObject _leagueCellPrefab; // 0x100
//   private LoadingCircle _loadingCircle; // 0x108
//   private SimpleScroll _scroll; // 0x110
//   private HintBoxAutoKilled _hintPrefab; // 0x118
//   private HintBoxAutoKilled _posHintPrefab; // 0x120
//   private RaidLeaguesLeaderboard LEJCNEENFCH; // 0x128
//   private RaidLeaguesLeaderboard KPGAAKKCKOA; // 0x130
//   private long PBACPHGLOFJ; // 0x138
//   private bool CGJKLEEEPPN; // 0x140
//   private float LNIAPAKKPHL; // 0x144

// ===== private void NGGIGILFODP()  [RVA 0x30FF5F4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$NGGIGILFODP @ RVA 0x30FF5F4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__NGGIGILFODP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  NFFDIPBFJHP_o *pNVar6;
  EEGDOGKBLNG_o *pEVar7;
  int64_t iVar8;
  int64_t iVar9;
  JMDPBFOCHHP_o *__this_00;
  System_String_o *pSVar10;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *pNVar11;
  GLPEFEEGCPM_o *__this_01;
  int iVar12;
  int32_t local_34;
  
                    /* try { // try from 031ff600 to 032ff60f has its CatchHandler @ 031ffb70 */
  if ((DAT_045664b8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045664b8 = 1;
    method = extraout_x1;
  }
  local_34 = 0;
  pNVar11 = (__this->fields).LEJCNEENFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031ff650 to 032ff65b has its CatchHandler @ 031ffb38 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar11 = (__this->fields).LEJCNEENFCH;
                    /* try { // try from 031ff66c to 032ff67b has its CatchHandler @ 031ffb44 */
    if ((pNVar11 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031ff998;
    UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
    pNVar11 = (__this->fields).LEJCNEENFCH;
    if (pNVar11 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) goto LAB_031ff998;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar11,true,(MethodInfo *)0x0);
  }
  pNVar11 = (__this->fields).KPGAAKKCKOA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031ff6bc to 032ff6c7 has its CatchHandler @ 031ffb54 */
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar11 = (__this->fields).KPGAAKKCKOA;
    if ((pNVar11 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031ff998;
                    /* try { // try from 031ff6d8 to 032ff6e7 has its CatchHandler @ 031ffb4c */
    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    pNVar11 = (__this->fields).KPGAAKKCKOA;
    if (pNVar11 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) goto LAB_031ff998;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar11,false,(MethodInfo *)0x0);
    pNVar11 = (__this->fields).KPGAAKKCKOA;
    if (pNVar11 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) goto LAB_031ff998;
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__StopFillPlayers(pNVar11,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields)._prevSeasonLabel;
  if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
                    /* try { // try from 031ff728 to 032ff733 has its CatchHandler @ 031ffb28 */
    pNVar5 = (__this->fields)._timeLabel;
    if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 031ff744 to 032ff753 has its CatchHandler @ 031ffb10 */
      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._notParticipatedInSeasonLabel;
      if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
        LJLLAKHOFFF__JAEOMHIAHJB
                  ((UnityEngine_UI_Button_o *)(__this->fields)._btnCurrentLeague,2,true,
                   (MethodInfo *)0x0);
                    /* try { // try from 031ff784 to 032ff78f has its CatchHandler @ 031ffb0c */
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar6 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
        if (pNVar6 != (NFFDIPBFJHP_o *)0x0) {
                    /* try { // try from 031ff7a0 to 032ff7af has its CatchHandler @ 031ffb14 */
          __this_01 = (pNVar6->fields).NEACDFLBNFO;
          if ((__this_01 == (GLPEFEEGCPM_o *)0x0) ||
             (bVar2 = GLPEFEEGCPM__MEAIEHHCBHI(__this_01,(MethodInfo *)0x0), !bVar2)) {
            iVar12 = 0;
          }
          else {
                    /* try { // try from 031ff7c0 to 032ff7cb has its CatchHandler @ 031ffb2c */
            auVar1 = SEXT816((__this_01->fields).LAEGCKIFDOC) * SEXT816(0x112e0be826d694b3);
            iVar12 = (int)(auVar1._8_8_ >> 0x1a) - (auVar1._12_4_ >> 0x1f);
                    /* try { // try from 031ff7dc to 032ff7eb has its CatchHandler @ 031ffb60 */
          }
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    /* try { // try from 031ff7fc to 032ff807 has its CatchHandler @ 031ffb50 */
          if (pEVar7 != (EEGDOGKBLNG_o *)0x0) {
            iVar8 = EEGDOGKBLNG__HIPOGPBBJNJ(pEVar7,(MethodInfo *)0x0);
            pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
            if (pEVar7 != (EEGDOGKBLNG_o *)0x0) {
                    /* try { // try from 031ff818 to 032ff827 has its CatchHandler @ 031ffb58 */
              iVar9 = EEGDOGKBLNG__HIPOGPBBJNJ(pEVar7,(MethodInfo *)0x0);
              if (iVar9 == 0) {
                bVar2 = false;
              }
              else {
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                    /* try { // try from 031ff838 to 032ff843 has its CatchHandler @ 031ffb68 */
                __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                if (__this_00 == (JMDPBFOCHHP_o *)0x0) goto LAB_031ff998;
                    /* try { // try from 031ff854 to 032ff863 has its CatchHandler @ 031ffb64 */
                iVar3 = JMDPBFOCHHP__JNBAJJCCJFH(__this_00,(MethodInfo *)0x0);
                bVar2 = iVar12 + ((int)(SUB168(SEXT816(iVar8) * SEXT816(-0x112e0be826d694b3),8) >>
                                       0x1a) -
                                 (SUB164(SEXT816(iVar8) * SEXT816(-0x112e0be826d694b3),0xc) >> 0x1f)
                                 ) <= iVar3;
                    /* try { // try from 031ff874 to 032ff87f has its CatchHandler @ 031ffb3c */
              }
              (__this->fields).CGJKLEEEPPN = bVar2;
                    /* try { // try from 031ff890 to 032ff89f has its CatchHandler @ 031ffb40 */
              LJLLAKHOFFF__JAEOMHIAHJB
                        ((UnityEngine_UI_Button_o *)(__this->fields)._btnOldLeague,0,true,
                         (MethodInfo *)0x0);
              pNVar5 = (__this->fields)._leagueDan;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
                    /* try { // try from 031ff8b0 to 032ff8bb has its CatchHandler @ 031ffb48 */
              bVar2 = UnityEngine_Object__op_Implicit
                                ((UnityEngine_Object_o *)pNVar5,(MethodInfo *)0x0);
              if (bVar2) {
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                    /* try { // try from 031ff8cc to 032ff8db has its CatchHandler @ 031ffb30 */
                pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                if (pEVar7 == (EEGDOGKBLNG_o *)0x0) goto LAB_031ff998;
                local_34 = EEGDOGKBLNG__IGIHHCEONEM(pEVar7,(MethodInfo *)0x0);
                pNVar5 = (__this->fields)._leagueDan;
                    /* try { // try from 031ff8ec to 032ff8f7 has its CatchHandler @ 031ffb6c */
                pSVar10 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_031ff998;
                    /* try { // try from 031ff908 to 032ff917 has its CatchHandler @ 031ffb5c */
                (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                          (pNVar5,pSVar10,(pNVar5->klass->vtable)._75_set_text.method);
              }
              pNVar11 = (__this->fields).KPGAAKKCKOA;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
                    /* try { // try from 031ff928 to 032ff933 has its CatchHandler @ 031ffb24 */
              bVar2 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar2) {
                pNVar11 = (__this->fields).KPGAAKKCKOA;
                if (pNVar11 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0)
                goto LAB_031ff998;
                Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__ScrollClearData
                          (pNVar11,(MethodInfo *)0x0);
              }
                    /* try { // try from 031ff944 to 032ff953 has its CatchHandler @ 031ffb1c */
              pNVar11 = (__this->fields).LEJCNEENFCH;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
                    /* try { // try from 031ff964 to 032ff96f has its CatchHandler @ 031ffb20 */
              bVar2 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar2) {
                pNVar11 = (__this->fields).LEJCNEENFCH;
                if (pNVar11 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0)
                goto LAB_031ff998;
                Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__Refresh
                          (pNVar11,__this_01,(MethodInfo *)0x0);
              }
                    /* try { // try from 031ff980 to 032ff98f has its CatchHandler @ 031ffb18 */
              (__this->fields).LNIAPAKKPHL = 0.0;
              return;
            }
          }
        }
      }
    }
  }
LAB_031ff998:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031ff998 to 032ff9a7 has its CatchHandler @ 031ffb98 */
  FUN_01bab8c8();
}


// ===== private void KKHNLLICFOO()  [RVA 0x30FF99C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$KKHNLLICFOO @ RVA 0x30FF99C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__KKHNLLICFOO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar8;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *PFCGLNFFKFG;
  System_String_o *JONDDIMGADB;
  System_String_o *FCLHIDDAHIJ;
  System_String_o *pSVar11;
  long lVar12;
  bool FCCHAOBFMLN;
  long lVar13;
  long lVar14;
  Il2CppClass *pIVar15;
  ulong uVar16;
  int32_t *piVar17;
  Nekki_SF2_GUI_LabelAlias_o *pNVar18;
  System_String_o *pSVar19;
  undefined8 uVar20;
  bool LMOANJOPDGM;
  
                    /* try { // try from 031ff9b4 to 032ff9bb has its CatchHandler @ 031ffb90 */
                    /* try { // try from 031ff9c4 to 032ff9cf has its CatchHandler @ 031ffb78 */
  if ((DAT_045664b9 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 031ff9d4 to 032ff9db has its CatchHandler @ 031ffb88 */
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_IAKHIFOFLGO__);
    FUN_01bab630(&StringLiteral_2434/*"<quad name=RaidMisc.dan /> "*/);
                    /* try { // try from 031ffa1c to 032ffa3f has its CatchHandler @ 031ffb74 */
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_13795/*"TimeDaysShort"*/);
    FUN_01bab630(&StringLiteral_13800/*"TimeMinuteShort"*/);
                    /* try { // try from 031ffa40 to 032ffadf has its CatchHandler @ 031ff28c */
    FUN_01bab630(&StringLiteral_11759/*"SeasonEndTime"*/);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_21451/*"textDan"*/);
    FUN_01bab630(&StringLiteral_13796/*"TimeHourShort"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045664b9 = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 == (KKLJIDJBFEI_o *)0x0) goto LAB_032000c8;
  iVar8 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
  pSVar6 = StringLiteral_2086/*":"*/;
  pSVar11 = StringLiteral_167/*" "*/;
  lVar13 = (__this->fields).PBACPHGLOFJ;
  pSVar19 = (System_String_o *)0x0;
  lVar12 = lVar13 - iVar8;
  if (lVar12 != 0 && iVar8 <= lVar13) {
    if (lVar12 < 1) {
                    /* catch() { ... } // from try @ 031ffaf0 with catch @ 031ffb94 */
      pSVar19 = (System_String_o *)0x0;
                    /* catch() { ... } // from try @ 031ff998 with catch @ 031ffb98 */
    }
    else {
                    /* try { // try from 031ffae0 to 032ffae7 has its CatchHandler @ 031ffba4 */
      LMOANJOPDGM = 0xe0f < lVar12;
                    /* try { // try from 031ffae8 to 032ffaeb has its CatchHandler @ 031ffb84 */
                    /* try { // try from 031ffaec to 032ffaef has its CatchHandler @ 031ffb80 */
      pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar13 = Method_System_Array_Empty<string>__;
                    /* try { // try from 031ffaf0 to 032ffaf7 has its CatchHandler @ 031ffb94 */
                    /* try { // try from 031ffaf8 to 032ffafb has its CatchHandler @ 031ff28c */
      lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
                    /* try { // try from 031ffafc to 032ffaff has its CatchHandler @ 031ffb08 */
      if (lVar14 == 0) {
                    /* try { // try from 031ffb00 to 032ffbc3 has its CatchHandler @ 031ff28c */
        FUN_01b8167c(Method_System_Array_Empty<string>__);
                    /* catch() { ... } // from try @ 031ffafc with catch @ 031ffb08 */
        lVar14 = *(long *)(lVar13 + 0x38);
      }
                    /* catch() { ... } // from try @ 031ff784 with catch @ 031ffb0c */
      lVar14 = *(long *)(lVar14 + 0x10);
                    /* catch() { ... } // from try @ 031ff744 with catch @ 031ffb10 */
                    /* catch() { ... } // from try @ 031ff7a0 with catch @ 031ffb14 */
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 031ff980 with catch @ 031ffb18 */
        lVar14 = FUN_01b81620();
      }
                    /* catch() { ... } // from try @ 031ff944 with catch @ 031ffb1c */
                    /* catch() { ... } // from try @ 031ff964 with catch @ 031ffb20 */
      if (*(int *)(lVar14 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 031ff928 with catch @ 031ffb24 */
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 031ff728 with catch @ 031ffb28 */
                    /* catch() { ... } // from try @ 031ff7c0 with catch @ 031ffb2c */
      lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
                    /* catch() { ... } // from try @ 031ff8cc with catch @ 031ffb30 */
                    /* catch() { ... } // from try @ 031ff5e4 with catch @ 031ffb34 */
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 031ff650 with catch @ 031ffb38 */
        lVar13 = FUN_01b81620();
      }
      uVar7 = StringLiteral_11759/*"SeasonEndTime"*/;
                    /* catch() { ... } // from try @ 031ff874 with catch @ 031ffb3c */
      if (pIVar9 == (Il2CppObject *)0x0) goto LAB_032000c8;
                    /* catch() { ... } // from try @ 031ff890 with catch @ 031ffb40 */
                    /* catch() { ... } // from try @ 031ff66c with catch @ 031ffb44 */
                    /* catch() { ... } // from try @ 031ff8b0 with catch @ 031ffb48 */
      pIVar15 = pIVar9->klass;
                    /* catch() { ... } // from try @ 031ff6d8 with catch @ 031ffb4c */
                    /* catch() { ... } // from try @ 031ff7fc with catch @ 031ffb50 */
                    /* catch() { ... } // from try @ 031ff6bc with catch @ 031ffb54 */
      uVar20 = **(undefined8 **)(lVar13 + 0xb8);
      uVar1._0_1_ = (pIVar15->_2).rank;
      uVar1._1_1_ = (pIVar15->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 031ff818 with catch @ 031ffb58 */
      uVar16 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 031ff908 with catch @ 031ffb5c */
                    /* catch() { ... } // from try @ 031ff7dc with catch @ 031ffb60 */
      if (uVar16 != 0) {
                    /* catch() { ... } // from try @ 031ff854 with catch @ 031ffb64 */
                    /* catch() { ... } // from try @ 031ff838 with catch @ 031ffb68 */
        piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
        do {
                    /* catch() { ... } // from try @ 031ff8ec with catch @ 031ffb6c */
                    /* catch() { ... } // from try @ 031ff600 with catch @ 031ffb70 */
                    /* catch() { ... } // from try @ 031ffa1c with catch @ 031ffb74 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* catch() { ... } // from try @ 031ff514 with catch @ 031ffb9c */
                    /* catch() { ... } // from try @ 031ff4b8 with catch @ 031ffba0 */
                    /* catch() { ... } // from try @ 031ffae0 with catch @ 031ffba4 */
            pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
            goto LAB_031ffbac;
          }
                    /* catch() { ... } // from try @ 031ff9c4 with catch @ 031ffb78 */
          uVar16 = uVar16 - 1;
                    /* catch() { ... } // from try @ 031ff588 with catch @ 031ffb7c */
          piVar17 = piVar17 + 4;
                    /* catch() { ... } // from try @ 031ffaec with catch @ 031ffb80 */
        } while (uVar16 != 0);
      }
                    /* catch() { ... } // from try @ 031ffae8 with catch @ 031ffb84 */
                    /* catch() { ... } // from try @ 031ff9d4 with catch @ 031ffb88 */
                    /* catch() { ... } // from try @ 031ff57c with catch @ 031ffb8c */
      pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
                    /* catch() { ... } // from try @ 031ff9b4 with catch @ 031ffb90 */
LAB_031ffbac:
      pSVar19 = (System_String_o *)(*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
                    /* try { // try from 031ffbc4 to 032ffbc7 has its CatchHandler @ 031ffbd4 */
      iVar8 = lVar12;
      if (lVar12 < 0xe10) {
        JONDDIMGADB = (System_String_o *)0x0;
        FCLHIDDAHIJ = (System_String_o *)0x0;
        PFCGLNFFKFG = (System_String_o *)0x0;
        LMOANJOPDGM = true;
        pSVar11 = pSVar6;
        FCCHAOBFMLN = true;
      }
      else {
        pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar13 = Method_System_Array_Empty<string>__;
                    /* try { // try from 031ffbe4 to 032ffc53 has its CatchHandler @ 031ffc68 */
        lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar14 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar14 = *(long *)(lVar13 + 0x38);
        }
        lVar14 = *(long *)(lVar14 + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_01b81620();
        }
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01b81620();
        }
        uVar7 = StringLiteral_13795/*"TimeDaysShort"*/;
        if (pIVar9 == (Il2CppObject *)0x0) goto LAB_032000c8;
        pIVar15 = pIVar9->klass;
                    /* try { // try from 031ffc54 to 032ffc5f has its CatchHandler @ 031ff28c */
        uVar20 = **(undefined8 **)(lVar13 + 0xb8);
        uVar2._0_1_ = (pIVar15->_2).rank;
        uVar2._1_1_ = (pIVar15->_2).minimumAlignment;
        uVar16 = (ulong)uVar2;
                    /* try { // try from 031ffc60 to 032ffc67 has its CatchHandler @ 031ffc68 */
        if (uVar16 != 0) {
                    /* catch() { ... } // from try @ 031ffbe4 with catch @ 031ffc68
                       catch() { ... } // from try @ 031ffc60 with catch @ 031ffc68 */
          piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
              goto LAB_031ffccc;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031ffccc:
        PFCGLNFFKFG = (System_String_o *)(*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
        if (lVar12 < 0xe10) {
          JONDDIMGADB = (System_String_o *)0x0;
          FCLHIDDAHIJ = (System_String_o *)0x0;
          pSVar19 = (System_String_o *)0x0;
          LMOANJOPDGM = true;
          pSVar11 = (System_String_o *)0x0;
          iVar8 = 0;
          FCCHAOBFMLN = false;
        }
        else {
          pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar13 = Method_System_Array_Empty<string>__;
          lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
          if (lVar14 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<string>__);
            lVar14 = *(long *)(lVar13 + 0x38);
          }
          lVar14 = *(long *)(lVar14 + 0x10);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_01b81620();
          }
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_01b81620();
          }
          uVar7 = StringLiteral_13796/*"TimeHourShort"*/;
          if (pIVar9 == (Il2CppObject *)0x0) goto LAB_032000c8;
          pIVar15 = pIVar9->klass;
          uVar20 = **(undefined8 **)(lVar13 + 0xb8);
          uVar3._0_1_ = (pIVar15->_2).rank;
          uVar3._1_1_ = (pIVar15->_2).minimumAlignment;
          uVar16 = (ulong)uVar3;
          if (uVar16 != 0) {
            piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
                goto LAB_031ffdd8;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031ffdd8:
          JONDDIMGADB = (System_String_o *)
                        (*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
          if (lVar12 < 0xe10) {
            FCLHIDDAHIJ = (System_String_o *)0x0;
            LMOANJOPDGM = false;
            pSVar11 = (System_String_o *)0x0;
            iVar8 = 0;
            pSVar19 = (System_String_o *)0x0;
            FCCHAOBFMLN = LMOANJOPDGM;
          }
          else {
            pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            lVar13 = Method_System_Array_Empty<string>__;
            lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
            if (lVar14 == 0) {
              FUN_01b8167c(Method_System_Array_Empty<string>__);
              lVar14 = *(long *)(lVar13 + 0x38);
            }
            lVar14 = *(long *)(lVar14 + 0x10);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01b81620();
            }
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01ba7564();
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_01b81620();
            }
            uVar7 = StringLiteral_13800/*"TimeMinuteShort"*/;
            if (pIVar9 == (Il2CppObject *)0x0) goto LAB_032000c8;
            pIVar15 = pIVar9->klass;
            uVar20 = **(undefined8 **)(lVar13 + 0xb8);
            uVar4._0_1_ = (pIVar15->_2).rank;
            uVar4._1_1_ = (pIVar15->_2).minimumAlignment;
            uVar16 = (ulong)uVar4;
            if (uVar16 != 0) {
              piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
                  goto LAB_031ffee4;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031ffee4:
            FCLHIDDAHIJ = (System_String_o *)
                          (*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
            FCCHAOBFMLN = LMOANJOPDGM;
          }
        }
      }
      pSVar11 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                          (iVar8,FCCHAOBFMLN,FCCHAOBFMLN,0xe0f < lVar12,0x1517f < lVar12,false,false
                           ,pSVar11,PFCGLNFFKFG,LMOANJOPDGM,LMOANJOPDGM,LMOANJOPDGM,0x1517f < lVar12
                           ,false,JONDDIMGADB,FCLHIDDAHIJ,StringLiteral_1/*""*/,2,(MethodInfo *)0x0);
      pSVar19 = System_String__Concat(pSVar19,pSVar11,(MethodInfo *)0x0);
    }
  }
  pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar12 = Method_System_Array_Empty<string>__;
  lVar13 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar13 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar13 = *(long *)(lVar12 + 0x38);
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_01b81620();
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01b81620();
  }
  uVar7 = StringLiteral_21451/*"textDan"*/;
  if (pIVar9 != (Il2CppObject *)0x0) {
    pIVar15 = pIVar9->klass;
    uVar20 = **(undefined8 **)(lVar12 + 0xb8);
    uVar5._0_1_ = (pIVar15->_2).rank;
    uVar5._1_1_ = (pIVar15->_2).minimumAlignment;
    uVar16 = (ulong)uVar5;
    if (uVar16 != 0) {
      piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
          goto LAB_03200054;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03200054:
    pSVar11 = (System_String_o *)(*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
    pSVar11 = System_String__Concat(StringLiteral_2434/*"<quad name=RaidMisc.dan /> "*/,pSVar11,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
    pNVar18 = (__this->fields)._timeLabel;
    pSVar11 = System_String__Concat(pSVar11,pSVar19,(MethodInfo *)0x0);
    if (pNVar18 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032000c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar18->klass->vtable)._75_set_text.methodPtr)
                (pNVar18,pSVar11,(pNVar18->klass->vtable)._75_set_text.method);
      return;
    }
  }
LAB_032000c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SwitchToPreviousLeaderboard()  [RVA 0x31000D0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$SwitchToPreviousLeaderboard @ RVA 0x31000D0

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__SwitchToPreviousLeaderboard
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  NFFDIPBFJHP_o *pNVar1;
  EEGDOGKBLNG_o *pEVar2;
  int64_t iVar3;
  NDPMLPGANCI_o *__this_00;
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_01;
  KKLJIDJBFEI_o *__this_02;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  GLPEFEEGCPM_o *pGVar4;
  long lVar5;
  
  if ((DAT_045664c9 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_EIPMJGAAKFP__);
    FUN_01bab630(&StringLiteral_18642/*"get_league"*/);
    DAT_045664c9 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar1 != (NFFDIPBFJHP_o *)0x0) {
    pGVar4 = (pNVar1->fields).DFGECIPDPCD;
    if (pGVar4 != (GLPEFEEGCPM_o *)0x0) {
      lVar5 = (pGVar4->fields).LAEGCKIFDOC;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar2 == (EEGDOGKBLNG_o *)0x0) goto LAB_03200288;
      iVar3 = EEGDOGKBLNG__HIPOGPBBJNJ(pEVar2,(MethodInfo *)0x0);
      if (lVar5 == iVar3) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__AKOPPOBKDCA(__this,method_00);
        Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__JBEGLHIMFPE(__this,method_01);
        goto LAB_03200270;
      }
    }
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__PHFCKPKDMBK(__this_00,true,true,(MethodInfo *)0x0);
      __this_01 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
                  thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
      Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_01,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if ((pEVar2 != (EEGDOGKBLNG_o *)0x0) &&
         (iVar3 = EEGDOGKBLNG__HIPOGPBBJNJ(pEVar2,(MethodInfo *)0x0),
         __this_01 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0)) {
        (__this_01->fields).value_ = iVar3;
        __this_02 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_02 != (KKLJIDJBFEI_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this_02,StringLiteral_18642/*"get_league"*/,
                     (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                     (MethodInfo *)0x0);
LAB_03200270:
          EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03200288:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AKOPPOBKDCA()  [RVA 0x310028C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$AKOPPOBKDCA @ RVA 0x310028C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__AKOPPOBKDCA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o **ppNVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  MethodInfo *extraout_x1;
  UnityEngine_GameObject_o *__this_04;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *pNVar3;
  UnityEngine_Rect_o UVar4;
  
  if ((DAT_045664ba & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RaidLeaguesLeaderboard>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Util_OHBILOGJCLA<RectTransform>__);
    FUN_01bab630(&StringLiteral_10902/*"RaidLeaguesLeaderboardPrev"*/);
    DAT_045664ba = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).KPGAAKKCKOA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_00,StringLiteral_10902/*"RaidLeaguesLeaderboardPrev"*/,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      __this_04 = (__this->fields).super.super._content;
      if ((__this_04 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
        __this_02 = (UnityEngine_RectTransform_o *)
                    Util__OHBILOGJCLA<object>(__this_00,Method_Util_OHBILOGJCLA<RectTransform>__);
        __this_03 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO
                              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
        if ((__this_03 != (UnityEngine_RectTransform_o *)0x0) &&
           (UVar4 = UnityEngine_RectTransform__get_rect(__this_03,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_RectTransform_o *)0x0)) {
          ppNVar1 = &(__this->fields).KPGAAKKCKOA;
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_02,(UnityEngine_Vector2_o)UVar4.fields._8_8_,(MethodInfo *)0x0);
          pNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)
                   UnityEngine_GameObject__AddComponent<object>
                             (__this_00,
                              Method_UnityEngine_GameObject_AddComponent<RaidLeaguesLeaderboard>__);
          *ppNVar1 = pNVar3;
          thunk_FUN_01c20e04(ppNVar1,pNVar3);
          if (*ppNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__Init
                      (*ppNVar1,__this,(__this->fields)._scroll,(__this->fields)._leagueCellPrefab,
                       (__this->fields)._hintPrefab,(__this->fields)._posHintPrefab,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void IAKHIFOFLGO()  [RVA 0x3100434]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$IAKHIFOFLGO @ RVA 0x3100434

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__IAKHIFOFLGO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar8;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *PFCGLNFFKFG;
  System_String_o *JONDDIMGADB;
  System_String_o *FCLHIDDAHIJ;
  System_String_o *pSVar11;
  long lVar12;
  bool FCCHAOBFMLN;
  long lVar13;
  long lVar14;
  Il2CppClass *pIVar15;
  ulong uVar16;
  int32_t *piVar17;
  Nekki_SF2_GUI_LabelAlias_o *pNVar18;
  System_String_o *pSVar19;
  undefined8 uVar20;
  bool LMOANJOPDGM;
  
  if ((DAT_045664b9 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_IAKHIFOFLGO__);
    FUN_01bab630(&StringLiteral_2434/*"<quad name=RaidMisc.dan /> "*/);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_13795/*"TimeDaysShort"*/);
    FUN_01bab630(&StringLiteral_13800/*"TimeMinuteShort"*/);
    FUN_01bab630(&StringLiteral_11759/*"SeasonEndTime"*/);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_21451/*"textDan"*/);
    FUN_01bab630(&StringLiteral_13796/*"TimeHourShort"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045664b9 = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 == (KKLJIDJBFEI_o *)0x0) goto LAB_032000c8;
  iVar8 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
  pSVar6 = StringLiteral_2086/*":"*/;
  pSVar11 = StringLiteral_167/*" "*/;
  lVar13 = (__this->fields).PBACPHGLOFJ;
  pSVar19 = (System_String_o *)0x0;
  lVar12 = lVar13 - iVar8;
  if (lVar12 != 0 && iVar8 <= lVar13) {
    if (lVar12 < 1) {
      pSVar19 = (System_String_o *)0x0;
    }
    else {
      LMOANJOPDGM = 0xe0f < lVar12;
      pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar13 = Method_System_Array_Empty<string>__;
      lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar14 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar14 = *(long *)(lVar13 + 0x38);
      }
      lVar14 = *(long *)(lVar14 + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01b81620();
      }
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01b81620();
      }
      uVar7 = StringLiteral_11759/*"SeasonEndTime"*/;
      if (pIVar9 == (Il2CppObject *)0x0) goto LAB_032000c8;
      pIVar15 = pIVar9->klass;
      uVar20 = **(undefined8 **)(lVar13 + 0xb8);
      uVar1._0_1_ = (pIVar15->_2).rank;
      uVar1._1_1_ = (pIVar15->_2).minimumAlignment;
      uVar16 = (ulong)uVar1;
      if (uVar16 != 0) {
        piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
            goto LAB_031ffbac;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031ffbac:
      pSVar19 = (System_String_o *)(*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
      iVar8 = lVar12;
      if (lVar12 < 0xe10) {
        JONDDIMGADB = (System_String_o *)0x0;
        FCLHIDDAHIJ = (System_String_o *)0x0;
        PFCGLNFFKFG = (System_String_o *)0x0;
        LMOANJOPDGM = true;
        pSVar11 = pSVar6;
        FCCHAOBFMLN = true;
      }
      else {
        pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar13 = Method_System_Array_Empty<string>__;
        lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar14 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar14 = *(long *)(lVar13 + 0x38);
        }
        lVar14 = *(long *)(lVar14 + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_01b81620();
        }
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01b81620();
        }
        uVar7 = StringLiteral_13795/*"TimeDaysShort"*/;
        if (pIVar9 == (Il2CppObject *)0x0) goto LAB_032000c8;
        pIVar15 = pIVar9->klass;
        uVar20 = **(undefined8 **)(lVar13 + 0xb8);
        uVar2._0_1_ = (pIVar15->_2).rank;
        uVar2._1_1_ = (pIVar15->_2).minimumAlignment;
        uVar16 = (ulong)uVar2;
        if (uVar16 != 0) {
          piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
              goto LAB_031ffccc;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031ffccc:
        PFCGLNFFKFG = (System_String_o *)(*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
        if (lVar12 < 0xe10) {
          JONDDIMGADB = (System_String_o *)0x0;
          FCLHIDDAHIJ = (System_String_o *)0x0;
          pSVar19 = (System_String_o *)0x0;
          LMOANJOPDGM = true;
          pSVar11 = (System_String_o *)0x0;
          iVar8 = 0;
          FCCHAOBFMLN = false;
        }
        else {
          pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar13 = Method_System_Array_Empty<string>__;
          lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
          if (lVar14 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<string>__);
            lVar14 = *(long *)(lVar13 + 0x38);
          }
          lVar14 = *(long *)(lVar14 + 0x10);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_01b81620();
          }
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_01b81620();
          }
          uVar7 = StringLiteral_13796/*"TimeHourShort"*/;
          if (pIVar9 == (Il2CppObject *)0x0) goto LAB_032000c8;
          pIVar15 = pIVar9->klass;
          uVar20 = **(undefined8 **)(lVar13 + 0xb8);
          uVar3._0_1_ = (pIVar15->_2).rank;
          uVar3._1_1_ = (pIVar15->_2).minimumAlignment;
          uVar16 = (ulong)uVar3;
          if (uVar16 != 0) {
            piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
                goto LAB_031ffdd8;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031ffdd8:
          JONDDIMGADB = (System_String_o *)
                        (*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
          if (lVar12 < 0xe10) {
            FCLHIDDAHIJ = (System_String_o *)0x0;
            LMOANJOPDGM = false;
            pSVar11 = (System_String_o *)0x0;
            iVar8 = 0;
            pSVar19 = (System_String_o *)0x0;
            FCCHAOBFMLN = LMOANJOPDGM;
          }
          else {
            pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            lVar13 = Method_System_Array_Empty<string>__;
            lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
            if (lVar14 == 0) {
              FUN_01b8167c(Method_System_Array_Empty<string>__);
              lVar14 = *(long *)(lVar13 + 0x38);
            }
            lVar14 = *(long *)(lVar14 + 0x10);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01b81620();
            }
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01ba7564();
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_01b81620();
            }
            uVar7 = StringLiteral_13800/*"TimeMinuteShort"*/;
            if (pIVar9 == (Il2CppObject *)0x0) goto LAB_032000c8;
            pIVar15 = pIVar9->klass;
            uVar20 = **(undefined8 **)(lVar13 + 0xb8);
            uVar4._0_1_ = (pIVar15->_2).rank;
            uVar4._1_1_ = (pIVar15->_2).minimumAlignment;
            uVar16 = (ulong)uVar4;
            if (uVar16 != 0) {
              piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
                  goto LAB_031ffee4;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031ffee4:
            FCLHIDDAHIJ = (System_String_o *)
                          (*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
            FCCHAOBFMLN = LMOANJOPDGM;
          }
        }
      }
      pSVar11 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                          (iVar8,FCCHAOBFMLN,FCCHAOBFMLN,0xe0f < lVar12,0x1517f < lVar12,false,false
                           ,pSVar11,PFCGLNFFKFG,LMOANJOPDGM,LMOANJOPDGM,LMOANJOPDGM,0x1517f < lVar12
                           ,false,JONDDIMGADB,FCLHIDDAHIJ,StringLiteral_1/*""*/,2,(MethodInfo *)0x0);
      pSVar19 = System_String__Concat(pSVar19,pSVar11,(MethodInfo *)0x0);
    }
  }
  pIVar9 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar12 = Method_System_Array_Empty<string>__;
  lVar13 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar13 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar13 = *(long *)(lVar12 + 0x38);
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_01b81620();
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01b81620();
  }
  uVar7 = StringLiteral_21451/*"textDan"*/;
  if (pIVar9 != (Il2CppObject *)0x0) {
    pIVar15 = pIVar9->klass;
    uVar20 = **(undefined8 **)(lVar12 + 0xb8);
    uVar5._0_1_ = (pIVar15->_2).rank;
    uVar5._1_1_ = (pIVar15->_2).minimumAlignment;
    uVar16 = (ulong)uVar5;
    if (uVar16 != 0) {
      piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar10 = pIVar15->vtable + (*piVar17 + 0xc);
          goto LAB_03200054;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar9,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03200054:
    pSVar11 = (System_String_o *)(*pVVar10->methodPtr)(pIVar9,uVar7,uVar20,pVVar10->method);
    pSVar11 = System_String__Concat(StringLiteral_2434/*"<quad name=RaidMisc.dan /> "*/,pSVar11,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
    pNVar18 = (__this->fields)._timeLabel;
    pSVar11 = System_String__Concat(pSVar11,pSVar19,(MethodInfo *)0x0);
    if (pNVar18 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032000c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar18->klass->vtable)._75_set_text.methodPtr)
                (pNVar18,pSVar11,(pNVar18->klass->vtable)._75_set_text.method);
      return;
    }
  }
LAB_032000c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EIMAPFADHOL()  [RVA 0x31000CC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$EIMAPFADHOL @ RVA 0x31000CC

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__EIMAPFADHOL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void JBEGLHIMFPE()  [RVA 0x3100438]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$JBEGLHIMFPE @ RVA 0x3100438

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__JBEGLHIMFPE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  NFFDIPBFJHP_o *pNVar5;
  EEGDOGKBLNG_o *__this_00;
  System_String_o *pSVar6;
  MethodInfo *extraout_x1;
  GLPEFEEGCPM_o *pGVar7;
  long lVar8;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *pNVar9;
  int local_24;
  
  if ((DAT_045664bb & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045664bb = 1;
    method = extraout_x1;
  }
  local_24 = 0;
  pNVar9 = (__this->fields).LEJCNEENFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar9 = (__this->fields).LEJCNEENFCH;
    if ((pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032007ac;
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
    pNVar9 = (__this->fields).LEJCNEENFCH;
    if (pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) goto LAB_032007ac;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar9,false,(MethodInfo *)0x0);
    pNVar9 = (__this->fields).LEJCNEENFCH;
    if (pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) goto LAB_032007ac;
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__StopFillPlayers(pNVar9,(MethodInfo *)0x0);
  }
  pNVar9 = (__this->fields).KPGAAKKCKOA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar9 = (__this->fields).KPGAAKKCKOA;
    if ((pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032007ac;
    UnityEngine_GameObject__SetActive(pUVar3,(__this->fields).CGJKLEEEPPN,(MethodInfo *)0x0);
    pNVar9 = (__this->fields).KPGAAKKCKOA;
    if (pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) goto LAB_032007ac;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar9,(__this->fields).CGJKLEEEPPN,(MethodInfo *)0x0)
    ;
  }
  pNVar4 = (__this->fields)._timeLabel;
  if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032007ac;
  UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
  pNVar4 = (__this->fields)._prevSeasonLabel;
  if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032007ac;
  UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
  if ((__this->fields).CGJKLEEEPPN == false) {
    pNVar4 = (__this->fields)._notParticipatedInSeasonLabel;
    if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032007ac;
    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
  }
  else {
    pNVar4 = (__this->fields)._leagueDan;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0);
    if (bVar2) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar5 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
      if (pNVar5 == (NFFDIPBFJHP_o *)0x0) goto LAB_032007ac;
      if ((pNVar5->fields).DFGECIPDPCD == (GLPEFEEGCPM_o *)0x0) {
LAB_03200680:
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_032007ac;
        local_24 = EEGDOGKBLNG__IGIHHCEONEM(__this_00,(MethodInfo *)0x0);
      }
      else {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar5 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
        if ((pNVar5 == (NFFDIPBFJHP_o *)0x0) ||
           (pGVar7 = (pNVar5->fields).DFGECIPDPCD, pGVar7 == (GLPEFEEGCPM_o *)0x0))
        goto LAB_032007ac;
        lVar8 = (pGVar7->fields).LAEGCKIFDOC;
        if (lVar8 == 0) goto LAB_03200680;
        lVar8 = lVar8 / 10000000;
        auVar1 = SEXT816(lVar8) * ZEXT816(0xa3d70a3d70a3d70b);
        local_24 = (int)lVar8 + ((int)(auVar1._8_8_ >> 6) - (auVar1._12_4_ >> 0x1f)) * -100;
      }
      pNVar4 = (__this->fields)._leagueDan;
      pSVar6 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032007ac;
      (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                (pNVar4,pSVar6,(pNVar4->klass->vtable)._75_set_text.method);
    }
  }
  LJLLAKHOFFF__JAEOMHIAHJB
            ((UnityEngine_UI_Button_o *)(__this->fields)._btnCurrentLeague,0,true,(MethodInfo *)0x0)
  ;
  LJLLAKHOFFF__JAEOMHIAHJB
            ((UnityEngine_UI_Button_o *)(__this->fields)._btnOldLeague,2,true,(MethodInfo *)0x0);
  pNVar9 = (__this->fields).LEJCNEENFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar9 = (__this->fields).LEJCNEENFCH;
    if (pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) goto LAB_032007ac;
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__ScrollClearData(pNVar9,(MethodInfo *)0x0);
  }
  pNVar9 = (__this->fields).KPGAAKKCKOA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar9 = (__this->fields).KPGAAKKCKOA;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar5 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
    if ((pNVar5 == (NFFDIPBFJHP_o *)0x0) ||
       (pNVar9 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0)) {
LAB_032007ac:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__Refresh
              (pNVar9,(pNVar5->fields).DFGECIPDPCD,(MethodInfo *)0x0);
  }
  (__this->fields).LNIAPAKKPHL = 0.0;
  return;
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x31007B0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$IGDDKJJMDLP @ RVA 0x31007B0

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x31007B4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$EJHAPHAHMHG @ RVA 0x31007B4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,System_String_o *EHNFGMGKCHO
               ,MethodInfo *method)

{
  return;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x31007B8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$GKPJMHOFIOO @ RVA 0x31007B8

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  NFFDIPBFJHP_o *pNVar2;
  KKLJIDJBFEI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *in_x2;
  FADHMEJJCPO_o *pFVar3;
  PGICCMFLDPI_o *pPVar4;
  GLPEFEEGCPM_o *pGVar5;
  long lVar6;
  
  if ((DAT_045664bc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_5942/*"Error! LeagueInfo is empty! Please download."*/);
    DAT_045664bc = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar2 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar2 != (NFFDIPBFJHP_o *)0x0) {
    pGVar5 = (pNVar2->fields).NEACDFLBNFO;
    if (pGVar5 == (GLPEFEEGCPM_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_5942/*"Error! LeagueInfo is empty! Please download."*/,(MethodInfo *)0x0);
      return;
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__CFPJAFNAAME(__this,method_00);
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__CBMBNAKAFMH(__this,method_01);
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__LHKAGIIDFIP(__this,method_02);
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__NGGIGILFODP(__this,method_03);
    pFVar3 = (pGVar5->fields).PBBGNHKFEPG;
    if ((pFVar3 != (FADHMEJJCPO_o *)0x0) &&
       (pPVar4 = (pFVar3->fields).IMNALGKNMNP, pPVar4 != (PGICCMFLDPI_o *)0x0)) {
      lVar6 = (pPVar4->fields).GDKPGIBMFPA;
      __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((__this_00 != (KKLJIDJBFEI_o *)0x0) &&
         (pPVar4 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0),
         pPVar4 != (PGICCMFLDPI_o *)0x0)) {
        auVar1 = SEXT816(lVar6 - (pPVar4->fields).GDKPGIBMFPA) * SEXT816(0x20c49ba5e353f7cf);
        Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__CPMHIEJENLD
                  (__this,(int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f),in_x2);
        Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__HEFGCBGBDGP(__this,method_04);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CFPJAFNAAME()  [RVA 0x31008EC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$CFPJAFNAAME @ RVA 0x31008EC

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__CFPJAFNAAME
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  
  if ((DAT_045664bd & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_IKJKPJABNMD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_LODMBBHOHPM__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10973/*"RaidTop100Dialog.arrow_inactive"*/);
    FUN_01bab630(&StringLiteral_10974/*"RaidTop100Dialog.arrow_pressed"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_045664bd = 1;
  }
  (*(__this->klass->vtable)._27_LCGFJKFJKJK.methodPtr)
            (__this,2,(__this->klass->vtable)._27_LCGFJKFJKJK.method);
  pNVar1 = (__this->fields)._btnOldLeague;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10974/*"RaidTop100Dialog.arrow_pressed"*/,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._btnOldLeague;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10973/*"RaidTop100Dialog.arrow_inactive"*/,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._btnOldLeague;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar2,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._btnCurrentLeague;
          if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                      (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10974/*"RaidTop100Dialog.arrow_pressed"*/,(MethodInfo *)0x0);
            pNVar1 = (__this->fields)._btnCurrentLeague;
            if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
              Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                        (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10973/*"RaidTop100Dialog.arrow_inactive"*/,(MethodInfo *)0x0);
              pNVar1 = (__this->fields)._btnCurrentLeague;
              if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick;
                pUVar2 = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar2,(MethodInfo *)0x0);
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


// ===== public void .ctor()  [RVA 0x31010EC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$.ctor @ RVA 0x31010EC

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void LODMBBHOHPM()  [RVA 0x31010F4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$LODMBBHOHPM @ RVA 0x31010F4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__LODMBBHOHPM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__NGGIGILFODP(__this,method);
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  return;
}


// ===== private void CBMBNAKAFMH()  [RVA 0x3100A90]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$CBMBNAKAFMH @ RVA 0x3100A90

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__CBMBNAKAFMH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  System_String_o *pSVar2;
  BHEDGAKGKPO_StaticFields *pBVar3;
  int32_t local_24;
  
  if ((DAT_045664be & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045664be = 1;
  }
  pNVar1 = (__this->fields)._leagueDan;
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._leagueDan;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                 (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      pNVar1 = (__this->fields)._leagueDan;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
        local_24 = EEGDOGKBLNG__IGIHHCEONEM(__this_01,(MethodInfo *)0x0);
        pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                    (pNVar1,pSVar2,(pNVar1->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EIPMJGAAKFP(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x310110C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$EIPMJGAAKFP @ RVA 0x310110C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__EIPMJGAAKFP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  NFFDIPBFJHP_o *__this_00;
  NDPMLPGANCI_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  GLPEFEEGCPM_o *CJNHFNHJHPE;
  
  if ((DAT_045664bf & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<PBGDDCFGPJI>__);
    DAT_045664bf = 1;
  }
  if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar1 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<PBGDDCFGPJI>__);
    method_01 = extraout_x1;
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (CJNHFNHJHPE = pIVar1[1].monitor, CJNHFNHJHPE != (GLPEFEEGCPM_o *)0x0)) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
      if (__this_00 == (NFFDIPBFJHP_o *)0x0) goto LAB_032011e4;
      NFFDIPBFJHP__PFMBOAKNNOI(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__AKOPPOBKDCA(__this,method_00);
      method_01 = extraout_x1_00;
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__JBEGLHIMFPE(__this,method_01);
    __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__PHFCKPKDMBK(__this_01,false,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_032011e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x31011E8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$Init @ RVA 0x31011E8

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  if ((DAT_045664c0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17301/*"compareCloseBtn"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045664c0 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_1/*""*/,
             StringLiteral_9679/*"OK"*/,StringLiteral_17301/*"compareCloseBtn"*/,2,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._scroll;
  (__this->fields).PBACPHGLOFJ = 0;
  (__this->fields).CGJKLEEEPPN = false;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CPMHIEJENLD(int IMCJLJNEMKH)  [RVA 0x3100D48]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$CPMHIEJENLD @ RVA 0x3100D48

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__CPMHIEJENLD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,int32_t IMCJLJNEMKH,
               MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar1;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  
  if ((DAT_045664c1 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_IAKHIFOFLGO__);
    DAT_045664c1 = 1;
  }
  if (0 < IMCJLJNEMKH) {
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
      iVar1 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
      (__this->fields).PBACPHGLOFJ = iVar1 + (ulong)(uint)IMCJLJNEMKH;
      CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__KKHNLLICFOO(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x310128C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$GLJGIJNALCA @ RVA 0x310128C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x3101290]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$OnDestroy @ RVA 0x3101290

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_045664c2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_IAKHIFOFLGO__);
    DAT_045664c2 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void Update()  [RVA 0x3101340]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$Update @ RVA 0x3101340

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__Update
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  long lVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  System_Collections_Generic_List_ResolutionImage__o *source;
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *extraout_x1;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o value;
  
  if ((DAT_045664c3 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045664c3 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__HAPCHDFFICG(__this,method);
  pNVar2 = (__this->fields)._timeLabel;
  if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (lVar3 = (*(pNVar2->klass->vtable)._74_get_text.methodPtr)
                        (pNVar2,(pNVar2->klass->vtable)._74_get_text.method), lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x10) < 1) {
      pNVar2 = (Nekki_SF2_GUI_LabelAlias_o *)0x0;
    }
    else {
      pNVar2 = (__this->fields)._timeLabel;
      if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03201608;
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      pNVar2 = (Nekki_SF2_GUI_LabelAlias_o *)0x0;
      if (bVar1) {
        pNVar2 = (__this->fields)._timeLabel;
      }
    }
    pNVar5 = (__this->fields)._prevSeasonLabel;
    if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (lVar3 = (*(pNVar5->klass->vtable)._74_get_text.methodPtr)
                          (pNVar5,(pNVar5->klass->vtable)._74_get_text.method), lVar3 != 0)) {
      if (0 < *(int *)(lVar3 + 0x10)) {
        pNVar5 = (__this->fields)._prevSeasonLabel;
        if ((pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
           pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03201608;
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
        if (bVar1) {
          pNVar2 = (__this->fields)._prevSeasonLabel;
        }
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        source = Nekki_SF2_GUI_TextPic__GetPresentedQuadImages
                           ((Nekki_SF2_GUI_TextPic_o *)pNVar2,false,(MethodInfo *)0x0);
        __this_00 = (UnityEngine_UI_Graphic_o *)
                    System_Linq_Enumerable__FirstOrDefault<object>
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               Method_System_Linq_Enumerable_FirstOrDefault<ResolutionImage>__);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if (__this_00 != (UnityEngine_UI_Graphic_o *)0x0) {
          bVar1 = UnityEngine_Behaviour__get_enabled
                            ((UnityEngine_Behaviour_o *)__this_00,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            pNVar2 = (__this->fields)._leagueDan;
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              pUVar6 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
              pUVar7 = UnityEngine_UI_Graphic__get_rectTransform(__this_00,(MethodInfo *)0x0);
              if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
                 (__this_01 = UnityEngine_Transform__get_parent
                                        ((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0),
                 __this_01 != (UnityEngine_Transform_o *)0x0)) {
                UVar9 = UnityEngine_Transform__get_localPosition(__this_01,(MethodInfo *)0x0);
                pUVar7 = UnityEngine_UI_Graphic__get_rectTransform(__this_00,(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar10 = UnityEngine_Transform__get_localPosition
                                     ((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
                  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                    value.fields.z = UVar9.fields.z + UVar10.fields.z;
                    value.fields.y = UVar9.fields.y + UVar10.fields.y;
                    value.fields.x = UVar9.fields.x + UVar10.fields.x;
                    UnityEngine_Transform__set_localPosition
                              ((UnityEngine_Transform_o *)pUVar6,value,(MethodInfo *)0x0);
                    pNVar2 = (__this->fields)._leagueDan;
                    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      pUVar6 = UnityEngine_UI_Graphic__get_rectTransform
                                         ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
                      pUVar7 = UnityEngine_UI_Graphic__get_rectTransform
                                         (__this_00,(MethodInfo *)0x0);
                      if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
                         (UVar8 = UnityEngine_RectTransform__get_pivot(pUVar7,(MethodInfo *)0x0),
                         pUVar6 != (UnityEngine_RectTransform_o *)0x0)) {
                        UnityEngine_RectTransform__set_pivot(pUVar6,UVar8,(MethodInfo *)0x0);
                        pNVar2 = (__this->fields)._leagueDan;
                        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                          pUVar6 = UnityEngine_UI_Graphic__get_rectTransform
                                             ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
                          pUVar7 = UnityEngine_UI_Graphic__get_rectTransform
                                             (__this_00,(MethodInfo *)0x0);
                          if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
                             (UVar8 = UnityEngine_RectTransform__get_sizeDelta
                                                (pUVar7,(MethodInfo *)0x0),
                             pUVar6 != (UnityEngine_RectTransform_o *)0x0)) {
                            UnityEngine_RectTransform__set_sizeDelta(pUVar6,UVar8,(MethodInfo *)0x0)
                            ;
                            pNVar2 = (__this->fields)._leagueDan;
                            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                              pUVar4 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)pNVar2,
                                                  (MethodInfo *)0x0);
                              Util__IHPDCBOFHPA(pUVar4,true,(MethodInfo *)0x0);
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
LAB_03201608:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool FKGFKNKJAHH()  [RVA 0x3101728]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$FKGFKNKJAHH @ RVA 0x3101728

bool Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__FKGFKNKJAHH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  NFFDIPBFJHP_o *pNVar1;
  KKLJIDJBFEI_o *__this_00;
  MethodInfo *extraout_x1;
  GLPEFEEGCPM_o *pGVar2;
  FADHMEJJCPO_o *pFVar3;
  PGICCMFLDPI_o *pPVar4;
  long lVar5;
  
  if ((DAT_045664c4 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045664c4 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar1 != (NFFDIPBFJHP_o *)0x0) {
    pGVar2 = (pNVar1->fields).NEACDFLBNFO;
    if (pGVar2 == (GLPEFEEGCPM_o *)0x0) {
      return true;
    }
    pFVar3 = (pGVar2->fields).PBBGNHKFEPG;
    if ((pFVar3 != (FADHMEJJCPO_o *)0x0) &&
       (pPVar4 = (pFVar3->fields).IMNALGKNMNP, pPVar4 != (PGICCMFLDPI_o *)0x0)) {
      lVar5 = (pPVar4->fields).GDKPGIBMFPA;
      __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((__this_00 != (KKLJIDJBFEI_o *)0x0) &&
         (pPVar4 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0),
         pPVar4 != (PGICCMFLDPI_o *)0x0)) {
        return lVar5 - (pPVar4->fields).GDKPGIBMFPA < 1000;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void COHKIFCAHGD()  [RVA 0x31017D0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$COHKIFCAHGD @ RVA 0x31017D0

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__COHKIFCAHGD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  
  if ((DAT_045664c5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045664c5 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._btnRandomPlayers;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar2 = (__this->fields)._btnRandomPlayers;
  if ((pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LHKAGIIDFIP()  [RVA 0x3100BA0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$LHKAGIIDFIP @ RVA 0x3100BA0

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__LHKAGIIDFIP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o **ppNVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  MethodInfo *extraout_x1;
  UnityEngine_GameObject_o *__this_04;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *pNVar3;
  UnityEngine_Rect_o UVar4;
  
  if ((DAT_045664c6 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RaidLeaguesLeaderboard>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Util_OHBILOGJCLA<RectTransform>__);
    FUN_01bab630(&StringLiteral_10901/*"RaidLeaguesLeaderboardCur"*/);
    DAT_045664c6 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).LEJCNEENFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_00,StringLiteral_10901/*"RaidLeaguesLeaderboardCur"*/,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      __this_04 = (__this->fields).super.super._content;
      if ((__this_04 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
        __this_02 = (UnityEngine_RectTransform_o *)
                    Util__OHBILOGJCLA<object>(__this_00,Method_Util_OHBILOGJCLA<RectTransform>__);
        __this_03 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO
                              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
        if ((__this_03 != (UnityEngine_RectTransform_o *)0x0) &&
           (UVar4 = UnityEngine_RectTransform__get_rect(__this_03,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_RectTransform_o *)0x0)) {
          ppNVar1 = &(__this->fields).LEJCNEENFCH;
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_02,(UnityEngine_Vector2_o)UVar4.fields._8_8_,(MethodInfo *)0x0);
          pNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)
                   UnityEngine_GameObject__AddComponent<object>
                             (__this_00,
                              Method_UnityEngine_GameObject_AddComponent<RaidLeaguesLeaderboard>__);
          *ppNVar1 = pNVar3;
          thunk_FUN_01c20e04(ppNVar1,pNVar3);
          if (*ppNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__Init
                      (*ppNVar1,__this,(__this->fields)._scroll,(__this->fields)._leagueCellPrefab,
                       (__this->fields)._hintPrefab,(__this->fields)._posHintPrefab,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void HAPCHDFFICG()  [RVA 0x310160C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$HAPCHDFFICG @ RVA 0x310160C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__HAPCHDFFICG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  ulong uVar2;
  NFFDIPBFJHP_o *pNVar3;
  MethodInfo *extraout_x1;
  GLPEFEEGCPM_o *BFFBKNCLLML;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *pNVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_045664c7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045664c7 = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields).LEJCNEENFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
LAB_03201710:
    (__this->fields).LNIAPAKKPHL = 0.0;
    return;
  }
  pNVar5 = (__this->fields).LEJCNEENFCH;
  if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) {
    uVar2 = (*(pNVar5->klass->vtable)._9_IsActive.methodPtr)
                      (pNVar5,(pNVar5->klass->vtable)._9_IsActive.method);
    if ((uVar2 & 1) == 0) goto LAB_03201710;
    pNVar4 = (__this->fields)._scroll;
    if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      fVar6 = 0.0;
      if (*(char *)&(pNVar4->fields).KIANNGNDAFC == '\0') {
        fVar6 = (__this->fields).LNIAPAKKPHL;
        fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar6 = fVar6 + fVar7;
      }
      (__this->fields).LNIAPAKKPHL = fVar6;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
      if (pNVar3 != (NFFDIPBFJHP_o *)0x0) {
        BFFBKNCLLML = (pNVar3->fields).NEACDFLBNFO;
        if (BFFBKNCLLML == (GLPEFEEGCPM_o *)0x0) {
          return;
        }
        if ((__this->fields).LNIAPAKKPHL <= 5.0) {
          return;
        }
        pNVar5 = (__this->fields).LEJCNEENFCH;
        if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) {
          if (BFFBKNCLLML == (pNVar5->fields).DCDPLKDJEIM) {
            return;
          }
          Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__Refresh
                    (pNVar5,BFFBKNCLLML,(MethodInfo *)0x0);
          goto LAB_03201710;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HEFGCBGBDGP()  [RVA 0x3100E30]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$HEFGCBGBDGP @ RVA 0x3100E30

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__HEFGCBGBDGP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar5;
  long lVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  System_String_o *str3;
  long lVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  int32_t *piVar12;
  undefined8 uVar13;
  
  if ((DAT_045664c8 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_2434/*"<quad name=RaidMisc.dan /> "*/);
    FUN_01bab630(&StringLiteral_167/*" "*/);
                    /* try { // try from 03200e8c to 03300f4f has its CatchHandler @ 03200e8c
                       catch() { ... } // from try @ 03200e8c with catch @ 03200e8c
                       catch() { ... } // from try @ 03200fbc with catch @ 03200e8c
                       catch() { ... } // from try @ 03200ff4 with catch @ 03200e8c
                       catch() { ... } // from try @ 03201000 with catch @ 03200e8c
                       catch() { ... } // from try @ 03201038 with catch @ 03200e8c
                       catch() { ... } // from try @ 0320106c with catch @ 03200e8c */
    FUN_01bab630(&StringLiteral_8370/*"LeaguePreviousSeason"*/);
    FUN_01bab630(&StringLiteral_21451/*"textDan"*/);
    DAT_045664c8 = 1;
  }
  pNVar4 = (__this->fields)._prevSeasonLabel;
  if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._prevSeasonLabel;
    pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar6 = Method_System_Array_Empty<string>__;
    lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar9 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar9 = *(long *)(lVar6 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01b81620();
    }
    uVar3 = StringLiteral_21451/*"textDan"*/;
    if (pIVar5 != (Il2CppObject *)0x0) {
      pIVar10 = pIVar5->klass;
                    /* try { // try from 03200f50 to 03300f57 has its CatchHandler @ 0320101c */
      uVar13 = **(undefined8 **)(lVar6 + 0xb8);
      uVar1._0_1_ = (pIVar10->_2).rank;
      uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
      uVar11 = (ulong)uVar1;
      if (uVar11 != 0) {
        piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 03200f6c to 03300f77 has its CatchHandler @ 03201014 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar7 = pIVar10->vtable + (*piVar12 + 0xc);
            goto LAB_03200fa4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
                    /* try { // try from 03200f80 to 03300f8f has its CatchHandler @ 03201010 */
        } while (uVar11 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03200fa4:
                    /* try { // try from 03200fb0 to 03300fbb has its CatchHandler @ 03201004 */
      pSVar8 = (System_String_o *)(*pVVar7->methodPtr)(pIVar5,uVar3,uVar13,pVVar7->method);
                    /* try { // try from 03200fbc to 03300feb has its CatchHandler @ 03200e8c */
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar6 = Method_System_Array_Empty<string>__;
      lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar9 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar9 = *(long *)(lVar6 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
                    /* try { // try from 03200fec to 03300fef has its CatchHandler @ 03201018 */
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    /* try { // try from 03200ff0 to 03300ff3 has its CatchHandler @ 0320100c */
        lVar9 = FUN_01b81620();
      }
                    /* try { // try from 03200ff4 to 03300ff7 has its CatchHandler @ 03200e8c */
                    /* try { // try from 03200ff8 to 03300ffb has its CatchHandler @ 03201008 */
      if (*(int *)(lVar9 + 0xe0) == 0) {
                    /* try { // try from 03200ffc to 03300fff has its CatchHandler @ 03201000 */
        thunk_FUN_01ba7564();
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200ffc with catch @ 03201000
                       try { // try from 03201000 to 03301033 has its CatchHandler @ 03200e8c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200fb0 with catch @ 03201004
                        */
      lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200ff8 with catch @ 03201008
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200ff0 with catch @ 0320100c
                        */
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200f80 with catch @ 03201010
                        */
        lVar6 = FUN_01b81620();
      }
      uVar3 = StringLiteral_8370/*"LeaguePreviousSeason"*/;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200f6c with catch @ 03201014
                        */
      if (pIVar5 != (Il2CppObject *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200fec with catch @ 03201018
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200f50 with catch @ 0320101c
                        */
        pIVar10 = pIVar5->klass;
                    /* try { // try from 03201034 to 03301037 has its CatchHandler @ 0320105c */
        uVar13 = **(undefined8 **)(lVar6 + 0xb8);
        uVar2._0_1_ = (pIVar10->_2).rank;
        uVar2._1_1_ = (pIVar10->_2).minimumAlignment;
                    /* try { // try from 03201038 to 03301063 has its CatchHandler @ 03200e8c */
        uVar11 = (ulong)uVar2;
        if (uVar11 != 0) {
          piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
          do {
                    /* catch() { ... } // from try @ 03201034 with catch @ 0320105c */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03201064 with catch @ 03201080
                       catch(type#2 @ 00000000) { ... } // from try @ 03201078 with catch @ 03201080
                        */
                    /* try { // try from 03201084 to 03301b83 has its CatchHandler @ 03201084
                       catch() { ... } // from try @ 03201084 with catch @ 03201084
                       catch() { ... } // from try @ 03201d50 with catch @ 03201084
                       catch() { ... } // from try @ 03202050 with catch @ 03201084
                       catch() { ... } // from try @ 03202108 with catch @ 03201084
                       catch() { ... } // from try @ 03202128 with catch @ 03201084
                       catch() { ... } // from try @ 03202134 with catch @ 03201084
                       catch() { ... } // from try @ 03202258 with catch @ 03201084
                       catch() { ... } // from try @ 03202314 with catch @ 03201084 */
              pVVar7 = pIVar10->vtable + (*piVar12 + 0xc);
              goto LAB_0320108c;
            }
            uVar11 = uVar11 - 1;
                    /* try { // try from 03201064 to 0330106b has its CatchHandler @ 03201080 */
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
                    /* try { // try from 0320106c to 03301077 has its CatchHandler @ 03200e8c */
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
                    /* try { // try from 03201078 to 0330107f has its CatchHandler @ 03201080 */
LAB_0320108c:
        str3 = (System_String_o *)(*pVVar7->methodPtr)(pIVar5,uVar3,uVar13,pVVar7->method);
        pSVar8 = System_String__Concat
                           (StringLiteral_2434/*"<quad name=RaidMisc.dan /> "*/,pSVar8,StringLiteral_167/*" "*/,str3,(MethodInfo *)0x0);
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032010e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                    (pNVar4,pSVar8,(pNVar4->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IKJKPJABNMD()  [RVA 0x31000D4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$IKJKPJABNMD @ RVA 0x31000D4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__IKJKPJABNMD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  NFFDIPBFJHP_o *pNVar1;
  EEGDOGKBLNG_o *pEVar2;
  int64_t iVar3;
  NDPMLPGANCI_o *__this_00;
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_01;
  KKLJIDJBFEI_o *__this_02;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  GLPEFEEGCPM_o *pGVar4;
  long lVar5;
  
  if ((DAT_045664c9 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_EIPMJGAAKFP__);
    FUN_01bab630(&StringLiteral_18642/*"get_league"*/);
    DAT_045664c9 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar1 != (NFFDIPBFJHP_o *)0x0) {
    pGVar4 = (pNVar1->fields).DFGECIPDPCD;
    if (pGVar4 != (GLPEFEEGCPM_o *)0x0) {
      lVar5 = (pGVar4->fields).LAEGCKIFDOC;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar2 == (EEGDOGKBLNG_o *)0x0) goto LAB_03200288;
      iVar3 = EEGDOGKBLNG__HIPOGPBBJNJ(pEVar2,(MethodInfo *)0x0);
      if (lVar5 == iVar3) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__AKOPPOBKDCA(__this,method_00);
        Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__JBEGLHIMFPE(__this,method_01);
        goto LAB_03200270;
      }
    }
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__PHFCKPKDMBK(__this_00,true,true,(MethodInfo *)0x0);
      __this_01 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
                  thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
      Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_01,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if ((pEVar2 != (EEGDOGKBLNG_o *)0x0) &&
         (iVar3 = EEGDOGKBLNG__HIPOGPBBJNJ(pEVar2,(MethodInfo *)0x0),
         __this_01 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0)) {
        (__this_01->fields).value_ = iVar3;
        __this_02 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_02 != (KKLJIDJBFEI_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this_02,StringLiteral_18642/*"get_league"*/,
                     (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                     (MethodInfo *)0x0);
LAB_03200270:
          EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03200288:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

