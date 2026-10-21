// TypeDefIndex 2825
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidInfoSprite : MonoBehaviour
// Fields:
//   private const int ELBMOPPIBNK = 3;
//   private const float OEBCIFDJFNF = 0.7;
//   private const float KCGKEOFNJKE = 0.08;
//   private const float CPPNFFHPMOG = 0.08;
//   private const float DLOPGOLOAGJ = 0.02;
//   private const string PPDBCLDDAHF = "Textures/Effects/Fight/hit";
//   private const string LILANKKCHIN = "Textures/Effects/Fight/hit_blade";
//   private Action<RaidInfoSprite> FCHKBFCNOJL; // 0x20
//   private Action<RaidInfoSprite> HNHLJHHKELD; // 0x28
//   private ResolutionImage _icon; // 0x30
//   private ResolutionImage _completedIcon; // 0x38
//   private LabelAlias _name; // 0x40
//   private ResolutionImage _healthPic; // 0x48
//   private ProgressBar _bossLifeBar; // 0x50
//   private LabelAlias _bossLifeValue; // 0x58
//   private ResolutionImage _sandglass; // 0x60
//   private LabelAlias _timeLabel; // 0x68
//   private ProgressLabelButton _btnFight; // 0x70
//   private LabelButton _btnExit; // 0x78
//   private ResolutionImage _adIcon; // 0x80
//   private LabelAlias _finishHimLabel; // 0x88
//   private LabelButton _btnFinalFight; // 0x90
//   private LabelAlias _waitingResultLabel; // 0x98
//   private CocosAnimation _animationHitEffect; // 0xA0
//   private CocosAnimation _animationSlashEffect; // 0xA8
//   private RectTransform _raidQuestsButtonSpawnPosition; // 0xB0
//   private bool <BOGAKJOFOEK>k__BackingField; // 0xB8
//   private float FNBDHKCAFMJ; // 0xBC
//   private int MOFFPNNIMBJ; // 0xC0
//   private int CMEBGPLHEGM; // 0xC4
//   private int KOPPGDKAEBP; // 0xC8
//   private static bool FPJJPFJDKNP; // 0x0
//   private long PBACPHGLOFJ; // 0xD0
//   private long HODAIAEDHBL; // 0xD8
//   private bool HOFACOGJODC; // 0xE0
//   private bool JAJAHBKJECF; // 0xE1
//   private Color PIDNBPCOAOM; // 0xE4
//   private bool NGOMPLJHBHH; // 0xF4
//   private Sequence NEBFELNKBFG; // 0xF8
//   private Tween ENDLGPAGCBA; // 0x100
//   private Sequence OMICAAONCIB; // 0x108
//   private RaidQuestsButton OBCKMMPHFNP; // 0x110
//   private Vector3 BADCMPECIPC; // 0x118

// ===== public void add_OnFightBtnClick(Action<RaidInfoSprite> CJNHFNHJHPE)  [RVA 0x34264F8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$add_OnFightBtnClick @ RVA 0x34264F8

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__add_OnFightBtnClick
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,
               System_Action_RaidInfoSprite__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RaidInfoSprite__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RaidInfoSprite__o *pSVar5;
  System_Action_RaidInfoSprite__o **ppSVar6;
  System_Action_RaidInfoSprite__o *a;
  
  if ((DAT_04568114 & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    DAT_04568114 = 1;
  }
  ppSVar6 = &(__this->fields).FCHKBFCNOJL;
  a = *ppSVar6;
  do {
                    /* try { // try from 03526540 to 03626647 has its CatchHandler @ 03526540
                       catch() { ... } // from try @ 03526540 with catch @ 03526540
                       catch() { ... } // from try @ 03526668 with catch @ 03526540
                       catch() { ... } // from try @ 035266b8 with catch @ 03526540
                       catch() { ... } // from try @ 035266e8 with catch @ 03526540 */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<RaidInfoSprite>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidInfoSprite>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RaidInfoSprite__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void SetTimerVisible(bool CJNHFNHJHPE)  [RVA 0x34265A8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$SetTimerVisible @ RVA 0x34265A8

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetTimerVisible
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  
  __this_00 = (__this->fields)._timeLabel;
  if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._sandglass;
    if ((__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FMAEMJENECC()  [RVA 0x3426604]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$FMAEMJENECC @ RVA 0x3426604

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FMAEMJENECC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  BHEDGAKGKPO_StaticFields *pBVar1;
  DG_Tweening_Sequence_o **ppDVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568115 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04568115 = 1;
    method = extraout_x1;
  }
  ppDVar2 = &(__this->fields).NEBFELNKBFG;
  if (*ppDVar2 == (DG_Tweening_Sequence_o *)0x0) {
    return;
  }
  pNVar3 = (__this->fields)._timeLabel;
                    /* try { // try from 03526648 to 0362664f has its CatchHandler @ 0352669c */
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo,method);
                    /* try { // try from 03526658 to 03626667 has its CatchHandler @ 03526698 */
  }
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pBVar1 = BHEDGAKGKPO_TypeInfo->static_fields;
                    /* try { // try from 03526668 to 036266b3 has its CatchHandler @ 03526540 */
    (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
              ((pBVar1->FHIAKPJBBCB).fields.r,(pBVar1->FHIAKPJBBCB).fields.g,
               (pBVar1->FHIAKPJBBCB).fields.b,(pBVar1->FHIAKPJBBCB).fields.a,pNVar3,
               (pNVar3->klass->vtable)._23_set_color.method);
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar2,true,(MethodInfo *)0x0);
    *ppDVar2 = (DG_Tweening_Sequence_o *)0x0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03526658 with catch @ 03526698
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03526648 with catch @ 0352669c
                        */
    thunk_FUN_01c20e04(ppDVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035266b4 to 036266b7 has its CatchHandler @ 035266d8 */
  FUN_01bab8c8();
}


// ===== private void NLJGGCBOECI()  [RVA 0x34266B8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$NLJGGCBOECI @ RVA 0x34266B8

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__NLJGGCBOECI
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *pCVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  
                    /* try { // try from 035266b8 to 036266df has its CatchHandler @ 03526540 */
  if ((DAT_04568116 & 1) == 0) {
                    /* catch() { ... } // from try @ 035266b4 with catch @ 035266d8 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 035266e0 to 036266e7 has its CatchHandler @ 035266fc */
                    /* try { // try from 035266e8 to 036266f3 has its CatchHandler @ 03526540 */
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04568116 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035266f4 to 036266fb has its CatchHandler @ 035266fc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035266e0 with catch @ 035266fc
                       catch(type#2 @ 00000000) { ... } // from try @ 035266f4 with catch @ 035266fc
                        */
  if ((0 < (__this->fields).MOFFPNNIMBJ) && (0 < (__this->fields).CMEBGPLHEGM)) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar2 == (CHDGOFBHAFI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = OOBBAGLCFPF__FLMDOPMDKID((pCVar2->fields).AABMLCNHHPN,(MethodInfo *)0x0);
    method = extraout_x1_00;
    if (!bVar1) {
      iVar5 = (__this->fields).MOFFPNNIMBJ;
      iVar3 = (__this->fields).CMEBGPLHEGM;
      fVar6 = (__this->fields).FNBDHKCAFMJ;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      fVar4 = System_Math__Max(((float)iVar5 / ((float)iVar3 + -1.0)) * -8.0 + 10.0,2.0,
                               (MethodInfo *)0x0);
      fVar4 = System_Math__Min(10.0,fVar4,(MethodInfo *)0x0);
      if (fVar4 <= fVar6) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HMPBGKCCODK(__this,method_00);
        (__this->fields).FNBDHKCAFMJ = 0.0;
      }
      return;
    }
  }
  (__this->fields).FNBDHKCAFMJ = 0.0;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HCCNPDEPLJA(__this,method);
  return;
}


// ===== private void OCCNCPHMCIH()  [RVA 0x3426DE4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$OCCNCPHMCIH @ RVA 0x3426DE4

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__OCCNCPHMCIH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  CocosAnimation_o *pCVar4;
  UnityEngine_GameObject_o *__this_01;
  float fVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  
  if ((DAT_04568117 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04568117 = 1;
  }
  __this_00 = (__this->fields)._icon;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    pCVar4 = (__this->fields)._animationHitEffect;
    if (pCVar4 != (CocosAnimation_o *)0x0) {
      (pCVar4->fields)._FEBBHCOAEMI_k__BackingField = 1;
      CocosAnimation__SetFirstFrame(pCVar4,(MethodInfo *)0x0);
      pCVar4 = (__this->fields)._animationHitEffect;
      if (pCVar4 != (CocosAnimation_o *)0x0) {
        (pCVar4->fields)._NOAJIBNJKPE_k__BackingField = true;
        pUVar3 = (pCVar4->fields)._MPAMHJJKABE_k__BackingField;
        fVar6 = (__this->fields).BADCMPECIPC.fields.x;
        fVar5 = UVar7.fields.m_Width * 0.1;
        if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 03526e94 to 03626e9b has its CatchHandler @ 03526f04 */
        iVar2 = -0x80000000;
        if (fVar5 != INFINITY) {
          iVar2 = (int)fVar5;
        }
                    /* try { // try from 03526ea0 to 03626eaf has its CatchHandler @ 03526f00 */
        iVar1 = LIIFLGALGNK__HLMBDJOGONJ(iVar2,(MethodInfo *)0x0);
        fVar5 = (__this->fields).BADCMPECIPC.fields.y;
        iVar2 = LIIFLGALGNK__HLMBDJOGONJ(iVar2,(MethodInfo *)0x0);
                    /* try { // try from 03526ec0 to 03626ecb has its CatchHandler @ 03526efc */
                    /* try { // try from 03526ecc to 03626f1b has its CatchHandler @ 03526d60 */
        UnityEngine_TransformExtensions__SetLocalPosition
                  ((UnityEngine_Transform_o *)pUVar3,fVar6 + (float)iVar1,fVar5 + (float)iVar2,0.0,
                   (MethodInfo *)0x0);
        pCVar4 = (__this->fields)._animationHitEffect;
        if ((pCVar4 != (CocosAnimation_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pCVar4,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03526ec0 with catch @ 03526efc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03526ea0 with catch @ 03526f00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03526e94 with catch @ 03526f04
                        */
          UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateBoss(KDADMJGPAOM LJJOMPLONBH, int MKNBFGPHPEE)  [RVA 0x3426F14]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$UpdateBoss @ RVA 0x3426F14

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__UpdateBoss
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,KDADMJGPAOM_o *LJJOMPLONBH,
               int32_t MKNBFGPHPEE,MethodInfo *method)

{
  bool value;
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  CNLGMNIEGFG_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  PJKHAJKEHEL_o *pPVar6;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  IIHMKHNLJKD_o *__this_03;
  System_String_o *pSVar7;
  ProgressBar_o *pPVar8;
  System_String_o *str2;
  CHDGOFBHAFI_o *pCVar9;
  UnityEngine_GameObject_o *pUVar10;
  LabelButton_o *pLVar11;
  MethodInfo *method_00;
  System_String_o **ppSVar12;
  ProgressBar_c *pPVar13;
  ProgressLabelButton_o *__this_04;
  OHDDKGHEEPA_o *__this_05;
  System_Collections_Generic_List_PJKHAJKEHEL__o *OKBIKHHKOEN;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *__this_06;
  OHDDKGHEEPA_NHCNEOLLGHG_o *pOVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  UnityEngine_Vector2_o UVar18;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Color_o UVar19;
  int32_t local_44;
  
                    /* try { // try from 03526f1c to 03626f1f has its CatchHandler @ 03526f48 */
                    /* try { // try from 03526f20 to 03626f57 has its CatchHandler @ 03526d60 */
  if ((DAT_04568118 & 1) == 0) {
                    /* catch() { ... } // from try @ 03526f1c with catch @ 03526f48 */
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
                    /* try { // try from 03526f58 to 03626f5f has its CatchHandler @ 03526f74 */
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
                    /* try { // try from 03526f60 to 03626f6b has its CatchHandler @ 03526d60 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03526f6c to 03626f73 has its CatchHandler @ 03526f74 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03526f58 with catch @ 03526f74
                       catch(type#2 @ 00000000) { ... } // from try @ 03526f6c with catch @ 03526f74
                        */
                    /* try { // try from 03526f78 to 0362704f has its CatchHandler @ 03526f78
                       catch() { ... } // from try @ 03526f78 with catch @ 03526f78
                       catch() { ... } // from try @ 035270ac with catch @ 03526f78
                       catch() { ... } // from try @ 035270d8 with catch @ 03526f78
                       catch() { ... } // from try @ 03527104 with catch @ 03526f78
                       catch() { ... } // from try @ 03527134 with catch @ 03526f78 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo);
    FUN_01bab630(&StringLiteral_10872/*"RaidInfoSprite::updateBoss() setProgBarValueBorders = "*/);
    FUN_01bab630(&StringLiteral_10840/*"RaidFight"*/);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04568118 = 1;
  }
  if ((__this->fields)._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if (LJJOMPLONBH == (KDADMJGPAOM_o *)0x0) goto LAB_03527518;
  iVar3 = (LJJOMPLONBH->fields).IILCHFKCEEH;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = MGNPHCAAEIO__MJDCGINJMOP(iVar3,false,(MethodInfo *)0x0);
  if (__this_00 == (CNLGMNIEGFG_o *)0x0) {
    return;
  }
  __this_05 = (OHDDKGHEEPA_o *)(__this_00->fields).super.IFJLLGPGMHM;
  if (__this_05 == (OHDDKGHEEPA_o *)0x0) goto LAB_03527518;
  bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03527050 to 03627057 has its CatchHandler @ 035270e8 */
  if (((__this_05->klass->_2).naturalAligment < bVar1) ||
     ((__this_05->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)OHDDKGHEEPA_TypeInfo)
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(__this_05);
  }
  pOVar14 = (__this_05->fields)._FHGDHAIAPBG_k__BackingField;
                    /* try { // try from 03527060 to 0362706f has its CatchHandler @ 035270e4 */
  if (pOVar14 == (OHDDKGHEEPA_NHCNEOLLGHG_o *)0x0) {
    OKBIKHHKOEN = (__this_00->fields).super.MECHOBPGHFJ;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035270a0 to 036270ab has its CatchHandler @ 035270dc */
    pPVar6 = MGNPHCAAEIO__DDHNCKDHKAC(OKBIKHHKOEN,(MethodInfo *)0x0);
                    /* try { // try from 035270ac to 036270d3 has its CatchHandler @ 03526f78 */
    if ((pPVar6 == (PJKHAJKEHEL_o *)0x0) ||
       (pNVar4 = (__this->fields)._name, pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0))
    goto LAB_03527518;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,(pPVar6->fields).NBPNHMKOJKB,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._icon;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03527518;
    ppSVar12 = &(pPVar6->fields).NILOEHGNJNL;
  }
  else {
    pNVar4 = (__this->fields)._name;
    if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03527518;
    Nekki_SF2_GUI_LabelAlias__set_Alias
              (pNVar4,(pOVar14->fields)._DCNDIMPOGJD_k__BackingField,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._icon;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03527518;
                    /* try { // try from 03527080 to 03627083 has its CatchHandler @ 035270d8 */
    ppSVar12 = &(pOVar14->fields)._AJLFECONJFN_k__BackingField;
  }
                    /* try { // try from 035270d4 to 036270d7 has its CatchHandler @ 035270e0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527080 with catch @ 035270d8
                       try { // try from 035270d8 to 036270ff has its CatchHandler @ 03526f78 */
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,*ppSVar12,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035270a0 with catch @ 035270dc
                        */
  __this_06 = (Nekki_SF2_GUI_ResolutionImageAvatar_o *)(__this->fields)._icon;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035270d4 with catch @ 035270e0
                        */
  if (__this_06 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527060 with catch @ 035270e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527050 with catch @ 035270e8
                        */
    bVar1 = (Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03527100 to 03627103 has its CatchHandler @ 03527124 */
                    /* try { // try from 03527104 to 0362712b has its CatchHandler @ 03526f78 */
                    /* catch() { ... } // from try @ 03527100 with catch @ 03527124 */
    if (((bVar1 <= (__this_06->klass->_2).naturalAligment) &&
        ((__this_06->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo)) &&
       (Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(__this_06,(MethodInfo *)0x0),
       pOVar14 != (OHDDKGHEEPA_NHCNEOLLGHG_o *)0x0)) {
                    /* try { // try from 0352712c to 03627133 has its CatchHandler @ 03527148 */
                    /* try { // try from 03527134 to 0362713f has its CatchHandler @ 03526f78 */
      Nekki_SF2_GUI_ResolutionImageAvatar__SetHighModeScale
                (__this_06,(pOVar14->fields)._BLCPPMPOEHJ_k__BackingField,(MethodInfo *)0x0);
                    /* try { // try from 03527140 to 03627147 has its CatchHandler @ 03527148 */
      __this_01 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_06,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0352712c with catch @ 03527148
                       catch(type#2 @ 00000000) { ... } // from try @ 03527140 with catch @ 03527148
                        */
      __this_02 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_06,(MethodInfo *)0x0);
      if ((__this_02 == (UnityEngine_RectTransform_o *)0x0) ||
         (UVar18 = UnityEngine_RectTransform__get_pivot(__this_02,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_03527518;
      value_00.fields.y = (pOVar14->fields)._DAJMKNDILJA_k__BackingField;
      value_00.fields.x = UVar18.fields.x;
      UnityEngine_RectTransform__set_pivot(__this_01,value_00,(MethodInfo *)0x0);
    }
  }
  UVar19 = OHDDKGHEEPA__LHDLKKJCILP(__this_05,(MethodInfo *)0x0);
  (__this->fields).PIDNBPCOAOM.fields.r = UVar19.fields.r;
  (__this->fields).PIDNBPCOAOM.fields.g = UVar19.fields.g;
  (__this->fields).PIDNBPCOAOM.fields.b = UVar19.fields.b;
  (__this->fields).PIDNBPCOAOM.fields.a = UVar19.fields.a;
  if ((__this_05->fields)._PLEKIDHFFPB_k__BackingField == false) {
    bVar2 = false;
  }
  else {
    if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b86 == '\0') {
      FUN_01bab630(&ACHLOMELAJE_TypeInfo);
      DAT_04565b86 = '\x01';
    }
    if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_03 = ACHLOMELAJE_TypeInfo->static_fields->BFJCOMHPDJC;
    if (__this_03 == (IIHMKHNLJKD_o *)0x0) goto LAB_03527518;
    bVar2 = IIHMKHNLJKD__LCLIGIJPCOD(__this_03,StringLiteral_10840/*"RaidFight"*/,(MethodInfo *)0x0);
  }
  (__this->fields).NGOMPLJHBHH = bVar2;
  iVar3 = OHDDKGHEEPA__MFPFLDMMJII(__this_05,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetBtnFightValueBorders_MS
            (__this,0,(long)(iVar3 * 1000),method);
  local_44 = OHDDKGHEEPA__MFPFLDMMJII(__this_05,(MethodInfo *)0x0);
  pSVar7 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat(StringLiteral_10872/*"RaidInfoSprite::updateBoss() setProgBarValueBorders = "*/,pSVar7,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
  fVar15 = (float)(LJJOMPLONBH->fields).IOJIABMGMGB;
  fVar17 = (float)MKNBFGPHPEE / fVar15;
  fVar15 = (float)(LJJOMPLONBH->fields).PDGEHKCPGDK / fVar15;
  if (fVar17 <= fVar15) {
    if (fVar17 < fVar15) {
LAB_03527318:
      pPVar8 = (__this->fields)._bossLifeBar;
      if (pPVar8 == (ProgressBar_o *)0x0) goto LAB_03527518;
      pPVar13 = pPVar8->klass;
      uVar16 = 0;
      goto LAB_03527328;
    }
    pPVar8 = (__this->fields)._bossLifeBar;
    if (pPVar8 == (ProgressBar_o *)0x0) goto LAB_03527518;
    bVar2 = ProgressBarBase__IsChanging((ProgressBarBase_o *)pPVar8,(MethodInfo *)0x0);
    if (!bVar2) goto LAB_03527318;
  }
  else {
    pPVar8 = (__this->fields)._bossLifeBar;
    if (pPVar8 == (ProgressBar_o *)0x0) goto LAB_03527518;
    bVar2 = ProgressBarBase__IsChanging((ProgressBarBase_o *)pPVar8,(MethodInfo *)0x0);
    if (!bVar2) {
      pPVar8 = (__this->fields)._bossLifeBar;
      if (pPVar8 == (ProgressBar_o *)0x0) goto LAB_03527518;
      (*(pPVar8->klass->vtable)._8_SetValue.methodPtr)
                ((ulong)(uint)fVar17,0,pPVar8,0,(pPVar8->klass->vtable)._8_SetValue.method);
    }
    pPVar8 = (__this->fields)._bossLifeBar;
    if (pPVar8 == (ProgressBar_o *)0x0) goto LAB_03527518;
    pPVar13 = pPVar8->klass;
    uVar16 = 0x3fc00000;
LAB_03527328:
    (*(pPVar13->vtable)._8_SetValue.methodPtr)
              ((ulong)(uint)fVar15,uVar16,pPVar8,0,(pPVar13->vtable)._8_SetValue.method);
  }
  iVar3 = (LJJOMPLONBH->fields).PDGEHKCPGDK;
  if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar7 = BJFCCEEPHOF__POMAAOILGAL(iVar3,(MethodInfo *)0x0);
  str2 = BJFCCEEPHOF__POMAAOILGAL((LJJOMPLONBH->fields).IOJIABMGMGB,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat(pSVar7,StringLiteral_1492/*"/"*/,str2,(MethodInfo *)0x0);
  CNLGMNIEGFG__HFNDKACEADO(__this_00,(float)(LJJOMPLONBH->fields).PDGEHKCPGDK,(MethodInfo *)0x0);
  pNVar4 = (__this->fields)._bossLifeValue;
  if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
              (pNVar4,pSVar7,(pNVar4->klass->vtable)._75_set_text.method);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar9 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar9 != (CHDGOFBHAFI_o *)0x0) {
      bVar2 = OOBBAGLCFPF__IFFNMNFGOII((pCVar9->fields).AABMLCNHHPN,(MethodInfo *)0x0);
      __this_04 = (__this->fields)._btnFight;
      if ((__this_04 != (ProgressLabelButton_o *)0x0) &&
         (pUVar10 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
         pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
        value = !bVar2;
        UnityEngine_GameObject__SetActive(pUVar10,value,(MethodInfo *)0x0);
        pPVar8 = (__this->fields)._bossLifeBar;
        if ((pPVar8 != (ProgressBar_o *)0x0) &&
           (pUVar10 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pPVar8,(MethodInfo *)0x0),
           pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar10,value,(MethodInfo *)0x0);
          pNVar5 = (__this->fields)._healthPic;
          if ((pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar10 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
             pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar10,value,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._bossLifeValue;
            if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar10 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
               pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar10,value,(MethodInfo *)0x0);
              pNVar4 = (__this->fields)._finishHimLabel;
              if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                 (pUVar10 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
                 pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar10,bVar2,(MethodInfo *)0x0);
                pLVar11 = (__this->fields)._btnFinalFight;
                if ((pLVar11 != (LabelButton_o *)0x0) &&
                   (pUVar10 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pLVar11,(MethodInfo *)0x0),
                   pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar10,bVar2,(MethodInfo *)0x0);
                  pLVar11 = (__this->fields)._btnExit;
                  if ((pLVar11 != (LabelButton_o *)0x0) &&
                     (pUVar10 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pLVar11,(MethodInfo *)0x0),
                     pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
                    method_00 = (MethodInfo *)0x0;
                    UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
                    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetTimerVisible
                              (__this,value,method_00);
                    pCVar9 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                    if (pCVar9 != (CHDGOFBHAFI_o *)0x0) {
                      bVar2 = OOBBAGLCFPF__FLMDOPMDKID
                                        ((pCVar9->fields).AABMLCNHHPN,(MethodInfo *)0x0);
                      if (bVar2) {
                        Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetRaidEndedState
                                  (__this,false,method_00);
                      }
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
LAB_03527518:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x34276BC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$Update @ RVA 0x34276BC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__Update
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__EIAOEJNEBDM(__this,method);
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__NLJGGCBOECI(__this,method_00);
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__DCGKJKKNCEP(__this,method_01);
  return;
}


// ===== private void IJKMDJGGDKK(float HKEAKFHICAN)  [RVA 0x3427CEC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$IJKMDJGGDKK @ RVA 0x3427CEC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__IJKMDJGGDKK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,float HKEAKFHICAN,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *transform;
  
  __this_00 = (__this->fields)._sandglass;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalRotationZ(transform,HKEAKFHICAN,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long GetCooldownFinishTime_MS()  [RVA 0x3427D20]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$GetCooldownFinishTime_MS @ RVA 0x3427D20

int64_t Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__GetCooldownFinishTime_MS
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  return (__this->fields).HODAIAEDHBL;
}


// ===== public void SetButtonsEnabled(bool CJNHFNHJHPE)  [RVA 0x3427D28]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$SetButtonsEnabled @ RVA 0x3427D28

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetButtonsEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  LabelButton_o *pLVar2;
  ProgressLabelButton_o *pPVar3;
  
  if ((DAT_04568119 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568119 = 1;
  }
  (__this->fields).HOFACOGJODC = CJNHFNHJHPE;
  pLVar2 = (__this->fields)._btnExit;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar2 = (__this->fields)._btnExit;
    if (pLVar2 == (LabelButton_o *)0x0) goto LAB_03527e3c;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pLVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pPVar3 = (__this->fields)._btnFight;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03527dc4 to 03627e67 has its CatchHandler @ 03527dc4
                       catch() { ... } // from try @ 03527dc4 with catch @ 03527dc4
                       catch() { ... } // from try @ 03527ea8 with catch @ 03527dc4
                       catch() { ... } // from try @ 03527ee4 with catch @ 03527dc4
                       catch() { ... } // from try @ 03527f10 with catch @ 03527dc4
                       catch() { ... } // from try @ 03527f50 with catch @ 03527dc4 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pPVar3 = (__this->fields)._btnFight;
    if (pPVar3 == (ProgressLabelButton_o *)0x0) goto LAB_03527e3c;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pPVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pLVar2 = (__this->fields)._btnFinalFight;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pLVar2 = (__this->fields)._btnFinalFight;
  if (pLVar2 != (LabelButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pLVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_03527e3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DNDFMKKBDDJ(int KEFILECBPMF)  [RVA 0x3427E40]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$DNDFMKKBDDJ @ RVA 0x3427E40

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__DNDFMKKBDDJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,int32_t KEFILECBPMF,
               MethodInfo *method)

{
  MethodInfo *in_x3;
  
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__OGJEAHMIGLK(__this,KEFILECBPMF,3,in_x3);
  return;
}


// ===== public void SetPlayersInBattle(int FGOOHNLLEPN)  [RVA 0x3427F7C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$SetPlayersInBattle @ RVA 0x3427F7C

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetPlayersInBattle
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,int32_t FGOOHNLLEPN,
               MethodInfo *method)

{
  (__this->fields).MOFFPNNIMBJ = FGOOHNLLEPN;
  return;
}


// ===== public void SetRaidEndedState(bool INMJNAJNOAE = False)  [RVA 0x3427554]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$SetRaidEndedState @ RVA 0x3427554

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetRaidEndedState
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,bool INMJNAJNOAE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  ProgressLabelButton_o *__this_00;
  LabelButton_o *pLVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_0456811a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_TypeInfo);
    DAT_0456811a = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetTimerVisible(__this,false,method);
  pNVar1 = (__this->fields)._finishHimLabel;
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._btnFight;
    if ((__this_00 != (ProgressLabelButton_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pLVar3 = (__this->fields)._btnFinalFight;
      if ((pLVar3 != (LabelButton_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._waitingResultLabel;
        if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          pLVar3 = (__this->fields)._btnExit;
          if ((pLVar3 != (LabelButton_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FDPLPNKKGGO(__this,method_00);
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FMAEMJENECC(__this,method_01);
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HCCNPDEPLJA(__this,method_02);
            if (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_TypeInfo->static_fields->FPJJPFJDKNP !=
                false) {
              return;
            }
            if (INMJNAJNOAE) {
              EDFDANKEBGF__HFBADEKPCAB((MethodInfo *)0x0);
            }
            else {
              EDFDANKEBGF__OOBBKGHAAHF((MethodInfo *)0x0);
            }
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_TypeInfo->static_fields->FPJJPFJDKNP = true;
            __this_01 = (__this->fields)._completedIcon;
            if ((__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,INMJNAJNOAE,(MethodInfo *)0x0);
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


// ===== private void EIAOEJNEBDM()  [RVA 0x34276DC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$EIAOEJNEBDM @ RVA 0x34276DC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__EIAOEJNEBDM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pCVar1 = (__this->fields)._animationHitEffect;
  if (pCVar1 != (CocosAnimation_o *)0x0) {
    if ((pCVar1->fields)._JJCDMHFHJAB_k__BackingField == false) {
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_03527740;
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    }
    pCVar1 = (__this->fields)._animationSlashEffect;
    if (pCVar1 != (CocosAnimation_o *)0x0) {
      if ((pCVar1->fields)._JJCDMHFHJAB_k__BackingField != false) {
        return;
      }
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03527740:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnDestroy()  [RVA 0x3427FC0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$OnDestroy @ RVA 0x3427FC0

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_0456811b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_IAKHIFOFLGO__);
    DAT_0456811b = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FDPLPNKKGGO(__this,method_00);
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HCCNPDEPLJA(__this,method_01);
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FMAEMJENECC(__this,method_02);
  (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
  return;
}


// ===== private void FDPLPNKKGGO()  [RVA 0x3427F84]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$FDPLPNKKGGO @ RVA 0x3427F84

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FDPLPNKKGGO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields).ENDLGPAGCBA;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    ppDVar1 = &(__this->fields).ENDLGPAGCBA;
    DG_Tweening_TweenExtensions__Kill(t,true,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== public void remove_OnExitBtnClick(Action<RaidInfoSprite> CJNHFNHJHPE)  [RVA 0x3428088]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$remove_OnExitBtnClick @ RVA 0x3428088

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__remove_OnExitBtnClick
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,
               System_Action_RaidInfoSprite__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RaidInfoSprite__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RaidInfoSprite__o *pSVar5;
  System_Action_RaidInfoSprite__o **ppSVar6;
  System_Action_RaidInfoSprite__o *source;
  
  if ((DAT_0456811c & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    DAT_0456811c = 1;
  }
  ppSVar6 = &(__this->fields).HNHLJHHKELD;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<RaidInfoSprite>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidInfoSprite>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RaidInfoSprite__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void HCCNPDEPLJA()  [RVA 0x34267E4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$HCCNPDEPLJA @ RVA 0x34267E4

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HCCNPDEPLJA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  DG_Tweening_Sequence_o *t;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  MethodInfo *extraout_x1;
  
  t = (__this->fields).OMICAAONCIB;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    ppDVar1 = &(__this->fields).OMICAAONCIB;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,true,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._icon;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03526844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pNVar2,
               (pNVar2->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public LabelButton get_BtnFinalFight()  [RVA 0x3428138]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$get_BtnFinalFight @ RVA 0x3428138

LabelButton_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__get_BtnFinalFight
          (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  return (__this->fields)._btnFinalFight;
}


// ===== private void IAKHIFOFLGO()  [RVA 0x3428140]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$IAKHIFOFLGO @ RVA 0x3428140

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__IAKHIFOFLGO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  bool bVar1;
  ProgressLabelButton_o *pPVar2;
  LabelButton_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456811d & 1) == 0) {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_0456811d = 1;
    method = extraout_x1;
  }
  (__this->fields).FNBDHKCAFMJ = (__this->fields).FNBDHKCAFMJ + 1.0;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__CIHKNMDAPBG(__this,method);
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565ff1 == '\0') {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04565ff1 = '\x01';
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField == false) {
    return;
  }
  pPVar2 = (__this->fields)._btnFight;
  if (pPVar2 == (ProgressLabelButton_o *)0x0) {
LAB_0352822c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = SFButton__get_ActiveAndInteractable((SFButton_o *)pPVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pPVar2 = (__this->fields)._btnFight;
  }
  else {
    __this_00 = (__this->fields)._btnFinalFight;
    if (__this_00 == (LabelButton_o *)0x0) goto LAB_0352822c;
    bVar1 = SFButton__get_ActiveAndInteractable((SFButton_o *)__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pPVar2 = (ProgressLabelButton_o *)(__this->fields)._btnFinalFight;
  }
  LJLLAKHOFFF__AKKDDJDBIBD((UnityEngine_UI_Selectable_o *)pPVar2,(MethodInfo *)0x0);
  return;
}


// ===== public void remove_OnFightBtnClick(Action<RaidInfoSprite> CJNHFNHJHPE)  [RVA 0x3428480]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$remove_OnFightBtnClick @ RVA 0x3428480

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__remove_OnFightBtnClick
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,
               System_Action_RaidInfoSprite__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RaidInfoSprite__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RaidInfoSprite__o *pSVar5;
  System_Action_RaidInfoSprite__o **ppSVar6;
  System_Action_RaidInfoSprite__o *source;
  
  if ((DAT_0456811e & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    DAT_0456811e = 1;
  }
  ppSVar6 = &(__this->fields).FCHKBFCNOJL;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<RaidInfoSprite>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidInfoSprite>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RaidInfoSprite__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void add_OnExitBtnClick(Action<RaidInfoSprite> CJNHFNHJHPE)  [RVA 0x3428530]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$add_OnExitBtnClick @ RVA 0x3428530

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__add_OnExitBtnClick
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,
               System_Action_RaidInfoSprite__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RaidInfoSprite__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RaidInfoSprite__o *pSVar5;
  System_Action_RaidInfoSprite__o **ppSVar6;
  System_Action_RaidInfoSprite__o *a;
  
  if ((DAT_0456811f & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    DAT_0456811f = 1;
  }
  ppSVar6 = &(__this->fields).HNHLJHHKELD;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<RaidInfoSprite>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidInfoSprite>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RaidInfoSprite__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public LabelButton get_BtnExit()  [RVA 0x34285E0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$get_BtnExit @ RVA 0x34285E0

LabelButton_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__get_BtnExit
          (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  return (__this->fields)._btnExit;
}


// ===== public void .ctor()  [RVA 0x34285E8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$.ctor @ RVA 0x34285E8

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  System_Action_RaidInfoSprite__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_RaidInfoSprite__o *pSVar2;
  
  if ((DAT_04568120 & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_LHNHKAEFKJC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_MCHKIJJLEDP__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo);
    DAT_04568120 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->static_fields->__9__88_0;
  if (pSVar2 == (System_Action_RaidInfoSprite__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_RaidInfoSprite__o *)
             thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->static_fields->__9__88_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    ppSVar1 = &(__this->fields).FCHKBFCNOJL;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    if ((Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->static_fields->__9__88_1;
    if (pSVar2 == (System_Action_RaidInfoSprite__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Action_RaidInfoSprite__o *)
               thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->static_fields->__9__88_1;
      *ppSVar1 = pSVar2;
      thunk_FUN_01c20e04(ppSVar1,pSVar2);
    }
    ppSVar1 = &(__this->fields).HNHLJHHKELD;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    (__this->fields).KOPPGDKAEBP = 5;
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EKLNAPJNGEA()  [RVA 0x342877C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$EKLNAPJNGEA @ RVA 0x342877C

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__EKLNAPJNGEA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [12];
  CocosAnimation_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  float fVar3;
  UnityEngine_Quaternion_o value;
  
  if ((DAT_04568121 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04568121 = 1;
    method = extraout_x1;
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
  }
  fVar3 = LIIFLGALGNK__GFHNCCOMPAJ(-90.0,90.0,(MethodInfo *)0x0);
  pCVar2 = (__this->fields)._animationSlashEffect;
  if (pCVar2 != (CocosAnimation_o *)0x0) {
    (pCVar2->fields)._FEBBHCOAEMI_k__BackingField = 1;
    CocosAnimation__SetFirstFrame(pCVar2,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._animationSlashEffect;
    if (pCVar2 != (CocosAnimation_o *)0x0) {
      (pCVar2->fields)._NOAJIBNJKPE_k__BackingField = true;
      __this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
      auVar1._4_8_ = 0;
      auVar1._0_4_ = fVar3 * 0.017453292;
      value = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localRotation(__this_00,value,(MethodInfo *)0x0);
        pCVar2 = (__this->fields)._animationSlashEffect;
        if ((pCVar2 != (CocosAnimation_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetBtnFightValueBorders_MS(long PEOMJHJICCM, long GKBCJOEFFCP)  [RVA 0x3427524]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$SetBtnFightValueBorders_MS @ RVA 0x3427524

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetBtnFightValueBorders_MS
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,int64_t PEOMJHJICCM,
               int64_t GKBCJOEFFCP,MethodInfo *method)

{
  ProgressLabelButton_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._btnFight;
  if (__this_00 != (ProgressLabelButton_o *)0x0) {
    ProgressLabelButton__SetProgBarValueBorders
              (__this_00,(float)PEOMJHJICCM,(float)GKBCJOEFFCP,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__CIHKNMDAPBG(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private float DKGKMOKJLHM()  [RVA 0x342886C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$DKGKMOKJLHM @ RVA 0x342886C

float Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__DKGKMOKJLHM
                (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  
  __this_00 = (__this->fields)._sandglass;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar3 = UnityEngine_Transform__get_localEulerAngles(__this_01,(MethodInfo *)0x0);
    fVar2 = UVar3.fields.z;
    fVar1 = fVar2 + -360.0;
    if (fVar2 <= 180.0) {
      fVar1 = fVar2;
    }
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CIHKNMDAPBG()  [RVA 0x3428230]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$CIHKNMDAPBG @ RVA 0x3428230

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__CIHKNMDAPBG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  PGICCMFLDPI_o *pPVar1;
  System_String_o *CJNHFNHJHPE;
  CHDGOFBHAFI_o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  ProgressLabelButton_o *pPVar2;
  ulong uVar3;
  float fVar4;
  
  if ((DAT_04568122 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_21200/*"startFight"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568122 = 1;
  }
  if ((__this->fields)._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((__this_00 == (KKLJIDJBFEI_o *)0x0) ||
     (pPVar1 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0), pPVar1 == (PGICCMFLDPI_o *)0x0
     )) goto LAB_0352847c;
  uVar3 = (__this->fields).HODAIAEDHBL - (pPVar1->fields).GDKPGIBMFPA;
  if ((long)uVar3 < 1) {
    pPVar2 = (__this->fields)._btnFight;
    if (pPVar2 == (ProgressLabelButton_o *)0x0) goto LAB_0352847c;
    LabelButton__set_Alias((LabelButton_o *)pPVar2,StringLiteral_21200/*"startFight"*/,(MethodInfo *)0x0);
    pPVar2 = (__this->fields)._btnFight;
    if (pPVar2 == (ProgressLabelButton_o *)0x0) goto LAB_0352847c;
    fVar4 = ProgressLabelButton__MaxValue(pPVar2,(MethodInfo *)0x0);
    ProgressLabelButton__SetValue(pPVar2,fVar4,0.0,(System_Action_o *)0x0,(MethodInfo *)0x0);
  }
  else {
    pPVar2 = (__this->fields)._btnFight;
    if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CJNHFNHJHPE = NGFEKJBMGEB__BCGDPKJNJCH
                            (uVar3 / 1000,true,true,3599999 < (long)uVar3,86399999 < (long)uVar3,
                             StringLiteral_2086/*":"*/,true,true,true,true,StringLiteral_1/*""*/,StringLiteral_1/*""*/,
                             StringLiteral_1/*""*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    if (pPVar2 == (ProgressLabelButton_o *)0x0) goto LAB_0352847c;
    LabelButton__set_Text((LabelButton_o *)pPVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pPVar2 = (__this->fields)._btnFight;
    if (pPVar2 == (ProgressLabelButton_o *)0x0) goto LAB_0352847c;
    fVar4 = ProgressLabelButton__MaxValue(pPVar2,(MethodInfo *)0x0);
    ProgressLabelButton__SetValue
              (pPVar2,fVar4 - (float)(long)uVar3,0.0,(System_Action_o *)0x0,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (__this_01 == (CHDGOFBHAFI_o *)0x0) goto LAB_0352847c;
    CHDGOFBHAFI__JADOIEAEGKL(__this_01,(__this->fields).HODAIAEDHBL,(MethodInfo *)0x0);
  }
  __this_02 = (__this->fields)._adIcon;
  if ((__this_02 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_03 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
     __this_03 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive
              (__this_03,0 < (long)uVar3 && (__this->fields).NGOMPLJHBHH != false,(MethodInfo *)0x0)
    ;
    return;
  }
LAB_0352847c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetCurrentPlayersTotal(int GGLAMDLKHIB)  [RVA 0x34288B4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$SetCurrentPlayersTotal @ RVA 0x34288B4

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetCurrentPlayersTotal
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,int32_t GGLAMDLKHIB,
               MethodInfo *method)

{
  (__this->fields).CMEBGPLHEGM = GGLAMDLKHIB;
  return;
}


// ===== private void HNKCOMGNDHP(Vector3 KGHODFICMMC)  [RVA 0x34288BC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$HNKCOMGNDHP @ RVA 0x34288BC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HNKCOMGNDHP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,
               UnityEngine_Vector3_o KGHODFICMMC,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_RectTransform_o *__this_00;
  
  pNVar1 = (__this->fields)._icon;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pNVar1,
               (pNVar1->klass->vtable)._23_set_color.method);
    pNVar1 = (__this->fields)._icon;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_UI_Graphic__get_rectTransform
                              ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
      UnityEngine_Transform__set_localPosition
                ((UnityEngine_Transform_o *)__this_00,KGHODFICMMC,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AGKAANKJCPM(int DLOFGOGAGAA)  [RVA 0x3428938]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$AGKAANKJCPM @ RVA 0x3428938

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__AGKAANKJCPM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,int32_t DLOFGOGAGAA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  MethodInfo *method_00;
  
  pNVar1 = (__this->fields)._icon;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              ((__this->fields).PIDNBPCOAOM.fields.r,(__this->fields).PIDNBPCOAOM.fields.g,
               (__this->fields).PIDNBPCOAOM.fields.b,(__this->fields).PIDNBPCOAOM.fields.a,pNVar1,
               (pNVar1->klass->vtable)._23_set_color.method);
    if ((__this->fields).KOPPGDKAEBP == DLOFGOGAGAA) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__EKLNAPJNGEA(__this,method_00);
    }
    else if (2 < DLOFGOGAGAA) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__OCCNCPHMCIH(__this,method_00);
    }
    EDFDANKEBGF__PELKGCAGICG((MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MIHNIBCCKAA()  [RVA 0x34289AC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$MIHNIBCCKAA @ RVA 0x34289AC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__MIHNIBCCKAA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_o UVar3;
  
  if ((DAT_04568123 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12913/*"Textures/Effects/Fight/hit"*/);
    FUN_01bab630(&StringLiteral_12914/*"Textures/Effects/Fight/hit_blade"*/);
    DAT_04568123 = 1;
  }
  pCVar1 = (__this->fields)._animationHitEffect;
  if (pCVar1 != (CocosAnimation_o *)0x0) {
    CocosAnimation__Init(pCVar1,StringLiteral_12913/*"Textures/Effects/Fight/hit"*/,0,(System_String_o *)0x0,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._animationHitEffect;
    if (pCVar1 != (CocosAnimation_o *)0x0) {
      (pCVar1->fields)._FEBBHCOAEMI_k__BackingField = 0;
      (pCVar1->fields)._PPEGDOHGLJJ_k__BackingField = 0.02;
      (pCVar1->fields)._NOAJIBNJKPE_k__BackingField = false;
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._animationHitEffect;
        if ((pCVar1 != (CocosAnimation_o *)0x0) &&
           (__this_00 = (pCVar1->fields)._MPAMHJJKABE_k__BackingField,
           __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar3 = UnityEngine_Transform__get_localPosition
                            ((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
          pCVar1 = (__this->fields)._animationSlashEffect;
          (__this->fields).BADCMPECIPC.fields.x = UVar3.fields.x;
          (__this->fields).BADCMPECIPC.fields.y = UVar3.fields.y;
          (__this->fields).BADCMPECIPC.fields.z = UVar3.fields.z;
          if (pCVar1 != (CocosAnimation_o *)0x0) {
            CocosAnimation__Init
                      (pCVar1,StringLiteral_12914/*"Textures/Effects/Fight/hit_blade"*/,0,(System_String_o *)0x0,(MethodInfo *)0x0);
            pCVar1 = (__this->fields)._animationSlashEffect;
            if (pCVar1 != (CocosAnimation_o *)0x0) {
              (pCVar1->fields)._FEBBHCOAEMI_k__BackingField = 0;
              (pCVar1->fields)._PPEGDOHGLJJ_k__BackingField = 0.02;
              (pCVar1->fields)._NOAJIBNJKPE_k__BackingField = false;
              pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
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


// ===== public void UpdateCooldownFinishTime(long LFJGFLNMBMC)  [RVA 0x3428ABC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$UpdateCooldownFinishTime @ RVA 0x3428ABC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__UpdateCooldownFinishTime
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,int64_t LFJGFLNMBMC,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  int64_t local_28;
  
  local_28 = LFJGFLNMBMC;
  if ((DAT_04568124 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10871/*"RaidInfoSprite::UpdateCooldownFinishTime: long_time: "*/);
    DAT_04568124 = 1;
  }
  pSVar1 = System_Int64__ToString((int64_t)&local_28,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_10871/*"RaidInfoSprite::UpdateCooldownFinishTime: long_time: "*/,pSVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  if (0 < local_28) {
    (__this->fields).HODAIAEDHBL = local_28 + 1000;
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__CIHKNMDAPBG(__this,method_00);
  }
  return;
}


// ===== public bool get_IsDestroyed()  [RVA 0x3428B7C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$get_IsDestroyed @ RVA 0x3428B7C

bool Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__get_IsDestroyed
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  return (__this->fields)._BOGAKJOFOEK_k__BackingField;
}


// ===== private void LFBBOGGALOC()  [RVA 0x3428B84]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$LFBBOGGALOC @ RVA 0x3428B84

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__LFBBOGGALOC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  System_Action_RaidInfoSprite__o *pSVar1;
  
  pSVar1 = (__this->fields).FCHKBFCNOJL;
  if (pSVar1 != (System_Action_RaidInfoSprite__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03528ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,__this,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DCGKJKKNCEP()  [RVA 0x3427744]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$DCGKJKKNCEP @ RVA 0x3427744

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__DCGKJKKNCEP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *__this_00;
  PGICCMFLDPI_o *pPVar2;
  int64_t iVar3;
  System_String_o *pSVar4;
  CHDGOFBHAFI_o *pCVar5;
  DG_Tweening_Sequence_o *pDVar6;
  System_Single_array *LLPEAMNMGML;
  UnityEngine_GameObject_o *pUVar7;
  DG_Tweening_Core_DOGetter_int__o **ppDVar8;
  DG_Tweening_Core_DOSetter_int__o *setter;
  DG_Tweening_Core_TweenerCore_int__int__NoOptions__o *pDVar9;
  ProgressLabelButton_o *__this_01;
  LabelButton_o *pLVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *pMVar11;
  Nekki_SF2_GUI_LabelAlias_o *pNVar12;
  AADKBCFCLKK_o *IIPPMAOIKHB;
  long lVar13;
  DG_Tweening_Sequence_o **ppDVar14;
  DG_Tweening_Core_DOGetter_int__o *getter;
  long lVar15;
  float fVar16;
  
  if ((DAT_04568125 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_DNDFMKKBDDJ__);
    FUN_01bab630(&float___TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Tween>__);
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_3A0B090895FEF4534B8C9BA7F9852C4A1122BF2036B87AC283D2089EA1E53EDF
                );
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_PPPNDALJNCM__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568125 = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((__this_00 != (KKLJIDJBFEI_o *)0x0) &&
     (pPVar2 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0), pPVar2 != (PGICCMFLDPI_o *)0x0
     )) {
    lVar13 = (pPVar2->fields).GDKPGIBMFPA;
    lVar15 = (__this->fields).PBACPHGLOFJ;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo);
    }
    iVar3 = LIIFLGALGNK__KBDEFJMHGFJ(lVar15 - lVar13,0,0x7fffffffffffffff,(MethodInfo *)0x0);
    pNVar12 = (__this->fields)._timeLabel;
    if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NGFEKJBMGEB_TypeInfo);
    }
    pSVar4 = NGFEKJBMGEB__BCGDPKJNJCH
                       (iVar3 / 1000,true,true,3599999 < iVar3,86399999 < iVar3,StringLiteral_2086/*":"*/,
                        true,true,true,true,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,
                        StringLiteral_1/*""*/,(MethodInfo *)0x0);
    if (pNVar12 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar12->klass->vtable)._75_set_text.methodPtr)
                (pNVar12,pSVar4,(pNVar12->klass->vtable)._75_set_text.method);
                    /* try { // try from 0352793c to 036279fb has its CatchHandler @ 0352793c
                       catch() { ... } // from try @ 0352793c with catch @ 0352793c
                       catch() { ... } // from try @ 03527a14 with catch @ 0352793c
                       catch() { ... } // from try @ 03527a6c with catch @ 0352793c
                       catch() { ... } // from try @ 03527a9c with catch @ 0352793c */
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pCVar5 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (pCVar5 != (CHDGOFBHAFI_o *)0x0) {
        IIPPMAOIKHB = (pCVar5->fields).AABMLCNHHPN;
        if (IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) {
          fVar16 = (float)(IIPPMAOIKHB->fields).IKNCNGMNPPK * 0.25 + 0.5;
          lVar13 = -0x8000000000000000;
          if (fVar16 != INFINITY) {
            lVar13 = (long)fVar16;
          }
          if ((iVar3 <= lVar13) &&
             (ppDVar14 = &(__this->fields).NEBFELNKBFG, *ppDVar14 == (DG_Tweening_Sequence_o *)0x0))
          {
            pNVar12 = (__this->fields)._timeLabel;
            if (pNVar12 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03527ce8;
            (*(pNVar12->klass->vtable)._23_set_color.methodPtr)
                      (0x3f800000,0,0,0x3f800000,pNVar12,
                       (pNVar12->klass->vtable)._23_set_color.method);
            if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pDVar6 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
            (__this->fields).NEBFELNKBFG = pDVar6;
            thunk_FUN_01c20e04(ppDVar14,pDVar6);
                    /* try { // try from 035279fc to 03627a03 has its CatchHandler @ 03527a50 */
                    /* try { // try from 03527a0c to 03627a13 has its CatchHandler @ 03527a4c */
            LLPEAMNMGML = (System_Single_array *)FUN_01bab718(float___TypeInfo,8);
                    /* try { // try from 03527a14 to 03627a67 has its CatchHandler @ 0352793c */
            pMVar11 = (MethodInfo *)0x0;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)LLPEAMNMGML,
                       Field_<PrivateImplementationDetails>_3A0B090895FEF4534B8C9BA7F9852C4A1122BF2036B87AC283D2089EA1E53EDF
                       ,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__POLDKNNNAIN(__this,0.08,LLPEAMNMGML,pMVar11)
            ;
            DG_Tweening_TweenSettingsExtensions__AppendInterval
                      ((__this->fields).NEBFELNKBFG,1.0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527a0c with catch @ 03527a4c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035279fc with catch @ 03527a50
                        */
            DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                      ((Il2CppObject *)(__this->fields).NEBFELNKBFG,-1,0,
                       Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
          }
                    /* try { // try from 03527a68 to 03627a6b has its CatchHandler @ 03527a8c */
                    /* try { // try from 03527a6c to 03627a93 has its CatchHandler @ 0352793c */
          bVar1 = OOBBAGLCFPF__IFFNMNFGOII(IIPPMAOIKHB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03527a68 with catch @ 03527a8c */
                    /* try { // try from 03527a94 to 03627a9b has its CatchHandler @ 03527ab0 */
          if (((bVar1) || (bVar1 = OOBBAGLCFPF__FLMDOPMDKID(IIPPMAOIKHB,(MethodInfo *)0x0), bVar1))
             || (bVar1 = OOBBAGLCFPF__EJBFAOJGGNB(IIPPMAOIKHB,(MethodInfo *)0x0), !bVar1)) {
            pNVar12 = (__this->fields)._waitingResultLabel;
            if ((pNVar12 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03527ce8;
            pMVar11 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FDPLPNKKGGO(__this,method_02);
            (__this->fields).JAJAHBKJECF = false;
          }
          else {
            pNVar12 = (__this->fields)._waitingResultLabel;
                    /* try { // try from 03527a9c to 03627aa7 has its CatchHandler @ 0352793c */
                    /* try { // try from 03527aa8 to 03627aaf has its CatchHandler @ 03527ab0 */
            if ((pNVar12 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03527ce8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03527a94 with catch @ 03527ab0
                       catch(type#2 @ 00000000) { ... } // from try @ 03527aa8 with catch @ 03527ab0
                        */
            pMVar11 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
            if ((__this->fields).JAJAHBKJECF == false) {
              Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FDPLPNKKGGO(__this,method_00);
              if ((Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->_2).cctor_finished == 0)
              {
                thunk_FUN_01ba7564();
              }
              getter = Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->static_fields->
                       __9__73_0;
              if (getter == (DG_Tweening_Core_DOGetter_int__o *)0x0) {
                if ((Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->_2).cctor_finished ==
                    0) {
                  thunk_FUN_01ba7564();
                }
                getter = (DG_Tweening_Core_DOGetter_int__o *)
                         thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<int>_TypeInfo);
                DG_Tweening_Core_DOGetter<int>___ctor();
                ppDVar8 = &Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_<>c_TypeInfo->static_fields->
                           __9__73_0;
                *ppDVar8 = getter;
                thunk_FUN_01c20e04(ppDVar8,getter);
              }
              setter = (DG_Tweening_Core_DOSetter_int__o *)
                       thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<int>_TypeInfo);
              DG_Tweening_Core_DOSetter<int>___ctor();
              if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pDVar9 = DG_Tweening_DOTween__To(getter,setter,3,2.8,(MethodInfo *)0x0);
              (__this->fields).ENDLGPAGCBA = (DG_Tweening_Tween_o *)pDVar9;
              thunk_FUN_01c20e04(&(__this->fields).ENDLGPAGCBA);
              pMVar11 = (MethodInfo *)0x0;
              DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                        ((Il2CppObject *)(__this->fields).ENDLGPAGCBA,-1,0,
                         Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Tween>__);
              (__this->fields).JAJAHBKJECF = true;
            }
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetTimerVisible(__this,false,pMVar11);
            pNVar12 = (__this->fields)._finishHimLabel;
            if ((pNVar12 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03527ce8;
            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
            __this_01 = (__this->fields)._btnFight;
            if ((__this_01 == (ProgressLabelButton_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03527ce8;
            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
            pLVar10 = (__this->fields)._btnFinalFight;
            if ((pLVar10 == (LabelButton_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pLVar10,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03527ce8;
            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
            pLVar10 = (__this->fields)._btnExit;
            if ((pLVar10 == (LabelButton_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pLVar10,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03527ce8;
            pMVar11 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__FMAEMJENECC(__this,method_01);
          }
          bVar1 = OOBBAGLCFPF__FLMDOPMDKID(IIPPMAOIKHB,(MethodInfo *)0x0);
          if (bVar1) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetRaidEndedState(__this,false,pMVar11);
            return;
          }
        }
        return;
      }
    }
  }
LAB_03527ce8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ProgressLabelButton get_BtnFight()  [RVA 0x3428D20]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$get_BtnFight @ RVA 0x3428D20

ProgressLabelButton_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__get_BtnFight
          (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  return (__this->fields)._btnFight;
}


// ===== public void UpdateTimer(int IMCJLJNEMKH)  [RVA 0x3428D28]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$UpdateTimer @ RVA 0x3428D28

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__UpdateTimer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,int32_t IMCJLJNEMKH,
               MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *__this_00;
  PGICCMFLDPI_o *pPVar2;
  System_Action_o *CJNHFNHJHPE;
  CHDGOFBHAFI_o *pCVar3;
  MethodInfo *method_00;
  
  if ((DAT_04568126 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_IAKHIFOFLGO__);
    DAT_04568126 = 1;
  }
  if (IMCJLJNEMKH < 1) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar3 != (CHDGOFBHAFI_o *)0x0) {
      bVar1 = OOBBAGLCFPF__FLMDOPMDKID((pCVar3->fields).AABMLCNHHPN,(MethodInfo *)0x0);
      if (bVar1) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetRaidEndedState(__this,false,method);
        return;
      }
      return;
    }
  }
  else {
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if ((__this_00 != (KKLJIDJBFEI_o *)0x0) &&
       (pPVar2 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0),
       pPVar2 != (PGICCMFLDPI_o *)0x0)) {
      (__this->fields).PBACPHGLOFJ = (pPVar2->fields).GDKPGIBMFPA + (long)(IMCJLJNEMKH * 1000);
      CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__DCGKJKKNCEP(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HGJMBLHCGKL()  [RVA 0x34289A4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$HGJMBLHCGKL @ RVA 0x34289A4

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HGJMBLHCGKL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  EDFDANKEBGF__PELKGCAGICG((MethodInfo *)0x0);
  return;
}


// ===== private void HMPBGKCCODK()  [RVA 0x342684C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$HMPBGKCCODK @ RVA 0x342684C

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HMPBGKCCODK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  DG_Tweening_Core_DOSetter_Vector3__o **ppDVar2;
  DG_Tweening_Core_DOSetter_Vector3__o **ppDVar3;
  int iVar4;
  UnityEngine_Vector3_Fields UVar5;
  int32_t iVar6;
  int32_t iVar7;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  DG_Tweening_Sequence_o *pDVar8;
  DG_Tweening_TweenCallback_o *pDVar9;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_BCMBCALCGMB_o *__this_03;
  System_Int32_array *pSVar10;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar11;
  MethodInfo *extraout_x1;
  int iVar12;
  DG_Tweening_Core_DOGetter_Vector3__o *pDVar13;
  DG_Tweening_Core_DOSetter_Vector3__o *pDVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  
  if ((DAT_04568127 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_CKFBDHBKOAA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_DJJKJAOMDHK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_FJKJNBBNBMG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_JJEECCDOIFG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_MNNMJOJHGNO__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_BCMBCALCGMB_HEBCBOMJJKB__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_BCMBCALCGMB_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&int___TypeInfo);
    FUN_01bab630(&Method_LIIFLGALGNK_DEICJJOIDDF<int>__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04568127 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_TypeInfo,
                                 method);
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    thunk_FUN_01c20e04(&__this_00->fields,__this);
    __this_01 = (__this->fields)._icon;
    if ((__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_02 = UnityEngine_UI_Graphic__get_rectTransform
                              ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar19 = UnityEngine_Transform__get_localPosition
                         ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
      (__this_00->fields).originPos.fields.x = UVar19.fields.x;
      (__this_00->fields).originPos.fields.y = UVar19.fields.y;
      (__this_00->fields).originPos.fields.z = UVar19.fields.z;
      iVar6 = (__this->fields).KOPPGDKAEBP;
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar6 = LIIFLGALGNK__HLMBDJOGONJ(1,iVar6,(MethodInfo *)0x0);
      (__this_00->fields).shakesCount = iVar6;
      pDVar8 = (__this->fields).OMICAAONCIB;
      if (pDVar8 != (DG_Tweening_Sequence_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)pDVar8,false,(MethodInfo *)0x0);
      }
      ppDVar1 = &(__this->fields).OMICAAONCIB;
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      *ppDVar1 = pDVar8;
      thunk_FUN_01c20e04(ppDVar1,pDVar8);
      pDVar8 = *ppDVar1;
      pDVar9 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar8,pDVar9,(MethodInfo *)0x0);
      if (0 < (__this_00->fields).shakesCount) {
        iVar12 = 0;
        ppDVar2 = &(__this_00->fields).__9__3;
        ppDVar3 = &(__this_00->fields).__9__5;
        do {
          __this_03 = (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_BCMBCALCGMB_o *)
                      thunk_FUN_01bda818(
                                        Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_BCMBCALCGMB_TypeInfo
                                        );
          Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_BCMBCALCGMB___ctor(__this_03,(MethodInfo *)0x0)
          ;
          pSVar10 = (System_Int32_array *)FUN_01bab718(int___TypeInfo,2);
          if (pSVar10 == (System_Int32_array *)0x0) goto LAB_03526de0;
          iVar4 = (int)pSVar10->max_length;
          if ((iVar4 == 0) || (pSVar10->m_Items[0] = 1, iVar4 == 1)) {
LAB_03526ddc:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pSVar10->m_Items[1] = -1;
          if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar6 = LIIFLGALGNK__DEICJJOIDDF<int>(pSVar10,Method_LIIFLGALGNK_DEICJJOIDDF<int>__);
          pSVar10 = (System_Int32_array *)FUN_01bab718(int___TypeInfo,2);
          if (pSVar10 == (System_Int32_array *)0x0) goto LAB_03526de0;
          iVar4 = (int)pSVar10->max_length;
          if ((iVar4 == 0) || (pSVar10->m_Items[0] = 1, iVar4 == 1)) goto LAB_03526ddc;
          pSVar10->m_Items[1] = -1;
          iVar7 = LIIFLGALGNK__DEICJJOIDDF<int>(pSVar10,Method_LIIFLGALGNK_DEICJJOIDDF<int>__);
          fVar15 = LIIFLGALGNK__GFHNCCOMPAJ(8.0,(MethodInfo *)0x0);
          fVar18 = fVar15 * (float)iVar6 + 4.0;
          fVar15 = LIIFLGALGNK__GFHNCCOMPAJ(8.0,(MethodInfo *)0x0);
          fVar15 = fVar15 * (float)iVar7 + 4.0;
          if (2 < (__this_00->fields).shakesCount) {
            if (fVar18 <= fVar15) {
              fVar15 = (float)(iVar7 << 3);
            }
            else {
              fVar18 = (float)(iVar6 << 3);
            }
          }
          if (__this_03 == (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_BCMBCALCGMB_o *)0x0)
          goto LAB_03526de0;
                    /* try { // try from 03526b94 to 03626c63 has its CatchHandler @ 03526b94
                       catch() { ... } // from try @ 03526b94 with catch @ 03526b94
                       catch() { ... } // from try @ 03526c8c with catch @ 03526b94
                       catch() { ... } // from try @ 03526d18 with catch @ 03526b94
                       catch() { ... } // from try @ 03526d48 with catch @ 03526b94 */
          uVar16 = (__this_00->fields).originPos.fields.y;
          uVar17 = (__this_00->fields).originPos.fields.z;
          (__this_03->fields).shakePos.fields.x = fVar18 + (__this_00->fields).originPos.fields.x;
          (__this_03->fields).shakePos.fields.y = fVar15 + (float)uVar16;
          (__this_03->fields).shakePos.fields.z = (float)uVar17 + 0.0;
          pDVar13 = (__this_00->fields).__9__2;
          pDVar8 = *ppDVar1;
          if (pDVar13 == (DG_Tweening_Core_DOGetter_Vector3__o *)0x0) {
            pDVar13 = (DG_Tweening_Core_DOGetter_Vector3__o *)
                      thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
            DG_Tweening_Core_DOGetter<Vector3>___ctor();
            (__this_00->fields).__9__2 = pDVar13;
            thunk_FUN_01c20e04(&(__this_00->fields).__9__2,pDVar13);
          }
          pDVar14 = *ppDVar2;
          if (pDVar14 == (DG_Tweening_Core_DOSetter_Vector3__o *)0x0) {
            pDVar14 = (DG_Tweening_Core_DOSetter_Vector3__o *)
                      thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
            DG_Tweening_Core_DOSetter<Vector3>___ctor();
            (__this_00->fields).__9__3 = pDVar14;
            thunk_FUN_01c20e04(ppDVar2,pDVar14);
          }
          UVar5 = (__this_03->fields).shakePos.fields;
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 03526c64 to 03626c6b has its CatchHandler @ 03526cf8 */
                    /* try { // try from 03526c80 to 03626c8b has its CatchHandler @ 03526cfc */
          pDVar11 = DG_Tweening_DOTween__To
                              (pDVar13,pDVar14,(UnityEngine_Vector3_o)UVar5,0.08,(MethodInfo *)0x0);
                    /* try { // try from 03526c8c to 03626d13 has its CatchHandler @ 03526b94 */
          DG_Tweening_TweenSettingsExtensions__Append
                    (pDVar8,(DG_Tweening_Tween_o *)pDVar11,(MethodInfo *)0x0);
          pDVar8 = *ppDVar1;
          pDVar13 = (DG_Tweening_Core_DOGetter_Vector3__o *)
                    thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
          DG_Tweening_Core_DOGetter<Vector3>___ctor();
          pDVar14 = *ppDVar3;
          if (pDVar14 == (DG_Tweening_Core_DOSetter_Vector3__o *)0x0) {
            pDVar14 = (DG_Tweening_Core_DOSetter_Vector3__o *)
                      thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
            DG_Tweening_Core_DOSetter<Vector3>___ctor();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03526c64 with catch @ 03526cf8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03526c80 with catch @ 03526cfc
                        */
            (__this_00->fields).__9__5 = pDVar14;
            thunk_FUN_01c20e04(ppDVar3,pDVar14);
          }
                    /* try { // try from 03526d14 to 03626d17 has its CatchHandler @ 03526d38 */
          UVar5 = (__this_00->fields).originPos.fields;
                    /* try { // try from 03526d18 to 03626d3f has its CatchHandler @ 03526b94 */
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* catch() { ... } // from try @ 03526d14 with catch @ 03526d38 */
                    /* try { // try from 03526d40 to 03626d47 has its CatchHandler @ 03526d5c */
                    /* try { // try from 03526d48 to 03626d53 has its CatchHandler @ 03526b94 */
          pDVar11 = DG_Tweening_DOTween__To
                              (pDVar13,pDVar14,(UnityEngine_Vector3_o)UVar5,0.08,(MethodInfo *)0x0);
                    /* try { // try from 03526d54 to 03626d5b has its CatchHandler @ 03526d5c */
          DG_Tweening_TweenSettingsExtensions__Append
                    (pDVar8,(DG_Tweening_Tween_o *)pDVar11,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03526d40 with catch @ 03526d5c
                       catch(type#2 @ 00000000) { ... } // from try @ 03526d54 with catch @ 03526d5c
                        */
                    /* try { // try from 03526d60 to 03626e93 has its CatchHandler @ 03526d60
                       catch() { ... } // from try @ 03526d60 with catch @ 03526d60
                       catch() { ... } // from try @ 03526ecc with catch @ 03526d60
                       catch() { ... } // from try @ 03526f20 with catch @ 03526d60
                       catch() { ... } // from try @ 03526f60 with catch @ 03526d60 */
          iVar12 = iVar12 + 1;
        } while (iVar12 < (__this_00->fields).shakesCount);
      }
      pDVar8 = *ppDVar1;
      pDVar9 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar8,pDVar9,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03526de0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OGJEAHMIGLK(int DFIBGGDJPLM, int NJFJAKIHMEO)  [RVA 0x3427E48]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$OGJEAHMIGLK @ RVA 0x3427E48

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__OGJEAHMIGLK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,int32_t DFIBGGDJPLM,
               int32_t NJFJAKIHMEO,MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  int iVar2;
  
                    /* try { // try from 03527e68 to 03627e6f has its CatchHandler @ 03527ef0 */
  if ((DAT_04568128 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2273/*"<color=#00000000>"*/);
    FUN_01bab630(&StringLiteral_2433/*"<quad name=RaidMisc.clocks2 /> ^raidWaiting^"*/);
                    /* try { // try from 03527e8c to 03627ea7 has its CatchHandler @ 03527ef4 */
    FUN_01bab630(&StringLiteral_2179/*"</color>"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 03527ea8 to 03627edb has its CatchHandler @ 03527dc4 */
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_04568128 = 1;
  }
  pSVar1 = StringLiteral_1/*""*/;
  iVar2 = DFIBGGDJPLM;
  if (0 < DFIBGGDJPLM) {
    do {
                    /* try { // try from 03527edc to 03627edf has its CatchHandler @ 03527eec */
      pSVar1 = System_String__Concat(pSVar1,StringLiteral_1377/*"."*/,(MethodInfo *)0x0);
                    /* try { // try from 03527ee0 to 03627ee3 has its CatchHandler @ 03527ee8 */
      iVar2 = iVar2 + -1;
                    /* try { // try from 03527ee4 to 03627f0b has its CatchHandler @ 03527dc4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527ee0 with catch @ 03527ee8
                        */
    } while (iVar2 != 0);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527edc with catch @ 03527eec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527e68 with catch @ 03527ef0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527e8c with catch @ 03527ef4
                        */
  if (DFIBGGDJPLM < NJFJAKIHMEO) {
                    /* try { // try from 03527f0c to 03627f0f has its CatchHandler @ 03527f38 */
                    /* try { // try from 03527f10 to 03627f47 has its CatchHandler @ 03527dc4 */
    pSVar1 = System_String__Concat(pSVar1,StringLiteral_2273/*"<color=#00000000>"*/,(MethodInfo *)0x0);
    iVar2 = NJFJAKIHMEO - DFIBGGDJPLM;
    do {
      pSVar1 = System_String__Concat(pSVar1,StringLiteral_1377/*"."*/,(MethodInfo *)0x0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
                    /* catch() { ... } // from try @ 03527f0c with catch @ 03527f38 */
    pSVar1 = System_String__Concat(pSVar1,StringLiteral_2179/*"</color>"*/,(MethodInfo *)0x0);
  }
                    /* try { // try from 03527f48 to 03627f4f has its CatchHandler @ 03527f64 */
  __this_00 = (__this->fields)._waitingResultLabel;
                    /* try { // try from 03527f50 to 03627f5b has its CatchHandler @ 03527dc4 */
  pSVar1 = System_String__Concat(StringLiteral_2433/*"<quad name=RaidMisc.clocks2 /> ^raidWaiting^"*/,pSVar1,(MethodInfo *)0x0);
  if (__this_00 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03527f5c to 03627f63 has its CatchHandler @ 03527f64 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03527f48 with catch @ 03527f64
                       catch(type#2 @ 00000000) { ... } // from try @ 03527f5c with catch @ 03527f64
                        */
  Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,pSVar1,(MethodInfo *)0x0);
  return;
}


// ===== private void MCDEEDAKMGB()  [RVA 0x3428E68]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$MCDEEDAKMGB @ RVA 0x3428E68

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__MCDEEDAKMGB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  AJOGJBFNELI_o *__this_00;
  MethodInfo *extraout_x1;
  System_Action_RaidInfoSprite__o *pSVar1;
  
  if ((DAT_04568129 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_TypeInfo);
    DAT_04568129 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
  if (__this_00 != (AJOGJBFNELI_o *)0x0) {
    AJOGJBFNELI__ILNDICIHADK(__this_00,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).HNHLJHHKELD;
    if (pSVar1 != (System_Action_RaidInfoSprite__o *)0x0) {
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,__this,(pSVar1->fields).super.super.method
                );
      Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_TypeInfo->static_fields->FPJJPFJDKNP = false;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GCGMACNOCJA(bool CJNHFNHJHPE)  [RVA 0x3428F0C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$GCGMACNOCJA @ RVA 0x3428F0C

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__GCGMACNOCJA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._BOGAKJOFOEK_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void Init()  [RVA 0x3428F18]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$Init @ RVA 0x3428F18

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  ProgressBar_o *pPVar3;
  ProgressLabelButton_o *pPVar4;
  LabelButton_o *pLVar5;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *pNVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  BHEDGAKGKPO_StaticFields *pBVar8;
  UnityEngine_Events_UnityEvent_o *pUVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_0456812a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_IAKHIFOFLGO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_LFBBOGGALOC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_MCDEEDAKMGB__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_17789/*"dlgExitFightTitle"*/);
    FUN_01bab630(&StringLiteral_10849/*"RaidFinishHim"*/);
    FUN_01bab630(&StringLiteral_21202/*"startFinalFight"*/);
    FUN_01bab630(&StringLiteral_1922/*"10:00"*/);
    FUN_01bab630(&StringLiteral_1938/*"1700/2000"*/);
    FUN_01bab630(&StringLiteral_21200/*"startFight"*/);
    DAT_0456812a = 1;
    method = extraout_x1;
  }
  (__this->fields).HODAIAEDHBL = 0;
  (__this->fields).HOFACOGJODC = true;
  (__this->fields).KOPPGDKAEBP = 5;
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  pNVar1 = (__this->fields)._name;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._name;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                (ZEXT416((uint)(pBVar8->FHIAKPJBBCB).fields.r),(pBVar8->FHIAKPJBBCB).fields.g,
                 (pBVar8->FHIAKPJBBCB).fields.b,(pBVar8->FHIAKPJBBCB).fields.a,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      pNVar1 = (__this->fields)._waitingResultLabel;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._waitingResultLabel;
        if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
          (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                    (ZEXT416((uint)(pBVar8->FHIAKPJBBCB).fields.r),(pBVar8->FHIAKPJBBCB).fields.g,
                     (pBVar8->FHIAKPJBBCB).fields.b,(pBVar8->FHIAKPJBBCB).fields.a,pNVar1,
                     (pNVar1->klass->vtable)._23_set_color.method);
          pNVar1 = (__this->fields)._waitingResultLabel;
          if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
            __this_00 = (__this->fields)._completedIcon;
            if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
              pPVar3 = (__this->fields)._bossLifeBar;
              if (pPVar3 != (ProgressBar_o *)0x0) {
                (*(pPVar3->klass->vtable)._11_SetValueBorders.methodPtr)
                          (ZEXT816(0),0x3f800000,pPVar3,
                           (pPVar3->klass->vtable)._11_SetValueBorders.method);
                pPVar3 = (__this->fields)._bossLifeBar;
                if (pPVar3 != (ProgressBar_o *)0x0) {
                  (*(pPVar3->klass->vtable)._8_SetValue.methodPtr)
                            (ZEXT816(0x3f800000),0,pPVar3,0,
                             (pPVar3->klass->vtable)._8_SetValue.method);
                  pNVar1 = (__this->fields)._bossLifeValue;
                  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                              (pNVar1,StringLiteral_1938/*"1700/2000"*/,(pNVar1->klass->vtable)._75_set_text.method
                              );
                    pNVar1 = (__this->fields)._bossLifeValue;
                    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
                      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                                (ZEXT416((uint)(pBVar8->FHIAKPJBBCB).fields.r),
                                 (pBVar8->FHIAKPJBBCB).fields.g,(pBVar8->FHIAKPJBBCB).fields.b,
                                 (pBVar8->FHIAKPJBBCB).fields.a,pNVar1,
                                 (pNVar1->klass->vtable)._23_set_color.method);
                      pNVar1 = (__this->fields)._finishHimLabel;
                      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                        Nekki_SF2_GUI_LabelAlias__set_Alias
                                  (pNVar1,StringLiteral_10849/*"RaidFinishHim"*/,(MethodInfo *)0x0);
                        pNVar1 = (__this->fields)._finishHimLabel;
                        if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                          pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
                          (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                                    (ZEXT416((uint)(pBVar8->FHIAKPJBBCB).fields.r),
                                     (pBVar8->FHIAKPJBBCB).fields.g,(pBVar8->FHIAKPJBBCB).fields.b,
                                     (pBVar8->FHIAKPJBBCB).fields.a,pNVar1,
                                     (pNVar1->klass->vtable)._23_set_color.method);
                          pNVar1 = (__this->fields)._finishHimLabel;
                          if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                             (pUVar2 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)pNVar1,
                                                  (MethodInfo *)0x0),
                             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
                            pNVar1 = (__this->fields)._timeLabel;
                            (__this->fields).PBACPHGLOFJ = 0;
                            if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                              pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
                              (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                                        (ZEXT416((uint)(pBVar8->FHIAKPJBBCB).fields.r),
                                         (pBVar8->FHIAKPJBBCB).fields.g,
                                         (pBVar8->FHIAKPJBBCB).fields.b,
                                         (pBVar8->FHIAKPJBBCB).fields.a,pNVar1,
                                         (pNVar1->klass->vtable)._23_set_color.method);
                              pNVar1 = (__this->fields)._timeLabel;
                              if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                                          (pNVar1,StringLiteral_1922/*"10:00"*/,
                                           (pNVar1->klass->vtable)._75_set_text.method);
                                pPVar4 = (__this->fields)._btnFight;
                                if (pPVar4 != (ProgressLabelButton_o *)0x0) {
                                  ProgressLabelButton__Init(pPVar4,(MethodInfo *)0x0);
                                  pPVar4 = (__this->fields)._btnFight;
                                  if (pPVar4 != (ProgressLabelButton_o *)0x0) {
                                    LabelButton__set_Alias
                                              ((LabelButton_o *)pPVar4,StringLiteral_21200/*"startFight"*/,
                                               (MethodInfo *)0x0);
                                    pLVar5 = (__this->fields)._btnFinalFight;
                                    if (pLVar5 != (LabelButton_o *)0x0) {
                                      LabelButton__set_ButtonColor(pLVar5,2,(MethodInfo *)0x0);
                                      pLVar5 = (__this->fields)._btnFinalFight;
                                      if (pLVar5 != (LabelButton_o *)0x0) {
                                        LabelButton__set_Alias
                                                  (pLVar5,StringLiteral_21202/*"startFinalFight"*/,(MethodInfo *)0x0);
                                        pLVar5 = (__this->fields)._btnExit;
                                        if (pLVar5 != (LabelButton_o *)0x0) {
                                          LabelButton__set_ButtonColor(pLVar5,0,(MethodInfo *)0x0);
                                          pLVar5 = (__this->fields)._btnExit;
                                          if (pLVar5 != (LabelButton_o *)0x0) {
                                            LabelButton__set_Alias
                                                      (pLVar5,StringLiteral_17789/*"dlgExitFightTitle"*/,(MethodInfo *)0x0)
                                            ;
                                            pLVar5 = (__this->fields)._btnExit;
                                            if ((pLVar5 != (LabelButton_o *)0x0) &&
                                               (pUVar2 = UnityEngine_Component__get_gameObject
                                                                   ((UnityEngine_Component_o *)
                                                                    pLVar5,(MethodInfo *)0x0),
                                               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                                              UnityEngine_GameObject__SetActive
                                                        (pUVar2,false,(MethodInfo *)0x0);
                                              pNVar6 = 
                                                  Nekki_SF2_GUI_Map_RaidQuestsButton__Instantiate
                                                            ((__this->fields).
                                                             _raidQuestsButtonSpawnPosition,
                                                             (MethodInfo *)0x0);
                                              (__this->fields).OBCKMMPHFNP = pNVar6;
                                              thunk_FUN_01c20e04(&(__this->fields).OBCKMMPHFNP);
                                              auVar10 = NEON_fmov(0x3f800000,4);
                                              (__this->fields).MOFFPNNIMBJ = 0;
                                              (__this->fields).CMEBGPLHEGM = 0;
                                              (__this->fields).FNBDHKCAFMJ = 0.0;
                                              (__this->fields).PIDNBPCOAOM.fields.b =
                                                   (float)(int)auVar10._8_8_;
                                              (__this->fields).PIDNBPCOAOM.fields.a =
                                                   (float)(int)((ulong)auVar10._8_8_ >> 0x20);
                                              (__this->fields).PIDNBPCOAOM.fields.r =
                                                   (float)(int)auVar10._0_8_;
                                              (__this->fields).PIDNBPCOAOM.fields.g =
                                                   (float)(int)((ulong)auVar10._0_8_ >> 0x20);
                                              Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__MIHNIBCCKAA
                                                        (__this,method_00);
                                              pPVar4 = (__this->fields)._btnFight;
                                              (__this->fields).JAJAHBKJECF = false;
                                              if (pPVar4 != (ProgressLabelButton_o *)0x0) {
                                                pUVar9 = (UnityEngine_Events_UnityEvent_o *)
                                                         (pPVar4->fields).super.super.super.super.
                                                         m_OnClick;
                                                pUVar7 = (UnityEngine_Events_UnityAction_o *)
                                                         thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 03529354 to 03629363 has its CatchHandler @ 03529354
                       catch() { ... } // from try @ 03529354 with catch @ 03529354
                       catch() { ... } // from try @ 035293a0 with catch @ 03529354
                       catch() { ... } // from try @ 035293d8 with catch @ 03529354
                       catch() { ... } // from try @ 03529438 with catch @ 03529354 */
                                                UnityEngine_Events_UnityAction___ctor();
                                                if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0
                                                   ) {
                    /* try { // try from 03529364 to 03629367 has its CatchHandler @ 035293a4 */
                                                  UnityEngine_Events_UnityEvent__AddListener
                                                            (pUVar9,pUVar7,(MethodInfo *)0x0);
                                                  pLVar5 = (__this->fields)._btnFinalFight;
                                                  if (pLVar5 != (LabelButton_o *)0x0) {
                    /* try { // try from 0352937c to 0362938f has its CatchHandler @ 035293a8 */
                                                    pUVar9 = (UnityEngine_Events_UnityEvent_o *)
                                                             (pLVar5->fields).super.super.super.
                                                             m_OnClick;
                                                    pUVar7 = (UnityEngine_Events_UnityAction_o *)
                                                             thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                                                  UnityEngine_Events_UnityAction___ctor();
                    /* try { // try from 0352939c to 0362939f has its CatchHandler @ 035293a0 */
                                                  if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)
                                                                0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0352939c with catch @ 035293a0
                       try { // try from 035293a0 to 036293bf has its CatchHandler @ 03529354 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03529364 with catch @ 035293a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0352937c with catch @ 035293a8
                        */
                                                    UnityEngine_Events_UnityEvent__AddListener
                                                              (pUVar9,pUVar7,(MethodInfo *)0x0);
                                                    pLVar5 = (__this->fields)._btnExit;
                                                    if (pLVar5 != (LabelButton_o *)0x0) {
                    /* try { // try from 035293c0 to 036293d7 has its CatchHandler @ 03529430 */
                                                      pUVar9 = (UnityEngine_Events_UnityEvent_o *)
                                                               (pLVar5->fields).super.super.super.
                                                               m_OnClick;
                                                      pUVar7 = (UnityEngine_Events_UnityAction_o *)
                                                               thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 035293d8 to 0362941f has its CatchHandler @ 03529354 */
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)
                                                                0x0) {
                                                    UnityEngine_Events_UnityEvent__AddListener
                                                              (pUVar9,pUVar7,(MethodInfo *)0x0);
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


// ===== private void POLDKNNNAIN(float AINBPAEDKKN, float[] LLPEAMNMGML)  [RVA 0x3428BAC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$POLDKNNNAIN @ RVA 0x3428BAC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__POLDKNNNAIN
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,float AINBPAEDKKN,
               System_Single_array *LLPEAMNMGML,MethodInfo *method)

{
  uint uVar1;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  ulong uVar2;
  DG_Tweening_Sequence_o *s;
  ulong uVar3;
  float endValue;
  
  if ((DAT_0456812b & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_DKGKMOKJLHM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_IJKMDJGGDKK__);
    DAT_0456812b = 1;
  }
  if (LLPEAMNMGML != (System_Single_array *)0x0) {
    if (0 < (int)LLPEAMNMGML->max_length) {
      uVar3 = 0;
      uVar2 = LLPEAMNMGML->max_length & 0xffffffff;
      do {
        if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        endValue = LLPEAMNMGML->m_Items[uVar3];
        s = (__this->fields).NEBFELNKBFG;
        getter = (DG_Tweening_Core_DOGetter_float__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
        DG_Tweening_Core_DOGetter<float>___ctor();
        setter = (DG_Tweening_Core_DOSetter_float__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
        DG_Tweening_Core_DOSetter<float>___ctor();
        if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        t = DG_Tweening_DOTween__To(getter,setter,endValue,AINBPAEDKKN,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append(s,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
        uVar1 = (uint)LLPEAMNMGML->max_length;
        uVar2 = (ulong)uVar1;
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)uVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

