// TypeDefIndex 811
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidTopHundredDialog : RaidBaseDialog
// Fields:
//   public const int TOP_10_LAST_POS = 0;
//   public const int TOP_SWITCHER_OFFSET = 15;
//   public const string TAB_TOP100_ACTIVE = "RaidTop100Dialog.tab_top100_active";
//   public const string TAB_TOP100_INACTIVE = "RaidTop100Dialog.tab_top100_inactive";
//   private LabelAlias _titleLabel; // 0xC8
//   private LabelAlias _prevSeasonLabel; // 0xD0
//   private ResolutionButton _btnPrevSeasonLeaderboard; // 0xD8
//   private ResolutionButton _btnCurSeasonLeaderboard; // 0xE0
//   private ResolutionImage _additionalBg; // 0xE8
//   private ResolutionImage _tsRollLeftBorder; // 0xF0
//   private ResolutionImage _tsRollRightBorder; // 0xF8
//   private ResolutionImage _tsRollTopLeftBorder; // 0x100
//   private ResolutionImage _tsRollTopRightBorder; // 0x108
//   private ResolutionImage _tsBottomTraceryLeft; // 0x110
//   private ResolutionImage _tsBottomTraceryRight; // 0x118
//   private GameObject _clansHint; // 0x120
//   private ResolutionButton _btnTopPlayers; // 0x128
//   private ResolutionButton _btnTopClans; // 0x130
//   private LoadingCircle _loadingCircle; // 0x138
//   private LabelAlias _loadingMessage; // 0x140
//   private GameObject _cellPlayerPrefab; // 0x148
//   private GameObject _cellClanPrefab; // 0x150
//   private SimpleScroll _scroll; // 0x158
//   private LeaderboardSeasonViewController MDFMCFCMEEB; // 0x160
//   private LeaderboardSeasonViewController ONCOODOJIIH; // 0x168
//   private LeaderboardSeasonViewController MDHGKKKIJIM; // 0x170
//   private long PBACPHGLOFJ; // 0x178
//   private bool AJCDHIBILLO; // 0x180
//   private string BKLFHONPJGH; // 0x188
//   private Dictionary<string, float> OLFKGLNEJAA; // 0x190

// ===== private void IAKHIFOFLGO()  [RVA 0x3073FBC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$IAKHIFOFLGO @ RVA 0x3073FBC

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__IAKHIFOFLGO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  SFRequestSender_o *__this_00;
  int64_t iVar7;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *str0;
  System_String_o *PFCGLNFFKFG;
  System_String_o *JONDDIMGADB;
  System_String_o *FCLHIDDAHIJ;
  System_String_o *pSVar10;
  System_Action_o *CJNHFNHJHPE;
  bool FCCHAOBFMLN;
  long lVar11;
  long lVar12;
  Il2CppClass *pIVar13;
  ulong uVar14;
  int32_t *piVar15;
  bool LMOANJOPDGM;
  undefined8 uVar16;
  System_String_o *FJDJFJNEEJI;
  System_String_o *str1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar17;
  
  if ((DAT_04565fa2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_IAKHIFOFLGO__);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_13795/*"TimeDaysShort"*/);
    FUN_01bab630(&StringLiteral_13800/*"TimeMinuteShort"*/);
    FUN_01bab630(&StringLiteral_4951/*"CurrentSeasonTitle"*/);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_13796/*"TimeHourShort"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565fa2 = 1;
  }
  __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (SFRequestSender_o *)0x0) {
    iVar7 = SFRequestSender__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
    FJDJFJNEEJI = StringLiteral_2086/*":"*/;
    pSVar10 = StringLiteral_167/*" "*/;
    lVar11 = (__this->fields).PBACPHGLOFJ;
    pNVar17 = (__this->fields)._titleLabel;
    lVar5 = lVar11 - iVar7;
    if (lVar5 == 0 || lVar11 < iVar7) {
      lVar5 = 0;
    }
    LMOANJOPDGM = 0xe0f < lVar5;
    pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar11 = Method_System_Array_Empty<string>__;
    lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar12 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar12 = *(long *)(lVar11 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01b81620();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01b81620();
    }
    uVar6 = StringLiteral_4951/*"CurrentSeasonTitle"*/;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar13 = pIVar8->klass;
      uVar16 = **(undefined8 **)(lVar11 + 0xb8);
      uVar1._0_1_ = (pIVar13->_2).rank;
      uVar1._1_1_ = (pIVar13->_2).minimumAlignment;
      uVar14 = (ulong)uVar1;
      if (uVar14 != 0) {
        piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
            goto LAB_031741ac;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031741ac:
      str0 = (System_String_o *)(*pVVar9->methodPtr)(pIVar8,uVar6,uVar16,pVVar9->method);
      str1 = StringLiteral_167/*" "*/;
      iVar7 = lVar5;
      if (lVar5 < 0xe10) {
        JONDDIMGADB = (System_String_o *)0x0;
        FCLHIDDAHIJ = (System_String_o *)0x0;
        PFCGLNFFKFG = (System_String_o *)0x0;
        LMOANJOPDGM = true;
        FCCHAOBFMLN = true;
      }
      else {
        pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar11 = Method_System_Array_Empty<string>__;
        lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar12 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar12 = *(long *)(lVar11 + 0x38);
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01b81620();
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01b81620();
        }
        uVar6 = StringLiteral_13795/*"TimeDaysShort"*/;
        if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03174658;
        pIVar13 = pIVar8->klass;
        uVar16 = **(undefined8 **)(lVar11 + 0xb8);
        uVar2._0_1_ = (pIVar13->_2).rank;
        uVar2._1_1_ = (pIVar13->_2).minimumAlignment;
        uVar14 = (ulong)uVar2;
        if (uVar14 != 0) {
          piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
              goto LAB_031742e0;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031742e0:
        PFCGLNFFKFG = (System_String_o *)(*pVVar9->methodPtr)(pIVar8,uVar6,uVar16,pVVar9->method);
        if (lVar5 < 0xe10) {
          JONDDIMGADB = (System_String_o *)0x0;
          FCLHIDDAHIJ = (System_String_o *)0x0;
          FJDJFJNEEJI = (System_String_o *)0x0;
          FCCHAOBFMLN = false;
          str1 = (System_String_o *)0x0;
          str0 = (System_String_o *)0x0;
          pNVar17 = (Nekki_SF2_GUI_LabelAlias_o *)0x0;
          LMOANJOPDGM = true;
          iVar7 = 0;
        }
        else {
          pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar11 = Method_System_Array_Empty<string>__;
          lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
          if (lVar12 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<string>__);
            lVar12 = *(long *)(lVar11 + 0x38);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01b81620();
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01b81620();
          }
          uVar6 = StringLiteral_13796/*"TimeHourShort"*/;
          if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03174658;
          pIVar13 = pIVar8->klass;
          uVar16 = **(undefined8 **)(lVar11 + 0xb8);
          uVar3._0_1_ = (pIVar13->_2).rank;
          uVar3._1_1_ = (pIVar13->_2).minimumAlignment;
          uVar14 = (ulong)uVar3;
          if (uVar14 != 0) {
            piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
                goto LAB_031743fc;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031743fc:
          JONDDIMGADB = (System_String_o *)(*pVVar9->methodPtr)(pIVar8,uVar6,uVar16,pVVar9->method);
          if (lVar5 < 0xe10) {
            FCLHIDDAHIJ = (System_String_o *)0x0;
            LMOANJOPDGM = false;
            FJDJFJNEEJI = (System_String_o *)0x0;
            FCCHAOBFMLN = false;
            str1 = (System_String_o *)0x0;
            str0 = (System_String_o *)0x0;
            pNVar17 = (Nekki_SF2_GUI_LabelAlias_o *)0x0;
            iVar7 = 0;
          }
          else {
            pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            lVar11 = Method_System_Array_Empty<string>__;
            lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
            if (lVar12 == 0) {
              FUN_01b8167c(Method_System_Array_Empty<string>__);
              lVar12 = *(long *)(lVar11 + 0x38);
            }
            lVar12 = *(long *)(lVar12 + 0x10);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01b81620();
            }
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ba7564();
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_01b81620();
            }
            uVar6 = StringLiteral_13800/*"TimeMinuteShort"*/;
            if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03174658;
            pIVar13 = pIVar8->klass;
            uVar16 = **(undefined8 **)(lVar11 + 0xb8);
            uVar4._0_1_ = (pIVar13->_2).rank;
            uVar4._1_1_ = (pIVar13->_2).minimumAlignment;
            uVar14 = (ulong)uVar4;
            if (uVar14 != 0) {
              piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
                  goto LAB_03174518;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03174518:
            FCLHIDDAHIJ = (System_String_o *)
                          (*pVVar9->methodPtr)(pIVar8,uVar6,uVar16,pVVar9->method);
            FJDJFJNEEJI = pSVar10;
            FCCHAOBFMLN = LMOANJOPDGM;
          }
        }
      }
      pSVar10 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                          (iVar7,FCCHAOBFMLN,FCCHAOBFMLN,0xe0f < lVar5,0x1517f < lVar5,false,false,
                           FJDJFJNEEJI,PFCGLNFFKFG,LMOANJOPDGM,LMOANJOPDGM,LMOANJOPDGM,
                           0x1517f < lVar5,false,JONDDIMGADB,FCLHIDDAHIJ,StringLiteral_1/*""*/,2,
                           (MethodInfo *)0x0);
      pSVar10 = System_String__Concat(str0,str1,pSVar10,(MethodInfo *)0x0);
      if (pNVar17 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar17->klass->vtable)._75_set_text.methodPtr)
                  (pNVar17,pSVar10,(pNVar17->klass->vtable)._75_set_text.method);
        if (lVar5 == 0) {
          CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
LAB_03174658:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CBMBNAKAFMH()  [RVA 0x307465C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$CBMBNAKAFMH @ RVA 0x307465C

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__CBMBNAKAFMH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *pSVar6;
  long lVar7;
  Il2CppClass *pIVar8;
  BHEDGAKGKPO_StaticFields *pBVar9;
  ulong uVar10;
  int32_t *piVar11;
  Nekki_SF2_GUI_LabelAlias_o *pNVar12;
  undefined8 uVar13;
  
  if ((DAT_04565f95 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_4951/*"CurrentSeasonTitle"*/);
    FUN_01bab630(&StringLiteral_8341/*"LastSeasonTitle"*/);
    FUN_01bab630(&StringLiteral_253/*" 22d 22h"*/);
    DAT_04565f95 = 1;
  }
  pNVar12 = (__this->fields)._titleLabel;
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar4 = Method_System_Array_Empty<string>__;
  lVar7 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar7 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar7 = *(long *)(lVar4 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  uVar2 = StringLiteral_4951/*"CurrentSeasonTitle"*/;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar8 = pIVar3->klass;
    uVar13 = **(undefined8 **)(lVar4 + 0xb8);
    uVar1._0_1_ = (pIVar8->_2).rank;
    uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar8->vtable + (*piVar11 + 0xc);
          goto LAB_031747b8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031747b8:
    pSVar6 = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar2,uVar13,pVVar5->method);
    pSVar6 = System_String__Concat(pSVar6,StringLiteral_253/*" 22d 22h"*/,(MethodInfo *)0x0);
    if (pNVar12 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar12->klass->vtable)._75_set_text.methodPtr)
                (pNVar12,pSVar6,(pNVar12->klass->vtable)._75_set_text.method);
      pNVar12 = (__this->fields)._prevSeasonLabel;
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pNVar12 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pBVar9 = BHEDGAKGKPO_TypeInfo->static_fields;
        (*(pNVar12->klass->vtable)._23_set_color.methodPtr)
                  ((pBVar9->FHIAKPJBBCB).fields.r,(pBVar9->FHIAKPJBBCB).fields.g,
                   (pBVar9->FHIAKPJBBCB).fields.b,(pBVar9->FHIAKPJBBCB).fields.a,pNVar12,
                   (pNVar12->klass->vtable)._23_set_color.method);
        pNVar12 = (__this->fields)._prevSeasonLabel;
        if (pNVar12 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar12,StringLiteral_8341/*"LastSeasonTitle"*/,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x3074868]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$GLJGIJNALCA @ RVA 0x3074868

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void PNHAKBHMLMO()  [RVA 0x307486C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$PNHAKBHMLMO @ RVA 0x307486C

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__PNHAKBHMLMO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o **ppNVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *pNVar5;
  UnityEngine_Vector2_o value;
  
  if ((DAT_04565f96 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<PreviousSeasonViewController>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10452/*"PreviousSeasonViewController"*/);
    DAT_04565f96 = 1;
  }
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).ONCOODOJIIH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1;
    if (!bVar2) {
LAB_03174a38:
      Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__OIAOIPFOCMD(__this,method_00);
      return;
    }
    __this_01 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_01,StringLiteral_10452/*"PreviousSeasonViewController"*/,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).super.super._content;
      if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar3,parent,false,(MethodInfo *)0x0);
        __this_02 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              (__this_01,Method_UnityEngine_GameObject_AddComponent<RectTransform>__
                              );
        pUVar4 = (__this->fields).super.super._content;
        if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
           ((__this_03 = (UnityEngine_RectTransform_o *)
                         UnityEngine_GameObject__GetComponent<object>
                                   (pUVar4,
                                    Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
            __this_03 != (UnityEngine_RectTransform_o *)0x0 &&
            (value = UnityEngine_RectTransform__get_sizeDelta(__this_03,(MethodInfo *)0x0),
            __this_02 != (UnityEngine_RectTransform_o *)0x0)))) {
          ppNVar1 = &(__this->fields).ONCOODOJIIH;
          UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
          pNVar5 = (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)
                   UnityEngine_GameObject__AddComponent<object>
                             (__this_01,
                              Method_UnityEngine_GameObject_AddComponent<PreviousSeasonViewController>__
                             );
          *ppNVar1 = pNVar5;
          thunk_FUN_01c20e04(ppNVar1,pNVar5);
          pNVar5 = *ppNVar1;
          if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) {
            pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Init
                      (pNVar5,__this,pUVar3,(__this->fields)._clansHint,
                       (SFButton_o *)(__this->fields)._btnTopClans,
                       (SFButton_o *)(__this->fields)._btnTopPlayers,
                       (__this->fields)._loadingMessage,(__this->fields)._loadingCircle,
                       (__this->fields)._scroll,(__this->fields)._cellPlayerPrefab,
                       (__this->fields)._cellClanPrefab,(MethodInfo *)0x0);
            method_00 = extraout_x1_00;
            goto LAB_03174a38;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JIIJKJFBMJM()  [RVA 0x3074CF0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$JIIJKJFBMJM @ RVA 0x3074CF0

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__JIIJKJFBMJM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__PNHAKBHMLMO(__this,method);
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  return;
}


// ===== public void SwitchToCurSeasonLeaderboard()  [RVA 0x3074D08]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$SwitchToCurSeasonLeaderboard @ RVA 0x3074D08

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__SwitchToCurSeasonLeaderboard
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o **ppNVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *pNVar5;
  UnityEngine_Vector2_o value;
  
  if ((DAT_04565f99 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CurrentSeasonViewController>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_4952/*"CurrentSeasonViewController"*/);
    DAT_04565f99 = 1;
  }
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).MDFMCFCMEEB;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar5,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if (bVar2) {
LAB_03174ed4:
      Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__JJADPCJIMOJ(__this,method_00);
      return;
    }
    __this_01 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_01,StringLiteral_4952/*"CurrentSeasonViewController"*/,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).super.super._content;
      if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar3,parent,false,(MethodInfo *)0x0);
        __this_02 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              (__this_01,Method_UnityEngine_GameObject_AddComponent<RectTransform>__
                              );
        pUVar4 = (__this->fields).super.super._content;
        if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
           ((__this_03 = (UnityEngine_RectTransform_o *)
                         UnityEngine_GameObject__GetComponent<object>
                                   (pUVar4,
                                    Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
            __this_03 != (UnityEngine_RectTransform_o *)0x0 &&
            (value = UnityEngine_RectTransform__get_sizeDelta(__this_03,(MethodInfo *)0x0),
            __this_02 != (UnityEngine_RectTransform_o *)0x0)))) {
          ppNVar1 = &(__this->fields).MDFMCFCMEEB;
          UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
          pNVar5 = (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)
                   UnityEngine_GameObject__AddComponent<object>
                             (__this_01,
                              Method_UnityEngine_GameObject_AddComponent<CurrentSeasonViewController>__
                             );
          *ppNVar1 = pNVar5;
          thunk_FUN_01c20e04(ppNVar1,pNVar5);
          pNVar5 = *ppNVar1;
          if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) {
            pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Init
                      (pNVar5,__this,pUVar3,(__this->fields)._clansHint,
                       (SFButton_o *)(__this->fields)._btnTopClans,
                       (SFButton_o *)(__this->fields)._btnTopPlayers,
                       (__this->fields)._loadingMessage,(__this->fields)._loadingCircle,
                       (__this->fields)._scroll,(__this->fields)._cellPlayerPrefab,
                       (__this->fields)._cellClanPrefab,(MethodInfo *)0x0);
            method_00 = extraout_x1_00;
            goto LAB_03174ed4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CFPJAFNAAME()  [RVA 0x3074EF0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$CFPJAFNAAME @ RVA 0x3074EF0

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__CFPJAFNAAME
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  
  if ((DAT_04565f97 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_JIIJKJFBMJM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_PCAFDGPFDMF__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10978/*"RaidTop100Dialog.tab_top100_active"*/);
    FUN_01bab630(&StringLiteral_10973/*"RaidTop100Dialog.arrow_inactive"*/);
    FUN_01bab630(&StringLiteral_10974/*"RaidTop100Dialog.arrow_pressed"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_04565f97 = 1;
  }
  (*(__this->klass->vtable)._27_LCGFJKFJKJK.methodPtr)
            (__this,2,(__this->klass->vtable)._27_LCGFJKFJKJK.method);
  pNVar1 = (__this->fields)._btnPrevSeasonLeaderboard;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10974/*"RaidTop100Dialog.arrow_pressed"*/,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._btnPrevSeasonLeaderboard;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10973/*"RaidTop100Dialog.arrow_inactive"*/,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._btnPrevSeasonLeaderboard;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar2,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._btnCurSeasonLeaderboard;
          if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                      (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10974/*"RaidTop100Dialog.arrow_pressed"*/,(MethodInfo *)0x0);
            pNVar1 = (__this->fields)._btnCurSeasonLeaderboard;
            if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
              Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                        (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10973/*"RaidTop100Dialog.arrow_inactive"*/,(MethodInfo *)0x0);
              pNVar1 = (__this->fields)._btnCurSeasonLeaderboard;
              if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick;
                pUVar2 = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar2,(MethodInfo *)0x0);
                  pNVar1 = (__this->fields)._btnTopPlayers;
                  if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                              (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10978/*"RaidTop100Dialog.tab_top100_active"*/,(MethodInfo *)0x0);
                    pNVar1 = (__this->fields)._btnTopClans;
                    if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10978/*"RaidTop100Dialog.tab_top100_active"*/,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x30750D8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$OnDestroy @ RVA 0x30750D8

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565f98 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_IAKHIFOFLGO__);
    DAT_04565f98 = 1;
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


// ===== private void HHKOPHFBCOM()  [RVA 0x3074D0C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$HHKOPHFBCOM @ RVA 0x3074D0C

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__HHKOPHFBCOM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o **ppNVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *pNVar5;
  UnityEngine_Vector2_o value;
  
  if ((DAT_04565f99 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CurrentSeasonViewController>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_4952/*"CurrentSeasonViewController"*/);
    DAT_04565f99 = 1;
  }
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).MDFMCFCMEEB;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar5,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if (bVar2) {
LAB_03174ed4:
      Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__JJADPCJIMOJ(__this,method_00);
      return;
    }
    __this_01 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_01,StringLiteral_4952/*"CurrentSeasonViewController"*/,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).super.super._content;
      if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar3,parent,false,(MethodInfo *)0x0);
        __this_02 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              (__this_01,Method_UnityEngine_GameObject_AddComponent<RectTransform>__
                              );
        pUVar4 = (__this->fields).super.super._content;
        if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
           ((__this_03 = (UnityEngine_RectTransform_o *)
                         UnityEngine_GameObject__GetComponent<object>
                                   (pUVar4,
                                    Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
            __this_03 != (UnityEngine_RectTransform_o *)0x0 &&
            (value = UnityEngine_RectTransform__get_sizeDelta(__this_03,(MethodInfo *)0x0),
            __this_02 != (UnityEngine_RectTransform_o *)0x0)))) {
          ppNVar1 = &(__this->fields).MDFMCFCMEEB;
          UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
          pNVar5 = (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)
                   UnityEngine_GameObject__AddComponent<object>
                             (__this_01,
                              Method_UnityEngine_GameObject_AddComponent<CurrentSeasonViewController>__
                             );
          *ppNVar1 = pNVar5;
          thunk_FUN_01c20e04(ppNVar1,pNVar5);
          pNVar5 = *ppNVar1;
          if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) {
            pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Init
                      (pNVar5,__this,pUVar3,(__this->fields)._clansHint,
                       (SFButton_o *)(__this->fields)._btnTopClans,
                       (SFButton_o *)(__this->fields)._btnTopPlayers,
                       (__this->fields)._loadingMessage,(__this->fields)._loadingCircle,
                       (__this->fields)._scroll,(__this->fields)._cellPlayerPrefab,
                       (__this->fields)._cellClanPrefab,(MethodInfo *)0x0);
            method_00 = extraout_x1_00;
            goto LAB_03174ed4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x3075478]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$EJHAPHAHMHG @ RVA 0x3075478

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,
               System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  return;
}


// ===== public void SetArrowBtnsTouchEnable(bool CJNHFNHJHPE)  [RVA 0x307547C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$SetArrowBtnsTouchEnable @ RVA 0x307547C

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__SetArrowBtnsTouchEnable
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Roster_o *__this_00;
  PlayerData_o *pEVar2;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar3;
  
  if ((DAT_04565f9a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565f9a = 1;
  }
  (__this->fields).AJCDHIBILLO = CJNHFNHJHPE;
  if (CJNHFNHJHPE) {
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
    if (__this_00 == (Roster_o *)0x0) goto LAB_031755c4;
    bVar1 = Roster__HPDCJKNJELO(__this_00,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._btnCurSeasonLeaderboard;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_031755c4;
    if (bVar1) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pNVar3,false,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._btnPrevSeasonLeaderboard;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if ((pEVar2 == (PlayerData_o *)0x0) || (pNVar3 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0))
      goto LAB_031755c4;
      bVar1 = 0 < (pEVar2->fields)._DHPJJLCDAJD_k__BackingField;
      goto LAB_031755b0;
    }
    bVar1 = true;
  }
  else {
    pNVar3 = (__this->fields)._btnCurSeasonLeaderboard;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_031755c4;
    bVar1 = false;
  }
  UnityEngine_UI_Selectable__set_interactable
            ((UnityEngine_UI_Selectable_o *)pNVar3,bVar1,(MethodInfo *)0x0);
  pNVar3 = (__this->fields)._btnPrevSeasonLeaderboard;
  if (pNVar3 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    bVar1 = false;
LAB_031755b0:
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar3,bVar1,(MethodInfo *)0x0);
    return;
  }
LAB_031755c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CPMHIEJENLD(int IMCJLJNEMKH)  [RVA 0x30755C8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$CPMHIEJENLD @ RVA 0x30755C8

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__CPMHIEJENLD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,int32_t IMCJLJNEMKH,
               MethodInfo *method)

{
  SFRequestSender_o *__this_00;
  int64_t iVar1;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  
  if ((DAT_04565f9b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_IAKHIFOFLGO__);
    DAT_04565f9b = 1;
  }
  if (0 < IMCJLJNEMKH) {
    __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_00 != (SFRequestSender_o *)0x0) {
      iVar1 = SFRequestSender__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
      (__this->fields).PBACPHGLOFJ = iVar1 + (ulong)(uint)IMCJLJNEMKH;
      CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__KKHNLLICFOO(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x30756B0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$IGDDKJJMDLP @ RVA 0x30756B0

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x30756B4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$.ctor @ RVA 0x30756B4

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565f9c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_float>_TypeInfo);
    DAT_04565f9c = 1;
    method = extraout_x1;
  }
  (__this->fields).AJCDHIBILLO = true;
  __this_00 = (System_Collections_Generic_Dictionary_string__float__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_float>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
  (__this->fields).OLFKGLNEJAA = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).OLFKGLNEJAA,__this_00);
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void PCAFDGPFDMF()  [RVA 0x3075744]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$PCAFDGPFDMF @ RVA 0x3075744

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__PCAFDGPFDMF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__HHKOPHFBCOM(__this,method);
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  return;
}


// ===== public bool IsSelected(BANPLPOPIGI KIFIMBGOPFG)  [RVA 0x307575C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$IsSelected @ RVA 0x307575C

bool Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__IsSelected
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,
               BANPLPOPIGI_o *KIFIMBGOPFG,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *pNVar3;
  
  if ((DAT_04565f9d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f9d = 1;
  }
  pNVar3 = (__this->fields).MDHGKKKIJIM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  pNVar3 = (__this->fields).MDHGKKKIJIM;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) {
    iVar2 = Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__GetActiveBoard
                      (pNVar3,(MethodInfo *)0x0);
    if (iVar2 == 2) {
      return false;
    }
    pNVar3 = (__this->fields).MDHGKKKIJIM;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) {
      return (pNVar3->fields).PlayersLeaderboardSource == KIFIMBGOPFG;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnLoadedScrollItems(string NKIHNHOLJND)  [RVA 0x3075808]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$OnLoadedScrollItems @ RVA 0x3075808

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__OnLoadedScrollItems
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,
               System_String_o *NKIHNHOLJND,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  float LDMFIPMKKBA;
  
  if ((DAT_04565f9e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_get_Item__);
    DAT_04565f9e = 1;
  }
  ppSVar1 = &(__this->fields).BKLFHONPJGH;
  (__this->fields).BKLFHONPJGH = NKIHNHOLJND;
  thunk_FUN_01c20e04(ppSVar1,NKIHNHOLJND);
  pSVar3 = (__this->fields).OLFKGLNEJAA;
  if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object,_float>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                       (Il2CppObject *)*ppSVar1,
                       Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
    if (!bVar2) {
      return;
    }
    pSVar3 = (__this->fields).OLFKGLNEJAA;
    if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      __this_00 = (__this->fields)._scroll;
      LDMFIPMKKBA = System_Collections_Generic_Dictionary<object,_float>__get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                               (Il2CppObject *)*ppSVar1,
                               Method_System_Collections_Generic_Dictionary<string,_float>_get_Item__
                              );
      if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__ScrollToOrth(__this_00,LDMFIPMKKBA,0.0,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x30758C8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$GKPJMHOFIOO @ RVA 0x30758C8

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void Update()  [RVA 0x30758CC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$Update @ RVA 0x30758CC

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__Update
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  System_String_o *key;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  float value;
  
  if ((DAT_04565f9f & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_set_Item__);
    DAT_04565f9f = 1;
  }
  pNVar3 = (__this->fields)._scroll;
  if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      (*(System_Collections_Generic_List_T__o **)&(pNVar3->fields)._snapEase,
                       Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    if ((bVar1) ||
       (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).BKLFHONPJGH,(MethodInfo *)0x0), bVar1)) {
      return;
    }
    pSVar2 = (__this->fields).OLFKGLNEJAA;
    if (pSVar2 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<object,_float>__ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         (Il2CppObject *)(__this->fields).BKLFHONPJGH,
                         Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
      pNVar3 = (__this->fields)._scroll;
      if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        key = (__this->fields).BKLFHONPJGH;
        pSVar2 = (__this->fields).OLFKGLNEJAA;
        value = Nekki_SF2_GUI_SimpleScroll__GetScrollY(pNVar3,(MethodInfo *)0x0);
        if (pSVar2 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          if (bVar1) {
            System_Collections_Generic_Dictionary<object,_float>__set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                       (Il2CppObject *)key,value,
                       Method_System_Collections_Generic_Dictionary<string,_float>_set_Item__);
            return;
          }
          System_Collections_Generic_Dictionary<object,_float>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                     (Il2CppObject *)key,value,
                     Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IsSelected(PBHDPJBLDLG PIMBGGLBFAA)  [RVA 0x30759DC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$IsSelected @ RVA 0x30759DC

bool Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__IsSelected
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,
               PBHDPJBLDLG_o *PIMBGGLBFAA,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *pNVar3;
  
  if ((DAT_04565fa0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565fa0 = 1;
  }
  pNVar3 = (__this->fields).MDHGKKKIJIM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  pNVar3 = (__this->fields).MDHGKKKIJIM;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) {
    iVar2 = Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__GetActiveBoard
                      (pNVar3,(MethodInfo *)0x0);
    if (iVar2 == 1) {
      return false;
    }
    pNVar3 = (__this->fields).MDHGKKKIJIM;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) {
      return (pNVar3->fields).ClansLeaderboardSource == PIMBGGLBFAA;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool FKGFKNKJAHH()  [RVA 0x3075A88]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$FKGFKNKJAHH @ RVA 0x3075A88

bool Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__FKGFKNKJAHH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  NFFDIPBFJHP_o *pNVar1;
  SFRequestSender_o *__this_00;
  MethodInfo *extraout_x1;
  GLPEFEEGCPM_o *pGVar2;
  FADHMEJJCPO_o *pFVar3;
  PGICCMFLDPI_o *pPVar4;
  int64_t iVar5;
  
  if ((DAT_04565fa1 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565fa1 = 1;
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
      iVar5 = (pPVar4->fields).GDKPGIBMFPA;
      __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((__this_00 != (SFRequestSender_o *)0x0) &&
         (pPVar4 = SFRequestSender__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0),
         pPVar4 != (PGICCMFLDPI_o *)0x0)) {
        return (int)iVar5 - (int)(pPVar4->fields).GDKPGIBMFPA < 1000;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KKHNLLICFOO()  [RVA 0x3073FC0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$KKHNLLICFOO @ RVA 0x3073FC0

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__KKHNLLICFOO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  SFRequestSender_o *__this_00;
  int64_t iVar7;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *str0;
  System_String_o *PFCGLNFFKFG;
  System_String_o *JONDDIMGADB;
  System_String_o *FCLHIDDAHIJ;
  System_String_o *pSVar10;
  System_Action_o *CJNHFNHJHPE;
  bool FCCHAOBFMLN;
  long lVar11;
  long lVar12;
  Il2CppClass *pIVar13;
  ulong uVar14;
  int32_t *piVar15;
  bool LMOANJOPDGM;
  undefined8 uVar16;
  System_String_o *FJDJFJNEEJI;
  System_String_o *str1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar17;
  
  if ((DAT_04565fa2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_IAKHIFOFLGO__);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_13795/*"TimeDaysShort"*/);
    FUN_01bab630(&StringLiteral_13800/*"TimeMinuteShort"*/);
    FUN_01bab630(&StringLiteral_4951/*"CurrentSeasonTitle"*/);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_13796/*"TimeHourShort"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565fa2 = 1;
  }
  __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (SFRequestSender_o *)0x0) {
    iVar7 = SFRequestSender__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
    FJDJFJNEEJI = StringLiteral_2086/*":"*/;
    pSVar10 = StringLiteral_167/*" "*/;
    lVar11 = (__this->fields).PBACPHGLOFJ;
    pNVar17 = (__this->fields)._titleLabel;
    lVar5 = lVar11 - iVar7;
    if (lVar5 == 0 || lVar11 < iVar7) {
      lVar5 = 0;
    }
    LMOANJOPDGM = 0xe0f < lVar5;
    pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar11 = Method_System_Array_Empty<string>__;
    lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar12 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar12 = *(long *)(lVar11 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01b81620();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01b81620();
    }
    uVar6 = StringLiteral_4951/*"CurrentSeasonTitle"*/;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar13 = pIVar8->klass;
      uVar16 = **(undefined8 **)(lVar11 + 0xb8);
      uVar1._0_1_ = (pIVar13->_2).rank;
      uVar1._1_1_ = (pIVar13->_2).minimumAlignment;
      uVar14 = (ulong)uVar1;
      if (uVar14 != 0) {
        piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
            goto LAB_031741ac;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031741ac:
      str0 = (System_String_o *)(*pVVar9->methodPtr)(pIVar8,uVar6,uVar16,pVVar9->method);
      str1 = StringLiteral_167/*" "*/;
      iVar7 = lVar5;
      if (lVar5 < 0xe10) {
        JONDDIMGADB = (System_String_o *)0x0;
        FCLHIDDAHIJ = (System_String_o *)0x0;
        PFCGLNFFKFG = (System_String_o *)0x0;
        LMOANJOPDGM = true;
        FCCHAOBFMLN = true;
      }
      else {
        pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar11 = Method_System_Array_Empty<string>__;
        lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar12 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar12 = *(long *)(lVar11 + 0x38);
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01b81620();
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01b81620();
        }
        uVar6 = StringLiteral_13795/*"TimeDaysShort"*/;
        if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03174658;
        pIVar13 = pIVar8->klass;
        uVar16 = **(undefined8 **)(lVar11 + 0xb8);
        uVar2._0_1_ = (pIVar13->_2).rank;
        uVar2._1_1_ = (pIVar13->_2).minimumAlignment;
        uVar14 = (ulong)uVar2;
        if (uVar14 != 0) {
          piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
              goto LAB_031742e0;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031742e0:
        PFCGLNFFKFG = (System_String_o *)(*pVVar9->methodPtr)(pIVar8,uVar6,uVar16,pVVar9->method);
        if (lVar5 < 0xe10) {
          JONDDIMGADB = (System_String_o *)0x0;
          FCLHIDDAHIJ = (System_String_o *)0x0;
          FJDJFJNEEJI = (System_String_o *)0x0;
          FCCHAOBFMLN = false;
          str1 = (System_String_o *)0x0;
          str0 = (System_String_o *)0x0;
          pNVar17 = (Nekki_SF2_GUI_LabelAlias_o *)0x0;
          LMOANJOPDGM = true;
          iVar7 = 0;
        }
        else {
          pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar11 = Method_System_Array_Empty<string>__;
          lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
          if (lVar12 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<string>__);
            lVar12 = *(long *)(lVar11 + 0x38);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01b81620();
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01b81620();
          }
          uVar6 = StringLiteral_13796/*"TimeHourShort"*/;
          if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03174658;
          pIVar13 = pIVar8->klass;
          uVar16 = **(undefined8 **)(lVar11 + 0xb8);
          uVar3._0_1_ = (pIVar13->_2).rank;
          uVar3._1_1_ = (pIVar13->_2).minimumAlignment;
          uVar14 = (ulong)uVar3;
          if (uVar14 != 0) {
            piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
                goto LAB_031743fc;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031743fc:
          JONDDIMGADB = (System_String_o *)(*pVVar9->methodPtr)(pIVar8,uVar6,uVar16,pVVar9->method);
          if (lVar5 < 0xe10) {
            FCLHIDDAHIJ = (System_String_o *)0x0;
            LMOANJOPDGM = false;
            FJDJFJNEEJI = (System_String_o *)0x0;
            FCCHAOBFMLN = false;
            str1 = (System_String_o *)0x0;
            str0 = (System_String_o *)0x0;
            pNVar17 = (Nekki_SF2_GUI_LabelAlias_o *)0x0;
            iVar7 = 0;
          }
          else {
            pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                               (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            lVar11 = Method_System_Array_Empty<string>__;
            lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
            if (lVar12 == 0) {
              FUN_01b8167c(Method_System_Array_Empty<string>__);
              lVar12 = *(long *)(lVar11 + 0x38);
            }
            lVar12 = *(long *)(lVar12 + 0x10);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01b81620();
            }
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ba7564();
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_01b81620();
            }
            uVar6 = StringLiteral_13800/*"TimeMinuteShort"*/;
            if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03174658;
            pIVar13 = pIVar8->klass;
            uVar16 = **(undefined8 **)(lVar11 + 0xb8);
            uVar4._0_1_ = (pIVar13->_2).rank;
            uVar4._1_1_ = (pIVar13->_2).minimumAlignment;
            uVar14 = (ulong)uVar4;
            if (uVar14 != 0) {
              piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
                  goto LAB_03174518;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03174518:
            FCLHIDDAHIJ = (System_String_o *)
                          (*pVVar9->methodPtr)(pIVar8,uVar6,uVar16,pVVar9->method);
            FJDJFJNEEJI = pSVar10;
            FCCHAOBFMLN = LMOANJOPDGM;
          }
        }
      }
      pSVar10 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                          (iVar7,FCCHAOBFMLN,FCCHAOBFMLN,0xe0f < lVar5,0x1517f < lVar5,false,false,
                           FJDJFJNEEJI,PFCGLNFFKFG,LMOANJOPDGM,LMOANJOPDGM,LMOANJOPDGM,
                           0x1517f < lVar5,false,JONDDIMGADB,FCLHIDDAHIJ,StringLiteral_1/*""*/,2,
                           (MethodInfo *)0x0);
      pSVar10 = System_String__Concat(str0,str1,pSVar10,(MethodInfo *)0x0);
      if (pNVar17 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar17->klass->vtable)._75_set_text.methodPtr)
                  (pNVar17,pSVar10,(pNVar17->klass->vtable)._75_set_text.method);
        if (lVar5 == 0) {
          CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
LAB_03174658:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OIAOIPFOCMD()  [RVA 0x3074A54]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$OIAOIPFOCMD @ RVA 0x3074A54

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__OIAOIPFOCMD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t ACCIHBHMFPN;
  Roster_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *pNVar4;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar5;
  
  if ((DAT_04565fa3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565fa3 = 1;
  }
  (__this->fields).MDHGKKKIJIM = (__this->fields).ONCOODOJIIH;
  thunk_FUN_01c20e04(&(__this->fields).MDHGKKKIJIM);
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
  if (__this_00 == (Roster_o *)0x0) goto LAB_03174cec;
  method_00 = (MethodInfo *)0x0;
  Roster__NACCJJHFBFK(__this_00,false,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__JFNBGKMIBPD(__this,true,method_00);
  pNVar4 = (__this->fields).MDFMCFCMEEB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields).MDFMCFCMEEB;
    if (pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03174cec;
    ACCIHBHMFPN = Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__GetActiveBoard
                            (pNVar4,(MethodInfo *)0x0);
  }
  else {
    ACCIHBHMFPN = 1;
  }
  pNVar4 = (__this->fields).MDFMCFCMEEB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields).MDFMCFCMEEB;
    if (pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03174cec;
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__StopAddingItems
              (pNVar4,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).MDFMCFCMEEB;
    if ((pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03174cec;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields).ONCOODOJIIH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields).ONCOODOJIIH;
    if (pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03174cec;
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__StopAddingItems
              (pNVar4,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).ONCOODOJIIH;
    if ((pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03174cec;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).ONCOODOJIIH;
    if (pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03174cec;
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__SetActiveBoard
              (pNVar4,ACCIHBHMFPN,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._prevSeasonLabel;
  if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._titleLabel;
    if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._btnCurSeasonLeaderboard;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar5,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar5 = (__this->fields)._btnCurSeasonLeaderboard;
        if (pNVar5 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_03174cec;
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pNVar5,(__this->fields).AJCDHIBILLO,
                   (MethodInfo *)0x0);
      }
      pNVar5 = (__this->fields)._btnPrevSeasonLeaderboard;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar5,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar5 = (__this->fields)._btnPrevSeasonLeaderboard;
      if (pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pNVar5,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03174cec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JFNBGKMIBPD(bool PCAIKIGGBMJ)  [RVA 0x3075B30]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$JFNBGKMIBPD @ RVA 0x3075B30

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__JFNBGKMIBPD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,bool PCAIKIGGBMJ,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pNVar1 = (__this->fields)._tsRollLeftBorder;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,PCAIKIGGBMJ,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._tsRollRightBorder;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,PCAIKIGGBMJ,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._tsRollTopLeftBorder;
      if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,PCAIKIGGBMJ,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._tsRollTopRightBorder;
        if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,PCAIKIGGBMJ,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._tsBottomTraceryLeft;
          if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,PCAIKIGGBMJ,(MethodInfo *)0x0);
            pNVar1 = (__this->fields)._tsBottomTraceryRight;
            if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,PCAIKIGGBMJ,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JJADPCJIMOJ()  [RVA 0x3075188]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$JJADPCJIMOJ @ RVA 0x3075188

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__JJADPCJIMOJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t ACCIHBHMFPN;
  Roster_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  PlayerData_o *pEVar4;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *pNVar5;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar6;
  
  if ((DAT_04565fa4 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565fa4 = 1;
  }
  (__this->fields).MDHGKKKIJIM = (__this->fields).MDFMCFCMEEB;
  thunk_FUN_01c20e04(&(__this->fields).MDHGKKKIJIM);
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
  if (__this_00 == (Roster_o *)0x0) goto LAB_03175474;
  method_00 = (MethodInfo *)0x0;
  Roster__NACCJJHFBFK(__this_00,true,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__JFNBGKMIBPD(__this,false,method_00);
  pNVar5 = (__this->fields).ONCOODOJIIH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).ONCOODOJIIH;
    if (pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03175474;
    ACCIHBHMFPN = Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__GetActiveBoard
                            (pNVar5,(MethodInfo *)0x0);
  }
  else {
    ACCIHBHMFPN = 1;
  }
  pNVar5 = (__this->fields).MDFMCFCMEEB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).MDFMCFCMEEB;
    if ((pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03175474;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).MDFMCFCMEEB;
    if (pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03175474;
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__StopAddingItems
              (pNVar5,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).MDFMCFCMEEB;
    if (pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03175474;
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__SetActiveBoard
              (pNVar5,ACCIHBHMFPN,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields).ONCOODOJIIH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).ONCOODOJIIH;
    if (pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0)
    goto LAB_03175474;
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__StopAddingItems
              (pNVar5,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).ONCOODOJIIH;
    if ((pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03175474;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._prevSeasonLabel;
  if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._titleLabel;
    if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pNVar6 = (__this->fields)._btnCurSeasonLeaderboard;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar6 = (__this->fields)._btnCurSeasonLeaderboard;
        if (pNVar6 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_03175474;
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pNVar6,false,(MethodInfo *)0x0);
      }
      pNVar6 = (__this->fields)._btnPrevSeasonLeaderboard;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar6 = (__this->fields)._btnPrevSeasonLeaderboard;
      if ((__this->fields).AJCDHIBILLO == false) {
        bVar1 = false;
      }
      else {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar4 == (PlayerData_o *)0x0) goto LAB_03175474;
        bVar1 = 0 < (pEVar4->fields)._DHPJJLCDAJD_k__BackingField;
      }
      if (pNVar6 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pNVar6,bVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03175474:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x3075C0C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$Init @ RVA 0x3075C0C

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  bool bVar1;
  int32_t IMCJLJNEMKH;
  Nekki_SF2_GUI_Scripts_LoadingCircle_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_02;
  Roster_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_04565fa5 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17301/*"compareCloseBtn"*/);
    FUN_01bab630(&StringLiteral_9299/*"NONE"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_3363/*"Background_Shadow"*/);
    DAT_04565fa5 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_1/*""*/,
             StringLiteral_9679/*"OK"*/,StringLiteral_17301/*"compareCloseBtn"*/,2,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._loadingCircle;
  (__this->fields).PBACPHGLOFJ = 0;
  if (__this_00 != (Nekki_SF2_GUI_Scripts_LoadingCircle_o *)0x0) {
    Nekki_SF2_GUI_Scripts_LoadingCircle__Play(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._loadingMessage;
    if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._scroll;
      if (__this_02 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__Init(__this_02,(MethodInfo *)0x0);
        (__this->fields).BKLFHONPJGH = StringLiteral_9299/*"NONE"*/;
        thunk_FUN_01c20e04(&(__this->fields).BKLFHONPJGH);
        pUVar2 = (__this->fields)._clansHint;
        if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar2 = UnityEngine_GameObject__get_gameObject(pUVar2,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          method_03 = (MethodInfo *)0x0;
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__CFPJAFNAAME(__this,method_00);
          Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__SetArrowBtnsTouchEnable
                    (__this,true,method_03);
          Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__CBMBNAKAFMH(__this,method_01);
          pNVar3 = (__this->fields)._additionalBg;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
          if (bVar1) {
            pNVar3 = (__this->fields)._additionalBg;
            if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03175e38;
            method_03 = (MethodInfo *)0x0;
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (pNVar3,StringLiteral_3363/*"Background_Shadow"*/,(MethodInfo *)0x0);
          }
          IMCJLJNEMKH = NFFDIPBFJHP__MHAFJGEAOIF((MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__CPMHIEJENLD
                    (__this,IMCJLJNEMKH,method_03);
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
          __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_03 != (Roster_o *)0x0) {
            bVar1 = Roster__HPDCJKNJELO(__this_03,(MethodInfo *)0x0);
            if (bVar1) {
              Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__HHKOPHFBCOM(__this,method_02);
              return;
            }
            Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__PNHAKBHMLMO(__this,method_02);
            return;
          }
        }
      }
    }
  }
LAB_03175e38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SwitchToPrevSeasonLeaderboard()  [RVA 0x3075E3C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$SwitchToPrevSeasonLeaderboard @ RVA 0x3075E3C

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__SwitchToPrevSeasonLeaderboard
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o **ppNVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *pNVar5;
  UnityEngine_Vector2_o value;
  
  if ((DAT_04565f96 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<PreviousSeasonViewController>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10452/*"PreviousSeasonViewController"*/);
    DAT_04565f96 = 1;
  }
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).ONCOODOJIIH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1;
    if (!bVar2) {
LAB_03174a38:
      Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__OIAOIPFOCMD(__this,method_00);
      return;
    }
    __this_01 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_01,StringLiteral_10452/*"PreviousSeasonViewController"*/,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).super.super._content;
      if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar3,parent,false,(MethodInfo *)0x0);
        __this_02 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              (__this_01,Method_UnityEngine_GameObject_AddComponent<RectTransform>__
                              );
        pUVar4 = (__this->fields).super.super._content;
        if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
           ((__this_03 = (UnityEngine_RectTransform_o *)
                         UnityEngine_GameObject__GetComponent<object>
                                   (pUVar4,
                                    Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
            __this_03 != (UnityEngine_RectTransform_o *)0x0 &&
            (value = UnityEngine_RectTransform__get_sizeDelta(__this_03,(MethodInfo *)0x0),
            __this_02 != (UnityEngine_RectTransform_o *)0x0)))) {
          ppNVar1 = &(__this->fields).ONCOODOJIIH;
          UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
          pNVar5 = (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)
                   UnityEngine_GameObject__AddComponent<object>
                             (__this_01,
                              Method_UnityEngine_GameObject_AddComponent<PreviousSeasonViewController>__
                             );
          *ppNVar1 = pNVar5;
          thunk_FUN_01c20e04(ppNVar1,pNVar5);
          pNVar5 = *ppNVar1;
          if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0) {
            pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Init
                      (pNVar5,__this,pUVar3,(__this->fields)._clansHint,
                       (SFButton_o *)(__this->fields)._btnTopClans,
                       (SFButton_o *)(__this->fields)._btnTopPlayers,
                       (__this->fields)._loadingMessage,(__this->fields)._loadingCircle,
                       (__this->fields)._scroll,(__this->fields)._cellPlayerPrefab,
                       (__this->fields)._cellClanPrefab,(MethodInfo *)0x0);
            method_00 = extraout_x1_00;
            goto LAB_03174a38;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

