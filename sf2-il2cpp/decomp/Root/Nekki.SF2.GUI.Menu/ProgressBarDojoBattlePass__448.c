// TypeDefIndex 448
// Namespace: Nekki.SF2.GUI.Menu
// public class ProgressBarDojoBattlePass : MonoBehaviour
// Fields:
//   public const string BASE_PATH = "UI/Textures/BP/";
//   private const string HJLNHPIMOAM = ".Progressbar_back";
//   private const string GMKGGMPFIMA = ".Progressbar_strip";
//   private const string BDEONELMGIB = ".Progressbar_frame";
//   private const string MBHKJOMCJBI = ".VIP_unlocked";
//   private const string AAIBJNODHJP = ".VIP_locked";
//   private string AIFCDABONKN; // 0x20
//   private ProgressBar _barPrice; // 0x28
//   private ResolutionImageSkew _back; // 0x30
//   private ResolutionImageSkew _strip; // 0x38
//   private ResolutionImageSkew _border; // 0x40
//   private LabelAlias _levelProgress; // 0x48
//   private SFButton _rewardButton; // 0x50
//   private ResolutionImage _rewardPicture; // 0x58
//   private ResolutionImage _rewardShineBorder; // 0x60
//   private SFButton _hintButton; // 0x68
//   private RectTransform _hintContent; // 0x70
//   private LabelAlias _hintText; // 0x78
//   private SFButton _battlePassButton; // 0x80
//   private ResolutionImage _battlePassIcon; // 0x88
//   private ResolutionImage _vipIcon; // 0x90
//   private bool IHIEPGHGHKH; // 0x98
//   private static bool ABLFFDNPHDE; // 0x0
//   private IEnumerator JJNJMJMBOLN; // 0xA0
//   private Sequence GOPKOMPBHKM; // 0xA8
//   private bool IKLIGGACIMH; // 0xB0
//   private int NJICOEOHBKA; // 0xB4

// ===== private void PBNBBJPDHGK()  [RVA 0x357381C]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$PBNBBJPDHGK @ RVA 0x357381C

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__PBNBBJPDHGK
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
                    /* try { // try from 03673830 to 03773833 has its CatchHandler @ 03673864 */
  if ((DAT_04568c73 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568c73 = 1;
  }
                    /* try { // try from 03673850 to 03773863 has its CatchHandler @ 0367397c */
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).JJNJMJMBOLN;
  pSVar8 = *ppSVar7;
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03673830 with catch @ 03673864
                       try { // try from 03673864 to 037738e7 has its CatchHandler @ 0366c1b0 */
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 0366d528 with catch @ 0367386c */
                    /* catch() { ... } // from try @ 0367261c with catch @ 03673870 */
  uVar5 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 03672614 with catch @ 03673874 */
                    /* catch() { ... } // from try @ 0366d54c with catch @ 03673878 */
  if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 0366d4f0 with catch @ 0367387c */
                    /* catch() { ... } // from try @ 0366d4d8 with catch @ 03673880 */
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 0366d554 with catch @ 03673884 */
                    /* catch() { ... } // from try @ 0366d53c with catch @ 03673888 */
                    /* catch() { ... } // from try @ 0366d510 with catch @ 0367388c */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* catch() { ... } // from try @ 0366d438 with catch @ 036738ac */
                    /* catch() { ... } // from try @ 0366d4b8 with catch @ 036738b0 */
                    /* catch() { ... } // from try @ 03672600 with catch @ 036738b4 */
                    /* catch() { ... } // from try @ 0366d4a4 with catch @ 036738b8 */
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_036738bc;
      }
                    /* catch() { ... } // from try @ 0366d48c with catch @ 03673890 */
      uVar5 = uVar5 - 1;
                    /* catch() { ... } // from try @ 0366d4d0 with catch @ 03673894 */
      piVar6 = piVar6 + 4;
                    /* catch() { ... } // from try @ 0367260c with catch @ 03673898 */
    } while (uVar5 != 0);
  }
                    /* catch() { ... } // from try @ 0366d45c with catch @ 0367389c */
                    /* catch() { ... } // from try @ 0366d444 with catch @ 036738a0 */
                    /* catch() { ... } // from try @ 03672608 with catch @ 036738a4 */
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
                    /* catch() { ... } // from try @ 03672604 with catch @ 036738a8 */
LAB_036738bc:
                    /* catch() { ... } // from try @ 0366d450 with catch @ 036738bc */
                    /* catch() { ... } // from try @ 0366d408 with catch @ 036738c0 */
                    /* catch() { ... } // from try @ 0366d3fc with catch @ 036738c4 */
                    /* catch() { ... } // from try @ 036725fc with catch @ 036738c8 */
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
                    /* catch() { ... } // from try @ 036725f8 with catch @ 036738cc */
  __this_00 = (__this->fields)._hintContent;
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 036738e8 to 037738eb has its CatchHandler @ 036738f8 */
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
  }
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
                    /* catch() { ... } // from try @ 036738e8 with catch @ 036738f8 */
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void MMCHECDCGKF()  [RVA 0x357390C]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$MMCHECDCGKF @ RVA 0x357390C

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__MMCHECDCGKF
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03673940 to 03773967 has its CatchHandler @ 0367397c */
    FUN_01bab8c8();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__UpdateProgressBar(__this,method_00);
    return;
  }
  return;
}


// ===== public void Init()  [RVA 0x3574458]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$Init @ RVA 0x3574458

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__Init
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  ProgressBar_o *pPVar2;
  EGMONPGHHDP_o *pEVar3;
  System_Delegate_o *b;
  MethodInfo *extraout_x1;
  SFButton_o *pSVar4;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_Action_o **ppSVar5;
  System_Action_o *pSVar6;
  
  if ((DAT_04568c74 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_MMCHECDCGKF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_OPPAPHIKOLL__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_1888/*"100%"*/);
    DAT_04568c74 = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields)._hintButton;
  if (pSVar4 != (SFButton_o *)0x0) {
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._levelProgress;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                  (pNVar1,StringLiteral_1888/*"100%"*/,(pNVar1->klass->vtable)._75_set_text.method);
        pPVar2 = (__this->fields)._barPrice;
        (__this->fields).IKLIGGACIMH = false;
        if (pPVar2 != (ProgressBar_o *)0x0) {
          (*(pPVar2->klass->vtable)._6_Init.methodPtr)
                    (pPVar2,(pPVar2->klass->vtable)._6_Init.method);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar3 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
          if (pEVar3 != (EGMONPGHHDP_o *)0x0) {
            ppSVar5 = &(pEVar3->fields)._MJGJOMCLIPN_k__BackingField;
            pSVar6 = *ppSVar5;
            b = (System_Delegate_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            pSVar6 = (System_Action_o *)
                     System_Delegate__Combine((System_Delegate_o *)pSVar6,b,(MethodInfo *)0x0);
            if ((pSVar6 != (System_Action_o *)0x0) && (pSVar6->klass != System_Action_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pSVar6);
            }
            *ppSVar5 = pSVar6;
            thunk_FUN_01c20e04(ppSVar5,pSVar6);
            pPVar2 = (__this->fields)._barPrice;
            if (pPVar2 != (ProgressBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036745f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pPVar2->klass->vtable)._6_Init.methodPtr)
                        (pPVar2,(pPVar2->klass->vtable)._6_Init.method);
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


// ===== public void GetBattlePassReward()  [RVA 0x3574608]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$GetBattlePassReward @ RVA 0x3574608

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__GetBattlePassReward
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  int32_t HGIALBGPMAO;
  uint uVar1;
  long lVar2;
  bool bVar3;
  EGMONPGHHDP_o *__this_00;
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  Il2CppObject *pIVar5;
  System_Action_o *BLMFLPJJMPF;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this_02;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  NBLEEDEAPHB_o *__this_03;
  System_Action_object__o *BLMFLPJJMPF_00;
  System_String_o *OOKEKJMFKPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_03;
  MethodInfo *in_x3;
  NBLEEDEAPHB_array *pNVar9;
  System_String_o *CADMJIKLNCN;
  
  if ((DAT_04568c75 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1563);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1564);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1565);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1566);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1567);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1568);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_ALBHLGLKFFI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_UpdateProgressBar__);
    FUN_01bab630(&Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568c75 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).IKLIGGACIMH == false) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)
                EGMONPGHHDP__OKBKFJKEAAG(__this_00,(MethodInfo *)0x0);
    if (__this_01 == (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0) {
      return;
    }
    Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__KIPDEKLDABN
              (__this_01,(JMDPBFOCHHP_CKEMIAEPGKD_o *)__this_01,(__this->fields).NJICOEOHBKA,in_x3);
    pNVar4 = (__this_01->fields)._hintText;
    if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pIVar5 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pNVar4,
                            (__this->fields).NJICOEOHBKA,
                            Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                           ), pIVar5 != (Il2CppObject *)0x0)) {
      if ((*(char *)&pIVar5[2].monitor == '\0') ||
         (bVar3 = EGMONPGHHDP__PJKNOEOGFNM(__this_00,(MethodInfo *)0x0), bVar3)) {
        HGIALBGPMAO = (__this->fields).NJICOEOHBKA;
        BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        EGMONPGHHDP__MJPJLODOPOH
                  (__this_00,HGIALBGPMAO,BLMFLPJJMPF,(System_String_o *)0x0,(MethodInfo *)0x0);
        return;
      }
      method_00 = extraout_x1_00;
      if ((Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_01;
      }
      if (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_TypeInfo->static_fields->ABLFFDNPHDE != false
         ) {
        __this_02 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
        CADMJIKLNCN = (__this->fields).AIFCDABONKN;
        IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                   Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1563,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1564,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        __this_03 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
        NBLEEDEAPHB___ctor(__this_03,pSVar8,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,0,-1,
                           (IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                           (MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
        if (IJIPABLCAKE == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) goto LAB_03674b2c;
        pNVar9 = (IJIPABLCAKE->fields)._items;
        (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
        if (pNVar9 == (NBLEEDEAPHB_array *)0x0) goto LAB_03674b2c;
        uVar1 = (IJIPABLCAKE->fields)._size;
        if (uVar1 < (uint)pNVar9->max_length) {
          (IJIPABLCAKE->fields)._size = uVar1 + 1;
          pNVar9->m_Items[(int)uVar1] = __this_03;
          thunk_FUN_01c20e04(pNVar9->m_Items + (int)uVar1,__this_03);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                     (Il2CppObject *)__this_03,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        BLMFLPJJMPF_00 =
             (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1565,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1566,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1567,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1568,
                   (MethodInfo *)0x0);
        OOKEKJMFKPE = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        if (__this_02 == (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) goto LAB_03674b2c;
        Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
                  (__this_02,CADMJIKLNCN,IJIPABLCAKE,BLMFLPJJMPF_00,pSVar8,2,0.0,0,false,true,0.7,
                   OOKEKJMFKPE,(MethodInfo *)0x0);
        method_00 = extraout_x1_02;
      }
      pNVar4 = (__this_01->fields)._hintText;
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        if ((__this->fields).NJICOEOHBKA ==
            *(int *)((long)&(pNVar4->fields).super.super.super.super.super.super + 8) + -1) {
          if ((Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            method_00 = extraout_x1_03;
          }
          Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_TypeInfo->static_fields->ABLFFDNPHDE = false;
        }
        Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__UpdateProgressBar(__this,method_00);
        return;
      }
    }
  }
LAB_03674b2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateProgressBar()  [RVA 0x3573944]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$UpdateProgressBar @ RVA 0x3573944

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__UpdateProgressBar
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  System_RuntimeFieldHandle_Fields *pSVar1;
  System_RuntimeFieldHandle_Fields *pSVar2;
  bool bVar3;
  int32_t index;
  int32_t iVar4;
  EGMONPGHHDP_o *__this_00;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *pNVar8;
  JMDPBFOCHHP_o *pJVar9;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar10;
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *extraout_x0;
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *pSVar11;
  Il2CppObject *pIVar12;
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *pNVar13;
  Il2CppObject *pIVar14;
  Il2CppObject *pIVar15;
  DOPEEDABNEK_o *__this_01;
  HOOAAGABMBL_o *pHVar16;
  EGMONPGHHDP_o *__this_02;
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *GDGBNEPJEOO;
  System_String_o *pSVar17;
  SFButton_o *pSVar18;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar19;
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *extraout_x0_00;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *extraout_x0_01;
  ProgressBar_o *pPVar20;
  System_Collections_BitArray_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  System_String_o *arg1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar21;
  System_String_o **ppSVar22;
  Nekki_SF2_GUI_ResolutionImageSkew_o *pNVar23;
  Nekki_SF2_GUI_LabelAlias_o *pNVar24;
  System_String_o *pSVar25;
  UnityEngine_Events_UnityEvent_o *__this_05;
  Il2CppClass *pIVar26;
  float fVar27;
  uint uVar28;
  undefined8 in_d1;
  undefined4 uVar29;
  undefined8 in_d2;
  undefined4 uVar30;
  float fVar31;
  UnityEngine_Color_o UVar32;
  int local_64;
  
  uVar30 = (undefined4)((ulong)in_d2 >> 0x20);
  uVar29 = (undefined4)((ulong)in_d1 >> 0x20);
                    /* try { // try from 03673968 to 03773973 has its CatchHandler @ 0366c1b0 */
                    /* try { // try from 03673974 to 0377397b has its CatchHandler @ 0367397c */
  if ((DAT_04568c76 & 1) == 0) {
                    /* catch() { ... } // from try @ 0367363c with catch @ 0367397c
                       catch() { ... } // from try @ 036736e8 with catch @ 0367397c
                       catch() { ... } // from try @ 03673768 with catch @ 0367397c
                       catch() { ... } // from try @ 03673850 with catch @ 0367397c
                       catch() { ... } // from try @ 03673940 with catch @ 0367397c
                       catch() { ... } // from try @ 03673974 with catch @ 0367397c */
                    /* catch() { ... } // from try @ 03672610 with catch @ 03673980
                       catch() { ... } // from try @ 03672618 with catch @ 03673980 */
                    /* catch() { ... } // from try @ 0366d56c with catch @ 03673984 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1569);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1570);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1571);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1572);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1573);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1574);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1575);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1576);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1577);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1578);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1579);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1580);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1581);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1582);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1583);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1584);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1585);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1586);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<JMDPBFOCHHP_EEJFKIEGDPH>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_JOLHFHDFBLG_CBCCPMDECII__);
    FUN_01bab630(&Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_JOLHFHDFBLG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568c76 = 1;
    method = extraout_x1;
  }
  local_64 = 0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    pJVar5 = EGMONPGHHDP__OKBKFJKEAAG(__this_00,(MethodInfo *)0x0);
    if (pJVar5 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
      return;
    }
    pSVar25 = (pJVar5->fields).KBOFABJIPPD;
    pNVar23 = (__this->fields)._border;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1569,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1570,(MethodInfo *)0x0)
    ;
    pNVar8 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)
             OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__JCMDCHOBOCC
              (pNVar8,(Nekki_SF2_GUI_ResolutionImage_o *)pNVar23,pSVar25,(System_String_o *)pNVar8,
               in_x4);
    pNVar23 = (__this->fields)._back;
    pSVar25 = (pJVar5->fields).KBOFABJIPPD;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1571,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1572,(MethodInfo *)0x0)
    ;
    pNVar8 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)
             OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__JCMDCHOBOCC
              (pNVar8,(Nekki_SF2_GUI_ResolutionImage_o *)pNVar23,pSVar25,(System_String_o *)pNVar8,
               in_x4);
    pNVar23 = (__this->fields)._strip;
    pSVar25 = (pJVar5->fields).KBOFABJIPPD;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1573,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1574,(MethodInfo *)0x0)
    ;
    pNVar8 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)
             OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__JCMDCHOBOCC
              (pNVar8,(Nekki_SF2_GUI_ResolutionImage_o *)pNVar23,pSVar25,(System_String_o *)pNVar8,
               in_x4);
    pNVar24 = (__this->fields)._levelProgress;
    UVar32 = CFBGPBCDAGA__DJEMAAMAJHF((pJVar5->fields).DPNFGBFFNAJ,(MethodInfo *)0x0);
    if (pNVar24 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar24->klass->vtable)._23_set_color.methodPtr)
                (UVar32.fields.r,CONCAT44(uVar29,UVar32.fields.g),CONCAT44(uVar30,UVar32.fields.b),
                 UVar32.fields.a,pNVar24,(pNVar24->klass->vtable)._23_set_color.method);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar9 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      pSVar25 = EGMONPGHHDP__AAKENHFIHJF(__this_00,(MethodInfo *)0x0);
      if (pJVar9 != (JMDPBFOCHHP_o *)0x0) {
        pJVar10 = JMDPBFOCHHP__BHJOLIJDBLO(pJVar9,pSVar25,(MethodInfo *)0x0);
        pNVar13 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
        method_00 = extraout_x1_00;
        if (pJVar10 != (JMDPBFOCHHP_EFAJBOEHPLJ_o *)0x0) {
          pNVar21 = (__this->fields)._battlePassIcon;
          if (pNVar21 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03674454;
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar21,(pJVar10->fields).super.APBICPEOMOM,(MethodInfo *)0x0);
          pNVar13 = extraout_x0;
          method_00 = extraout_x1_01;
        }
        index = Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__INNLHPGEEPH(pNVar13,method_00);
        (__this->fields).NJICOEOHBKA = index;
        pSVar11 = (pJVar5->fields).GPNNHMIJLGL;
        if (index < 0) {
          pIVar12 = DJNBJHPDKDP__KIKGKKGDCKK<object>
                              ((System_Collections_Generic_List_T__o *)pSVar11,
                               Method_DJNBJHPDKDP_KIKGKKGDCKK<JMDPBFOCHHP_EEJFKIEGDPH>__);
        }
        else {
          if (pSVar11 == (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0)
          goto LAB_03674454;
          pIVar12 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar11,index,
                               Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                              );
        }
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pJVar9 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if ((((pIVar12 != (Il2CppObject *)0x0) && (pJVar9 != (JMDPBFOCHHP_o *)0x0)) &&
            (pNVar13 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)
                       JMDPBFOCHHP__OJOIAONADNG(pJVar9,pIVar12[1].monitor,(MethodInfo *)0x0),
            pNVar13 != (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0)) &&
           (pNVar21 = (pNVar13->fields)._rewardShineBorder,
           pNVar21 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
          GDGBNEPJEOO = pNVar13;
          if (0 < *(int *)&(pNVar21->fields).super.super.super.super.super.m_CancellationTokenSource
             ) {
            pIVar14 = (Il2CppObject *)
                      thunk_FUN_01bda818(
                                        Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_JOLHFHDFBLG_TypeInfo
                                        );
            System_Object___ctor(pIVar14,(MethodInfo *)0x0);
            pNVar21 = (pNVar13->fields)._rewardShineBorder;
            if ((pNVar21 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
               (pIVar15 = System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pNVar21,0,
                                     Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__)
               , pIVar15 == (Il2CppObject *)0x0)) goto LAB_03674454;
            pIVar26 = pIVar15[1].klass;
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
            }
            if (DAT_04563eaa == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04563eaa = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
            if (__this_01 == (DOPEEDABNEK_o *)0x0) goto LAB_03674454;
            pHVar16 = DOPEEDABNEK__CKKIPBAIEMN
                                (__this_01,(System_String_o *)pIVar26,(MethodInfo *)0x0);
            if ((pHVar16 != (HOOAAGABMBL_o *)0x0) &&
               (bVar3 = System_String__IsNullOrEmpty
                                  ((System_String_o *)pIVar12[2].klass,(MethodInfo *)0x0), !bVar3))
            {
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_02 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
              if (__this_02 == (EGMONPGHHDP_o *)0x0) goto LAB_03674454;
              bVar3 = EGMONPGHHDP__OEGMLDDKCLA
                                (__this_02,(JMDPBFOCHHP_FNILDHLJBBJ_o *)pNVar13,(MethodInfo *)0x0);
              if (bVar3) {
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pJVar9 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                if (pJVar9 == (JMDPBFOCHHP_o *)0x0) goto LAB_03674454;
                GDGBNEPJEOO = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)
                              JMDPBFOCHHP__OJOIAONADNG
                                        (pJVar9,(System_String_o *)pIVar12[2].klass,
                                         (MethodInfo *)0x0);
                if (GDGBNEPJEOO == (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0) {
                  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar6,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1575,
                             (MethodInfo *)0x0);
                  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar7,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1576,
                             (MethodInfo *)0x0);
                  pSVar25 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                  pIVar26 = pIVar12[2].klass;
                  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar6,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1577,
                             (MethodInfo *)0x0);
                  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar7,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1578,
                             (MethodInfo *)0x0);
                  pSVar17 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                  pSVar25 = System_String__Concat
                                      (pSVar25,(System_String_o *)pIVar26,pSVar17,(MethodInfo *)0x0)
                  ;
                  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                  }
                  UnityEngine_Debug__LogError((Il2CppObject *)pSVar25,(MethodInfo *)0x0);
                  GDGBNEPJEOO = pNVar13;
                }
              }
            }
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pJVar9 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
            if (pJVar9 == (JMDPBFOCHHP_o *)0x0) goto LAB_03674454;
            pNVar8 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
            pIVar26 = (Il2CppClass *)
                      JMDPBFOCHHP__DIFLKMKBENA
                                (pJVar9,(System_String_o *)
                                        (GDGBNEPJEOO->fields).super.super.super.super.m_CachedPtr,
                                 false,(MethodInfo *)0x0);
            if (pIVar14 == (Il2CppObject *)0x0) goto LAB_03674454;
            pIVar14 = pIVar14 + 1;
            pIVar14->klass = pIVar26;
            thunk_FUN_01c20e04(pIVar14,pIVar26);
            if (((pIVar14->klass == (Il2CppClass *)0x0) ||
                (*(char *)&(pIVar14->klass->_1).interfaceOffsets == '\0')) ||
               (bVar3 = EGMONPGHHDP__LKMGFEDIOAC(__this_00,index,(MethodInfo *)0x0), bVar3)) {
              bVar3 = EGMONPGHHDP__LKMGFEDIOAC(__this_00,index,(MethodInfo *)0x0);
              pNVar13 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)(ulong)bVar3;
              if (!bVar3) {
                pSVar18 = (__this->fields)._rewardButton;
                if (pSVar18 == (SFButton_o *)0x0) goto LAB_03674454;
                UnityEngine_UI_Selectable__set_interactable
                          ((UnityEngine_UI_Selectable_o *)pSVar18,false,(MethodInfo *)0x0);
                pSVar18 = (__this->fields)._rewardButton;
                if ((pSVar18 == (SFButton_o *)0x0) ||
                   (pUVar19 = (pSVar18->fields).super.m_OnClick,
                   pUVar19 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_03674454;
                UnityEngine_Events_UnityEventBase__RemoveAllListeners
                          ((UnityEngine_Events_UnityEventBase_o *)pUVar19,(MethodInfo *)0x0);
                pNVar13 = extraout_x0_00;
              }
            }
            else {
              pSVar18 = (__this->fields)._rewardButton;
              if ((pSVar18 == (SFButton_o *)0x0) ||
                 (pUVar19 = (pSVar18->fields).super.m_OnClick,
                 pUVar19 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_03674454;
              UnityEngine_Events_UnityEventBase__RemoveAllListeners
                        ((UnityEngine_Events_UnityEventBase_o *)pUVar19,(MethodInfo *)0x0);
              pSVar18 = (__this->fields)._rewardButton;
              if (pSVar18 == (SFButton_o *)0x0) goto LAB_03674454;
              UnityEngine_UI_Selectable__set_interactable
                        ((UnityEngine_UI_Selectable_o *)pSVar18,true,(MethodInfo *)0x0);
              pSVar18 = (__this->fields)._rewardButton;
              if (pSVar18 == (SFButton_o *)0x0) goto LAB_03674454;
              __this_05 = (UnityEngine_Events_UnityEvent_o *)(pSVar18->fields).super.m_OnClick;
              call = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              pNVar8 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
              UnityEngine_Events_UnityAction___ctor();
              if (__this_05 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_03674454;
              UnityEngine_Events_UnityEvent__AddListener(__this_05,call,(MethodInfo *)0x0);
              pNVar13 = extraout_x0_01;
            }
          }
          Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__HLDACDDIGJM
                    (pNVar13,(__this->fields)._rewardPicture,
                     (JMDPBFOCHHP_FNILDHLJBBJ_o *)GDGBNEPJEOO,(MethodInfo *)pNVar8);
          iVar4 = EGMONPGHHDP__CJINGJONNEI(__this_00,(MethodInfo *)0x0);
          if (index < 1) {
            uVar28 = 0;
          }
          else {
            pSVar11 = (pJVar5->fields).GPNNHMIJLGL;
            if ((pSVar11 == (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) ||
               (pIVar14 = System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar11,index + -1
                                     ,
                                     Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                                    ), pIVar14 == (Il2CppObject *)0x0)) goto LAB_03674454;
            uVar28 = *(uint *)((long)&pIVar14[1].klass + 4);
          }
          pPVar20 = (__this->fields)._barPrice;
          if (pPVar20 != (ProgressBar_o *)0x0) {
            fVar31 = (float)(*(int *)((long)&pIVar12[1].klass + 4) - uVar28);
            (*(pPVar20->klass->vtable)._11_SetValueBorders.methodPtr)
                      (0,(ulong)(uint)fVar31,pPVar20,
                       (pPVar20->klass->vtable)._11_SetValueBorders.method);
            pPVar20 = (__this->fields)._barPrice;
            if (pPVar20 != (ProgressBar_o *)0x0) {
              (*(pPVar20->klass->vtable)._8_SetValue.methodPtr)
                        ((float)(long)((long)iVar4 - (ulong)uVar28),0,pPVar20,0,
                         (pPVar20->klass->vtable)._8_SetValue.method);
              pPVar20 = (__this->fields)._barPrice;
              if (pPVar20 != (ProgressBar_o *)0x0) {
                fVar27 = (float)(*(pPVar20->klass->vtable)._5_get_Value.methodPtr)
                                          (pPVar20,(pPVar20->klass->vtable)._5_get_Value.method);
                fVar31 = (fVar27 / fVar31) * 100.0;
                local_64 = -0x80000000;
                if (fVar31 != INFINITY) {
                  local_64 = (int)fVar31;
                }
                (__this->fields).IKLIGGACIMH = local_64 == 100;
                __this_03 = (__this_00->fields)._MLMHDKDJJFK_k__BackingField;
                if ((__this_03 != (System_Collections_BitArray_o *)0x0) &&
                   (bVar3 = System_Collections_BitArray__get_Item(__this_03,index,(MethodInfo *)0x0)
                   , bVar3)) {
                  pSVar11 = (pJVar5->fields).GPNNHMIJLGL;
                  if (pSVar11 == (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0)
                  goto LAB_03674454;
                  if (index == (pSVar11->fields)._size + -1) {
                    (__this->fields).IKLIGGACIMH = false;
                  }
                }
                pNVar24 = (__this->fields)._levelProgress;
                pSVar25 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar6,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1579,
                           (MethodInfo *)0x0);
                pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar7,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1580,
                           (MethodInfo *)0x0);
                pSVar17 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                pSVar25 = System_String__Concat(pSVar25,pSVar17,(MethodInfo *)0x0);
                if (pNVar24 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  (*(pNVar24->klass->vtable)._75_set_text.methodPtr)
                            (pNVar24,pSVar25,(pNVar24->klass->vtable)._75_set_text.method);
                  pNVar21 = (__this->fields)._rewardPicture;
                  uVar28 = 0x3f000000;
                  if ((__this->fields).IKLIGGACIMH != false) {
                    uVar28 = 0x3f800000;
                  }
                  if (pNVar21 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    (*(pNVar21->klass->vtable)._23_set_color.methodPtr)
                              (uVar28,(ulong)uVar28,(ulong)uVar28,0x3f800000,pNVar21,
                               (pNVar21->klass->vtable)._23_set_color.method);
                    pNVar21 = (__this->fields)._vipIcon;
                    if ((pNVar21 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                       (__this_04 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pNVar21,(MethodInfo *)0x0)
                       , __this_04 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive
                                (__this_04,*(bool *)&pIVar12[2].monitor,(MethodInfo *)0x0);
                      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar6,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1581,
                                 (MethodInfo *)0x0);
                      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar7,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1582,
                                 (MethodInfo *)0x0);
                      pSVar25 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                      pSVar17 = (pJVar5->fields).KBOFABJIPPD;
                      bVar3 = EGMONPGHHDP__PJKNOEOGFNM(__this_00,(MethodInfo *)0x0);
                      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      pSVar1 = (System_RuntimeFieldHandle_Fields *)
                               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1585;
                      if (!bVar3) {
                        pSVar1 = (System_RuntimeFieldHandle_Fields *)
                                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1583
                        ;
                      }
                      pSVar2 = (System_RuntimeFieldHandle_Fields *)
                               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1586;
                      if (!bVar3) {
                        pSVar2 = (System_RuntimeFieldHandle_Fields *)
                                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1584
                        ;
                      }
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar6,(System_RuntimeFieldHandle_o)pSVar1->value
                                 ,(MethodInfo *)0x0);
                      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar7,(System_RuntimeFieldHandle_o)pSVar2->value
                                 ,(MethodInfo *)0x0);
                      arg1 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                      pSVar25 = System_String__Format
                                          (pSVar25,(Il2CppObject *)pSVar17,(Il2CppObject *)arg1,
                                           (MethodInfo *)0x0);
                      ppSVar22 = &(__this->fields).AIFCDABONKN;
                      *ppSVar22 = pSVar25;
                      thunk_FUN_01c20e04(ppSVar22,pSVar25);
                      if (*(char *)&pIVar12[2].monitor != '\0') {
                        pNVar21 = (__this->fields)._vipIcon;
                        if (pNVar21 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03674454;
                        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                                  (pNVar21,*ppSVar22,(MethodInfo *)0x0);
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
LAB_03674454:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x357517C]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$OnDestroy @ RVA 0x357517C

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__OnDestroy
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  EGMONPGHHDP_o *pEVar1;
  System_Delegate_o *value;
  MethodInfo *extraout_x1;
  System_Action_o **ppSVar2;
  System_Action_o *pSVar3;
  
  if ((DAT_04568c77 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_MMCHECDCGKF__);
    DAT_04568c77 = 1;
    method = extraout_x1;
  }
  (__this->fields).IHIEPGHGHKH = true;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (pEVar1 != (EGMONPGHHDP_o *)0x0) {
    ppSVar2 = &(pEVar1->fields)._MJGJOMCLIPN_k__BackingField;
    pSVar3 = *ppSVar2;
    value = (System_Delegate_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    pSVar3 = (System_Action_o *)
             System_Delegate__Remove((System_Delegate_o *)pSVar3,value,(MethodInfo *)0x0);
    if ((pSVar3 != (System_Action_o *)0x0) && (pSVar3->klass != System_Action_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar3);
    }
    *ppSVar2 = pSVar3;
    thunk_FUN_01c20e04(ppSVar2,pSVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JCMDCHOBOCC(ResolutionImage IEPECMCLKJB, string CNIELFLIKJB, string HNFFFGNACAJ)  [RVA 0x3574C7C]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$JCMDCHOBOCC @ RVA 0x3574C7C

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__JCMDCHOBOCC
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,
               Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB,System_String_o *CNIELFLIKJB,
               System_String_o *HNFFFGNACAJ,MethodInfo *method)

{
  undefined4 uVar1;
  System_String_o *CJNHFNHJHPE;
  
  if ((DAT_04568c78 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14103/*"UI/Textures/BP/"*/);
    __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)FUN_01bab630(&StringLiteral_22452/*"{0}{1}_dojo"*/);
    DAT_04568c78 = 1;
  }
  if (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar1 = StringLiteral_14103/*"UI/Textures/BP/"*/._4_4_;
    (IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14103/*"UI/Textures/BP/"*/;
    (IEPECMCLKJB->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
    thunk_FUN_01c20e04(&(IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier);
    CJNHFNHJHPE = System_String__Format
                            (StringLiteral_22452/*"{0}{1}_dojo"*/,(Il2CppObject *)CNIELFLIKJB,
                             (Il2CppObject *)HNFFFGNACAJ,(MethodInfo *)0x0);
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(IEPECMCLKJB,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void GoToBattlePassProfile()  [RVA 0x3575274]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$GoToBattlePassProfile @ RVA 0x3575274

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__GoToBattlePassProfile
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  MJHMHBEJFBH_o *__this_01;
  
  if ((DAT_04568c79 & 1) == 0) {
    FUN_01bab630(&MJHMHBEJFBH_TypeInfo);
    DAT_04568c79 = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  __this_01 = (MJHMHBEJFBH_o *)thunk_FUN_01bda818(MJHMHBEJFBH_TypeInfo);
  MJHMHBEJFBH___ctor(__this_01,4,(MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__EKPAFDJIAGI
              (__this_00,7,(Il2CppObject *)__this_01,(System_Action_object__o *)0x0,false,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x35752F8]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$Update @ RVA 0x35752F8

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__Update
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__PBNBBJPDHGK(__this,method_00);
    return;
  }
  return;
}


// ===== private void ALBHLGLKFFI(object IMMNELPBGIF)  [RVA 0x3575320]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$ALBHLGLKFFI @ RVA 0x3575320

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__ALBHLGLKFFI
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  Il2CppClass *pIVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_40 [4];
  int local_3c;
  
  if ((DAT_04568c7a & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&System_Nullable<int>_TypeInfo);
    DAT_04568c7a = 1;
  }
  if ((IMMNELPBGIF != (Il2CppObject *)0x0) &&
     (pIVar1 = (System_Nullable<int>_TypeInfo->_1).element_class, IMMNELPBGIF->klass != pIVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF,pIVar1);
  }
  auVar2 = thunk_FUN_01bda974(IMMNELPBGIF,System_Nullable<int>_TypeInfo,auStack_40);
  if (local_3c != 0) {
    Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__GoToBattlePassProfile(auVar2._0_8_,auVar2._8_8_);
  }
  return;
}


// ===== private int INNLHPGEEPH()  [RVA 0x3574D18]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$INNLHPGEEPH @ RVA 0x3574D18

int32_t Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__INNLHPGEEPH
                  (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar2;
  EGMONPGHHDP_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  undefined8 local_18;
  
  if ((DAT_04568c7b & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&StringLiteral_15931/*"_BP_PB_ViewedRewardsPos"*/);
    DAT_04568c7b = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((__this_00 == (ACHLOMELAJE_o *)0x0) ||
     (pMVar2 = ACHLOMELAJE__HKIEGNBOFCD(__this_00,StringLiteral_15931/*"_BP_PB_ViewedRewardsPos"*/,0,(MethodInfo *)0x0),
     pMVar2 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = PCOEHCPGBBG__JBGCINPPLAC((pMVar2->fields).JAICMIMBIOA,0,(MethodInfo *)0x0);
    local_18 = 0;
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_18,iVar1,Method_System_Nullable<int>__ctor__);
    iVar1 = local_18._4_4_;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_01 != (EGMONPGHHDP_o *)0x0) {
    iVar1 = EGMONPGHHDP__AKPDKBCEFAA(__this_01,iVar1,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x35753C0]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$.cctor @ RVA 0x35753C0

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass___cctor(MethodInfo *method)

{
  if ((DAT_04568c7c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_TypeInfo);
    DAT_04568c7c = 1;
  }
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_TypeInfo->static_fields->ABLFFDNPHDE = true;
  return;
}


// ===== private void HLDACDDIGJM(ResolutionImage IEPECMCLKJB, JMDPBFOCHHP.FNILDHLJBBJ GDGBNEPJEOO)  [RVA 0x3574E64]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$HLDACDDIGJM @ RVA 0x3574E64

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__HLDACDDIGJM
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,
               Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB,JMDPBFOCHHP_FNILDHLJBBJ_o *GDGBNEPJEOO,
               MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *__this_00;
  Il2CppObject *pIVar3;
  HOOAAGABMBL_o *pHVar4;
  JMDPBFOCHHP_o *__this_01;
  System_Collections_Generic_List_DDMHMABAHHD__o *pSVar5;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_02;
  HBNENINHPGF_o *pHVar6;
  DOPEEDABNEK_o *__this_03;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  Il2CppClass *KGLJICLJHEL;
  
  if ((DAT_04568c7d & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Item__
                );
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14101/*"UI/Items/Payment1.img_pile_gems"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)FUN_01bab630(&StringLiteral_9084/*"MiscSprites.gold"*/);
    DAT_04568c7d = 1;
  }
  if (IEPECMCLKJB == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03675178;
  pfVar1 = &(IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier;
  uVar2 = StringLiteral_14092/*"UI/Atlases/"*/._4_4_;
  (IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14092/*"UI/Atlases/"*/;
  (IEPECMCLKJB->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar2;
  __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)thunk_FUN_01c20e04(pfVar1);
  if (GDGBNEPJEOO == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) goto LAB_03675178;
  __this_00 = (GDGBNEPJEOO->fields).BAPMMGFEIDM;
  __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
  if (__this_00 == (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0)
  goto LAB_03675178;
  if ((__this_00->fields)._size < 1) {
LAB_03674fe4:
    pSVar5 = (GDGBNEPJEOO->fields).GFBNJPMOEKD;
    __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
    if (pSVar5 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) goto LAB_03675178;
    if (0 < (pSVar5->fields)._size) {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,0,
                          Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03675178;
      KGLJICLJHEL = pIVar3[1].klass;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (__this_02 == (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) goto LAB_03675178;
      pHVar6 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO
                         (__this_02,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
      if (pHVar6 != (HBNENINHPGF_o *)0x0) {
        ppSVar8 = &(pHVar6->fields)._PGCEKJLODEJ_k__BackingField;
        goto LAB_036750f0;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (__this_03 == (DOPEEDABNEK_o *)0x0) goto LAB_03675178;
      pHVar4 = DOPEEDABNEK__CKKIPBAIEMN(__this_03,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
      if (pHVar4 != (HOOAAGABMBL_o *)0x0) goto LAB_036750c4;
      pSVar5 = (GDGBNEPJEOO->fields).GFBNJPMOEKD;
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (pSVar5 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) goto LAB_03675178;
    }
    if (0 < (pSVar5->fields)._size) {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,0,
                          Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (pIVar3 == (Il2CppObject *)0x0) {
LAB_03675178:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(__this);
      }
      pSVar5 = (GDGBNEPJEOO->fields).GFBNJPMOEKD;
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (pSVar5 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) goto LAB_03675178;
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,0,
                          Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03675178;
      if (*(int *)((long)&pIVar3[2].klass + 4) == 1) {
        ppSVar8 = (System_String_o **)&StringLiteral_14101/*"UI/Items/Payment1.img_pile_gems"*/;
        goto LAB_036750f0;
      }
    }
    ppSVar8 = (System_String_o **)&StringLiteral_9084/*"MiscSprites.gold"*/;
  }
  else {
    pIVar3 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,0,
                        Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Item__
                       );
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)
             HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pIVar3 == (Il2CppObject *)0x0) ||
       (__this == (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0)) goto LAB_03675178;
    pHVar4 = (HOOAAGABMBL_o *)
             JMDPBFOCHHP__DIFLKMKBENA
                       ((JMDPBFOCHHP_o *)__this,pIVar3[2].monitor,false,(MethodInfo *)0x0);
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (__this_01 == (JMDPBFOCHHP_o *)0x0) goto LAB_03675178;
      pHVar4 = (HOOAAGABMBL_o *)
               JMDPBFOCHHP__DIFLKMKBENA
                         (__this_01,(GDGBNEPJEOO->fields).JFDGLPNMELO,false,(MethodInfo *)0x0);
      if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_03674fe4;
    }
LAB_036750c4:
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
    *(System_String_o **)pfVar1 = pSVar7;
    thunk_FUN_01c20e04(pfVar1,pSVar7);
    ppSVar8 = &(pHVar4->fields)._GPEFIOMJHNN_k__BackingField;
  }
LAB_036750f0:
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName(IEPECMCLKJB,*ppSVar8,(MethodInfo *)0x0);
  return;
}


// ===== private void OPPAPHIKOLL()  [RVA 0x357540C]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$OPPAPHIKOLL @ RVA 0x357540C

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__OPPAPHIKOLL
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  EGMONPGHHDP_o *__this_02;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar5;
  Nekki_SF2_GUI_LabelAlias_o *__this_03;
  PBAKFOBIHEG_o *pPVar6;
  VirtualInvokeData *pVVar7;
  undefined8 uVar8;
  PBAKFOBIHEG_c *pPVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_String_o *CJNHFNHJHPE;
  System_Collections_IEnumerator_o **ppSVar12;
  System_Collections_IEnumerator_o *pSVar13;
  float fVar14;
  
  if ((DAT_04568c7e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_PBNBBJPDHGK__);
    FUN_01bab630(&StringLiteral_10514/*"ProgressBar"*/);
    FUN_01bab630(&StringLiteral_10516/*"ProgressBarFull"*/);
    DAT_04568c7e = 1;
  }
  __this_00 = (__this->fields)._hintContent;
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_02 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if ((__this_02 != (EGMONPGHHDP_o *)0x0) &&
     (pJVar5 = EGMONPGHHDP__OKBKFJKEAAG(__this_02,(MethodInfo *)0x0),
     pJVar5 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0)) {
    CJNHFNHJHPE = (pJVar5->fields).EGMPFEOGKOF;
    bVar4 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (bVar4) {
      puVar1 = &StringLiteral_10514/*"ProgressBar"*/;
      if ((__this->fields).IKLIGGACIMH != false) {
        puVar1 = &StringLiteral_10516/*"ProgressBarFull"*/;
      }
      CJNHFNHJHPE = (System_String_o *)*puVar1;
    }
    __this_03 = (__this->fields)._hintText;
    if (__this_03 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
      pPVar6 = CoroutineManager__get_Current((MethodInfo *)0x0);
      ppSVar12 = &(__this->fields).JJNJMJMBOLN;
      pSVar13 = *ppSVar12;
      if (pPVar6 != (PBAKFOBIHEG_o *)0x0) {
        pPVar9 = pPVar6->klass;
        uVar2._0_1_ = (pPVar9->_2).rank;
        uVar2._1_1_ = (pPVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar2;
        if (uVar10 != 0) {
          piVar11 = &((pPVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar7 = pPVar9->vtable + (*piVar11 + 1);
              goto LAB_036755b0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar6,PBAKFOBIHEG_TypeInfo,1);
LAB_036755b0:
        (*pVVar7->methodPtr)(pPVar6,pSVar13,pVVar7->method);
        pPVar6 = CoroutineManager__get_Current((MethodInfo *)0x0);
        uVar8 = thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04566664 == '\0') {
                    /* try { // try from 03675608 to 03775bb7 has its CatchHandler @ 03675608
                       catch() { ... } // from try @ 03675608 with catch @ 03675608
                       catch() { ... } // from try @ 03675d60 with catch @ 03675608
                       catch() { ... } // from try @ 03675e98 with catch @ 03675608
                       catch() { ... } // from try @ 03675f68 with catch @ 03675608 */
          FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
          DAT_04566664 = '\x01';
        }
        if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pPVar6 != (PBAKFOBIHEG_o *)0x0) {
          pPVar9 = pPVar6->klass;
          fVar14 = DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM;
          uVar3._0_1_ = (pPVar9->_2).rank;
          uVar3._1_1_ = (pPVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar3;
          if (uVar10 != 0) {
            piVar11 = &((pPVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                pVVar7 = pPVar9->vtable + (*piVar11 + 2);
                goto LAB_0367568c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar6,PBAKFOBIHEG_TypeInfo,2);
LAB_0367568c:
          pSVar13 = (System_Collections_IEnumerator_o *)
                    (*pVVar7->methodPtr)((ulong)(uint)fVar14,pPVar6,uVar8,pVVar7->method);
          *ppSVar12 = pSVar13;
          thunk_FUN_01c20e04(ppSVar12,pSVar13);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_BattlePassExists()  [RVA 0x35756CC]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$get_BattlePassExists @ RVA 0x35756CC

bool Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__get_BattlePassExists
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  EGMONPGHHDP_o *__this_00;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568c7f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568c7f = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    pJVar1 = EGMONPGHHDP__OKBKFJKEAAG(__this_00,(MethodInfo *)0x0);
    return pJVar1 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KIPDEKLDABN(JMDPBFOCHHP.CKEMIAEPGKD CLDEGLBDGGE, int AEAEPOHLBOE)  [RVA 0x3574B30]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$KIPDEKLDABN @ RVA 0x3574B30

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__KIPDEKLDABN
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,
               JMDPBFOCHHP_CKEMIAEPGKD_o *CLDEGLBDGGE,int32_t AEAEPOHLBOE,MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *pSVar1;
  ACHLOMELAJE_o *pAVar2;
  int local_24;
  
  if ((DAT_04568c80 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)FUN_01bab630(&StringLiteral_3325/*"BP_PB_ViewedRewardsPos"*/);
    DAT_04568c80 = 1;
  }
  local_24 = AEAEPOHLBOE + 1;
  if ((CLDEGLBDGGE != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) &&
     (pSVar1 = (CLDEGLBDGGE->fields).GPNNHMIJLGL,
     pSVar1 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0)) {
    if ((pSVar1->fields)._size <= local_24) {
      return;
    }
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
    __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)
             System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__LMJFPPDAPBF
                (pAVar2,StringLiteral_3325/*"BP_PB_ViewedRewardsPos"*/,(System_String_o *)__this,0,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar2,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void .ctor()  [RVA 0x3575738]
// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$.ctor @ RVA 0x3575738

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass___ctor
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  if ((DAT_04568c81 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04568c81 = 1;
  }
  (__this->fields).AIFCDABONKN = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

