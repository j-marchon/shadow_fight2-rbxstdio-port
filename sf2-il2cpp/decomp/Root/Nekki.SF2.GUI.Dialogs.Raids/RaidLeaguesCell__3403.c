// TypeDefIndex 3403
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidLeaguesCell : BaseScrollItem
// Fields:
//   private static readonly Color AGNLHPGIGLA; // 0x0
//   protected ResolutionImage _playerPosProgress; // 0x130
//   protected SFButton _progressHintButton; // 0x138
//   private Transform _progressHintPos; // 0x140
//   private LabelAlias _points; // 0x148
//   private ResolutionImage _pointsImage; // 0x150
//   private SFButton _nameButton; // 0x158
//   private LabelAlias _nameText; // 0x160
//   private LabelAlias _playerPos; // 0x168
//   private ResolutionImage _bgPic; // 0x170
//   private LabelAlias _playerPosShiftLabel; // 0x178
//   private ResolutionImage _playerPosDiff; // 0x180
//   private SFButton _chestHintButton; // 0x188
//   private Transform _chestHintPos; // 0x190
//   private ResolutionImage _bgRewardPic; // 0x198
//   private LabelAlias _noRewardLabel; // 0x1A0
//   private List<LabelAlias> _danP1Labels; // 0x1A8
//   private GameObject _danP1Root; // 0x1B0
//   private ResolutionImage _chestImage; // 0x1B8
//   private float _heightWithPlate; // 0x1C0
//   private float _originHeight; // 0x1C4
//   private RaidLeaguesLeaderboard PBIDKAAGKLB; // 0x1C8
//   protected RaidLeaguesLeaderboard.OIMJFDFDMMM DICNIMJBGML; // 0x1D0
//   private JMDPBFOCHHP.CMLEEJPGHNC LLLCBLJMPIH; // 0x1D8
//   private JMDPBFOCHHP.HKDMLOKOJPH LDBJGDMBCKM; // 0x1E0
//   private RaidLeaguesCell.ADKMMPIABPM AOIPPGELMBD; // 0x1E8
//   private RaidLeaguesCell.HFMJMMPKHLI FNDKDKKMFGN; // 0x1EC

// ===== public void SetLeague(JMDPBFOCHHP.CMLEEJPGHNC BFFBKNCLLML)  [RVA 0x3552F58]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$SetLeague @ RVA 0x3552F58

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__SetLeague
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,
               JMDPBFOCHHP_CMLEEJPGHNC_o *BFFBKNCLLML,MethodInfo *method)

{
  (__this->fields).LLLCBLJMPIH = BFFBKNCLLML;
  thunk_FUN_01c20e04(&(__this->fields).LLLCBLJMPIH);
  return;
}


// ===== public void .ctor()  [RVA 0x3552F68]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$.ctor @ RVA 0x3552F68

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  (__this->fields)._heightWithPlate = 260.0;
  (__this->fields)._originHeight = 100.0;
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void SetLeaderboard(RaidLeaguesLeaderboard BBFLPBHMLFG)  [RVA 0x3552F7C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$SetLeaderboard @ RVA 0x3552F7C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__SetLeaderboard
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *BBFLPBHMLFG,MethodInfo *method)

{
  (__this->fields).PBIDKAAGKLB = BBFLPBHMLFG;
  thunk_FUN_01c20e04(&(__this->fields).PBIDKAAGKLB);
  return;
}


// ===== private static void .cctor()  [RVA 0x3552F8C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$.cctor @ RVA 0x3552F8C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_StaticFields *pNVar1;
  UnityEngine_Color_o UVar2;
  
  if ((DAT_04568b4f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo);
    DAT_04568b4f = 1;
  }
  UVar2 = CFBGPBCDAGA__NFFPCFGDOKG(0x24,0x26,0x14,0xff,(MethodInfo *)0x0);
  pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo->static_fields;
  (pNVar1->AGNLHPGIGLA).fields.r = UVar2.fields.r;
  (pNVar1->AGNLHPGIGLA).fields.g = UVar2.fields.g;
  (pNVar1->AGNLHPGIGLA).fields.b = UVar2.fields.b;
  (pNVar1->AGNLHPGIGLA).fields.a = UVar2.fields.a;
  return;
}


// ===== public virtual void UpdateView(RaidLeaguesLeaderboard.OIMJFDFDMMM HEHMPFLAEGE)  [RVA 0x3552FF0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$UpdateView @ RVA 0x3552FF0

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__UpdateView
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  JMDPBFOCHHP_HKDMLOKOJPH_o **ppJVar1;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *EDEHNHIHDDH;
  JMDPBFOCHHP_CMLEEJPGHNC_o *pJVar2;
  System_Collections_Generic_Dictionary_int__JMDPBFOCHHP_HKDMLOKOJPH__o *source_00;
  System_Collections_Generic_KeyValuePair_int__object__o SVar3;
  
  if ((DAT_04568b50 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__)
    ;
    FUN_01bab630(&System_Func<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>,_bool>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Value__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>_get_Count__
                );
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_DKIAKJIDBJE__);
    DAT_04568b50 = 1;
  }
  (__this->fields).DICNIMJBGML = HEHMPFLAEGE;
  thunk_FUN_01c20e04(&(__this->fields).DICNIMJBGML,HEHMPFLAEGE);
  ppJVar1 = &(__this->fields).LDBJGDMBCKM;
  (__this->fields).LDBJGDMBCKM = (JMDPBFOCHHP_HKDMLOKOJPH_o *)0x0;
  thunk_FUN_01c20e04(ppJVar1,0);
  if ((__this->fields).DICNIMJBGML !=
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    pJVar2 = (__this->fields).LLLCBLJMPIH;
    if (pJVar2 != (JMDPBFOCHHP_CMLEEJPGHNC_o *)0x0) {
      source_00 = (pJVar2->fields).MOJCKKMAKOE;
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(
                                    System_Func<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>,_bool>_TypeInfo
                                    );
      System_Func<KeyValuePair<int,_object>,_bool>___ctor();
      source = System_Linq_Enumerable__Where<KeyValuePair<int,_object>>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,predicate,
                          Method_System_Linq_Enumerable_Where<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                         );
      EDEHNHIHDDH = System_Linq_Enumerable__ToList<KeyValuePair<int,_object>>
                              (source,
                               Method_System_Linq_Enumerable_ToList<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                              );
      if (EDEHNHIHDDH == (System_Collections_Generic_List_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (0 < (EDEHNHIHDDH->fields)._size) {
        SVar3 = DJNBJHPDKDP__PHPELPFMOII<KeyValuePair<int,_object>>
                          ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                           Method_DJNBJHPDKDP_PHPELPFMOII<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                          );
        *ppJVar1 = (JMDPBFOCHHP_HKDMLOKOJPH_o *)SVar3.fields.value;
        thunk_FUN_01c20e04(ppJVar1);
      }
    }
    (*(__this->klass->vtable)._56_NOLAJAADKAL.methodPtr)
              (__this,(__this->klass->vtable)._56_NOLAJAADKAL.method);
                    /* WARNING: Could not recover jumptable at 0x03653154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._53_KHKLLNFCMME.methodPtr)
              (__this,(__this->klass->vtable)._53_KHKLLNFCMME.method);
    return;
  }
  return;
}


// ===== private void MAFILJNCIFB()  [RVA 0x355317C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$MAFILJNCIFB @ RVA 0x355317C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__MAFILJNCIFB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  SFButton_o *pSVar4;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04568b51 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_GOPCKGEKOHL__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568b51 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).DICNIMJBGML !=
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    pNVar3 = (__this->fields)._playerPosProgress;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields)._playerPosProgress;
      if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) {
LAB_036532d8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar4 = (__this->fields)._progressHintButton;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pSVar4 = (__this->fields)._progressHintButton;
          if ((pSVar4 != (SFButton_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
            pSVar4 = (__this->fields)._progressHintButton;
            if ((pSVar4 != (SFButton_o *)0x0) &&
               (__this_00 = (pSVar4->fields).super.m_OnClick,
               __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
              UnityEngine_Events_UnityEventBase__RemoveAllListeners
                        ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
              pSVar4 = (__this->fields)._progressHintButton;
              if (pSVar4 != (SFButton_o *)0x0) {
                __this_01 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
                call = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          goto LAB_036532d8;
        }
      }
    }
  }
  return;
}


// ===== public bool IsFake()  [RVA 0x355316C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$IsFake @ RVA 0x355316C

bool Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__IsFake
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  return (__this->fields).DICNIMJBGML ==
         (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0;
}


// ===== private bool DKIAKJIDBJE(KeyValuePair<int, JMDPBFOCHHP.HKDMLOKOJPH> OFEHIBKLHIB)  [RVA 0x35532DC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$DKIAKJIDBJE @ RVA 0x35532DC

bool Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__DKIAKJIDBJE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,
               System_Collections_Generic_KeyValuePair_int__JMDPBFOCHHP_HKDMLOKOJPH__o OFEHIBKLHIB,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *pNVar1;
  
  if ((DAT_04568b52 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Value__
                 ,OFEHIBKLHIB.fields._0_8_);
    DAT_04568b52 = 1;
  }
  pNVar1 = (__this->fields).DICNIMJBGML;
  if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) &&
     (OFEHIBKLHIB.fields.value != (JMDPBFOCHHP_HKDMLOKOJPH_o *)0x0)) {
    return (pNVar1->fields).FPNOLDAJPGK <= ((OFEHIBKLHIB.fields.value)->fields).OLGNPLGBNDJ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GOPCKGEKOHL()  [RVA 0x3553338]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$GOPCKGEKOHL @ RVA 0x3553338

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__GOPCKGEKOHL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  undefined8 *puVar2;
  System_String_o *KLEGNFLIAPC;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *pNVar3;
  
  if ((DAT_04568b53 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_8292/*"LBnewPlayer"*/);
    FUN_01bab630(&StringLiteral_8293/*"LBnotChanged"*/);
    FUN_01bab630(&StringLiteral_8291/*"LBimproved"*/);
    FUN_01bab630(&StringLiteral_10306/*"Player Progress hint alias was specified with error!"*/);
    FUN_01bab630(&StringLiteral_8290/*"LBfell"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568b53 = 1;
    method = extraout_x1;
  }
  KLEGNFLIAPC = StringLiteral_1/*""*/;
  if ((__this->fields).DICNIMJBGML ==
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    return;
  }
  switch((__this->fields).AOIPPGELMBD) {
  case 1:
    puVar2 = &StringLiteral_8291/*"LBimproved"*/;
    break;
  case 2:
    puVar2 = &StringLiteral_8290/*"LBfell"*/;
    break;
  case 3:
    puVar2 = &StringLiteral_8293/*"LBnotChanged"*/;
    break;
  case 4:
    puVar2 = &StringLiteral_8292/*"LBnewPlayer"*/;
    break;
  default:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_10306/*"Player Progress hint alias was specified with error!"*/,(MethodInfo *)0x0);
    goto LAB_0365345c;
  }
  KLEGNFLIAPC = (System_String_o *)*puVar2;
LAB_0365345c:
  pNVar3 = (__this->fields).PBIDKAAGKLB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).PBIDKAAGKLB;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__ShowPosHint
              (pNVar3,(__this->fields)._progressHintPos,KLEGNFLIAPC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FMFBGOKFDJE()  [RVA 0x35534B4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$FMFBGOKFDJE @ RVA 0x35534B4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__FMFBGOKFDJE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  undefined8 *puVar2;
  System_String_o *KLEGNFLIAPC;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *pNVar3;
  
  if ((DAT_04568b54 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_3570/*"BronzeChestHint"*/);
    FUN_01bab630(&StringLiteral_6563/*"ForthChestHint"*/);
    FUN_01bab630(&StringLiteral_12135/*"SilverChestHint"*/);
    FUN_01bab630(&StringLiteral_6870/*"GoldChestHint"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_4325/*"Chest reward hint alias was specified with error!"*/);
    DAT_04568b54 = 1;
    method = extraout_x1;
  }
  KLEGNFLIAPC = StringLiteral_1/*""*/;
  if ((__this->fields).DICNIMJBGML ==
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    return;
  }
  switch((__this->fields).FNDKDKKMFGN) {
  case 1:
    puVar2 = &StringLiteral_6870/*"GoldChestHint"*/;
    break;
  case 2:
    puVar2 = &StringLiteral_12135/*"SilverChestHint"*/;
    break;
  case 3:
    puVar2 = &StringLiteral_3570/*"BronzeChestHint"*/;
    break;
  case 4:
    puVar2 = &StringLiteral_6563/*"ForthChestHint"*/;
    break;
  default:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_4325/*"Chest reward hint alias was specified with error!"*/,(MethodInfo *)0x0);
    goto LAB_036535d8;
  }
  KLEGNFLIAPC = (System_String_o *)*puVar2;
LAB_036535d8:
  pNVar3 = (__this->fields).PBIDKAAGKLB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).PBIDKAAGKLB;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__ShowHint
              (pNVar3,(__this->fields)._chestHintPos,KLEGNFLIAPC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void KHKLLNFCMME()  [RVA 0x3553630]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$KHKLLNFCMME @ RVA 0x3553630

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__KHKLLNFCMME
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected virtual void FEAKOMACIGA()  [RVA 0x3553634]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$FEAKOMACIGA @ RVA 0x3553634

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__FEAKOMACIGA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *pNVar2;
  JMDPBFOCHHP_CMLEEJPGHNC_o *pJVar3;
  int iVar4;
  bool bVar5;
  UnityEngine_GameObject_o *pUVar6;
  System_String_o *pSVar7;
  int32_t MEHNIFHLHOM;
  MethodInfo *extraout_x1;
  int32_t IHEPHBIPLPM;
  int32_t iVar8;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar9;
  SFButton_o *pSVar10;
  Nekki_SF2_GUI_LabelAlias_o *pNVar11;
  System_String_o *pSVar12;
  System_String_o *str0;
  UnityEngine_Color_o UVar13;
  int local_34;
  
  if ((DAT_04568b55 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_21829/*"up"*/);
    FUN_01bab630(&StringLiteral_1144/*"+"*/);
    FUN_01bab630(&StringLiteral_17869/*"down"*/);
    FUN_01bab630(&StringLiteral_18063/*"equal"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_10928/*"RaidMisc.progress_"*/);
    DAT_04568b55 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).DICNIMJBGML !=
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    pNVar9 = (__this->fields)._playerPosProgress;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar5) {
      pNVar9 = (__this->fields)._playerPosProgress;
      if ((pNVar9 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
         pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653980;
      UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
      pSVar10 = (__this->fields)._progressHintButton;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pSVar10,(MethodInfo *)0x0);
      if (bVar5) {
        pSVar10 = (__this->fields)._progressHintButton;
        if ((pSVar10 == (SFButton_o *)0x0) ||
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pSVar10,(MethodInfo *)0x0),
           pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653980;
        UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
      }
    }
    pNVar11 = (__this->fields)._playerPosShiftLabel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar11,(MethodInfo *)0x0);
    if (bVar5) {
      pNVar11 = (__this->fields)._playerPosShiftLabel;
      if ((pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
         pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653980;
      UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
    }
    pSVar12 = StringLiteral_18063/*"equal"*/;
    pNVar2 = (__this->fields).DICNIMJBGML;
    pJVar3 = (__this->fields).LLLCBLJMPIH;
    if (pJVar3 == (JMDPBFOCHHP_CMLEEJPGHNC_o *)0x0) {
      if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0)
      goto LAB_03653980;
    }
    else {
      if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0)
      goto LAB_03653980;
      if ((pNVar2->fields).HHOPNIKFJNE < (pJVar3->fields).AKAGFOOMLFB) {
        return;
      }
    }
    iVar4 = (pNVar2->fields).LFBJGJJBBGE;
    if (iVar4 < 1) {
      return;
    }
    iVar4 = iVar4 - (pNVar2->fields).FPNOLDAJPGK;
    local_34 = iVar4;
    if ((pNVar2->fields).HHOPNIKFJNE < 0) {
      (__this->fields).AOIPPGELMBD = 3;
      pSVar12 = StringLiteral_18063/*"equal"*/;
    }
    else if (iVar4 == 0) {
      (__this->fields).AOIPPGELMBD = 3;
    }
    else {
      pNVar11 = (__this->fields)._playerPosShiftLabel;
      puVar1 = &StringLiteral_17869/*"down"*/;
      if (0 < iVar4) {
        puVar1 = &StringLiteral_21829/*"up"*/;
      }
      pSVar12 = (System_String_o *)*puVar1;
      iVar8 = 1;
      if (iVar4 < 1) {
        iVar8 = 2;
      }
      (__this->fields).AOIPPGELMBD = iVar8;
      if ((pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
         pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653980;
      UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
      pNVar11 = (__this->fields)._playerPosShiftLabel;
      puVar1 = &StringLiteral_1144/*"+"*/;
      if (iVar4 < 1) {
        puVar1 = &StringLiteral_1/*""*/;
      }
      str0 = (System_String_o *)*puVar1;
      pSVar7 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat(str0,pSVar7,(MethodInfo *)0x0);
      if (pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03653980;
      (*(pNVar11->klass->vtable)._75_set_text.methodPtr)
                (pNVar11,pSVar7,(pNVar11->klass->vtable)._75_set_text.method);
      pNVar11 = (__this->fields)._playerPosShiftLabel;
      if (local_34 < 0) {
        iVar8 = 0xbc;
        MEHNIFHLHOM = 0x3b;
        IHEPHBIPLPM = 0x2a;
      }
      else {
        iVar8 = 0x10;
        MEHNIFHLHOM = 0x45;
        IHEPHBIPLPM = 0x10;
      }
      UVar13 = CFBGPBCDAGA__NFFPCFGDOKG(iVar8,MEHNIFHLHOM,IHEPHBIPLPM,0xff,(MethodInfo *)0x0);
      if (pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03653980;
      (*(pNVar11->klass->vtable)._23_set_color.methodPtr)
                (UVar13.fields.r,UVar13.fields.g,UVar13.fields.b,UVar13.fields.a,pNVar11,
                 (pNVar11->klass->vtable)._23_set_color.method);
    }
    pNVar9 = (__this->fields)._playerPosProgress;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar5) {
      pNVar9 = (__this->fields)._playerPosProgress;
      pSVar12 = System_String__Concat(StringLiteral_10928/*"RaidMisc.progress_"*/,pSVar12,(MethodInfo *)0x0);
      if (pNVar9 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar9,pSVar12,(MethodInfo *)0x0);
        pNVar9 = (__this->fields)._playerPosProgress;
        if ((pNVar9 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
          return;
        }
      }
LAB_03653980:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public virtual void ReInit()  [RVA 0x3553984]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$ReInit @ RVA 0x3553984

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__ReInit
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  System_Action_o *pSVar1;
  SFButton_o *pSVar2;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568b56 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_KGNBJLLJHOC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_NPODNPOEIJD__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568b56 = 1;
  }
  pSVar2 = (__this->fields)._nameButton;
  (__this->fields).AOIPPGELMBD = 0;
  (__this->fields).FNDKDKKMFGN = 0;
  if ((pSVar2 != (SFButton_o *)0x0) &&
     (__this_00 = (pSVar2->fields).super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._nameButton;
    if (pSVar2 != (SFButton_o *)0x0) {
      __this_01 = (UnityEngine_Events_UnityEvent_o *)(pSVar2->fields).super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._points;
        pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_TextPic__remove_OnBoundsUpdated
                    ((Nekki_SF2_GUI_TextPic_o *)pNVar3,pSVar1,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._points;
          pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            Nekki_SF2_GUI_TextPic__add_OnBoundsUpdated
                      ((Nekki_SF2_GUI_TextPic_o *)pNVar3,pSVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GGJKMIMPIDJ()  [RVA 0x3553AC8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$GGJKMIMPIDJ @ RVA 0x3553AC8

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__GGJKMIMPIDJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *pNVar3;
  JMDPBFOCHHP_CMLEEJPGHNC_o *pJVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Color_o UVar10;
  
  if ((DAT_04568b57 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1223/*"-"*/);
    DAT_04568b57 = 1;
  }
  pJVar4 = (__this->fields).LLLCBLJMPIH;
  if (pJVar4 == (JMDPBFOCHHP_CMLEEJPGHNC_o *)0x0) {
    pNVar3 = (__this->fields).DICNIMJBGML;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
      pNVar5 = (__this->fields)._playerPos;
      pSVar1 = System_Int32__ToString((int)pNVar3 + 0x28,(MethodInfo *)0x0);
      if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03653ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                  (pNVar5,pSVar1,(pNVar5->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
  else {
    pNVar3 = (__this->fields).DICNIMJBGML;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
      pNVar5 = (__this->fields)._playerPos;
      if ((pNVar3->fields).HHOPNIKFJNE < (pJVar4->fields).AKAGFOOMLFB) {
        if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                    (pNVar5,StringLiteral_1223/*"-"*/,(pNVar5->klass->vtable)._75_set_text.method);
          pNVar5 = (__this->fields)._points;
          UVar10 = CFBGPBCDAGA__NFFPCFGDOKG(0x50,0x50,0x50,0xff,(MethodInfo *)0x0);
          fVar9 = UVar10.fields.a;
          fVar8 = UVar10.fields.b;
          fVar7 = UVar10.fields.g;
          fVar6 = UVar10.fields.r;
          if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            UNRECOVERED_JUMPTABLE = (pNVar5->klass->vtable)._23_set_color.methodPtr;
            pMVar2 = (pNVar5->klass->vtable)._23_set_color.method;
LAB_03653bf8:
                    /* WARNING: Could not recover jumptable at 0x03653c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(fVar6,fVar7,fVar8,fVar9,pNVar5,pMVar2);
            return;
          }
        }
      }
      else {
        pSVar1 = System_Int32__ToString((int)pNVar3 + 0x28,(MethodInfo *)0x0);
        if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                    (pNVar5,pSVar1,(pNVar5->klass->vtable)._75_set_text.method);
          pNVar5 = (__this->fields)._points;
          if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            fVar6 = 0.0;
            fVar7 = 0.0;
            fVar8 = 0.0;
            UNRECOVERED_JUMPTABLE = (pNVar5->klass->vtable)._23_set_color.methodPtr;
            pMVar2 = (pNVar5->klass->vtable)._23_set_color.method;
            fVar9 = 1.0;
            goto LAB_03653bf8;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void NOLAJAADKAL()  [RVA 0x3553C08]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$NOLAJAADKAL @ RVA 0x3553C08

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__NOLAJAADKAL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *pNVar6;
  SFButton_o *pSVar7;
  UnityEngine_Object_o *x;
  
  if ((DAT_04568b58 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12161/*"SkillsEnch.EnchantmentCriticalProtection"*/);
    DAT_04568b58 = 1;
  }
  if ((__this->fields).DICNIMJBGML ==
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    return;
  }
  pNVar2 = (__this->fields)._bgPic;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    pNVar6 = (__this->fields).DICNIMJBGML;
    if ((pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) &&
       (pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,(pNVar6->fields).HJPOJOPKEKI,(MethodInfo *)0x0);
      pNVar6 = (__this->fields).DICNIMJBGML;
      if ((pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) &&
         (pNVar4 = (__this->fields)._nameText, pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
        (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                  (pNVar4,(pNVar6->fields).JIJLBFGKNJK,(pNVar4->klass->vtable)._75_set_text.method);
        pNVar6 = (__this->fields).DICNIMJBGML;
        if (pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
          pNVar4 = (__this->fields)._points;
          CJNHFNHJHPE = (pNVar6->fields).HHOPNIKFJNE;
          if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar5 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
          if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                      (pNVar4,pSVar5,(pNVar4->klass->vtable)._75_set_text.method);
            Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__GGJKMIMPIDJ(__this,method_00);
            (*(__this->klass->vtable)._54_FEAKOMACIGA.methodPtr)
                      (__this,(__this->klass->vtable)._54_FEAKOMACIGA.method);
            Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__MAFILJNCIFB(__this,method_01);
            pNVar2 = (__this->fields)._playerPosDiff;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              pNVar2 = (__this->fields)._playerPosDiff;
              if (pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03653ed0;
              Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                        (pNVar2,StringLiteral_12161/*"SkillsEnch.EnchantmentCriticalProtection"*/,(MethodInfo *)0x0);
            }
            pNVar2 = (__this->fields)._bgRewardPic;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              pNVar2 = (__this->fields)._bgRewardPic;
              if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
                 (pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
                 pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653ed0;
              UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            }
            pNVar4 = (__this->fields)._noRewardLabel;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              pNVar4 = (__this->fields)._noRewardLabel;
              if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
                 (pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
                 pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653ed0;
              UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            }
            pSVar7 = (__this->fields)._chestHintButton;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pSVar7,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              pSVar7 = (__this->fields)._chestHintButton;
              if ((pSVar7 == (SFButton_o *)0x0) ||
                 (pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pSVar7,(MethodInfo *)0x0),
                 pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653ed0;
              UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            }
            pNVar2 = (__this->fields)._chestImage;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              pNVar2 = (__this->fields)._chestImage;
              if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
                 (pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
                 pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653ed0;
              UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            }
            x = (UnityEngine_Object_o *)(__this->fields)._danP1Root;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            pUVar3 = (__this->fields)._danP1Root;
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_03653ed0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OriginateHeight()  [RVA 0x3553ED4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$OriginateHeight @ RVA 0x3553ED4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__OriginateHeight
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                        ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  __this_01 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                        ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar1.fields.y = (__this->fields)._originHeight;
      UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void EnableVisibility(bool CJNHFNHJHPE)  [RVA 0x3553F24]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$EnableVisibility @ RVA 0x3553F24

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__EnableVisibility
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollItem__EnableVisibility
            ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,
             (__this->fields).DICNIMJBGML !=
             (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0 && CJNHFNHJHPE,
             (MethodInfo *)0x0);
  return;
}


// ===== public void ShowRewardPlate(RaidLeaguesCell.HFMJMMPKHLI NOBEFHEECKJ)  [RVA 0x3553F3C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$ShowRewardPlate @ RVA 0x3553F3C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__ShowRewardPlate
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,int32_t NOBEFHEECKJ,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  System_Action_LabelAlias__o **ppSVar5;
  JMDPBFOCHHP_o *__this_01;
  JMDPBFOCHHP_FNILDHLJBBJ_o *__this_02;
  System_String_o *pSVar6;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_03;
  UnityEngine_Events_UnityAction_o *call;
  int32_t MEHNIFHLHOM;
  int32_t IHEPHBIPLPM;
  int32_t iVar7;
  JMDPBFOCHHP_HKDMLOKOJPH_o *pJVar8;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_StaticFields *pNVar9;
  System_Collections_Generic_List_LabelAlias__o *__this_04;
  System_String_o *pSVar10;
  SFButton_o *pSVar11;
  UnityEngine_Events_UnityEvent_o *__this_05;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar12;
  System_Action_LabelAlias__o *action;
  UnityEngine_Vector2_o UVar13;
  UnityEngine_Color_o UVar14;
  int32_t local_34;
  
  if ((DAT_04568b59 & 1) == 0) {
    FUN_01bab630(&System_Action<LabelAlias>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelAlias>_ForEach__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_FMFBGOKFDJE__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_<>c_MFDJBIIKNJI__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_<>c_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_16988/*"chest_bronze"*/);
    FUN_01bab630(&StringLiteral_16991/*"chest_silver"*/);
    FUN_01bab630(&StringLiteral_16990/*"chest_raid"*/);
    FUN_01bab630(&StringLiteral_10886/*"RaidLeaderboard."*/);
    FUN_01bab630(&StringLiteral_19380/*"leaderboard_pos_"*/);
    FUN_01bab630(&StringLiteral_19368/*"lbLooser"*/);
    FUN_01bab630(&StringLiteral_16989/*"chest_gold"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568b59 = 1;
  }
  local_34 = 0;
  if ((__this->fields).DICNIMJBGML ==
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    return;
  }
  if ((__this->fields).LDBJGDMBCKM != (JMDPBFOCHHP_HKDMLOKOJPH_o *)0x0) {
    pNVar12 = (__this->fields)._bgRewardPic;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar1) {
      pUVar2 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                         ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
      __this_00 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                            ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03654548;
      UVar13 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03654548;
      UVar13.fields.y = (__this->fields)._heightWithPlate;
      UnityEngine_RectTransform__set_sizeDelta(pUVar2,UVar13,(MethodInfo *)0x0);
      pSVar10 = StringLiteral_10886/*"RaidLeaderboard."*/;
      if (NOBEFHEECKJ == 0) {
        iVar7 = 4;
LAB_036540dc:
        local_34 = iVar7;
        pSVar6 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
        pSVar10 = System_String__Concat(pSVar10,StringLiteral_19380/*"leaderboard_pos_"*/,pSVar6,(MethodInfo *)0x0);
      }
      else {
        iVar7 = NOBEFHEECKJ;
        if (NOBEFHEECKJ - 1U < 4) goto LAB_036540dc;
      }
      pNVar12 = (__this->fields)._bgRewardPic;
      if ((pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03654548;
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      pNVar12 = (__this->fields)._bgRewardPic;
      if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03654548;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar12,pSVar10,(MethodInfo *)0x0);
      pNVar12 = (__this->fields)._bgRewardPic;
      if (NOBEFHEECKJ == 0) {
        iVar7 = 0xdc;
        MEHNIFHLHOM = 0xa0;
        IHEPHBIPLPM = 0x8c;
      }
      else {
        iVar7 = 0xff;
        MEHNIFHLHOM = 0xff;
        IHEPHBIPLPM = 0xff;
      }
      UVar14 = CFBGPBCDAGA__NFFPCFGDOKG(iVar7,MEHNIFHLHOM,IHEPHBIPLPM,0xff,(MethodInfo *)0x0);
      if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03654548;
      (*(pNVar12->klass->vtable)._23_set_color.methodPtr)
                (UVar14.fields.r,UVar14.fields.g,UVar14.fields.b,UVar14.fields.a,pNVar12,
                 (pNVar12->klass->vtable)._23_set_color.method);
      pNVar4 = (__this->fields)._noRewardLabel;
      if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03654548;
      if (NOBEFHEECKJ == 0) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._noRewardLabel;
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,StringLiteral_19368/*"lbLooser"*/,(MethodInfo *)0x0);
          pNVar4 = (__this->fields)._noRewardLabel;
          if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pNVar9 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo->static_fields;
            (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                      ((pNVar9->AGNLHPGIGLA).fields.r,(pNVar9->AGNLHPGIGLA).fields.g,
                       (pNVar9->AGNLHPGIGLA).fields.b,(pNVar9->AGNLHPGIGLA).fields.a,pNVar4,
                       (pNVar4->klass->vtable)._23_set_color.method);
            return;
          }
        }
        goto LAB_03654548;
      }
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      __this_04 = (__this->fields)._danP1Labels;
      if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_<>c_TypeInfo->static_fields->__9__33_0;
      if (action == (System_Action_LabelAlias__o *)0x0) {
        if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = (System_Action_LabelAlias__o *)
                 thunk_FUN_01bda818(System_Action<LabelAlias>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar5 = &Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_<>c_TypeInfo->static_fields->
                   __9__33_0;
        *ppSVar5 = action;
        thunk_FUN_01c20e04(ppSVar5,action);
      }
      if (__this_04 == (System_Collections_Generic_List_LabelAlias__o *)0x0) goto LAB_03654548;
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_04,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<LabelAlias>_ForEach__);
      pSVar10 = StringLiteral_1/*""*/;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      pJVar8 = (__this->fields).LDBJGDMBCKM;
      if ((pJVar8 == (JMDPBFOCHHP_HKDMLOKOJPH_o *)0x0) || (__this_01 == (JMDPBFOCHHP_o *)0x0))
      goto LAB_03654548;
      __this_02 = JMDPBFOCHHP__OJOIAONADNG(__this_01,(pJVar8->fields).LEJBNEIJJIF,(MethodInfo *)0x0)
      ;
      pSVar6 = pSVar10;
      if (__this_02 != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
        pSVar6 = JMDPBFOCHHP_FNILDHLJBBJ__PCPJDHIAAHO(__this_02,false,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat(pSVar10,pSVar6,(MethodInfo *)0x0);
        pSVar10 = (__this_02->fields).HILNENCJHMI;
      }
      pJVar8 = (__this->fields).LDBJGDMBCKM;
      if ((pJVar8 == (JMDPBFOCHHP_HKDMLOKOJPH_o *)0x0) ||
         (pUVar3 = (__this->fields)._danP1Root, pUVar3 == (UnityEngine_GameObject_o *)0x0))
      goto LAB_03654548;
      if ((pJVar8->fields).PONPLEPGJNA == false) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pNVar12 = (__this->fields)._chestImage;
        if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03654548;
        pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar12,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetAnchoredPositionX(pUVar2,0.0,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      }
      pNVar12 = (__this->fields)._chestImage;
      if ((pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03654548;
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      pNVar12 = (__this->fields)._chestImage;
      if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03654548;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar12,pSVar6,(MethodInfo *)0x0);
      pNVar12 = (__this->fields)._chestImage;
      if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03654548;
      (*(pNVar12->klass->vtable)._45_SetNativeSize.methodPtr)
                (pNVar12,(pNVar12->klass->vtable)._45_SetNativeSize.method);
      bVar1 = System_String__op_Equality(pSVar10,StringLiteral_16989/*"chest_gold"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar7 = 1;
LAB_0365445c:
        (__this->fields).FNDKDKKMFGN = iVar7;
      }
      else {
        bVar1 = System_String__op_Equality(pSVar10,StringLiteral_16991/*"chest_silver"*/,(MethodInfo *)0x0);
        if (bVar1) {
          iVar7 = 2;
          goto LAB_0365445c;
        }
        bVar1 = System_String__op_Equality(pSVar10,StringLiteral_16988/*"chest_bronze"*/,(MethodInfo *)0x0);
        if (bVar1) {
          iVar7 = 3;
          goto LAB_0365445c;
        }
        bVar1 = System_String__op_Equality(pSVar10,StringLiteral_16990/*"chest_raid"*/,(MethodInfo *)0x0);
        if (bVar1) {
          iVar7 = 4;
          goto LAB_0365445c;
        }
      }
      pSVar11 = (__this->fields)._chestHintButton;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pSVar11,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pSVar11 = (__this->fields)._chestHintButton;
        if ((pSVar11 == (SFButton_o *)0x0) ||
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03654548;
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      }
    }
  }
  pSVar11 = (__this->fields)._chestHintButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pSVar11 = (__this->fields)._chestHintButton;
  if ((pSVar11 != (SFButton_o *)0x0) &&
     (__this_03 = (pSVar11->fields).super.m_OnClick,
     __this_03 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_03,(MethodInfo *)0x0);
    pSVar11 = (__this->fields)._chestHintButton;
    if (pSVar11 != (SFButton_o *)0x0) {
      __this_05 = (UnityEngine_Events_UnityEvent_o *)(pSVar11->fields).super.m_OnClick;
                    /* try { // try from 03654500 to 03754573 has its CatchHandler @ 03654500
                       catch() { ... } // from try @ 03654500 with catch @ 03654500
                       catch() { ... } // from try @ 036545b8 with catch @ 03654500
                       catch() { ... } // from try @ 0365461c with catch @ 03654500
                       catch() { ... } // from try @ 03654664 with catch @ 03654500 */
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_05 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_05,call,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03654548:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NPODNPOEIJD()  [RVA 0x355454C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$NPODNPOEIJD @ RVA 0x355454C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__NPODNPOEIJD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_RectTransform_o *rt;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  
  pNVar1 = (__this->fields)._pointsImage;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    rt = UnityEngine_UI_Graphic__get_rectTransform
                   ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._pointsImage;
                    /* try { // try from 03654574 to 03754593 has its CatchHandler @ 03654624 */
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._points;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        UVar4 = Nekki_SF2_GUI_TextPic__LocalTextMeshBounds_Anchored
                          ((Nekki_SF2_GUI_TextPic_o *)pNVar3,3,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._points;
                    /* try { // try from 036545b0 to 037545b7 has its CatchHandler @ 0365461c */
                    /* try { // try from 036545b8 to 03754617 has its CatchHandler @ 03654500 */
        if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetAnchoredPositionX
                    (rt,UVar5.fields.x * -0.5 + 5.0 + UVar4.fields.x + UVar6.fields.x,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KGNBJLLJHOC()  [RVA 0x35545FC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$KGNBJLLJHOC @ RVA 0x35545FC

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__KGNBJLLJHOC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  PEEIMHCMDND_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *pNVar1;
  
  if ((DAT_04568b5a & 1) == 0) {
                    /* try { // try from 03654618 to 0375461b has its CatchHandler @ 03654620 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036545b0 with catch @ 0365461c
                       try { // try from 0365461c to 0375463b has its CatchHandler @ 03654500 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03654618 with catch @ 03654620
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03654574 with catch @ 03654624
                        */
    DAT_04568b5a = 1;
    method = extraout_x1;
  }
  if ((__this->fields).DICNIMJBGML ==
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
                    /* try { // try from 0365467c to 0375482f has its CatchHandler @ 0365467c
                       catch() { ... } // from try @ 0365467c with catch @ 0365467c
                       catch() { ... } // from try @ 036548a4 with catch @ 0365467c
                       catch() { ... } // from try @ 03654914 with catch @ 0365467c
                       catch() { ... } // from try @ 03654950 with catch @ 0365467c
                       catch() { ... } // from try @ 03654980 with catch @ 0365467c
                       catch() { ... } // from try @ 036549bc with catch @ 0365467c
                       catch() { ... } // from try @ 036549dc with catch @ 0365467c
                       catch() { ... } // from try @ 03654a0c with catch @ 0365467c */
    return;
  }
                    /* try { // try from 0365463c to 0375463f has its CatchHandler @ 0365464c */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
                    /* catch() { ... } // from try @ 0365463c with catch @ 0365464c */
  __this_00 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  pNVar1 = (__this->fields).DICNIMJBGML;
                    /* try { // try from 03654658 to 03754663 has its CatchHandler @ 03654678 */
  if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) &&
     (__this_00 != (PEEIMHCMDND_o *)0x0)) {
                    /* try { // try from 03654664 to 0375466f has its CatchHandler @ 03654500 */
    PEEIMHCMDND__JDONKPBCNLL(__this_00,(pNVar1->fields).AACMAAOJMFK,(MethodInfo *)0x0);
                    /* try { // try from 03654670 to 03754677 has its CatchHandler @ 03654678 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03654658 with catch @ 03654678
                       catch(type#2 @ 00000000) { ... } // from try @ 03654670 with catch @ 03654678
                        */
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

