// TypeDefIndex 1975
// Namespace: Nekki.SF2.GUI.Dialogs
// public class LotteryDialog : BaseDialog, LEPEFNKEJBC
// Fields:
//   private const bool PHODEIBICCH = False;
//   public const string WIN_EFFECT_ANIMATION = "UI/Atlases/effect_lottery";
//   private const int MLPBGFPFILN = 215;
//   private const int BOLKILEGGGL = 220;
//   private const int GJBNABGKBOI = 224;
//   private static readonly int[] IJDEBLDLODL; // 0x0
//   private static readonly int[] MPMNNILPAAE; // 0x8
//   private static readonly int[] EJKOCKOCCCI; // 0x10
//   public LabelButton BtnSpin; // 0xC8
//   public CanvasGroup BtnSpinContent; // 0xD0
//   public LabelButton BtnSpinCurrency; // 0xD8
//   public CanvasGroup BtnSpinCurrencyContent; // 0xE0
//   public LabelButton BtnSpinAD; // 0xE8
//   public CanvasGroup BtnSpinADContent; // 0xF0
//   public LabelAlias LabelSpinADViews; // 0xF8
//   public CloseButton BtnQuit; // 0x100
//   public ResolutionImage Bg; // 0x108
//   public EnhancedScroller Scroller; // 0x110
//   public LotteryDialogCell LotteryCellPrefab; // 0x118
//   public HorizontalLayoutGroup ScrollBack; // 0x120
//   public ResolutionImage ScrollBackLeft; // 0x128
//   public ResolutionImage ScrollBackRight; // 0x130
//   public ResolutionImage ScrollSelector; // 0x138
//   public GameObject ScrollShadow; // 0x140
//   public CocosAnimation WinEffect; // 0x148
//   public UnityEvent OpenShopEvent; // 0x150
//   private LotteryDialog.JHMFCNIJBKH OIKLOAGFFGO; // 0x158
//   private LotteryDialogCell NAJKNFGDGGI; // 0x160
//   private List<DILGLGMKOFG> HPJNLAOAJJE; // 0x168
//   private LPGLKMNHELJ DKMMBMBMJBO; // 0x170
//   private ObscuredLong ENCFNGGMNAN; // 0x178
//   private float DEIFFBGHMIH; // 0x198
//   private Coroutine IIMLAADGBEE; // 0x1A0
//   private BECIPDJBAOG FBODAFDBNLH; // 0x1A8
//   private int BECMMEIMOAL; // 0x1B0
//   private int GLGOLGJBCAK; // 0x1B4
//   private IEnumerator JHIHPMFPMIO; // 0x1B8
//   private Sequence AJFGBJDEEIJ; // 0x1C0
//   private IEnumerator NJMEPPOGCLN; // 0x1C8
//   private bool GGCLCAMEALI; // 0x1D0
//   private readonly List<BECIPDJBAOG> FCKCGNHILFE; // 0x1D8
//   private BMBFOPNOLCF JJLEJEOELEB; // 0x1E0
//   private bool KGJOHFHDLFK; // 0x1E8
//   private readonly CompositeDisposable HBJPBPBIOOB; // 0x1F0

// ===== private void JNPPMPMIPGN(Vector3 OOGPLJBADCD)  [RVA 0x3287628]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$JNPPMPMIPGN @ RVA 0x3287628

void Nekki_SF2_GUI_Dialogs_LotteryDialog__JNPPMPMIPGN
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,UnityEngine_Vector3_o OOGPLJBADCD,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  __this_00 = (__this->fields).NAJKNFGDGGI;
  if ((__this_00 != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_localScale(__this_01,OOGPLJBADCD,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GIDNPADMKMG()  [RVA 0x3287678]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GIDNPADMKMG @ RVA 0x3287678

void Nekki_SF2_GUI_Dialogs_LotteryDialog__GIDNPADMKMG
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  CocosAnimation_o *pCVar2;
  System_Exception_o *__this_00;
  System_String_o *message;
  undefined8 uVar3;
  MethodInfo *method_00;
  
  if ((DAT_045672c8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14097/*"UI/Atlases/effect_lottery"*/);
    DAT_045672c8 = 1;
  }
  pCVar2 = (__this->fields).WinEffect;
  if (pCVar2 != (CocosAnimation_o *)0x0) {
    bVar1 = CocosAnimation__Init
                      (pCVar2,StringLiteral_14097/*"UI/Atlases/effect_lottery"*/,0,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      thunk_FUN_01bb9178(&System_Exception_TypeInfo);
      __this_00 = (System_Exception_o *)thunk_FUN_01bda818();
      message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_5960/*"Error: lottery win animation not found: UI/Atlases/effect_lottery"*/);
      System_Exception___ctor(__this_00,message,(MethodInfo *)0x0);
      uVar3 = thunk_FUN_01bb9178(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_GIDNPADMKMG__);
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(__this_00,uVar3);
    }
    pCVar2 = (__this->fields).WinEffect;
    if (pCVar2 != (CocosAnimation_o *)0x0) {
      CocosAnimation__SetFramesRange(pCVar2,0,-1,(MethodInfo *)0x0);
      pCVar2 = (__this->fields).WinEffect;
      if (pCVar2 != (CocosAnimation_o *)0x0) {
        (pCVar2->fields)._PPEGDOHGLJJ_k__BackingField = 0.083;
        Nekki_SF2_GUI_Dialogs_LotteryDialog__OIJGCNKKINI(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NJCAIMNNMPC()  [RVA 0x3287784]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$NJCAIMNNMPC @ RVA 0x3287784

void Nekki_SF2_GUI_Dialogs_LotteryDialog__NJCAIMNNMPC
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  MAEAAOFOANA_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_01;
  System_Action_T__o *IELDNEAAPBE;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *pNVar1;
  BCOICIIDFPD_o *pBVar2;
  LPGLKMNHELJ_o *pLVar3;
  
  if ((DAT_045672c9 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_DHEBFAKANDB__);
    FUN_01bab630(&MAEAAOFOANA_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_045672c9 = 1;
  }
  (__this->fields).JJLEJEOELEB = (BMBFOPNOLCF_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).JJLEJEOELEB,0);
  if ((__this->fields).KGJOHFHDLFK == false) {
    (__this->fields).OIKLOAGFFGO = 0;
    Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK(__this,method_00);
    Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH(__this,method_01);
  }
  (__this->fields).KGJOHFHDLFK = false;
  if ((__this->fields).FBODAFDBNLH == (BECIPDJBAOG_o *)0x0) {
    return;
  }
  pNVar1 = (__this->fields).NAJKNFGDGGI;
  if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) &&
     (pBVar2 = (pNVar1->fields).super.RewardData, pBVar2 != (BCOICIIDFPD_o *)0x0)) {
    if ((pBVar2->fields)._GDKBFEGNHNP_k__BackingField == false) {
      return;
    }
    __this_00 = (MAEAAOFOANA_o *)thunk_FUN_01bda818(MAEAAOFOANA_TypeInfo);
    MAEAAOFOANA___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (MAEAAOFOANA_o *)0x0) {
      (__this_00->fields).EBBNAOLNKGD = (__this->fields).FBODAFDBNLH;
      thunk_FUN_01c20e04();
      __this_01 = DialogsOpener__EFLNJLIDLEF(__this_00,(MethodInfo *)0x0);
      IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
        Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                  ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_01,0,IELDNEAAPBE,
                   Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
        pLVar3 = (__this->fields).DKMMBMBMJBO;
        if (pLVar3 != (LPGLKMNHELJ_o *)0x0) {
          if ((pLVar3->fields).BGHFADDGPAD != 1) {
            return;
          }
          __this_02 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KHJHBJHEMEM()  [RVA 0x3287914]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$KHJHBJHEMEM @ RVA 0x3287914

void Nekki_SF2_GUI_Dialogs_LotteryDialog__KHJHBJHEMEM
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int32_t JEGMMDPFNIL;
  AdvertisingViewsManager_o *__this_00;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_IEnumerator_o *pSVar5;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_045672ca & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_BEENJJPFBOL__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045672ca = 1;
  }
  __this_00 = AdvertisingViewsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (AdvertisingViewsManager_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    JEGMMDPFNIL = AdvertisingViewsManager__LAPHEMPOHMP(__this_00,0xc,1,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_LotteryDialog__AIHMNPJOJMF(__this,JEGMMDPFNIL,JEGMMDPFNIL,method_00);
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar6 = pPVar2->klass;
      uVar1._0_1_ = (pPVar6->_2).rank;
      uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar6->vtable + (*piVar8 + 2);
            goto LAB_03387a1c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_03387a1c:
      pSVar5 = (System_Collections_IEnumerator_o *)
               (*pVVar4->methodPtr)(0x3dcccccd,pPVar2,uVar3,pVVar4->method);
      (__this->fields).NJMEPPOGCLN = pSVar5;
      thunk_FUN_01c20e04(&(__this->fields).NJMEPPOGCLN);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x3287BB0]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$OnDestroy @ RVA 0x3287BB0

void Nekki_SF2_GUI_Dialogs_LotteryDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  bool bVar3;
  UniRx_CompositeDisposable_o *__this_00;
  System_Action_o *pSVar4;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar5;
  UnityEngine_GameObject_o *HODGKDNOHLP;
  UnityEngine_Events_UnityEvent_o *__this_01;
  NDPMLPGANCI_o *__this_02;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  DG_Tweening_Sequence_o *t;
  PBAKFOBIHEG_o *pPVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar8;
  LabelButton_o *pLVar9;
  CocosAnimation_o *pCVar10;
  PBAKFOBIHEG_c *pPVar11;
  ulong uVar12;
  int32_t *piVar13;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar14;
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this_03;
  System_Collections_IEnumerator_o *pSVar15;
  
  if ((DAT_045672cb & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_BPHEMMPAJGO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_DPHGELLABKO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_GJBIHHLINEG__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Util_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_045672cb = 1;
  }
  if (Util_TypeInfo->static_fields->IEGHLFIBMBL != false) {
    return;
  }
  __this_00 = (__this->fields).HBJPBPBIOOB;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    WideScreenController__remove_UpdateEvent(pSVar4,(MethodInfo *)0x0);
    pLVar9 = (__this->fields).BtnSpin;
    if ((pLVar9 != (LabelButton_o *)0x0) &&
       (pUVar5 = (pLVar9->fields).super.super.super.m_OnClick,
       pUVar5 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar5,(MethodInfo *)0x0);
      pLVar9 = (__this->fields).BtnSpinCurrency;
      if ((pLVar9 != (LabelButton_o *)0x0) &&
         (pUVar5 = (pLVar9->fields).super.super.super.m_OnClick,
         pUVar5 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)pUVar5,(MethodInfo *)0x0);
        pLVar9 = (__this->fields).BtnSpinAD;
        if (pLVar9 != (LabelButton_o *)0x0) {
          bVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled
                            ((UnityEngine_Behaviour_o *)pLVar9,(MethodInfo *)0x0);
          if (bVar3) {
            pLVar9 = (__this->fields).BtnSpinAD;
            if ((pLVar9 == (LabelButton_o *)0x0) ||
               (pUVar5 = (pLVar9->fields).super.super.super.m_OnClick,
               pUVar5 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_03387fb0;
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)pUVar5,(MethodInfo *)0x0);
          }
          if (DAT_04565b84 == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
            DAT_04565b84 = '\x01';
          }
          pNVar14 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                    _JPDNDPEAJAL_k__BackingField;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar14,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar3) {
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pNVar14 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                      _JPDNDPEAJAL_k__BackingField;
            if (pNVar14 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03387fb0;
            __this_03 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(pNVar14->fields)._energy;
            pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (__this_03 == (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) goto LAB_03387fb0;
            Nekki_SF2_GUI_Menu_MenuMoneyPanel__remove_OnRubyBtnClick
                      (__this_03,pSVar4,(MethodInfo *)0x0);
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pNVar14 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                      _JPDNDPEAJAL_k__BackingField;
            HODGKDNOHLP = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pNVar14 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03387fb0;
            Nekki_SF2_GUI_Menu_MainMenu__RestoreParentAndTryShowScroll
                      (pNVar14,HODGKDNOHLP,(MethodInfo *)0x0);
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pNVar14 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                      _JPDNDPEAJAL_k__BackingField;
            if (pNVar14 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03387fb0;
            Nekki_SF2_GUI_Menu_MainMenu__set_IsEnabled(pNVar14,true,(MethodInfo *)0x0);
          }
          pCVar10 = (__this->fields).WinEffect;
          if ((pCVar10 != (CocosAnimation_o *)0x0) &&
             (__this_01 = (pCVar10->fields).OnAnimationComplete,
             __this_01 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
            __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
            CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                          thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
            System_Action<Int32Enum>___ctor();
            if (__this_02 != (NDPMLPGANCI_o *)0x0) {
              NDPMLPGANCI__ILJKHKMFKAJ(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
              t = (__this->fields).AJFGBJDEEIJ;
              pMVar8 = extraout_x1;
              if (t != (DG_Tweening_Sequence_o *)0x0) {
                DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,false,(MethodInfo *)0x0);
                pMVar8 = extraout_x1_00;
              }
              Nekki_SF2_GUI_Dialogs_LotteryDialog__FIODMEOCNHA(__this,pMVar8);
              LotterySpinRewardHelper__DGLJCGNHLIG((MethodInfo *)0x0);
              pMVar8 = extraout_x1_01;
              if ((__this->fields).NJMEPPOGCLN != (System_Collections_IEnumerator_o *)0x0) {
                pPVar6 = CoroutineManager__get_Current((MethodInfo *)0x0);
                if (pPVar6 == (PBAKFOBIHEG_o *)0x0) goto LAB_03387fb0;
                ppSVar1 = &(__this->fields).NJMEPPOGCLN;
                pPVar11 = pPVar6->klass;
                pSVar15 = *ppSVar1;
                uVar2._0_1_ = (pPVar11->_2).rank;
                uVar2._1_1_ = (pPVar11->_2).minimumAlignment;
                uVar12 = (ulong)uVar2;
                if (uVar12 != 0) {
                  piVar13 = &((pPVar11->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                        (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                      pVVar7 = pPVar11->vtable + (*piVar13 + 1);
                      goto LAB_03387f70;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar6,PBAKFOBIHEG_TypeInfo,1);
LAB_03387f70:
                (*pVVar7->methodPtr)(pPVar6,pSVar15,pVVar7->method);
                *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
                thunk_FUN_01c20e04(ppSVar1,0);
                pMVar8 = extraout_x1_02;
              }
              Nekki_SF2_GUI_Dialogs_LotteryDialog__BMMFIILCION(__this,pMVar8);
              Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
                        ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_03387fb0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CHPPPEONOME()  [RVA 0x3288180]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$CHPPPEONOME @ RVA 0x3288180

void Nekki_SF2_GUI_Dialogs_LotteryDialog__CHPPPEONOME
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_GameObject_o *__this_00;
  System_Object_array *args;
  System_String_o *pSVar2;
  long lVar3;
  undefined8 uVar4;
  System_String_o *DFEGBKMFBMM;
  System_String_o *MEJEDBBGECM;
  int32_t HGDGDPODNLL;
  System_Int32_array *IMMNELPBGIF;
  MethodInfo *in_x6;
  LPGLKMNHELJ_o *pLVar5;
  MFFKCPDBFPG_o *pMVar6;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_045672cc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MFFKCPDBFPG_GDIIDMDOIDK_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8687/*"Lottery.ScrollSilver.Left"*/);
    FUN_01bab630(&StringLiteral_8684/*"Lottery.ScrollBronze.Right"*/);
    FUN_01bab630(&StringLiteral_8686/*"Lottery.ScrollGold.Right"*/);
    FUN_01bab630(&StringLiteral_8680/*"Lottery.PointerBronze"*/);
    FUN_01bab630(&StringLiteral_8688/*"Lottery.ScrollSilver.Right"*/);
    FUN_01bab630(&StringLiteral_8685/*"Lottery.ScrollGold.Left"*/);
    FUN_01bab630(&StringLiteral_8681/*"Lottery.PointerGold"*/);
    FUN_01bab630(&StringLiteral_8682/*"Lottery.PointerSilver"*/);
    FUN_01bab630(&StringLiteral_14560/*"Unsupported lottery type [{0}]"*/);
    FUN_01bab630(&StringLiteral_8683/*"Lottery.ScrollBronze.Left"*/);
    DAT_045672cc = 1;
  }
  __this_00 = (__this->fields).ScrollShadow;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    pLVar5 = (__this->fields).DKMMBMBMJBO;
    if ((pLVar5 != (LPGLKMNHELJ_o *)0x0) &&
       (pMVar6 = (pLVar5->fields).FGCJFGHMIOL, pMVar6 != (MFFKCPDBFPG_o *)0x0)) {
      iVar1 = (pMVar6->fields).BGHFADDGPAD;
      if (iVar1 == 2) {
        if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        IMMNELPBGIF = Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->static_fields->EJKOCKOCCCI;
        HGDGDPODNLL = 0xe0;
        pSVar2 = StringLiteral_8685/*"Lottery.ScrollGold.Left"*/;
        DFEGBKMFBMM = StringLiteral_8686/*"Lottery.ScrollGold.Right"*/;
        MEJEDBBGECM = StringLiteral_8681/*"Lottery.PointerGold"*/;
      }
      else if (iVar1 == 1) {
        if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        IMMNELPBGIF = Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->static_fields->MPMNNILPAAE;
        HGDGDPODNLL = 0xdc;
        pSVar2 = StringLiteral_8687/*"Lottery.ScrollSilver.Left"*/;
        DFEGBKMFBMM = StringLiteral_8688/*"Lottery.ScrollSilver.Right"*/;
        MEJEDBBGECM = StringLiteral_8682/*"Lottery.PointerSilver"*/;
      }
      else {
        if (iVar1 != 0) {
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          pLVar5 = (__this->fields).DKMMBMBMJBO;
          if ((pLVar5 != (LPGLKMNHELJ_o *)0x0) &&
             (pMVar6 = (pLVar5->fields).FGCJFGHMIOL, pMVar6 != (MFFKCPDBFPG_o *)0x0)) {
            local_38.klass = (System_Enum_c *)MFFKCPDBFPG_GDIIDMDOIDK_TypeInfo;
            local_38.monitor = (void *)0xffffffffffffffff;
            local_28 = (pMVar6->fields).BGHFADDGPAD;
            pSVar2 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
            if (args != (System_Object_array *)0x0) {
              if ((pSVar2 != (System_String_o *)0x0) &&
                 (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class),
                 lVar3 == 0)) {
                uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar4,0);
              }
              if ((int)args->max_length != 0) {
                args->m_Items[0] = (Il2CppObject *)pSVar2;
                thunk_FUN_01c20e04(args->m_Items,pSVar2);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogErrorFormat(StringLiteral_14560/*"Unsupported lottery type [{0}]"*/,args,(MethodInfo *)0x0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
          }
          goto LAB_03388450;
        }
        if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        IMMNELPBGIF = Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->static_fields->IJDEBLDLODL;
        HGDGDPODNLL = 0xd7;
        pSVar2 = StringLiteral_8683/*"Lottery.ScrollBronze.Left"*/;
        DFEGBKMFBMM = StringLiteral_8684/*"Lottery.ScrollBronze.Right"*/;
        MEJEDBBGECM = StringLiteral_8680/*"Lottery.PointerBronze"*/;
      }
      Nekki_SF2_GUI_Dialogs_LotteryDialog__GCOBGDGKBFN
                (__this,pSVar2,DFEGBKMFBMM,MEJEDBBGECM,HGDGDPODNLL,IMMNELPBGIF,in_x6);
      return;
    }
  }
LAB_03388450:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FIODMEOCNHA()  [RVA 0x3287FB4]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$FIODMEOCNHA @ RVA 0x3287FB4

void Nekki_SF2_GUI_Dialogs_LotteryDialog__FIODMEOCNHA
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  SFRequestSender_o *pKVar1;
  System_Action_o *pSVar2;
  
  if ((DAT_045672cd & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_EGMHFFODCKH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_EPEKIKOFDNH__);
    DAT_045672cd = 1;
  }
  pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pKVar1 != (SFRequestSender_o *)0x0) {
    SFRequestSender__PILMCAFCLMN(pKVar1,pSVar2,(MethodInfo *)0x0);
    pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pKVar1 != (SFRequestSender_o *)0x0) {
      SFRequestSender__JGNHEIICALL(pKVar1,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HMBAGCOBBID()  [RVA 0x3288594]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$HMBAGCOBBID @ RVA 0x3288594

void Nekki_SF2_GUI_Dialogs_LotteryDialog__HMBAGCOBBID
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Collections_Generic_List_DILGLGMKOFG__o *pSVar3;
  Il2CppObject *item;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *__this_00;
  MethodInfo *extraout_x1;
  int index;
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *pNVar4;
  Il2CppClass *a;
  
  if ((DAT_045672ce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045672ce = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields).NAJKNFGDGGI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar4 = (__this->fields).NAJKNFGDGGI;
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) {
    pSVar2 = Nekki_SF2_GUI_Dialogs_LotteryDialogCell__get_CancellingItem(pNVar4,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pSVar3 = (__this->fields).HPJNLAOAJJE;
    if (pSVar3 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
      index = (pSVar3->fields)._size + -1;
      if (index < 0) {
LAB_033886d4:
        __this_00 = (__this->fields).Scroller;
        if (__this_00 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
          EnhancedUI_EnhancedScroller_EnhancedScroller__ReloadData(__this_00,0.0,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        do {
          item = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index,
                            Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Item__);
          if ((item == (Il2CppObject *)0x0) ||
             (pNVar4 = (__this->fields).NAJKNFGDGGI,
             pNVar4 == (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0)) break;
          a = item[5].klass;
          pSVar2 = Nekki_SF2_GUI_Dialogs_LotteryDialogCell__get_CancellingItem
                             (pNVar4,(MethodInfo *)0x0);
          bVar1 = System_String__op_Equality((System_String_o *)a,pSVar2,(MethodInfo *)0x0);
          if (bVar1) {
            pSVar3 = (__this->fields).HPJNLAOAJJE;
            if (pSVar3 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) break;
            System_Collections_Generic_List<object>__Remove
                      ((System_Collections_Generic_List_object__o *)pSVar3,item,
                       Method_System_Collections_Generic_List<DILGLGMKOFG>_Remove__);
          }
          index = index + -1;
          if (index < 0) goto LAB_033886d4;
          pSVar3 = (__this->fields).HPJNLAOAJJE;
        } while (pSVar3 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ADLCACJDNGN(MCCHIAKPFEL COPNBALDNLF)  [RVA 0x32886FC]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$ADLCACJDNGN @ RVA 0x32886FC

void Nekki_SF2_GUI_Dialogs_LotteryDialog__ADLCACJDNGN
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MCCHIAKPFEL_o *COPNBALDNLF,
               MethodInfo *method)

{
  IGPDCHBJAPD_JMPAGIGEFME_o *GIIFANGGEHM;
  int64_t iVar1;
  NLPJLHOEAOE_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  PKHMIGFEJCL_o *pPVar3;
  System_Exception_o *__this_02;
  System_String_o *message;
  undefined8 uVar4;
  MethodInfo *method_00;
  
  if ((DAT_045672cf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045672cf = 1;
  }
  if (COPNBALDNLF != (MCCHIAKPFEL_o *)0x0) {
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    GIIFANGGEHM = GameUtils__FGELLDGCHFD(COPNBALDNLF,(MethodInfo *)0x0);
    if (GIIFANGGEHM != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0) {
      iVar1 = GameUtils__ADEEECDDBPN((GIIFANGGEHM->fields).DCDLMCEEOCC,0,(MethodInfo *)0x0);
      (GIIFANGGEHM->fields).DCDLMCEEOCC = iVar1;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
        NLPJLHOEAOE__CLIDHAEENEC(__this_00,GIIFANGGEHM,(MethodInfo *)0x0);
        __this_01 = IGPDCHBJAPD_JMPAGIGEFME__ACBMLHJIFMD(GIIFANGGEHM,false,(MethodInfo *)0x0);
        if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
          if ((__this_01->fields)._size < 1) {
            return;
          }
          method_00 = Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__;
          IKKAMAMLIKA = (HOOAAGABMBL_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_01,0,
                                   (MethodInfo_26E4ADC *)
                                   Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
          Nekki_SF2_GUI_Dialogs_LotteryDialog__HJHIFHPBJOB(__this,IKKAMAMLIKA,method_00);
          pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
          if (((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
              (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) &&
             (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 != (PKHMIGFEJCL_o *)0x0)) {
            (pPVar3->fields).GMOMPDAHJOL = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
            thunk_FUN_01c20e04();
            pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
              Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                        (pNVar2,0x20,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  thunk_FUN_01bb9178(&System_Exception_TypeInfo);
  __this_02 = (System_Exception_o *)thunk_FUN_01bda818();
  message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_5955/*"Error: LotteryReward is null"*/);
  System_Exception___ctor(__this_02,message,(MethodInfo *)0x0);
  uVar4 = thunk_FUN_01bb9178(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_ADLCACJDNGN__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_02,uVar4);
}


// ===== private IEnumerator LPNCEHPFOAF()  [RVA 0x3288DD8]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$LPNCEHPFOAF @ RVA 0x3288DD8

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_LotteryDialog__LPNCEHPFOAF
          (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_LotteryDialog_KEFEEBDDFDD_o *__this_00;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_o **ppNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045672d0 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_KEFEEBDDFDD_TypeInfo);
    DAT_045672d0 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_KEFEEBDDFDD_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_LotteryDialog_KEFEEBDDFDD_TypeInfo,method);
  Nekki_SF2_GUI_Dialogs_LotteryDialog_KEFEEBDDFDD___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_KEFEEBDDFDD_o *)0x0) {
    ppNVar1 = &(__this_00->fields).__4__this;
    *ppNVar1 = __this;
    thunk_FUN_01c20e04(ppNVar1,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EGMHFFODCKH()  [RVA 0x3288E4C]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$EGMHFFODCKH @ RVA 0x3288E4C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__EGMHFFODCKH
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  MethodInfo *in_x3;
  
  Nekki_SF2_GUI_Dialogs_LotteryDialog__DMKPAPKKDMP(__this,true,true,in_x3);
  return;
}


// ===== private void EPEKIKOFDNH()  [RVA 0x328909C]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$EPEKIKOFDNH @ RVA 0x328909C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__EPEKIKOFDNH
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  if ((__this->fields).GGCLCAMEALI != false) {
    Nekki_SF2_GUI_Dialogs_LotteryDialog__EAPNENPIION(__this,method);
    (__this->fields).GGCLCAMEALI = false;
  }
  return;
}


// ===== private IEnumerator MOPBBHLMCAJ()  [RVA 0x3289284]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$MOPBBHLMCAJ @ RVA 0x3289284

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_LotteryDialog__MOPBBHLMCAJ
          (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_LotteryDialog_DGJBHIIPJNE_o *__this_00;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_o **ppNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045672d1 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_DGJBHIIPJNE_TypeInfo);
    DAT_045672d1 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_DGJBHIIPJNE_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_LotteryDialog_DGJBHIIPJNE_TypeInfo,method);
  Nekki_SF2_GUI_Dialogs_LotteryDialog_DGJBHIIPJNE___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_DGJBHIIPJNE_o *)0x0) {
    ppNVar1 = &(__this_00->fields).__4__this;
    *ppNVar1 = __this;
    thunk_FUN_01c20e04(ppNVar1,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PurchasePacks(string DFNCDFFEOFM, int IDPMJOKDHNP)  [RVA 0x32892F8]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PurchasePacks @ RVA 0x32892F8

void Nekki_SF2_GUI_Dialogs_LotteryDialog__PurchasePacks
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,System_String_o *DFNCDFFEOFM,
               int32_t IDPMJOKDHNP,MethodInfo *method)

{
  BMBFOPNOLCF_o **ppBVar1;
  int32_t length;
  BMBFOPNOLCF_o *pBVar2;
  GCOLFANNEMF_o *__this_00;
  IKGPGAPFKNE_o *__this_01;
  System_Action_o *KBJBLFOHFDH;
  MCLOEMMHNIA_o *__this_02;
  MethodInfo *method_00;
  System_Collections_Generic_List_BECIPDJBAOG__o *pSVar3;
  
  if ((DAT_045672d2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_BMBFOPNOLCF_KJKDAHGENPM<GCOLFANNEMF>__);
    FUN_01bab630(&BMBFOPNOLCF_TypeInfo);
    FUN_01bab630(&GCOLFANNEMF_TypeInfo);
    FUN_01bab630(&IKGPGAPFKNE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BECIPDJBAOG>_Clear__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_OLCLFOHGKIL__);
    FUN_01bab630(&MCLOEMMHNIA_TypeInfo);
    DAT_045672d2 = 1;
  }
  pSVar3 = (__this->fields).FCKCGNHILFE;
  if (pSVar3 != (System_Collections_Generic_List_BECIPDJBAOG__o *)0x0) {
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pBVar2 = (BMBFOPNOLCF_o *)thunk_FUN_01bda818(BMBFOPNOLCF_TypeInfo);
    BMBFOPNOLCF___ctor(pBVar2,(MethodInfo *)0x0);
    ppBVar1 = &(__this->fields).JJLEJEOELEB;
    (__this->fields).JJLEJEOELEB = pBVar2;
    thunk_FUN_01c20e04(ppBVar1,pBVar2);
    pSVar3 = (__this->fields).FCKCGNHILFE;
    pBVar2 = (__this->fields).JJLEJEOELEB;
    __this_00 = (GCOLFANNEMF_o *)thunk_FUN_01bda818(GCOLFANNEMF_TypeInfo);
    GCOLFANNEMF___ctor(__this_00,IDPMJOKDHNP,pSVar3,(MethodInfo *)0x0);
    if (pBVar2 != (BMBFOPNOLCF_o *)0x0) {
      BMBFOPNOLCF__PHECIGEPFPJ(pBVar2,(HIMHPFNABJN_o *)__this_00,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).FCKCGNHILFE;
      pBVar2 = (__this->fields).JJLEJEOELEB;
      __this_01 = (IKGPGAPFKNE_o *)thunk_FUN_01bda818(IKGPGAPFKNE_TypeInfo);
      IKGPGAPFKNE___ctor(__this_01,DFNCDFFEOFM,pSVar3,(MethodInfo *)0x0);
      if (pBVar2 != (BMBFOPNOLCF_o *)0x0) {
        BMBFOPNOLCF__PHECIGEPFPJ(pBVar2,(HIMHPFNABJN_o *)__this_01,(MethodInfo *)0x0);
        pBVar2 = (__this->fields).JJLEJEOELEB;
        KBJBLFOHFDH = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        __this_02 = (MCLOEMMHNIA_o *)thunk_FUN_01bda818(MCLOEMMHNIA_TypeInfo);
        MCLOEMMHNIA___ctor(__this_02,KBJBLFOHFDH,(MethodInfo *)0x0);
        if (pBVar2 != (BMBFOPNOLCF_o *)0x0) {
          BMBFOPNOLCF__PHECIGEPFPJ(pBVar2,(HIMHPFNABJN_o *)__this_02,(MethodInfo *)0x0);
          pBVar2 = *ppBVar1;
          if (pBVar2 != (BMBFOPNOLCF_o *)0x0) {
            BMBFOPNOLCF__KJKDAHGENPM<object>(pBVar2,Method_BMBFOPNOLCF_KJKDAHGENPM<GCOLFANNEMF>__);
            Nekki_SF2_GUI_Dialogs_LotteryDialog__IKGNIKPBBKK(__this,method_00);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OLCLFOHGKIL()  [RVA 0x32895FC]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$OLCLFOHGKIL @ RVA 0x32895FC

void Nekki_SF2_GUI_Dialogs_LotteryDialog__OLCLFOHGKIL
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  BECIPDJBAOG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_BECIPDJBAOG__o *KJADEEFANAL;
  
  if ((DAT_045672d3 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_045672d3 = 1;
    method = extraout_x1;
  }
  KJADEEFANAL = (__this->fields).FCKCGNHILFE;
  __this_00 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo,method);
  BECIPDJBAOG___ctor(__this_00,(System_Collections_Generic_IList_BECIPDJBAOG__o *)KJADEEFANAL,true,
                     (MethodInfo *)0x0);
  (__this->fields).FBODAFDBNLH = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).FBODAFDBNLH,__this_00);
  Nekki_SF2_GUI_Dialogs_LotteryDialog__KAPGCIMJPED(__this,method_00);
  return;
}


// ===== private void KNDKMGHNIMK()  [RVA 0x3289D6C]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$KNDKMGHNIMK @ RVA 0x3289D6C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  bool bVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  Roster_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar5;
  System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *EDEHNHIHDDH;
  Il2CppObject *pIVar6;
  System_String_array *values;
  PlayerData_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  LPGLKMNHELJ_o *pLVar7;
  RaidConfig_ENBCJNLAHAC_o *pJVar8;
  PKHMIGFEJCL_o *pPVar9;
  LabelButton_o *pLVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Color_o UVar15;
  UnityEngine_Color_o CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  int64_t local_60;
  int64_t iStack_58;
  int64_t iStack_50;
  bool_conflict bStack_48;
  bool_conflict bStack_47;
  undefined6 uStack_46;
  
  if ((DAT_045672d4 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__);
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Count__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_22507/*"}{ "*/);
    FUN_01bab630(&StringLiteral_17827/*"dlgSenseiLevelIndicator{img::MiscSprites.ruby}{ "*/);
    FUN_01bab630(&StringLiteral_17826/*"dlgSenseiLevelIndicator{img::"*/);
    FUN_01bab630(&StringLiteral_17833/*"dlgSpinFirstButton"*/);
    FUN_01bab630(&StringLiteral_9095/*"MiscSprites.ruby"*/);
    FUN_01bab630(&StringLiteral_17834/*"dlgSpinMoreButton{{img::{0}}}{{{1}}}"*/);
    DAT_045672d4 = 1;
  }
  pLVar7 = (__this->fields).DKMMBMBMJBO;
  if (pLVar7 != (LPGLKMNHELJ_o *)0x0) {
    if ((pLVar7->fields).BGHFADDGPAD == 1) {
      pJVar8 = (pLVar7->fields).FIJPJBGCODO;
      if (pJVar8 != (RaidConfig_ENBCJNLAHAC_o *)0x0) {
        pLVar10 = (__this->fields).BtnSpin;
        pSVar4 = System_Int32__ToString((int)pJVar8 + 0x38,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat
                           (StringLiteral_17827/*"dlgSenseiLevelIndicator{img::MiscSprites.ruby}{ "*/,pSVar4,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0);
        if (pLVar10 != (LabelButton_o *)0x0) {
          LabelButton__set_Alias(pLVar10,pSVar4,(MethodInfo *)0x0);
          pLVar10 = (__this->fields).BtnSpin;
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
          pLVar7 = (__this->fields).DKMMBMBMJBO;
          if (((pLVar7 != (LPGLKMNHELJ_o *)0x0) &&
              (pJVar8 = (pLVar7->fields).FIJPJBGCODO, pJVar8 != (RaidConfig_ENBCJNLAHAC_o *)0x0))
             && (__this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
                __this_00 != (Roster_o *)0x0)) {
            bVar2 = Roster__MIFEPGNGDON
                              (__this_00,(long)(pJVar8->fields).NGMFKGGBHND,(MethodInfo *)0x0);
            if (bVar2) {
              fVar14 = 1.0;
              fVar11 = 0.0;
              fVar12 = 0.0;
              fVar13 = 0.0;
            }
            else {
              if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UVar15 = MainSettings__IALPNFOEEBP((MethodInfo *)0x0);
              fVar14 = UVar15.fields.a;
              fVar13 = UVar15.fields.b;
              fVar12 = UVar15.fields.g;
              fVar11 = UVar15.fields.r;
            }
            if (pLVar10 != (LabelButton_o *)0x0) {
              UVar15.fields.g = fVar12;
              UVar15.fields.r = fVar11;
              UVar15.fields.a = fVar14;
              UVar15.fields.b = fVar13;
              LabelButton__set_Color(pLVar10,UVar15,(MethodInfo *)0x0);
              pLVar7 = (__this->fields).DKMMBMBMJBO;
              if (((pLVar7 != (LPGLKMNHELJ_o *)0x0) &&
                  (pJVar8 = (pLVar7->fields).FIJPJBGCODO, pJVar8 != (RaidConfig_ENBCJNLAHAC_o *)0x0
                  )) && (EDEHNHIHDDH = (pJVar8->fields).LIJCIBIOOOH,
                        EDEHNHIHDDH !=
                        (System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *)0x0)) {
                if ((EDEHNHIHDDH->fields)._size == 0) {
                  return;
                }
                pIVar6 = DJNBJHPDKDP__PHPELPFMOII<object>
                                   ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                                    Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__);
                pLVar10 = (__this->fields).BtnSpinCurrency;
                values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
                if (values != (System_String_array *)0x0) {
                  if ((int)values->max_length != 0) {
                    values->m_Items[0] = StringLiteral_17826/*"dlgSenseiLevelIndicator{img::"*/;
                    thunk_FUN_01c20e04();
                    if (pIVar6 == (Il2CppObject *)0x0) goto LAB_0338a244;
                    pSVar4 = OFFIONDOEPM__CDGICMOFKHE
                                       ((System_String_o *)pIVar6[1].klass,(MethodInfo *)0x0);
                    if (1 < (uint)values->max_length) {
                      values->m_Items[1] = pSVar4;
                      thunk_FUN_01c20e04(values->m_Items + 1,pSVar4);
                      if (2 < (uint)values->max_length) {
                        values->m_Items[2] = StringLiteral_22507/*"}{ "*/;
                        thunk_FUN_01c20e04(values->m_Items + 2);
                        pSVar4 = System_Int32__ToString((int)pIVar6 + 0x18,(MethodInfo *)0x0);
                        if (3 < (uint)values->max_length) {
                          values->m_Items[3] = pSVar4;
                          thunk_FUN_01c20e04(values->m_Items + 3,pSVar4);
                          if (4 < (uint)values->max_length) {
                            values->m_Items[4] = StringLiteral_22500/*"}"*/;
                            thunk_FUN_01c20e04();
                            pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
                            if (pLVar10 != (LabelButton_o *)0x0) {
                              LabelButton__set_Alias(pLVar10,pSVar4,(MethodInfo *)0x0);
                              pLVar10 = (__this->fields).BtnSpinCurrency;
                              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                                thunk_FUN_01ba7564();
                              }
                              __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                              if (__this_01 != (PlayerData_o *)0x0) {
                                iVar3 = PlayerData__APFFEAJBAEK
                                                  (__this_01,(System_String_o *)pIVar6[1].klass,
                                                   (MethodInfo *)0x0);
                                if (iVar3 < *(int *)&pIVar6[1].monitor) {
                                  if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
                                    thunk_FUN_01ba7564();
                                  }
                                  UVar15 = MainSettings__IALPNFOEEBP((MethodInfo *)0x0);
                                  fVar14 = UVar15.fields.a;
                                  fVar13 = UVar15.fields.b;
                                  fVar12 = UVar15.fields.g;
                                  fVar11 = UVar15.fields.r;
                                }
                                else {
                                  fVar14 = 1.0;
                                  fVar11 = 0.0;
                                  fVar12 = 0.0;
                                  fVar13 = 0.0;
                                }
                                if (pLVar10 != (LabelButton_o *)0x0) {
                                  CJNHFNHJHPE.fields.g = fVar12;
                                  CJNHFNHJHPE.fields.r = fVar11;
                                  CJNHFNHJHPE.fields.a = fVar14;
                                  CJNHFNHJHPE.fields.b = fVar13;
                                  LabelButton__set_Color(pLVar10,CJNHFNHJHPE,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                            goto LAB_0338a244;
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
    else {
      pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (((pNVar5 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
          (pLVar7 = (__this->fields).DKMMBMBMJBO, pLVar7 != (LPGLKMNHELJ_o *)0x0)) &&
         (pPVar9 = (pNVar5->fields).QuestParameters, pPVar9 != (PKHMIGFEJCL_o *)0x0)) {
        iVar3 = (pLVar7->fields).PJBADHPBBAF;
        (pPVar9->fields).NKIBNMGPGAL = iVar3;
        method_00 = extraout_x1;
        if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_00;
        }
        iVar3 = Nekki_SF2_GUI_Dialogs_LotteryDialog__KDBBHOPBFBE(iVar3,method_00);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                  (&local_80,(long)iVar3,(MethodInfo *)0x0);
        pCVar1 = &(__this->fields).ENCFNGGMNAN;
        iStack_58 = local_80.fields.hiddenValue;
        local_60 = local_80.fields.currentCryptoKey;
        bStack_48 = local_80.fields.fakeValueActive;
        bStack_47 = local_80.fields.inited;
        uStack_46 = local_80.fields._26_6_;
        iStack_50 = local_80.fields.fakeValue;
        (__this->fields).ENCFNGGMNAN.fields.hiddenValue = local_80.fields.hiddenValue;
        (pCVar1->fields).currentCryptoKey = local_80.fields.currentCryptoKey;
        (__this->fields).ENCFNGGMNAN.fields.fakeValueActive = local_80.fields.fakeValueActive;
        (__this->fields).ENCFNGGMNAN.fields.inited = local_80.fields.inited;
        *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a = local_80.fields._26_6_;
        (__this->fields).ENCFNGGMNAN.fields.fakeValue = local_80.fields.fakeValue;
        pLVar7 = (__this->fields).DKMMBMBMJBO;
        if (pLVar7 != (LPGLKMNHELJ_o *)0x0) {
          pLVar10 = (__this->fields).BtnSpin;
          _bStack_48 = local_80.fields._24_8_;
          pSVar4 = StringLiteral_17833/*"dlgSpinFirstButton"*/;
          if (0 < (pLVar7->fields).PJBADHPBBAF) {
            iStack_58 = (__this->fields).ENCFNGGMNAN.fields.hiddenValue;
            local_60 = (pCVar1->fields).currentCryptoKey;
            bStack_48 = (__this->fields).ENCFNGGMNAN.fields.fakeValueActive;
            bStack_47 = (__this->fields).ENCFNGGMNAN.fields.inited;
            uStack_46 = *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a;
            iStack_50 = (__this->fields).ENCFNGGMNAN.fields.fakeValue;
            pIVar6 = (Il2CppObject *)
                     thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                        &local_60);
            pSVar4 = System_String__Format
                               (StringLiteral_17834/*"dlgSpinMoreButton{{img::{0}}}{{{1}}}"*/,StringLiteral_9095/*"MiscSprites.ruby"*/,pIVar6,(MethodInfo *)0x0);
          }
          if (pLVar10 != (LabelButton_o *)0x0) {
            LabelButton__set_Alias(pLVar10,pSVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0338a244:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PGDMPHCECDF()  [RVA 0x328A30C]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PGDMPHCECDF @ RVA 0x328A30C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__PGDMPHCECDF
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *HODGKDNOHLP;
  UnityEngine_Transform_o *pUVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar4;
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *pNVar5;
  
  if ((DAT_045672d5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_BPHEMMPAJGO__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045672d5 = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar4 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (bVar1) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar4 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    HODGKDNOHLP = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0),
       pNVar4 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0)) {
      Nekki_SF2_GUI_Menu_MainMenu__ChangeParentAndHideScroll
                (pNVar4,HODGKDNOHLP,pUVar2,(MethodInfo *)0x0);
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      pNVar4 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if (pNVar4 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        pNVar5 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(pNVar4->fields)._energy;
        pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar5 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
          Nekki_SF2_GUI_Menu_MenuMoneyPanel__remove_OnRubyBtnClick(pNVar5,pSVar3,(MethodInfo *)0x0);
          if (DAT_04565b84 == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
            DAT_04565b84 = '\x01';
          }
          pNVar4 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField
          ;
          if (pNVar4 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
            pNVar5 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(pNVar4->fields)._energy;
            pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pNVar5 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
              Nekki_SF2_GUI_Menu_MenuMoneyPanel__add_OnRubyBtnClick(pNVar5,pSVar3,(MethodInfo *)0x0)
              ;
              method_00 = extraout_x1_01;
              goto LAB_0338a4f0;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0338a4f0:
  Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK(__this,method_00);
  Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH(__this,method_01);
  Nekki_SF2_GUI_Dialogs_LotteryDialog__KIEKMKFIHFG(__this,method_02);
  return;
}


// ===== private void NNDNPLLAMFK()  [RVA 0x328ABFC]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$NNDNPLLAMFK @ RVA 0x328ABFC

void Nekki_SF2_GUI_Dialogs_LotteryDialog__NNDNPLLAMFK
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  KHLGHHMCKAE_c *pKVar3;
  CocosAnimation_o *pCVar4;
  UnityEngine_GameObject_o *__this_00;
  EZCameraShake_CameraShaker_o *__this_01;
  GECKDIFJFDH_o *pGVar5;
  
  if ((DAT_045672d6 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CameraShaker>__);
    FUN_01bab630(&KHLGHHMCKAE_TypeInfo);
    DAT_045672d6 = 1;
  }
  pCVar4 = (__this->fields).WinEffect;
  if (pCVar4 != (CocosAnimation_o *)0x0) {
    CocosAnimation__SetFirstFrame(pCVar4,(MethodInfo *)0x0);
    pCVar4 = (__this->fields).WinEffect;
    if (pCVar4 != (CocosAnimation_o *)0x0) {
      (pCVar4->fields)._FEBBHCOAEMI_k__BackingField = 1;
      (pCVar4->fields)._NOAJIBNJKPE_k__BackingField = true;
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pCVar4,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        __this_01 = (EZCameraShake_CameraShaker_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)__this,
                               Method_UnityEngine_Component_GetComponent<CameraShaker>__);
        pKVar3 = KHLGHHMCKAE_TypeInfo;
        pGVar5 = KHLGHHMCKAE_TypeInfo->static_fields->MEHPFOODDDE;
        if (pGVar5 != (GECKDIFJFDH_o *)0x0) {
          fVar1 = (pGVar5->fields).MECMNBDAIKA.fields.x;
          fVar2 = (pGVar5->fields).MECMNBDAIKA.fields.y;
          if (__this_01 != (EZCameraShake_CameraShaker_o *)0x0) {
            (__this_01->fields).DefaultPosInfluence.fields.z = (pGVar5->fields).MECMNBDAIKA.fields.z
            ;
            (__this_01->fields).DefaultPosInfluence.fields.x = fVar1;
            (__this_01->fields).DefaultPosInfluence.fields.y = fVar2;
            pGVar5 = pKVar3->static_fields->MEHPFOODDDE;
            if (pGVar5 != (GECKDIFJFDH_o *)0x0) {
              EZCameraShake_CameraShaker__ShakeOnce
                        (__this_01,(pGVar5->fields).DFPBOPOKJEF,(pGVar5->fields).ENIBLNOPPGE,0.0,
                         (pGVar5->fields).JAODINPKJLN,(MethodInfo *)0x0);
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


// ===== public LotteryDialog.JHMFCNIJBKH get_CurrentLotteryState()  [RVA 0x328ACF4]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$get_CurrentLotteryState @ RVA 0x328ACF4

int32_t Nekki_SF2_GUI_Dialogs_LotteryDialog__get_CurrentLotteryState
                  (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  return (__this->fields).OIKLOAGFFGO;
}


// ===== private void AIAMPBMODDG()  [RVA 0x328ACFC]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$AIAMPBMODDG @ RVA 0x328ACFC

void Nekki_SF2_GUI_Dialogs_LotteryDialog__AIAMPBMODDG
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  PlayerData_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  LPGLKMNHELJ_o *pLVar2;
  RaidConfig_ENBCJNLAHAC_o *pJVar3;
  
  if ((DAT_045672d7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045672d7 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (PlayerData_o *)0x0) {
    iVar1 = PlayerData__GNIBFOOLMHK(__this_00,(MethodInfo *)0x0);
    pLVar2 = (__this->fields).DKMMBMBMJBO;
    if ((pLVar2 != (LPGLKMNHELJ_o *)0x0) &&
       (pJVar3 = (pLVar2->fields).FIJPJBGCODO, pJVar3 != (RaidConfig_ENBCJNLAHAC_o *)0x0)) {
      if (iVar1 < (pJVar3->fields).NGMFKGGBHND) {
        DialogsOpener__DOEMOKNGHNI((MethodInfo *)0x0);
        return;
      }
      Nekki_SF2_GUI_Dialogs_LotteryDialog__GJAHDGBOOPO(__this,true,(System_String_o *)0x0,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void APJCIKLILGP(BKKPAKHJDKB MEJOGHDACNG)  [RVA 0x328AEA4]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$APJCIKLILGP @ RVA 0x328AEA4

void Nekki_SF2_GUI_Dialogs_LotteryDialog__APJCIKLILGP
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,BKKPAKHJDKB_o *MEJOGHDACNG,
               MethodInfo *method)

{
  int iVar1;
  RaidPaymentService_o *__this_00;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_Object_array *args;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *pMVar8;
  MethodInfo *in_x3;
  int32_t local_24;
  
  pMVar8 = (MethodInfo *)MEJOGHDACNG;
  if ((DAT_045672d8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1617);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1618);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1619);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1620);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&RaidPaymentService_JMKJIJBLDGM_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    DAT_045672d8 = 1;
    pMVar8 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK(__this,pMVar8);
  Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH(__this,method_00);
  if (MEJOGHDACNG == (BKKPAKHJDKB_o *)0x0) {
    return;
  }
  iVar1 = (MEJOGHDACNG->fields).HHJIJKJCEOF;
  if (iVar1 == 4) {
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1617,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1618,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 0) {
      (__this->fields).FBODAFDBNLH = (MEJOGHDACNG->fields).EBJBJCPBFLE;
      thunk_FUN_01c20e04(&(__this->fields).FBODAFDBNLH);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
      if (__this_00 == (RaidPaymentService_o *)0x0) {
LAB_0338b168:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      RaidPaymentService__AEADCLCKCEL(__this_00,(MEJOGHDACNG->fields).EBJBJCPBFLE,false,(MethodInfo *)0x0);
      pMVar8 = extraout_x1_00;
      goto LAB_0338b140;
    }
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1619,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1620,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = (MEJOGHDACNG->fields).HHJIJKJCEOF;
    pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(RaidPaymentService_JMKJIJBLDGM_TypeInfo,&local_24);
    if (args == (System_Object_array *)0x0) goto LAB_0338b168;
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class), lVar6 == 0)) {
      uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar7,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar5;
    thunk_FUN_01c20e04(args->m_Items,pIVar5);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(pSVar4,args,(MethodInfo *)0x0);
  }
  Nekki_SF2_GUI_Dialogs_LotteryDialog__DMKPAPKKDMP(__this,true,true,in_x3);
  pMVar8 = extraout_x1_01;
LAB_0338b140:
  if (((__this->fields).FBODAFDBNLH != (BECIPDJBAOG_o *)0x0) &&
     ((__this->fields).IIMLAADGBEE != (UnityEngine_Coroutine_o *)0x0)) {
    Nekki_SF2_GUI_Dialogs_LotteryDialog__KAPGCIMJPED(__this,pMVar8);
  }
  return;
}


// ===== private void LMDGPINLALE()  [RVA 0x328B17C]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$LMDGPINLALE @ RVA 0x328B17C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__LMDGPINLALE
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined6 uVar4;
  Roster_o *pAVar5;
  int64_t iVar6;
  int64_t iVar7;
  Roster_o *__this_00;
  Item_o *__this_01;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_00;
  long lVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_c0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  
  if ((DAT_045672d9 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8697/*"Lottery_2_Reroll"*/);
    DAT_045672d9 = 1;
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
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar5 == (Roster_o *)0x0) goto LAB_0338b470;
  iVar6 = Roster__HEHFNBKGJLP(pAVar5,(MethodInfo *)0x0);
  pCVar1 = &(__this->fields).ENCFNGGMNAN;
  local_60.fields.hiddenValue = (__this->fields).ENCFNGGMNAN.fields.hiddenValue;
  local_60.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
  local_60.fields.fakeValueActive = (__this->fields).ENCFNGGMNAN.fields.fakeValueActive;
  local_60.fields.inited = (__this->fields).ENCFNGGMNAN.fields.inited;
  local_60.fields._26_6_ = *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a;
  local_60.fields.fakeValue = (__this->fields).ENCFNGGMNAN.fields.fakeValue;
  iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,(MethodInfo *)0x0);
  if (iVar6 < iVar7) {
    DialogsOpener__PCKFMMLICGD((MethodInfo *)0x0);
  }
  else {
    local_80.fields.hiddenValue = (__this->fields).ENCFNGGMNAN.fields.hiddenValue;
    local_80.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_80.fields.fakeValueActive = (__this->fields).ENCFNGGMNAN.fields.fakeValueActive;
    local_80.fields.inited = (__this->fields).ENCFNGGMNAN.fields.inited;
    local_80.fields._26_6_ = *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a;
    local_80.fields.fakeValue = (__this->fields).ENCFNGGMNAN.fields.fakeValue;
    iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_80,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1_02;
    if (0 < iVar6) {
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
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar5 == (Roster_o *)0x0) {
LAB_0338b470:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      local_a0.fields.hiddenValue = (__this->fields).ENCFNGGMNAN.fields.hiddenValue;
      local_a0.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
      local_a0.fields.fakeValueActive = (__this->fields).ENCFNGGMNAN.fields.fakeValueActive;
      local_a0.fields.inited = (__this->fields).ENCFNGGMNAN.fields.inited;
      local_a0.fields._26_6_ = *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a;
      local_a0.fields.fakeValue = (__this->fields).ENCFNGGMNAN.fields.fakeValue;
      lVar8 = (pAVar5->fields).FBEBOPDOKFH;
      iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        (&local_a0,(MethodInfo *)0x0);
      Roster__BMLCDKADBOC(pAVar5,iVar6 + lVar8,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
      }
      else {
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 == (Roster_o *)0x0) goto LAB_0338b470;
      iVar6 = Roster__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
      local_c0.fields.hiddenValue = (__this->fields).ENCFNGGMNAN.fields.hiddenValue;
      local_c0.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
      local_c0.fields.fakeValueActive = (__this->fields).ENCFNGGMNAN.fields.fakeValueActive;
      local_c0.fields.inited = (__this->fields).ENCFNGGMNAN.fields.inited;
      local_c0.fields._26_6_ = *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a;
      local_c0.fields.fakeValue = (__this->fields).ENCFNGGMNAN.fields.fakeValue;
      iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        (&local_c0,(MethodInfo *)0x0);
      if (pAVar5 == (Roster_o *)0x0) goto LAB_0338b470;
      Roster__OGPHHGFFKHD(pAVar5,iVar6 - iVar7,10,false,(MethodInfo *)0x0);
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if (__this_01 == (Item_o *)0x0) goto LAB_0338b470;
      IKKAMAMLIKA = Item__CKKIPBAIEMN(__this_01,StringLiteral_8697/*"Lottery_2_Reroll"*/,(MethodInfo *)0x0);
      iVar7 = (pCVar1->fields).currentCryptoKey;
      bVar2 = (__this->fields).ENCFNGGMNAN.fields.fakeValueActive;
      bVar3 = (__this->fields).ENCFNGGMNAN.fields.inited;
      uVar4 = *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a;
      iVar6 = (__this->fields).ENCFNGGMNAN.fields.fakeValue;
      if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) goto LAB_0338b470;
      (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue =
           (__this->fields).ENCFNGGMNAN.fields.hiddenValue;
      (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.currentCryptoKey = iVar7;
      (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive = bVar2;
      (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited = bVar3;
      *(undefined6 *)&(IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a = uVar4;
      (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue = iVar6;
      NLPJLHOEAOE__FNLFJHFCGBJ(IKKAMAMLIKA,false,(MethodInfo *)0x0);
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      GameUtils__PNMMGOGAIEE(IKKAMAMLIKA,2,1,0,(MethodInfo *)0x0);
      method_00 = extraout_x1_03;
    }
    Nekki_SF2_GUI_Dialogs_LotteryDialog__IKGNIKPBBKK(__this,method_00);
  }
  return;
}


// ===== private void ODLKDPJMNKD()  [RVA 0x328B474]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$ODLKDPJMNKD @ RVA 0x328B474

void Nekki_SF2_GUI_Dialogs_LotteryDialog__ODLKDPJMNKD
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int32_t iVar6;
  System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *__this_00;
  Il2CppObject *pIVar7;
  PlayerData_o *__this_01;
  RaidConfig_o *__this_02;
  RaidConfig_EFAJBOEHPLJ_o *pJVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_object__o *__this_03;
  NBLEEDEAPHB_o *__this_04;
  System_Action_object__o **ppSVar10;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar11;
  Roster_o *__this_05;
  MethodInfo *in_x3;
  LPGLKMNHELJ_o *pLVar12;
  RaidConfig_ENBCJNLAHAC_o *pJVar13;
  System_Object_array *pSVar14;
  System_Action_object__o *pSVar15;
  LabelButton_o *__this_06;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Color_o UVar20;
  ADDCOJMHMHE_o AStack_150;
  System_String_o *local_c0;
  undefined8 local_b8;
  System_Collections_Generic_List_object__o *local_b0 [2];
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined1 local_57;
  undefined4 local_48;
  System_Action_object__o *local_38;
  
  if ((DAT_045672da & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_StrangerDialog_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_FILHPJCAFHA__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_9622/*"NotEnough"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_16042/*"_Tickets"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_4401/*"ClanRaidButton"*/);
    FUN_01bab630(&StringLiteral_18942/*"img::UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045672da = 1;
  }
  memset(&local_c0,0,0x90);
  (__this->fields).FBODAFDBNLH = (BECIPDJBAOG_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).FBODAFDBNLH,0);
  (__this->fields).IIMLAADGBEE = (UnityEngine_Coroutine_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).IIMLAADGBEE,0);
  pLVar12 = (__this->fields).DKMMBMBMJBO;
  if ((((pLVar12 != (LPGLKMNHELJ_o *)0x0) &&
       (pJVar13 = (pLVar12->fields).FIJPJBGCODO, pJVar13 != (RaidConfig_ENBCJNLAHAC_o *)0x0)) &&
      (__this_00 = (pJVar13->fields).LIJCIBIOOOH,
      __this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *)0x0)) &&
     (pIVar7 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__
                         ), pIVar7 != (Il2CppObject *)0x0)) {
    iVar1 = *(int *)&pIVar7[1].monitor;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_01 != (PlayerData_o *)0x0) {
      iVar6 = PlayerData__APFFEAJBAEK
                        (__this_01,(System_String_o *)pIVar7[1].klass,(MethodInfo *)0x0);
      if (iVar6 < iVar1) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if ((__this_02 != (RaidConfig_o *)0x0) &&
           (pJVar8 = RaidConfig__BHJOLIJDBLO
                               (__this_02,(System_String_o *)pIVar7[1].klass,(MethodInfo *)0x0),
           pJVar8 != (RaidConfig_EFAJBOEHPLJ_o *)0x0)) {
          pSVar9 = System_String__Concat
                             (StringLiteral_18942/*"img::UI/Atlases/"*/,(pJVar8->fields).super.KPDPJONADPJ,
                              (MethodInfo *)0x0);
          memset(&local_b8,0,0x88);
          local_c0 = pSVar9;
          thunk_FUN_01c20e04(&local_c0,pSVar9);
          local_b8 = StringLiteral_17850/*"dlgWarning"*/;
          thunk_FUN_01c20e04(&local_b8);
          __this_03 = (System_Collections_Generic_List_object__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    (__this_03,Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
          pSVar9 = System_String__Concat
                             (StringLiteral_9622/*"NotEnough"*/,(System_String_o *)pIVar7[1].klass,
                              (MethodInfo *)0x0);
          __this_04 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
          NBLEEDEAPHB___ctor(__this_04,pSVar9,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,0,-1,
                             (IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                             (MethodInfo *)0x0);
          lVar4 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
          if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
            pSVar14 = (__this_03->fields)._items;
            (__this_03->fields)._version = (__this_03->fields)._version + 1;
            if (pSVar14 != (System_Object_array *)0x0) {
              uVar3 = (__this_03->fields)._size;
              if (uVar3 < (uint)pSVar14->max_length) {
                (__this_03->fields)._size = uVar3 + 1;
                pSVar14->m_Items[(int)uVar3] = (Il2CppObject *)__this_04;
                thunk_FUN_01c20e04(pSVar14->m_Items + (int)uVar3,__this_04);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_03,(Il2CppObject *)__this_04,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              local_b0[0] = __this_03;
              thunk_FUN_01c20e04(local_b0,__this_03);
              local_a0 = 0xbf800000;
              if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar15 = Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__82_0;
              if (pSVar15 == (System_Action_object__o *)0x0) {
                if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar15 = (System_Action_object__o *)
                          thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                System_Action<object>___ctor();
                ppSVar10 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->
                            __9__82_0;
                *ppSVar10 = pSVar15;
                thunk_FUN_01c20e04(ppSVar10,pSVar15);
              }
              local_38 = pSVar15;
              thunk_FUN_01c20e04(&local_38,pSVar15);
              local_90[0] = StringLiteral_9679/*"OK"*/;
              thunk_FUN_01c20e04(local_90);
              local_98 = StringLiteral_4401/*"ClanRaidButton"*/;
              thunk_FUN_01c20e04(&local_98);
              local_57 = 1;
              local_80 = 0x500000002;
              local_48 = 0x42b40000;
              memcpy(&AStack_150,&local_c0,0x90);
              pNVar11 = DialogsOpener__NMHCCGPELBE(&AStack_150,(MethodInfo *)0x0);
              if (pNVar11 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
                (*(pNVar11->klass->vtable)._16_SetImageScale.methodPtr)
                          (0x3f333333,pNVar11,(pNVar11->klass->vtable)._16_SetImageScale.method);
                bVar2 = (Nekki_SF2_GUI_Dialogs_StrangerDialog_TypeInfo->_2).naturalAligment;
                if (((pNVar11->klass->_2).naturalAligment < bVar2) ||
                   ((pNVar11->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                    (Il2CppClass *)Nekki_SF2_GUI_Dialogs_StrangerDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(pNVar11);
                }
                __this_06 = (LabelButton_o *)pNVar11[2].fields.EHGPDKENGAP;
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
                pLVar12 = (__this->fields).DKMMBMBMJBO;
                if (((pLVar12 != (LPGLKMNHELJ_o *)0x0) &&
                    (pJVar13 = (pLVar12->fields).FIJPJBGCODO,
                    pJVar13 != (RaidConfig_ENBCJNLAHAC_o *)0x0)) &&
                   (__this_05 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
                   __this_05 != (Roster_o *)0x0)) {
                  bVar5 = Roster__MIFEPGNGDON
                                    (__this_05,(long)(pJVar13->fields).NGMFKGGBHND,(MethodInfo *)0x0
                                    );
                  if (bVar5) {
                    fVar19 = 1.0;
                    fVar16 = 0.0;
                    fVar17 = 0.0;
                    fVar18 = 0.0;
                  }
                  else {
                    if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    UVar20 = MainSettings__IALPNFOEEBP((MethodInfo *)0x0);
                    fVar19 = UVar20.fields.a;
                    fVar18 = UVar20.fields.b;
                    fVar17 = UVar20.fields.g;
                    fVar16 = UVar20.fields.r;
                  }
                  if (__this_06 != (LabelButton_o *)0x0) {
                    UVar20.fields.g = fVar17;
                    UVar20.fields.r = fVar16;
                    UVar20.fields.a = fVar19;
                    UVar20.fields.b = fVar18;
                    LabelButton__set_Color(__this_06,UVar20,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pLVar12 = (__this->fields).DKMMBMBMJBO;
        if ((pLVar12 != (LPGLKMNHELJ_o *)0x0) &&
           (pJVar13 = (pLVar12->fields).FIJPJBGCODO, pJVar13 != (RaidConfig_ENBCJNLAHAC_o *)0x0)) {
          pSVar9 = System_String__Concat
                             ((pJVar13->fields).JIJLBFGKNJK,StringLiteral_16042/*"_Tickets"*/,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_LotteryDialog__GJAHDGBOOPO(__this,false,pSVar9,in_x3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BMMFIILCION()  [RVA 0x32880A4]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$BMMFIILCION @ RVA 0x32880A4

void Nekki_SF2_GUI_Dialogs_LotteryDialog__BMMFIILCION
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_045672db & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045672db = 1;
  }
  if ((__this->fields).JHIHPMFPMIO == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar3->klass;
  ppSVar1 = &(__this->fields).JHIHPMFPMIO;
  pSVar8 = *ppSVar1;
  uVar2._0_1_ = (pPVar5->_2).rank;
  uVar2._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar2;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + (*piVar7 + 1);
        goto LAB_03388154;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_03388154:
  (*pVVar4->methodPtr)(pPVar3,pSVar8,pVVar4->method);
  *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== private void CFAECCGMCDA()  [RVA 0x328BA24]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$CFAECCGMCDA @ RVA 0x328BA24

void Nekki_SF2_GUI_Dialogs_LotteryDialog__CFAECCGMCDA
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  CloseButton_o *__this_00;
  
  __this_00 = (__this->fields).BtnQuit;
  if (__this_00 != (CloseButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this_00,true,(MethodInfo *)0x0);
    (__this->fields).super.IsIgnoreBack = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PEGBLLJOOHM(EnhancedScroller MLOLBLIGDHM, int FKPMOBKJAAI, int DHEJIHJMOGL, EnhancedScrollerCellView BDJDEAKFBJF)  [RVA 0x328BA50]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PEGBLLJOOHM @ RVA 0x328BA50

void Nekki_SF2_GUI_Dialogs_LotteryDialog__PEGBLLJOOHM
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,
               EnhancedUI_EnhancedScroller_EnhancedScroller_o *MLOLBLIGDHM,int32_t FKPMOBKJAAI,
               int32_t DHEJIHJMOGL,
               EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *BDJDEAKFBJF,
               MethodInfo *method)

{
  byte bVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)FKPMOBKJAAI;
  if ((DAT_045672dc & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo,MLOLBLIGDHM,method_00,DHEJIHJMOGL
                );
    DAT_045672dc = 1;
  }
  if ((__this->fields).OIKLOAGFFGO != 2) {
    return;
  }
  if (BDJDEAKFBJF != (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (BDJDEAKFBJF->klass->_2).naturalAligment) {
      if ((BDJDEAKFBJF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo) {
        BDJDEAKFBJF = (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)0x0;
      }
      goto LAB_0338bad8;
    }
  }
  BDJDEAKFBJF = (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)0x0;
LAB_0338bad8:
  Nekki_SF2_GUI_Dialogs_LotteryDialog__OLLLJOMGDKI
            (__this,(Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)BDJDEAKFBJF,method_00);
  return;
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x328BBC4]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$EJHAPHAHMHG @ RVA 0x328BBC4

void Nekki_SF2_GUI_Dialogs_LotteryDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  return;
}


// ===== private Vector3 PJMHKMDNNKF()  [RVA 0x328BBC8]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PJMHKMDNNKF @ RVA 0x328BBC8

UnityEngine_Vector3_o
Nekki_SF2_GUI_Dialogs_LotteryDialog__PJMHKMDNNKF
          (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = (__this->fields).NAJKNFGDGGI;
  if ((__this_00 != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar1 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__get_localScale(__this_01,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool PLCHHHDDJJN(DILGLGMKOFG NFIGEAOPJKM)  [RVA 0x328BBF0]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PLCHHHDDJJN @ RVA 0x328BBF0

bool Nekki_SF2_GUI_Dialogs_LotteryDialog__PLCHHHDDJJN
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,DILGLGMKOFG_o *NFIGEAOPJKM,
               MethodInfo *method)

{
  bool bVar1;
  BECIPDJBAOG_o *pBVar2;
  
  if ((DAT_045672dd & 1) == 0) {
    FUN_01bab630(&StringLiteral_6716/*"Gems"*/);
    DAT_045672dd = 1;
  }
  if (NFIGEAOPJKM != (DILGLGMKOFG_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((NFIGEAOPJKM->fields).super._COIPKAKHDFP_k__BackingField,StringLiteral_6716/*"Gems"*/,
                       (MethodInfo *)0x0);
    if (bVar1) {
      pBVar2 = (__this->fields).FBODAFDBNLH;
      if (pBVar2 == (BECIPDJBAOG_o *)0x0) goto LAB_0338bc6c;
      bVar1 = (NFIGEAOPJKM->fields).super._HFPMLGFDOKC_k__BackingField ==
              (pBVar2->fields).EMOLIBOCKJK;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0338bc6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x328BC70]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$LCGFJKFJKJK @ RVA 0x328BC70

void Nekki_SF2_GUI_Dialogs_LotteryDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,int32_t DNBBBGEENMM,MethodInfo *method
               )

{
  return;
}


// ===== private void IKGNIKPBBKK()  [RVA 0x32894FC]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$IKGNIKPBBKK @ RVA 0x32894FC

void Nekki_SF2_GUI_Dialogs_LotteryDialog__IKGNIKPBBKK
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Collections_Generic_List_DILGLGMKOFG__o *pSVar1;
  float fVar2;
  
  if ((DAT_045672de & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Count__);
    FUN_01bab630(&StringLiteral_13627/*"There are less then 10 slots. Lottery wont stop spinning. That's how it is programmed :-)"*/);
    DAT_045672de = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).HPJNLAOAJJE;
  if (pSVar1 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
    if ((pSVar1->fields)._size < 10) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_13627/*"There are less then 10 slots. Lottery wont stop spinning. That's how it is programmed :-)"*/,(MethodInfo *)0x0);
      method = extraout_x1_00;
    }
    Nekki_SF2_GUI_Dialogs_LotteryDialog__CIDOGGEGAIN(__this,method);
    fVar2 = MFIKGMIDDIG__IEONOAEPPCN((MethodInfo *)0x0);
    (__this->fields).DEIFFBGHMIH = fVar2;
    MFIKGMIDDIG__ICHPKMALDCH(fVar2 / 3.0,(MethodInfo *)0x0);
    EDFDANKEBGF__MCKLJNFEACN((MethodInfo *)0x0);
    __this_00 = (__this->fields).ScrollShadow;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      routine = Nekki_SF2_GUI_Dialogs_LotteryDialog__MOPBBHLMCAJ(__this,method_00);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      (__this->fields).OIKLOAGFFGO = 1;
      Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK(__this,method_01);
      Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH(__this,method_02);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GLANJNFACKI()  [RVA 0x328BD6C]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GLANJNFACKI @ RVA 0x328BD6C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void PEIBNBAMFFE()  [RVA 0x328BD70]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PEIBNBAMFFE @ RVA 0x328BD70

void Nekki_SF2_GUI_Dialogs_LotteryDialog__PEIBNBAMFFE
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  DG_Tweening_Core_DOGetter_Vector3__o *getter;
  DG_Tweening_Core_DOSetter_Vector3__o *setter;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *extraout_x1;
  DMGOIPBMOJI_o *pDVar1;
  float fVar2;
  float duration;
  UnityEngine_Vector3_o endValue;
  
  if ((DAT_045672df & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&KHLGHHMCKAE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_JNPPMPMIPGN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_NJCAIMNNMPC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_PJMHKMDNNKF__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_045672df = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_LotteryDialog__OIJGCNKKINI(__this,method);
  getter = (DG_Tweening_Core_DOGetter_Vector3__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
  DG_Tweening_Core_DOGetter<Vector3>___ctor();
  setter = (DG_Tweening_Core_DOSetter_Vector3__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
  DG_Tweening_Core_DOSetter<Vector3>___ctor();
  pDVar1 = KHLGHHMCKAE_TypeInfo->static_fields->MCOFINNAPEE;
  if (pDVar1 != (DMGOIPBMOJI_o *)0x0) {
    fVar2 = (pDVar1->fields).CGGGKIKDMCK;
    duration = (pDVar1->fields).BIEBIDDJGKC;
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    endValue.fields.y = fVar2;
    endValue.fields.x = fVar2;
    endValue.fields.z = 0.0;
    t = DG_Tweening_DOTween__To(getter,setter,endValue,duration,(MethodInfo *)0x0);
    action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 0338beec to 0348c4d3 has its CatchHandler @ 0338beec
                       catch() { ... } // from try @ 0338beec with catch @ 0338beec
                       catch() { ... } // from try @ 0338c594 with catch @ 0338beec
                       catch() { ... } // from try @ 0338c644 with catch @ 0338beec
                       catch() { ... } // from try @ 0338c6f8 with catch @ 0338beec */
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__OnComplete<object>
              ((Il2CppObject *)t,action,
               Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x328BF20]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$.cctor @ RVA 0x328BF20

void Nekki_SF2_GUI_Dialogs_LotteryDialog___cctor(MethodInfo *method)

{
  System_Int32_array *pSVar1;
  System_Int32_array **ppSVar2;
  
  if ((DAT_045672e0 & 1) == 0) {
    FUN_01bab630(&int___TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo);
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_703BE8CB5574D9E7B636FE613F3FB7E430E5F222DA765D863B9D5DB0A255DAD1
                );
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_C0E0211B207A5474E25AC69B2D9096585F68A511C350A80A563ACD6B3E149322
                );
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_EE3F1B56C7C842C14B392D38DC90896D29588E4A27E66FF9D2F167D2C09D5B51
                );
    DAT_045672e0 = 1;
  }
  pSVar1 = (System_Int32_array *)FUN_01bab718(int___TypeInfo,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_<PrivateImplementationDetails>_703BE8CB5574D9E7B636FE613F3FB7E430E5F222DA765D863B9D5DB0A255DAD1
             ,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->static_fields->IJDEBLDLODL = pSVar1;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->static_fields,pSVar1);
  pSVar1 = (System_Int32_array *)FUN_01bab718(int___TypeInfo,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_<PrivateImplementationDetails>_C0E0211B207A5474E25AC69B2D9096585F68A511C350A80A563ACD6B3E149322
             ,(MethodInfo *)0x0);
  ppSVar2 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->static_fields->MPMNNILPAAE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Int32_array *)FUN_01bab718(int___TypeInfo,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_<PrivateImplementationDetails>_EE3F1B56C7C842C14B392D38DC90896D29588E4A27E66FF9D2F167D2C09D5B51
             ,(MethodInfo *)0x0);
  ppSVar2 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->static_fields->EJKOCKOCCCI;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== private void LEPLABNPMEL()  [RVA 0x328C050]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$LEPLABNPMEL @ RVA 0x328C050

void Nekki_SF2_GUI_Dialogs_LotteryDialog__LEPLABNPMEL
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  System_Action_o *PJDPEGNLFHH;
  System_Action_int__int__o *HLBLIDOPBJJ;
  
  if ((DAT_045672e1 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_int>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_AIHMNPJOJMF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_KHJHBJHEMEM__);
    DAT_045672e1 = 1;
  }
  (__this->fields).FBODAFDBNLH = (BECIPDJBAOG_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).FBODAFDBNLH,0);
  (__this->fields).IIMLAADGBEE = (UnityEngine_Coroutine_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).IIMLAADGBEE,0);
  PJDPEGNLFHH = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  HLBLIDOPBJJ = (System_Action_int__int__o *)thunk_FUN_01bda818(System_Action<int,_int>_TypeInfo);
  System_Action<int,_int>___ctor();
  LotterySpinRewardHelper__FAAJFKFKBOL(PJDPEGNLFHH,HLBLIDOPBJJ,(MethodInfo *)0x0);
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x328C140]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$Init @ RVA 0x328C140

void Nekki_SF2_GUI_Dialogs_LotteryDialog__Init
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  LPGLKMNHELJ_c *pLVar3;
  bool bVar4;
  System_Collections_Generic_List_DILGLGMKOFG__o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar5;
  UnityEngine_Events_UnityAction_o *call;
  System_IObservable_object__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  CloseButton_o *__this_01;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar6;
  EIFHKGFMIEN_o *__this_02;
  PBAKFOBIHEG_o *pPVar7;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  System_Action_o *CJNHFNHJHPE;
  HJNDPNIMBBG_o *__this_03;
  UnityEngine_Object_o *exists;
  Nekki_SF2_GUI_ResolutionImage_o *__this_04;
  NDPMLPGANCI_o *__this_05;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  LPGLKMNHELJ_o *pLVar10;
  PKHMIGFEJCL_o *pPVar11;
  CocosAnimation_o *pCVar12;
  PBAKFOBIHEG_c *pPVar13;
  ulong uVar14;
  int32_t *piVar15;
  UnityEngine_Events_UnityEvent_o *__this_06;
  EIFHKGFMIEN_o **ppEVar16;
  LPGLKMNHELJ_o **ppLVar17;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  int64_t local_60;
  int64_t iStack_58;
  int64_t iStack_50;
  bool_conflict bStack_48;
  bool_conflict bStack_47;
  undefined6 uStack_46;
  
  if ((DAT_045672e2 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&EIFHKGFMIEN_TypeInfo);
    FUN_01bab630(&LPGLKMNHELJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<DILGLGMKOFG>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_DPHGELLABKO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_GJBIHHLINEG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_PEGBLLJOOHM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_PEIBNBAMFFE__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<object>__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045672e2 = 1;
  }
  pLVar3 = LPGLKMNHELJ_TypeInfo;
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    (__this->fields).DKMMBMBMJBO = (LPGLKMNHELJ_o *)0x0;
  }
  else {
    bVar1 = (LPGLKMNHELJ_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)LPGLKMNHELJ_TypeInfo)) {
LAB_0338c6f8:
                    /* try { // try from 0338c6f8 to 0348c703 has its CatchHandler @ 0338beec */
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    (__this->fields).DKMMBMBMJBO = (LPGLKMNHELJ_o *)IMMNELPBGIF;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pLVar3))
    goto LAB_0338c6f8;
  }
  ppLVar17 = &(__this->fields).DKMMBMBMJBO;
  thunk_FUN_01c20e04(ppLVar17,IMMNELPBGIF);
  pLVar10 = *ppLVar17;
  if (pLVar10 != (LPGLKMNHELJ_o *)0x0) {
    (__this->fields).KGJOHFHDLFK = (pLVar10->fields).IHJFCJKCGEK;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_80,0,(MethodInfo *)0x0);
    iStack_58 = local_80.fields.hiddenValue;
    local_60 = local_80.fields.currentCryptoKey;
    bStack_48 = local_80.fields.fakeValueActive;
    bStack_47 = local_80.fields.inited;
    uStack_46 = local_80.fields._26_6_;
    iStack_50 = local_80.fields.fakeValue;
    (__this->fields).ENCFNGGMNAN.fields.hiddenValue = local_80.fields.hiddenValue;
    (__this->fields).ENCFNGGMNAN.fields.currentCryptoKey = local_80.fields.currentCryptoKey;
    (__this->fields).ENCFNGGMNAN.fields.fakeValueActive = local_80.fields.fakeValueActive;
    (__this->fields).ENCFNGGMNAN.fields.inited = local_80.fields.inited;
    *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a = local_80.fields._26_6_;
    (__this->fields).ENCFNGGMNAN.fields.fakeValue = local_80.fields.fakeValue;
    (__this->fields).OIKLOAGFFGO = 0;
    __this_00 = (System_Collections_Generic_List_DILGLGMKOFG__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<DILGLGMKOFG>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<DILGLGMKOFG>__ctor__);
    (__this->fields).HPJNLAOAJJE = __this_00;
    thunk_FUN_01c20e04(&(__this->fields).HPJNLAOAJJE,__this_00);
    Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_1/*""*/,StringLiteral_9679/*"OK"*/,
               StringLiteral_3640/*"CANCEL"*/,0,(MethodInfo *)0x0);
    (__this->fields).super.IsQuestDialog = true;
    pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar5 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pPVar11 = (pNVar5->fields).QuestParameters, pPVar11 != (PKHMIGFEJCL_o *)0x0)) {
      (pPVar11->fields).BILELFMLGNC = true;
      pCVar12 = (__this->fields).WinEffect;
      if (pCVar12 != (CocosAnimation_o *)0x0) {
        __this_06 = (pCVar12->fields).OnAnimationComplete;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_06 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_06,call,(MethodInfo *)0x0);
          source = HABIFHOHHOF__ELOBMGDKLPK((__this->fields).BtnQuit,(MethodInfo *)0x0);
          onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          disposable = (Il2CppObject *)
                       UniRx_ObservableExtensions__Subscribe<object>
                                 ((System_IObservable_T__o *)source,onNext,
                                  Method_UniRx_ObservableExtensions_Subscribe<object>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (disposable,
                     (System_Collections_Generic_ICollection_IDisposable__o *)
                     (__this->fields).HBJPBPBIOOB,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          __this_01 = (__this->fields).BtnQuit;
          if (__this_01 != (CloseButton_o *)0x0) {
            CloseButton__PlayIdleAnimation(__this_01,(MethodInfo *)0x0);
            pEVar6 = (__this->fields).Scroller;
            if (pEVar6 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
              EnhancedUI_EnhancedScroller_EnhancedScroller__set_Delegate
                        (pEVar6,(LEPEFNKEJBC_o *)__this,(MethodInfo *)0x0);
              pEVar6 = (__this->fields).Scroller;
              __this_02 = (EIFHKGFMIEN_o *)thunk_FUN_01bda818(EIFHKGFMIEN_TypeInfo);
              EIFHKGFMIEN___ctor(__this_02,(Il2CppObject *)__this,
                                 Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_PEGBLLJOOHM__,
                                 (MethodInfo *)0x0);
              if (pEVar6 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
                ppEVar16 = &(pEVar6->fields).scrollerSnapped;
                *ppEVar16 = __this_02;
                thunk_FUN_01c20e04(ppEVar16,__this_02);
                pLVar10 = (__this->fields).DKMMBMBMJBO;
                if ((pLVar10 != (LPGLKMNHELJ_o *)0x0) &&
                   (pEVar6 = (__this->fields).Scroller,
                   pEVar6 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0)) {
                    /* try { // try from 0338c4d4 to 0348c4fb has its CatchHandler @ 0338c65c */
                  (pEVar6->fields).snapping = (pLVar10->fields).BGHFADDGPAD == 0;
                  pPVar7 = CoroutineManager__get_Current((MethodInfo *)0x0);
                  pSVar8 = Nekki_SF2_GUI_Dialogs_LotteryDialog__LPNCEHPFOAF(__this,method_00);
                  if (pPVar7 != (PBAKFOBIHEG_o *)0x0) {
                    pPVar13 = pPVar7->klass;
                    uVar2._0_1_ = (pPVar13->_2).rank;
                    uVar2._1_1_ = (pPVar13->_2).minimumAlignment;
                    uVar14 = (ulong)uVar2;
                    if (uVar14 != 0) {
                    /* try { // try from 0338c530 to 0348c557 has its CatchHandler @ 0338c658 */
                      piVar15 = &((pPVar13->_1).interfaceOffsets)->offset;
                      do {
                        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                          pVVar9 = pPVar13->vtable + *piVar15;
                          goto LAB_0338c568;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pPVar7,PBAKFOBIHEG_TypeInfo,0);
LAB_0338c568:
                    pSVar8 = (System_Collections_IEnumerator_o *)
                             (*pVVar9->methodPtr)(pPVar7,pSVar8,1,pVVar9->method);
                    /* try { // try from 0338c588 to 0348c593 has its CatchHandler @ 0338c660 */
                    (__this->fields).JHIHPMFPMIO = pSVar8;
                    thunk_FUN_01c20e04(&(__this->fields).JHIHPMFPMIO);
                    /* try { // try from 0338c594 to 0348c637 has its CatchHandler @ 0338beec */
                    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    System_Action___ctor();
                    if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    WideScreenController__add_UpdateEvent(CJNHFNHJHPE,(MethodInfo *)0x0);
                    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    if (DAT_04565b7e == '\0') {
                      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                      DAT_04565b7e = '\x01';
                    }
                    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
                    if (__this_03 != (HJNDPNIMBBG_o *)0x0) {
                      exists = (UnityEngine_Object_o *)
                               HJNDPNIMBBG__JDHIIDFJMBM(__this_03,(MethodInfo *)0x0);
                    /* try { // try from 0338c638 to 0348c63b has its CatchHandler @ 0338c654 */
                      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0338c63c to 0348c63f has its CatchHandler @ 0338c650 */
                    /* try { // try from 0338c640 to 0348c643 has its CatchHandler @ 0338c64c */
                        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
                      }
                    /* try { // try from 0338c644 to 0348c677 has its CatchHandler @ 0338beec */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338c640 with catch @ 0338c64c
                        */
                      bVar4 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
                      method_01 = extraout_x1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338c63c with catch @ 0338c650
                        */
                      if (bVar4) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338c638 with catch @ 0338c654
                        */
                        __this_04 = (__this->fields).Bg;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338c530 with catch @ 0338c658
                        */
                        if (__this_04 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0338c6f4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338c4d4 with catch @ 0338c65c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338c588 with catch @ 0338c660
                        */
                        UnityEngine_UI_Image__set_sprite
                                  ((UnityEngine_UI_Image_o *)__this_04,
                                   (UnityEngine_Sprite_o *)exists,(MethodInfo *)0x0);
                        method_01 = extraout_x1_00;
                      }
                    /* try { // try from 0338c678 to 0348c67b has its CatchHandler @ 0338c690 */
                      Nekki_SF2_GUI_Dialogs_LotteryDialog__GJBIHHLINEG(__this,method_01);
                      Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK(__this,method_02);
                      Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH(__this,method_03);
                    /* catch() { ... } // from try @ 0338c678 with catch @ 0338c690 */
                      __this_05 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                      CJNHFNHJHPE_00 =
                           (System_Action_DBMPKPJGIPI__o *)
                           thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
                      System_Action<Int32Enum>___ctor();
                      if (__this_05 != (NDPMLPGANCI_o *)0x0) {
                        NDPMLPGANCI__FKFIIDIJIEI(__this_05,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                    /* try { // try from 0338c6d0 to 0348c6f7 has its CatchHandler @ 0338c70c */
                        Nekki_SF2_GUI_Dialogs_LotteryDialog__OKJDJIGBMLI(__this,method_04);
                        (__this->fields).GGCLCAMEALI = false;
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
LAB_0338c6f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OnClose(object IMMNELPBGIF)  [RVA 0x328C86C]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$OnClose @ RVA 0x328C86C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  Il2CppObject *IMMNELPBGIF_00;
  long lVar3;
  MethodInfo *in_x3;
  LPGLKMNHELJ_o *pLVar4;
  PKHMIGFEJCL_o *pPVar5;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar6;
  UnityEngine_Object_o *x;
  undefined4 local_14;
  
  if ((DAT_045672e3 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_045672e3 = 1;
  }
  pLVar4 = (__this->fields).DKMMBMBMJBO;
  if (pLVar4 != (LPGLKMNHELJ_o *)0x0) {
    if ((pLVar4->fields).BGHFADDGPAD != 1) {
      Nekki_SF2_GUI_Dialogs_LotteryDialog__DMKPAPKKDMP(__this,false,false,in_x3);
      return;
    }
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pPVar5 = (pNVar2->fields).QuestParameters, pPVar5 != (PKHMIGFEJCL_o *)0x0)) {
      (pPVar5->fields).BILELFMLGNC = false;
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      pNVar6 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if (pNVar6 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        *(undefined1 *)&(pNVar6->fields)._money = 1;
        local_14 = 0;
        IMMNELPBGIF_00 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_14);
        Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
                  ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF_00,(MethodInfo *)0x0);
        pLVar4 = (__this->fields).DKMMBMBMJBO;
        if (pLVar4 != (LPGLKMNHELJ_o *)0x0) {
          if ((pLVar4->fields).BGHFADDGPAD == 1) {
            lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_01b81620();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_01b81620();
            }
            x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar1) {
              lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01b81620();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01b81620();
              }
              if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) ==
                  (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_0338ca20;
              Nekki_SF2_GUI_Shop_ShopScene__ReloadActiveItemsAndRefreshDelayed
                        ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                         (MethodInfo *)0x0);
            }
          }
          return;
        }
      }
    }
  }
LAB_0338ca20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x328CA24]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$.ctor @ RVA 0x328CA24

void Nekki_SF2_GUI_Dialogs_LotteryDialog___ctor
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BECIPDJBAOG__o *__this_00;
  UniRx_CompositeDisposable_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_045672e4 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BECIPDJBAOG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BECIPDJBAOG>_TypeInfo);
    DAT_045672e4 = 1;
    method = extraout_x1;
  }
  (__this->fields).BECMMEIMOAL = -1;
  (__this->fields).GLGOLGJBCAK = -1;
  __this_00 = (System_Collections_Generic_List_BECIPDJBAOG__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BECIPDJBAOG>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BECIPDJBAOG>__ctor__);
  (__this->fields).FCKCGNHILFE = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).FCKCGNHILFE,__this_00);
  __this_01 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).HBJPBPBIOOB = __this_01;
  thunk_FUN_01c20e04(&(__this->fields).HBJPBPBIOOB,__this_01);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void AIHMNPJOJMF(int JEGMMDPFNIL, int KMOHFJKJBMK)  [RVA 0x3287A50]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$AIHMNPJOJMF @ RVA 0x3287A50

void Nekki_SF2_GUI_Dialogs_LotteryDialog__AIHMNPJOJMF
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,int32_t JEGMMDPFNIL,
               int32_t KMOHFJKJBMK,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  int32_t local_48;
  int32_t local_44;
  
  if ((DAT_045672e5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1621);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1622);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    DAT_045672e5 = 1;
  }
  pNVar2 = (__this->fields).LabelSpinADViews;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1621,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1622,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  local_44 = JEGMMDPFNIL;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
  local_48 = KMOHFJKJBMK;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
  pSVar1 = System_String__Format(pSVar1,arg0,arg1,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,pSVar1,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).LabelSpinADViews;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,1 < KMOHFJKJBMK,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PBDGFBENHDK()  [RVA 0x32878FC]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PBDGFBENHDK @ RVA 0x32878FC

void Nekki_SF2_GUI_Dialogs_LotteryDialog__PBDGFBENHDK
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK(__this,method);
  Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH(__this,method_00);
  return;
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x328D2B8]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GLJGIJNALCA @ RVA 0x328D2B8

void Nekki_SF2_GUI_Dialogs_LotteryDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void AINGLMJIPKH()  [RVA 0x328CAEC]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$AINGLMJIPKH @ RVA 0x328CAEC

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t JEGMMDPFNIL;
  int32_t KMOHFJKJBMK;
  CloseButton_o *pCVar2;
  UnityEngine_GameObject_o *pUVar3;
  LabelButton_o *pLVar4;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *KKJPPDNKGAI;
  AdvertisingViewsManager_o *pPVar5;
  UnityEngine_CanvasGroup_o *pUVar6;
  MethodInfo *method_00;
  byte bVar7;
  undefined1 uVar8;
  LPGLKMNHELJ_o *pLVar9;
  RaidConfig_ENBCJNLAHAC_o *pJVar10;
  System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *pSVar11;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar12;
  IIHMKHNLJKD_o *__this_00;
  float fVar13;
  float value;
  undefined1 auVar14 [16];
  
  auVar14._8_8_ = method;
  auVar14._0_8_ = __this;
  if ((DAT_045672e6 & 1) == 0) {
    FUN_01bab630(&Roster_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1623);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1624);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Count__);
    auVar14 = FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045672e6 = 1;
  }
  pLVar9 = (__this->fields).DKMMBMBMJBO;
  if (pLVar9 == (LPGLKMNHELJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar14._0_8_,auVar14._8_8_);
  }
  if ((pLVar9->fields).BGHFADDGPAD == 0) {
    pCVar2 = (__this->fields).BtnQuit;
    if (pCVar2 == (CloseButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(0,auVar14._8_8_);
    }
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
    pLVar9 = (__this->fields).DKMMBMBMJBO;
    if (pLVar9 == (LPGLKMNHELJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar3,0 < (pLVar9->fields).PJBADHPBBAF,(MethodInfo *)0x0);
    pLVar4 = (__this->fields).BtnSpin;
    if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0);
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar12 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
  }
  pLVar4 = (__this->fields).BtnSpinCurrency;
  if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0);
  pLVar9 = (__this->fields).DKMMBMBMJBO;
  if (pLVar9 == (LPGLKMNHELJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pLVar9->fields).BGHFADDGPAD == 1) {
    pJVar10 = (pLVar9->fields).FIJPJBGCODO;
    if (pJVar10 == (RaidConfig_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar11 = (pJVar10->fields).LIJCIBIOOOH;
    if (pSVar11 == (System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = 0 < (pSVar11->fields)._size;
  }
  else {
    bVar1 = false;
  }
  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
  pLVar4 = (__this->fields).BtnSpinAD;
  if (pLVar4 != (LabelButton_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0);
    pLVar9 = (__this->fields).DKMMBMBMJBO;
    if (pLVar9 == (LPGLKMNHELJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pLVar9->fields).BGHFADDGPAD == 1) {
      if ((Roster_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b86 == '\0') {
        FUN_01bab630(&Roster_TypeInfo);
        DAT_04565b86 = '\x01';
      }
      if ((Roster_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 0338cd0c to 0348ce2b has its CatchHandler @ 0338cd0c
                       catch() { ... } // from try @ 0338cd0c with catch @ 0338cd0c
                       catch() { ... } // from try @ 0338ce90 with catch @ 0338cd0c
                       catch() { ... } // from try @ 0338ced0 with catch @ 0338cd0c
                       catch() { ... } // from try @ 0338cf08 with catch @ 0338cd0c
                       catch() { ... } // from try @ 0338cf38 with catch @ 0338cd0c */
      }
      __this_00 = Roster_TypeInfo->static_fields->BFJCOMHPDJC;
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1623,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1624,
                 (MethodInfo *)0x0);
      KKJPPDNKGAI = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      if (__this_00 == (IIHMKHNLJKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = IIHMKHNLJKD__LCLIGIJPCOD(__this_00,KKJPPDNKGAI,(MethodInfo *)0x0);
    }
    else {
      bVar1 = false;
    }
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
    pLVar4 = (__this->fields).BtnSpinAD;
    if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled
                      ((UnityEngine_Behaviour_o *)pLVar4,(MethodInfo *)0x0);
    if (bVar1) {
      pPVar5 = AdvertisingViewsManager__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pPVar5 == (AdvertisingViewsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      JEGMMDPFNIL = AdvertisingViewsManager__OMLNCFNPAMJ(pPVar5,0xc,0,(MethodInfo *)0x0);
      pPVar5 = AdvertisingViewsManager__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pPVar5 == (AdvertisingViewsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method_00 = (MethodInfo *)0x0;
      KMOHFJKJBMK = AdvertisingViewsManager__LAPHEMPOHMP(pPVar5,0xc,1,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_LotteryDialog__AIHMNPJOJMF(__this,JEGMMDPFNIL,KMOHFJKJBMK,method_00);
    }
    pCVar2 = (__this->fields).BtnQuit;
    if (pCVar2 == (CloseButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pCVar2,(__this->fields).OIKLOAGFFGO == 0,
               (MethodInfo *)0x0);
                    /* try { // try from 0338ce2c to 0348ce33 has its CatchHandler @ 0338ceec */
    pCVar2 = (__this->fields).BtnQuit;
    if (pCVar2 != (CloseButton_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (bVar1) {
        pCVar2 = (__this->fields).BtnQuit;
        if (pCVar2 == (CloseButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 0338ce54 to 0348ce5f has its CatchHandler @ 0338ced8 */
        bVar7 = (pCVar2->fields).super.super.super.super.m_Interactable ^ 1;
      }
      else {
        bVar7 = true;
      }
      (__this->fields).super.IsIgnoreBack = (bool_conflict)bVar7;
                    /* try { // try from 0338ce70 to 0348ce73 has its CatchHandler @ 0338ced4 */
      pLVar4 = (__this->fields).BtnSpin;
                    /* try { // try from 0338ce74 to 0348ce83 has its CatchHandler @ 0338cee4 */
      if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 0338ce84 to 0348ce8f has its CatchHandler @ 0338cee8 */
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pLVar4,(__this->fields).OIKLOAGFFGO == 0,
                 (MethodInfo *)0x0);
      pLVar4 = (__this->fields).BtnSpin;
                    /* try { // try from 0338ce90 to 0348cec7 has its CatchHandler @ 0338cd0c */
      if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar6 = (__this->fields).BtnSpinContent;
      if (pUVar6 != (UnityEngine_CanvasGroup_o *)0x0) {
        value = 0.6;
        fVar13 = value;
        if ((pLVar4->fields).super.super.super.super.m_Interactable != false) {
          fVar13 = 1.0;
        }
        UnityEngine_CanvasGroup__set_alpha(pUVar6,fVar13,(MethodInfo *)0x0);
        pLVar4 = (__this->fields).BtnSpinCurrency;
                    /* try { // try from 0338cec8 to 0348cecb has its CatchHandler @ 0338cee0 */
        if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 0338cecc to 0348cecf has its CatchHandler @ 0338cedc */
                    /* try { // try from 0338ced0 to 0348cf03 has its CatchHandler @ 0338cd0c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ce70 with catch @ 0338ced4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ce54 with catch @ 0338ced8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338cecc with catch @ 0338cedc
                        */
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pLVar4,(__this->fields).OIKLOAGFFGO == 0,
                   (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338cec8 with catch @ 0338cee0
                        */
        pLVar4 = (__this->fields).BtnSpinCurrency;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ce74 with catch @ 0338cee4
                        */
        if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ce84 with catch @ 0338cee8
                        */
        pUVar6 = (__this->fields).BtnSpinCurrencyContent;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ce2c with catch @ 0338ceec
                        */
        if (pUVar6 != (UnityEngine_CanvasGroup_o *)0x0) {
          fVar13 = value;
          if ((pLVar4->fields).super.super.super.super.m_Interactable != false) {
            fVar13 = 1.0;
          }
                    /* try { // try from 0338cf04 to 0348cf07 has its CatchHandler @ 0338cf28 */
          UnityEngine_CanvasGroup__set_alpha(pUVar6,fVar13,(MethodInfo *)0x0);
                    /* try { // try from 0338cf08 to 0348cf2f has its CatchHandler @ 0338cd0c */
          pLVar4 = (__this->fields).BtnSpinAD;
          if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* catch() { ... } // from try @ 0338cf04 with catch @ 0338cf28 */
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)pLVar4,(__this->fields).OIKLOAGFFGO == 0,
                     (MethodInfo *)0x0);
          pLVar4 = (__this->fields).BtnSpinAD;
                    /* try { // try from 0338cf30 to 0348cf37 has its CatchHandler @ 0338cf4c */
          if (pLVar4 == (LabelButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar6 = (__this->fields).BtnSpinADContent;
                    /* try { // try from 0338cf38 to 0348cf43 has its CatchHandler @ 0338cd0c */
          if (pUVar6 == (UnityEngine_CanvasGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 0338cf44 to 0348cf4b has its CatchHandler @ 0338cf4c */
          if ((pLVar4->fields).super.super.super.super.m_Interactable != false) {
            value = 1.0;
          }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0338cf30 with catch @ 0338cf4c
                       catch(type#2 @ 00000000) { ... } // from try @ 0338cf44 with catch @ 0338cf4c
                        */
                    /* try { // try from 0338cf50 to 0348d103 has its CatchHandler @ 0338cf50
                       catch() { ... } // from try @ 0338cf50 with catch @ 0338cf50
                       catch() { ... } // from try @ 0338d2c0 with catch @ 0338cf50
                       catch() { ... } // from try @ 0338d37c with catch @ 0338cf50
                       catch() { ... } // from try @ 0338d384 with catch @ 0338cf50
                       catch() { ... } // from try @ 0338d470 with catch @ 0338cf50 */
          UnityEngine_CanvasGroup__set_alpha(pUVar6,value,(MethodInfo *)0x0);
          if (DAT_04565b84 == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
            DAT_04565b84 = '\x01';
          }
          pNVar12 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                    _JPDNDPEAJAL_k__BackingField;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar1) {
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pCVar2 = (__this->fields).BtnQuit;
            if (pCVar2 == (CloseButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pNVar12 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                      _JPDNDPEAJAL_k__BackingField;
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
            if (bVar1) {
              pCVar2 = (__this->fields).BtnQuit;
              if (pCVar2 == (CloseButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar8 = (pCVar2->fields).super.super.super.super.m_Interactable;
            }
            else {
              uVar8 = 0;
            }
            if (pNVar12 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            *(undefined1 *)&(pNVar12->fields)._money = uVar8;
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool MLJCPJAFHPC(DILGLGMKOFG NFIGEAOPJKM)  [RVA 0x328D2BC]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$MLJCPJAFHPC @ RVA 0x328D2BC

bool Nekki_SF2_GUI_Dialogs_LotteryDialog__MLJCPJAFHPC
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,DILGLGMKOFG_o *NFIGEAOPJKM,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar3;
  Il2CppObject *pIVar4;
  BECIPDJBAOG_o *pBVar5;
  System_String_o *a;
  
                    /* try { // try from 0338d2c0 to 0348d35b has its CatchHandler @ 0338cf50 */
  if ((DAT_045672e7 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_045672e7 = 1;
  }
  if (((NFIGEAOPJKM != (DILGLGMKOFG_o *)0x0) &&
      (pBVar5 = (__this->fields).FBODAFDBNLH, pBVar5 != (BECIPDJBAOG_o *)0x0)) &&
     (pGVar3 = (pBVar5->fields).AKFPFIHIHOC,
     pGVar3 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    a = (NFIGEAOPJKM->fields).super._COIPKAKHDFP_k__BackingField;
    pIVar4 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,0,
                        Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    if (pIVar4 != (Il2CppObject *)0x0) {
      bVar2 = System_String__op_Equality(a,pIVar4[1].monitor,(MethodInfo *)0x0);
      if (!bVar2) {
                    /* try { // try from 0338d368 to 0348d36b has its CatchHandler @ 0338d3a4 */
                    /* try { // try from 0338d36c to 0348d36f has its CatchHandler @ 0338d39c */
                    /* try { // try from 0338d370 to 0348d373 has its CatchHandler @ 0338d398 */
                    /* try { // try from 0338d374 to 0348d377 has its CatchHandler @ 0338d394 */
                    /* try { // try from 0338d378 to 0348d37b has its CatchHandler @ 0338d3b8 */
        return false;
      }
      pBVar5 = (__this->fields).FBODAFDBNLH;
      if ((pBVar5 != (BECIPDJBAOG_o *)0x0) &&
         (pGVar3 = (pBVar5->fields).AKFPFIHIHOC,
         pGVar3 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
        iVar1 = (NFIGEAOPJKM->fields).super._HFPMLGFDOKC_k__BackingField;
        pIVar4 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,0,
                            Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                           );
        if (pIVar4 != (Il2CppObject *)0x0) {
                    /* try { // try from 0338d35c to 0348d363 has its CatchHandler @ 0338d3ac */
          return iVar1 == *(int *)&pIVar4[2].klass;
                    /* try { // try from 0338d364 to 0348d367 has its CatchHandler @ 0338d3b8 */
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0338d37c to 0348d37f has its CatchHandler @ 0338cf50 */
  FUN_01bab8c8();
}


// ===== private void GCOBGDGKBFN(string IMJHEANBDDA, string DFEGBKMFBMM, string MEJEDBBGECM, int HGDGDPODNLL, int[] IMMNELPBGIF)  [RVA 0x3288464]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GCOBGDGKBFN @ RVA 0x3288464

void Nekki_SF2_GUI_Dialogs_LotteryDialog__GCOBGDGKBFN
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,System_String_o *IMJHEANBDDA,
               System_String_o *DFEGBKMFBMM,System_String_o *MEJEDBBGECM,int32_t HGDGDPODNLL,
               System_Int32_array *IMMNELPBGIF,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectOffset_o *pUVar2;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar3;
  
  pNVar1 = (__this->fields).ScrollBackLeft;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar1,IMJHEANBDDA,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).ScrollBackRight;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar1,DFEGBKMFBMM,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).ScrollSelector;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar1,MEJEDBBGECM,(MethodInfo *)0x0);
        pNVar1 = (__this->fields).ScrollSelector;
        if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_00 = UnityEngine_UI_Graphic__get_rectTransform
                                  ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
          UnityEngine_RectTransform__set_anchoredPosition
                    (__this_00,(UnityEngine_Vector2_o)((ulong)(uint)(float)HGDGDPODNLL << 0x20),
                     (MethodInfo *)0x0);
          pUVar3 = (__this->fields).ScrollBack;
          if ((pUVar3 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) &&
             (IMMNELPBGIF != (System_Int32_array *)0x0)) {
            if ((int)IMMNELPBGIF->max_length == 0) {
LAB_03388590:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pUVar2 = (pUVar3->fields).super.super.m_Padding;
            if (pUVar2 != (UnityEngine_RectOffset_o *)0x0) {
              UnityEngine_RectOffset__set_left(pUVar2,IMMNELPBGIF->m_Items[0],(MethodInfo *)0x0);
              pUVar3 = (__this->fields).ScrollBack;
              if (pUVar3 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                if ((uint)IMMNELPBGIF->max_length < 2) goto LAB_03388590;
                pUVar2 = (pUVar3->fields).super.super.m_Padding;
                if (pUVar2 != (UnityEngine_RectOffset_o *)0x0) {
                  UnityEngine_RectOffset__set_right
                            (pUVar2,IMMNELPBGIF->m_Items[1],(MethodInfo *)0x0);
                  pUVar3 = (__this->fields).ScrollBack;
                  if (pUVar3 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                    if ((uint)IMMNELPBGIF->max_length < 3) goto LAB_03388590;
                    pUVar2 = (pUVar3->fields).super.super.m_Padding;
                    if (pUVar2 != (UnityEngine_RectOffset_o *)0x0) {
                      UnityEngine_RectOffset__set_top
                                (pUVar2,IMMNELPBGIF->m_Items[2],(MethodInfo *)0x0);
                      pUVar3 = (__this->fields).ScrollBack;
                      if (pUVar3 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                        if ((uint)IMMNELPBGIF->max_length < 4) goto LAB_03388590;
                        pUVar2 = (pUVar3->fields).super.super.m_Padding;
                        if (pUVar2 != (UnityEngine_RectOffset_o *)0x0) {
                          UnityEngine_RectOffset__set_bottom
                                    (pUVar2,IMMNELPBGIF->m_Items[3],(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CIDOGGEGAIN()  [RVA 0x328BC74]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$CIDOGGEGAIN @ RVA 0x328BC74

void Nekki_SF2_GUI_Dialogs_LotteryDialog__CIDOGGEGAIN
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o **ppNVar1;
  bool bVar2;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *pNVar3;
  
  if ((DAT_045672e8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045672e8 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).NAJKNFGDGGI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  ppNVar1 = &(__this->fields).NAJKNFGDGGI;
  pNVar3 = *ppNVar1;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) {
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    if (DAT_0455fa7f == '\0') {
      FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa7f = '\x01';
    }
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (__this_00,
                 (UnityEngine_Vector3_o)
                 (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).fields,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_LotteryDialog__HMBAGCOBBID(__this,method_00);
      (__this->fields).NAJKNFGDGGI = (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0;
      thunk_FUN_01c20e04(ppNVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnEnable()  [RVA 0x328D380]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$OnEnable @ RVA 0x328D380

void Nekki_SF2_GUI_Dialogs_LotteryDialog__OnEnable
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *__this_00;
  MethodInfo *method_00;
  
                    /* try { // try from 0338d380 to 0348d383 has its CatchHandler @ 0338d38c */
                    /* try { // try from 0338d384 to 0348d3df has its CatchHandler @ 0338cf50 */
  if ((__this->fields).HPJNLAOAJJE == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* catch() { ... } // from try @ 0338d160 with catch @ 0338d3b0 */
                    /* catch() { ... } // from try @ 0338d104 with catch @ 0338d3b4 */
    return;
  }
                    /* catch() { ... } // from try @ 0338d380 with catch @ 0338d38c */
                    /* catch() { ... } // from try @ 0338d29c with catch @ 0338d390 */
  __this_00 = (__this->fields).Scroller;
                    /* catch() { ... } // from try @ 0338d374 with catch @ 0338d394 */
  if (__this_00 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
                    /* catch() { ... } // from try @ 0338d370 with catch @ 0338d398 */
                    /* catch() { ... } // from try @ 0338d36c with catch @ 0338d39c */
                    /* catch() { ... } // from try @ 0338d22c with catch @ 0338d3a0 */
    EnhancedUI_EnhancedScroller_EnhancedScroller__set_Delegate
              (__this_00,(LEPEFNKEJBC_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0338d368 with catch @ 0338d3a4 */
                    /* catch() { ... } // from try @ 0338d218 with catch @ 0338d3a8 */
                    /* catch() { ... } // from try @ 0338d35c with catch @ 0338d3ac */
    Nekki_SF2_GUI_Dialogs_LotteryDialog__KIEKMKFIHFG(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0338d364 with catch @ 0338d3b8
                       catch() { ... } // from try @ 0338d378 with catch @ 0338d3b8 */
  FUN_01bab8c8();
}


// ===== private bool HMHMPPJOPMO(DILGLGMKOFG NFIGEAOPJKM)  [RVA 0x328D3BC]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$HMHMPPJOPMO @ RVA 0x328D3BC

bool Nekki_SF2_GUI_Dialogs_LotteryDialog__HMHMPPJOPMO
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,DILGLGMKOFG_o *NFIGEAOPJKM,
               MethodInfo *method)

{
  bool bVar1;
  BECIPDJBAOG_o *pBVar2;
  
                    /* catch() { ... } // from try @ 0338d1cc with catch @ 0338d3bc */
                    /* catch() { ... } // from try @ 0338d1e8 with catch @ 0338d3c0 */
  if ((DAT_045672e9 & 1) == 0) {
                    /* try { // try from 0338d3e0 to 0348d3e3 has its CatchHandler @ 0338d3f0 */
    FUN_01bab630(&StringLiteral_11028/*"Rating"*/);
    DAT_045672e9 = 1;
  }
  if (NFIGEAOPJKM != (DILGLGMKOFG_o *)0x0) {
                    /* catch() { ... } // from try @ 0338d3e0 with catch @ 0338d3f0 */
                    /* try { // try from 0338d400 to 0348d46f has its CatchHandler @ 0338d484 */
    bVar1 = System_String__op_Equality
                      ((NFIGEAOPJKM->fields).super._COIPKAKHDFP_k__BackingField,StringLiteral_11028/*"Rating"*/,
                       (MethodInfo *)0x0);
    if (bVar1) {
      pBVar2 = (__this->fields).FBODAFDBNLH;
      if (pBVar2 == (BECIPDJBAOG_o *)0x0) goto LAB_0338d438;
      bVar1 = (NFIGEAOPJKM->fields).super._HFPMLGFDOKC_k__BackingField ==
              (pBVar2->fields).NLLKMEMKBAF;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0338d438:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OLLLJOMGDKI(LotteryDialogCell HBHBCBJANIC)  [RVA 0x328BAE8]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$OLLLJOMGDKI @ RVA 0x328BAE8

void Nekki_SF2_GUI_Dialogs_LotteryDialog__OLLLJOMGDKI
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,
               Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *HBHBCBJANIC,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  LPGLKMNHELJ_o *pLVar1;
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *pNVar2;
  BCOICIIDFPD_o *pBVar3;
  
  if ((DAT_045672ea & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    DAT_045672ea = 1;
  }
  (__this->fields).GLGOLGJBCAK = -1;
  (__this->fields).NAJKNFGDGGI = HBHBCBJANIC;
  thunk_FUN_01c20e04(&(__this->fields).NAJKNFGDGGI,HBHBCBJANIC);
  pLVar1 = (__this->fields).DKMMBMBMJBO;
  if (pLVar1 != (LPGLKMNHELJ_o *)0x0) {
    (pLVar1->fields).PJBADHPBBAF = (pLVar1->fields).PJBADHPBBAF + 1;
    EDFDANKEBGF__JDFIHJEELJK((MethodInfo *)0x0);
    MFIKGMIDDIG__ICHPKMALDCH((__this->fields).DEIFFBGHMIH,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).NAJKNFGDGGI;
    if ((pNVar2 != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) &&
       (pBVar3 = (pNVar2->fields).super.RewardData, pBVar3 != (BCOICIIDFPD_o *)0x0)) {
      Nekki_SF2_GUI_Dialogs_LotteryDialog__ADLCACJDNGN
                (__this,(pBVar3->fields)._BLIMDANKDIH_k__BackingField,method);
      if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      LHKALFIIJKB__LMNENJFLCEB((MethodInfo *)0x0);
      __this_00 = (__this->fields).ScrollShadow;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        (__this->fields).OIKLOAGFFGO = 3;
        Nekki_SF2_GUI_Dialogs_LotteryDialog__NNDNPLLAMFK(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HJHIFHPBJOB(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x32888A4]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$HJHIFHPBJOB @ RVA 0x32888A4

void Nekki_SF2_GUI_Dialogs_LotteryDialog__HJHIFHPBJOB
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  PLCCJCFAFKA_o *pPVar4;
  System_Collections_Generic_List_PLCCJCFAFKA__o *__this_00;
  IGFGDDANEPE_o *pIVar5;
  AKADDLNNLKH_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  Il2CppObject *pIVar6;
  Item_o *pDVar7;
  LPGLKMNHELJ_o *pLVar8;
  Roster_o *pAVar9;
  System_String_o *pSVar10;
  KBCOFHAJOCK_o *__this_03;
  Il2CppClass *KGLJICLJHEL;
  int iVar11;
  int32_t local_a4;
  int32_t local_a0;
  int local_9c;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045672eb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_get_Current__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PLCCJCFAFKA>_GetEnumerator__);
    FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_20122/*"pack_count"*/);
    FUN_01bab630(&StringLiteral_18949/*"immunity"*/);
    FUN_01bab630(&StringLiteral_19215/*"item_count"*/);
    FUN_01bab630(&StringLiteral_21566/*"total_reroll"*/);
    FUN_01bab630(&StringLiteral_15862/*"_"*/);
    FUN_01bab630(&StringLiteral_20950/*"set_name"*/);
    FUN_01bab630(&StringLiteral_19216/*"item_name"*/);
    FUN_01bab630(&StringLiteral_10075/*"Pack_Tickets"*/);
    FUN_01bab630(&StringLiteral_11314/*"Resistance{0}"*/);
    DAT_045672eb = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
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
  pDVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (((pDVar7 != (Item_o *)0x0) && (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) &&
     (__this_03 = (pDVar7->fields)._GMODBKFPHPN_k__BackingField, __this_03 != (KBCOFHAJOCK_o *)0x0))
  {
    pPVar4 = KBCOFHAJOCK__CBEELEAJKIN
                       (__this_03,(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                        (MethodInfo *)0x0);
    if (pPVar4 == (PLCCJCFAFKA_o *)0x0) {
      return;
    }
    __this_00 = (__this_03->fields).AJJILEMLFOI;
    if (__this_00 != (System_Collections_Generic_List_PLCCJCFAFKA__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<PLCCJCFAFKA>_GetEnumerator__);
      iVar11 = 0;
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_MoveNext__
                               ), bVar1) {
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        KGLJICLJHEL = local_80.fields._current[1].klass;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pIVar5 = NLPJLHOEAOE__JNFIBDBHNOA((System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
        if (pIVar5 != (IGFGDDANEPE_o *)0x0) {
          iVar11 = iVar11 + 1;
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__)
      ;
      pLVar8 = (__this->fields).DKMMBMBMJBO;
      if ((pLVar8 != (LPGLKMNHELJ_o *)0x0) &&
         (pSVar10 = (pLVar8->fields).JOPIEJMBFHK, pSVar10 != (System_String_o *)0x0)) {
        iVar2 = System_String__IndexOf(pSVar10,StringLiteral_15862/*"_"*/,(MethodInfo *)0x0);
        pSVar10 = System_String__Substring(pSVar10,iVar2,(MethodInfo *)0x0);
        pSVar10 = System_String__Format
                            (StringLiteral_11314/*"Resistance{0}"*/,(Il2CppObject *)pSVar10,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar9 != (Roster_o *)0x0) &&
           (__this_01 = (pAVar9->fields).MLNLNNNNPGH, __this_01 != (AKADDLNNLKH_o *)0x0)) {
          iVar2 = AKADDLNNLKH__CBGJMMDIFGA(__this_01,pSVar10,(MethodInfo *)0x0);
          pIVar5 = NLPJLHOEAOE__JNFIBDBHNOA(StringLiteral_10075/*"Pack_Tickets"*/,(MethodInfo *)0x0);
          if (pIVar5 == (IGFGDDANEPE_o *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = IGFGDDANEPE__LDJLMEFOMLG(pIVar5,(MethodInfo *)0x0);
          }
          __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                      thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
          MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this_02,(MethodInfo *)0x0);
          if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object,_object>__Add
                      (__this_02,StringLiteral_20950/*"set_name"*/,(Il2CppObject *)(pPVar4->fields).JIJLBFGKNJK,
                       Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
            System_Collections_Generic_Dictionary<object,_object>__Add
                      (__this_02,StringLiteral_19216/*"item_name"*/,
                       (Il2CppObject *)(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                       Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
            local_9c = iVar11;
            pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_9c);
            System_Collections_Generic_Dictionary<object,_object>__Add
                      (__this_02,StringLiteral_19215/*"item_count"*/,pIVar6,
                       Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
            local_a0 = iVar2;
            pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_a0);
            System_Collections_Generic_Dictionary<object,_object>__Add
                      (__this_02,StringLiteral_18949/*"immunity"*/,pIVar6,
                       Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
            local_a4 = iVar3;
            pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_a4);
            System_Collections_Generic_Dictionary<object,_object>__Add
                      (__this_02,StringLiteral_20122/*"pack_count"*/,pIVar6,
                       Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
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
            pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar9 != (Roster_o *)0x0) {
              local_98.fields._list =
                   (System_Collections_Generic_List_T__o *)(pAVar9->fields).FBEBOPDOKFH;
              pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_98);
              System_Collections_Generic_Dictionary<object,_object>__Add
                        (__this_02,StringLiteral_21566/*"total_reroll"*/,pIVar6,
                         Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
              NFNBHPOJFNJ__NOJIAJPLOKB(10,(MDNLIFLBFNO_o *)__this_02,false,(MethodInfo *)0x0);
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


// ===== private void DMKPAPKKDMP(bool GFEFCPFECOJ, bool LKLBCPPLNGL = False)  [RVA 0x3288E58]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$DMKPAPKKDMP @ RVA 0x3288E58

void Nekki_SF2_GUI_Dialogs_LotteryDialog__DMKPAPKKDMP
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,bool GFEFCPFECOJ,bool LKLBCPPLNGL,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  Il2CppObject *IMMNELPBGIF;
  long lVar3;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_01;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar4;
  LPGLKMNHELJ_o *pLVar5;
  UnityEngine_Object_o *x;
  PKHMIGFEJCL_o *pPVar6;
  System_String_o **ppSVar7;
  PKHMIGFEJCL_o *pPVar8;
  float CJNHFNHJHPE;
  undefined4 local_24;
  
  if ((DAT_045672ec & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_045672ec = 1;
  }
  CJNHFNHJHPE = (__this->fields).DEIFFBGHMIH;
  if (CJNHFNHJHPE == 0.0) {
    if (GFEFCPFECOJ) goto LAB_03388eb8;
LAB_03388ed8:
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03389098;
    pPVar6 = (pNVar2->fields).QuestParameters;
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) || (pPVar6 == (PKHMIGFEJCL_o *)0x0)
       ) goto LAB_03389098;
    pPVar8 = (pNVar2->fields).QuestParametersBeforeLottery;
    (pPVar6->fields).BILELFMLGNC = false;
    if (pPVar8 == (PKHMIGFEJCL_o *)0x0) goto LAB_03389098;
    (pPVar6->fields).NMHCLFFOMJH = (pPVar8->fields).NMHCLFFOMJH;
    thunk_FUN_01c20e04();
    (pPVar6->fields).PNPKEKHEMCD = (pPVar8->fields).PNPKEKHEMCD;
    thunk_FUN_01c20e04();
    ppSVar7 = &(pPVar6->fields).LOLFFJGLKLD;
    *ppSVar7 = (pPVar8->fields).LOLFFJGLKLD;
    thunk_FUN_01c20e04(ppSVar7);
    (pPVar6->fields).KADCKFHODOE = (pPVar8->fields).KADCKFHODOE;
    (pPVar6->fields).FAOAFEINLEL = (pPVar8->fields).FAOAFEINLEL;
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03389098;
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar2,3,(MethodInfo *)0x0);
  }
  else {
    MFIKGMIDDIG__ICHPKMALDCH(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (!GFEFCPFECOJ) goto LAB_03388ed8;
LAB_03388eb8:
    __this_00 = (__this->fields).OpenShopEvent;
    if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_03389098;
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
  pNVar4 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (pNVar4 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
    *(undefined1 *)&(pNVar4->fields)._money = 1;
    local_24 = 0;
    IMMNELPBGIF = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
    pLVar5 = (__this->fields).DKMMBMBMJBO;
    if (pLVar5 != (LPGLKMNHELJ_o *)0x0) {
      if ((pLVar5->fields).BGHFADDGPAD == 1) {
        lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01b81620();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01b81620();
          }
          __this_01 = (Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8);
          if (__this_01 == (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_03389098;
          if (LKLBCPPLNGL) {
            Nekki_SF2_GUI_Shop_ShopScene__ReloadRaidItemPackSliderDelayed
                      (__this_01,(MethodInfo *)0x0);
          }
          else {
            Nekki_SF2_GUI_Shop_ShopScene__ReloadActiveItemsAndRefreshDelayed
                      (__this_01,(MethodInfo *)0x0);
          }
        }
      }
      return;
    }
  }
LAB_03389098:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KAPGCIMJPED()  [RVA 0x3289670]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$KAPGCIMJPED @ RVA 0x3289670

void Nekki_SF2_GUI_Dialogs_LotteryDialog__KAPGCIMJPED
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int32_t iVar4;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_o *__this_00;
  System_Predicate_DILGLGMKOFG__o **ppSVar5;
  System_Predicate_T__o *pSVar6;
  System_Byte_array *pSVar7;
  System_Byte_array *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  BECIPDJBAOG_o *pBVar11;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar12;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar13;
  System_Collections_Generic_List_DILGLGMKOFG__o *pSVar14;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_Fields *pNVar15;
  System_Predicate_DILGLGMKOFG__o *pSVar16;
  
  if ((DAT_045672ed & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1627);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1628);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1629);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1630);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1631);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1632);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1633);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1634);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_CONLJALLIMF__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_FindIndex__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_HMHMPPJOPMO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_HOPIJLFCJLL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_MLJCPJAFHPC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_PLCHHHDDJJN__);
    FUN_01bab630(&System_Predicate<DILGLGMKOFG>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_ALGGCJBHNPD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_HMICFHKOPCH__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo);
    DAT_045672ed = 1;
    method = extraout_x1;
  }
  if ((__this->fields).KGJOHFHDLFK != false) {
    __this_00 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_o *)
                thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_TypeInfo,method);
    Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON___ctor(__this_00,(MethodInfo *)0x0);
    pSVar14 = (__this->fields).HPJNLAOAJJE;
    if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar16 = Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__90_5;
    if (pSVar16 == (System_Predicate_DILGLGMKOFG__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar16 = (System_Predicate_DILGLGMKOFG__o *)
                thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
      System_Predicate<object>___ctor();
      ppSVar5 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__90_5;
      *ppSVar5 = pSVar16;
      thunk_FUN_01c20e04(ppSVar5,pSVar16);
    }
    if ((pSVar14 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) &&
       (pSVar14 = (System_Collections_Generic_List_DILGLGMKOFG__o *)
                  System_Collections_Generic_List<object>__FindAll
                            ((System_Collections_Generic_List_object__o *)pSVar14,
                             (System_Predicate_T__o *)pSVar16,
                             Method_System_Collections_Generic_List<DILGLGMKOFG>_FindAll__),
       __this_00 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_HEPMHINKNON_o *)0x0)) {
      pNVar15 = &__this_00->fields;
      pNVar15->focusItems = pSVar14;
      thunk_FUN_01c20e04(pNVar15,pSVar14);
      if (pNVar15->focusItems != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
        pSVar14 = (__this->fields).HPJNLAOAJJE;
        if ((pNVar15->focusItems->fields)._size == 0) {
          if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar16 = Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__90_6;
          if (pSVar16 == (System_Predicate_DILGLGMKOFG__o *)0x0) {
            if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar16 = (System_Predicate_DILGLGMKOFG__o *)
                      thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
            System_Predicate<object>___ctor();
            ppSVar5 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__90_6;
            *ppSVar5 = pSVar16;
            thunk_FUN_01c20e04(ppSVar5,pSVar16);
          }
          if (pSVar14 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
            iVar4 = System_Collections_Generic_List<object>__FindIndex
                              ((System_Collections_Generic_List_object__o *)pSVar14,
                               (System_Predicate_T__o *)pSVar16,
                               Method_System_Collections_Generic_List<DILGLGMKOFG>_FindIndex__);
            (__this->fields).GLGOLGJBCAK = iVar4;
            (__this->fields).BECMMEIMOAL = iVar4;
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1627,
                       (MethodInfo *)0x0);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1628,
                       (MethodInfo *)0x0);
            pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
            goto LAB_03389adc;
          }
        }
        else {
          pSVar6 = (System_Predicate_T__o *)
                   thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
          System_Predicate<object>___ctor();
          if (pSVar14 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
            iVar4 = System_Collections_Generic_List<object>__FindIndex
                              ((System_Collections_Generic_List_object__o *)pSVar14,pSVar6,
                               Method_System_Collections_Generic_List<DILGLGMKOFG>_FindIndex__);
            (__this->fields).GLGOLGJBCAK = iVar4;
            (__this->fields).BECMMEIMOAL = iVar4;
            pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar7,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1629,
                       (MethodInfo *)0x0);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1630,
                       (MethodInfo *)0x0);
            pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
            pSVar10 = System_Int32__ToString((int)__this + 0x1b0,(MethodInfo *)0x0);
            pSVar9 = System_String__Concat(pSVar9,pSVar10,(MethodInfo *)0x0);
LAB_03389adc:
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    goto LAB_03389d68;
  }
  Nekki_SF2_GUI_Dialogs_LotteryDialog__PEKFBGKOIPA(__this,true,in_x2);
  pBVar11 = (__this->fields).FBODAFDBNLH;
  if (((pBVar11 == (BECIPDJBAOG_o *)0x0) ||
      (pGVar12 = (pBVar11->fields).AKFPFIHIHOC,
      pGVar12 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) ||
     (pGVar13 = (pBVar11->fields).LEJBLHJFJHP,
     pGVar13 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) goto LAB_03389d68;
  iVar1 = (pGVar12->fields).count;
  iVar2 = (pGVar13->fields).count;
  if (1 < iVar2 + iVar1) {
    iVar1 = (__this->fields).BECMMEIMOAL;
    method_00 = extraout_x1_00;
    if (iVar1 != -1) {
      (__this->fields).GLGOLGJBCAK = iVar1;
      return;
    }
    goto LAB_03389c58;
  }
  if (iVar1 < 1) {
    if (0 < iVar2) {
      pSVar14 = (__this->fields).HPJNLAOAJJE;
      pSVar6 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
      goto LAB_03389b50;
    }
    bVar3 = BECIPDJBAOG__BODMFFONFKC(pBVar11,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar14 = (__this->fields).HPJNLAOAJJE;
      pSVar6 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
LAB_03389ccc:
      System_Predicate<object>___ctor();
      if (pSVar14 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
        iVar4 = System_Collections_Generic_List<object>__FindIndex
                          ((System_Collections_Generic_List_object__o *)pSVar14,pSVar6,
                           Method_System_Collections_Generic_List<DILGLGMKOFG>_FindIndex__);
        (__this->fields).GLGOLGJBCAK = iVar4;
        return;
      }
      goto LAB_03389d68;
    }
    pBVar11 = (__this->fields).FBODAFDBNLH;
    if (pBVar11 == (BECIPDJBAOG_o *)0x0) goto LAB_03389d68;
    bVar3 = BECIPDJBAOG__HMCAGKEIIGO(pBVar11,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar14 = (__this->fields).HPJNLAOAJJE;
      pSVar6 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
      goto LAB_03389ccc;
    }
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1631,(MethodInfo *)0x0)
    ;
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1632,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
  }
  else {
    pSVar14 = (__this->fields).HPJNLAOAJJE;
    pSVar6 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
LAB_03389b50:
    System_Predicate<object>___ctor();
    if (pSVar14 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
LAB_03389d68:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar4 = System_Collections_Generic_List<object>__FindIndex
                      ((System_Collections_Generic_List_object__o *)pSVar14,pSVar6,
                       Method_System_Collections_Generic_List<DILGLGMKOFG>_FindIndex__);
    (__this->fields).GLGOLGJBCAK = iVar4;
    if (iVar4 != -1) {
      return;
    }
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1633,(MethodInfo *)0x0)
    ;
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1634,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar7,pSVar8,(MethodInfo *)0x0);
    pBVar11 = (__this->fields).FBODAFDBNLH;
    if (pBVar11 == (BECIPDJBAOG_o *)0x0) goto LAB_03389d68;
    pSVar10 = (System_String_o *)
              (*(pBVar11->klass->vtable)._3_ToString.methodPtr)
                        (pBVar11,(pBVar11->klass->vtable)._3_ToString.method);
    pSVar9 = System_String__Concat(pSVar9,pSVar10,(MethodInfo *)0x0);
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
  method_00 = extraout_x1_01;
LAB_03389c58:
  Nekki_SF2_GUI_Dialogs_LotteryDialog__CFAECCGMCDA(__this,method_00);
  return;
}


// ===== private void Update()  [RVA 0x328D940]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$Update @ RVA 0x328D940

void Nekki_SF2_GUI_Dialogs_LotteryDialog__Update
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  BMBFOPNOLCF_o *__this_00;
  
  __this_00 = (__this->fields).JJLEJEOELEB;
  if (__this_00 != (BMBFOPNOLCF_o *)0x0) {
    BMBFOPNOLCF__LLCONNGHGKD(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public EnhancedScrollerCellView GetCellView(EnhancedScroller MLOLBLIGDHM, int DHEJIHJMOGL, int FKPMOBKJAAI)  [RVA 0x328D954]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GetCellView @ RVA 0x328D954

EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *
Nekki_SF2_GUI_Dialogs_LotteryDialog__GetCellView
          (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,
          EnhancedUI_EnhancedScroller_EnhancedScroller_o *MLOLBLIGDHM,int32_t DHEJIHJMOGL,
          int32_t FKPMOBKJAAI,MethodInfo *method)

{
  byte bVar1;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *__this_01;
  System_Collections_Generic_List_DILGLGMKOFG__o *__this_02;
  BCOICIIDFPD_o *IMMNELPBGIF;
  
  if ((DAT_045672ee & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Item__,MLOLBLIGDHM,
                 DHEJIHJMOGL,FKPMOBKJAAI);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo);
    DAT_045672ee = 1;
  }
  __this_00 = (__this->fields).Scroller;
  if (__this_00 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_0338da24;
  __this_01 = (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)
              EnhancedUI_EnhancedScroller_EnhancedScroller__GetCellView
                        (__this_00,
                         (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)
                         (__this->fields).LotteryCellPrefab,(MethodInfo *)0x0);
  if (__this_01 == (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)0x0) {
LAB_0338d9c8:
    __this_01 = (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo->_2).naturalAligment;
    if ((__this_01->klass->_2).naturalAligment < bVar1) goto LAB_0338d9c8;
    if ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo) {
      __this_01 = (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)0x0;
    }
  }
  __this_02 = (__this->fields).HPJNLAOAJJE;
  if ((__this_02 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) &&
     (IMMNELPBGIF = (BCOICIIDFPD_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_02,DHEJIHJMOGL,
                               Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Item__),
     __this_01 != (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)0x0)) {
    Nekki_SF2_GUI_Dialogs_BaseRewardCell__SetData(__this_01,IMMNELPBGIF,(MethodInfo *)0x0);
    return (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)__this_01;
  }
LAB_0338da24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OKJDJIGBMLI()  [RVA 0x328C774]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$OKJDJIGBMLI @ RVA 0x328C774

void Nekki_SF2_GUI_Dialogs_LotteryDialog__OKJDJIGBMLI
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  SFRequestSender_o *pKVar1;
  System_Action_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045672ef & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_EGMHFFODCKH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_EPEKIKOFDNH__);
    DAT_045672ef = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_LotteryDialog__FIODMEOCNHA(__this,method);
  pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pKVar1 != (SFRequestSender_o *)0x0) {
    SFRequestSender__KGJHOLAEPAI(pKVar1,pSVar2,(MethodInfo *)0x0);
    pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pKVar1 != (SFRequestSender_o *)0x0) {
      SFRequestSender__HKAALOKPBPG(pKVar1,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetNumberOfCells(EnhancedScroller MLOLBLIGDHM)  [RVA 0x328DA28]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GetNumberOfCells @ RVA 0x328DA28

int32_t Nekki_SF2_GUI_Dialogs_LotteryDialog__GetNumberOfCells
                  (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,
                  EnhancedUI_EnhancedScroller_EnhancedScroller_o *MLOLBLIGDHM,MethodInfo *method)

{
  System_Collections_Generic_List_DILGLGMKOFG__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = MLOLBLIGDHM;
  auVar2._0_8_ = __this;
  if ((DAT_045672f0 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Count__);
    DAT_045672f0 = 1;
  }
  pSVar1 = (__this->fields).HPJNLAOAJJE;
  if (pSVar1 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private IEnumerator CFHLCAMKGPN(int MMOKLAAAIPP)  [RVA 0x328DA70]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$CFHLCAMKGPN @ RVA 0x328DA70

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_LotteryDialog__CFHLCAMKGPN
          (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,int32_t MMOKLAAAIPP,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_LotteryDialog_ABIBBAOFADE_o *__this_00;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_o **ppNVar1;
  
  if ((DAT_045672f1 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_ABIBBAOFADE_TypeInfo);
    DAT_045672f1 = 1;
  }
  __this_00 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_ABIBBAOFADE_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_LotteryDialog_ABIBBAOFADE_TypeInfo);
  Nekki_SF2_GUI_Dialogs_LotteryDialog_ABIBBAOFADE___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_ABIBBAOFADE_o *)0x0) {
    ppNVar1 = &(__this_00->fields).__4__this;
    *ppNVar1 = __this;
    thunk_FUN_01c20e04(ppNVar1,__this);
    (__this_00->fields).v = MMOKLAAAIPP;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PEKFBGKOIPA(bool IEHEOHDHKAI = True)  [RVA 0x328D43C]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PEKFBGKOIPA @ RVA 0x328D43C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__PEKFBGKOIPA
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,bool IEHEOHDHKAI,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  Il2CppObject *item;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_o *__this_00;
  System_Predicate_DILGLGMKOFG__o **ppSVar4;
  System_Collections_Generic_List_object__o *__this_01;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP_o *__this_02;
  DG_Tweening_Sequence_o *pDVar5;
  DG_Tweening_Core_DOGetter_Vector3__o *getter;
  DG_Tweening_Core_DOSetter_Vector3__o *setter;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *t_00;
  DG_Tweening_TweenCallback_o *callback;
  System_Collections_Generic_List_DILGLGMKOFG__o *pSVar6;
  System_Predicate_DILGLGMKOFG__o *match;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_o **ppNVar7;
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *pNVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 0338d470 to 0348d47b has its CatchHandler @ 0338cf50 */
  if ((DAT_045672f2 & 1) == 0) {
                    /* try { // try from 0338d47c to 0348d483 has its CatchHandler @ 0338d484 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP_EJBJGMCAION__);
                    /* catch() { ... } // from try @ 0338d400 with catch @ 0338d484
                       catch() { ... } // from try @ 0338d47c with catch @ 0338d484 */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_MCJOKGKOPGG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_NAJCALMKONE__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Predicate<DILGLGMKOFG>_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_GFOHJAFJIHP__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo);
    DAT_045672f2 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_TypeInfo);
  Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_o *)0x0) {
                    /* try { // try from 0338d59c to 0348d673 has its CatchHandler @ 0338d59c
                       catch() { ... } // from try @ 0338d59c with catch @ 0338d59c
                       catch() { ... } // from try @ 0338d6b0 with catch @ 0338d59c
                       catch() { ... } // from try @ 0338d6dc with catch @ 0338d59c
                       catch() { ... } // from try @ 0338d704 with catch @ 0338d59c
                       catch() { ... } // from try @ 0338d744 with catch @ 0338d59c */
    (__this_00->fields).__4__this = __this;
    thunk_FUN_01c20e04(&__this_00->fields,__this);
    (__this_00->fields).needReload = IEHEOHDHKAI;
    pSVar6 = (__this->fields).HPJNLAOAJJE;
    if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    match = Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__74_0;
    if (match == (System_Predicate_DILGLGMKOFG__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = (System_Predicate_DILGLGMKOFG__o *)
              thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
      System_Predicate<object>___ctor();
      ppSVar4 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__74_0;
      *ppSVar4 = match;
      thunk_FUN_01c20e04(ppSVar4,match);
    }
    if ((pSVar6 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) &&
       (__this_01 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_List<object>__FindAll
                              ((System_Collections_Generic_List_object__o *)pSVar6,
                               (System_Predicate_T__o *)match,
                               Method_System_Collections_Generic_List<DILGLGMKOFG>_FindAll__),
       __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
      if (0 < (__this_01->fields)._size) {
                    /* try { // try from 0338d674 to 0348d67b has its CatchHandler @ 0338d6e8 */
        __this_02 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP_o *)
                    thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP_TypeInfo);
        Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP___ctor(__this_02,(MethodInfo *)0x0);
        if (__this_02 == (Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP_o *)0x0)
        goto LAB_0338d8c8;
        ppNVar7 = &(__this_02->fields).CS___8__locals1;
                    /* try { // try from 0338d6a4 to 0348d6af has its CatchHandler @ 0338d6e0 */
                    /* try { // try from 0338d6b0 to 0348d6d7 has its CatchHandler @ 0338d59c */
        *ppNVar7 = __this_00;
        thunk_FUN_01c20e04(ppNVar7,__this_00);
        (__this_02->fields).index = 0;
                    /* try { // try from 0338d6d8 to 0348d6db has its CatchHandler @ 0338d6e4 */
                    /* try { // try from 0338d6dc to 0348d6ff has its CatchHandler @ 0338d59c */
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,__this_01,
                   Method_System_Collections_Generic_List<DILGLGMKOFG>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338d6a4 with catch @ 0338d6e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338d6d8 with catch @ 0338d6e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338d674 with catch @ 0338d6e8
                        */
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_MoveNext__
                                 ), item = local_80.fields._current, bVar2) {
                    /* try { // try from 0338d700 to 0348d703 has its CatchHandler @ 0338d72c */
          pSVar6 = (__this->fields).HPJNLAOAJJE;
                    /* try { // try from 0338d704 to 0348d73b has its CatchHandler @ 0338d59c */
          if (pSVar6 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar3 = System_Collections_Generic_List<object>__IndexOf
                            ((System_Collections_Generic_List_object__o *)pSVar6,
                             local_80.fields._current,
                             Method_System_Collections_Generic_List<DILGLGMKOFG>_IndexOf__);
          (__this_02->fields).index = iVar3;
          pSVar6 = (__this->fields).HPJNLAOAJJE;
          if (pSVar6 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* catch() { ... } // from try @ 0338d700 with catch @ 0338d72c */
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar6,item,
                     Method_System_Collections_Generic_List<DILGLGMKOFG>_Remove__);
        }
                    /* try { // try from 0338d73c to 0348d743 has its CatchHandler @ 0338d758 */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_Dispose__);
                    /* try { // try from 0338d744 to 0348d74f has its CatchHandler @ 0338d59c */
        pNVar8 = (__this->fields).NAJKNFGDGGI;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0338d750 to 0348d757 has its CatchHandler @ 0338d758 */
          thunk_FUN_01ba7564();
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0338d73c with catch @ 0338d758
                       catch(type#2 @ 00000000) { ... } // from try @ 0338d750 with catch @ 0338d758
                        */
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          ppDVar1 = &(__this->fields).AJFGBJDEEIJ;
          (__this->fields).AJFGBJDEEIJ = pDVar5;
          thunk_FUN_01c20e04(ppDVar1,pDVar5);
          pDVar5 = (__this->fields).AJFGBJDEEIJ;
          getter = (DG_Tweening_Core_DOGetter_Vector3__o *)
                   thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
          DG_Tweening_Core_DOGetter<Vector3>___ctor();
          setter = (DG_Tweening_Core_DOSetter_Vector3__o *)
                   thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
          DG_Tweening_Core_DOSetter<Vector3>___ctor();
          t = DG_Tweening_DOTween__To
                        (getter,setter,(UnityEngine_Vector3_o)ZEXT412(0),1.5,(MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__Append
                    (pDVar5,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
          pNVar8 = (__this->fields).NAJKNFGDGGI;
          if (pNVar8 == (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) goto LAB_0338d8c8;
          pDVar5 = *ppDVar1;
          t_00 = DG_Tweening_DOTweenModuleUI__DOFade
                           ((UnityEngine_UI_Image_o *)(pNVar8->fields).super.SlotImage,0.0,1.5,
                            (MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__Join
                    (pDVar5,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
          pDVar5 = *ppDVar1;
          callback = (DG_Tweening_TweenCallback_o *)
                     thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
          DG_Tweening_TweenCallback___ctor();
          DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar5,callback,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
LAB_0338d8c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BEENJJPFBOL()  [RVA 0x328DAF4]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$BEENJJPFBOL @ RVA 0x328DAF4

void Nekki_SF2_GUI_Dialogs_LotteryDialog__BEENJJPFBOL
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  SFRequestSender_o *pKVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *format;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  FKDLCJJOGIP_o *pFVar4;
  undefined8 uVar5;
  MethodInfo *method_00;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  if ((DAT_045672f3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_7);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1635);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    DAT_045672f3 = 1;
  }
  (__this->fields).NJMEPPOGCLN = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).NJMEPPOGCLN,0);
  pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  if (pKVar1 != (SFRequestSender_o *)0x0) {
    (__this->fields).GGCLCAMEALI =
         (bool_conflict)((pKVar1->fields).super._KKNAFGJEFJG_k__BackingField ^ 1);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1635,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_7,(MethodInfo *)0x0);
    format = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
    local_34[0] = (__this->fields).GGCLCAMEALI;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_34);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_0338dde8;
      if ((int)args->max_length == 0) goto LAB_0338dde4;
      args->m_Items[0] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items,pIVar2);
      pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      if (pKVar1 == (SFRequestSender_o *)0x0) goto LAB_0338dde0;
      local_38[0] = (pKVar1->fields).super._KKNAFGJEFJG_k__BackingField;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_38);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_0338dde8;
      if ((uint)args->max_length < 2) goto LAB_0338dde4;
      args->m_Items[1] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
      pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      if (pKVar1 == (SFRequestSender_o *)0x0) goto LAB_0338dde0;
      if ((pKVar1->fields)._CPLKKCAJOJJ_k__BackingField == false) {
        pFVar4 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pFVar4 == (FKDLCJJOGIP_o *)0x0) goto LAB_0338dde0;
        local_44[0] = (pFVar4->fields)._OHFODMIBJME_k__BackingField != false;
      }
      else {
        local_44[0] = true;
      }
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_44);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_0338dde8:
        uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar5,0);
      }
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar2;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar2);
        local_48[0] = IEICNBBBNEJ__EHLKEFJNKPA((MethodInfo *)0x0);
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_48);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        goto LAB_0338dde8;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogFormat(format,args,(MethodInfo *)0x0);
          if ((__this->fields).GGCLCAMEALI == false) {
            Nekki_SF2_GUI_Dialogs_LotteryDialog__EAPNENPIION(__this,method_00);
          }
          return;
        }
      }
LAB_0338dde4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0338dde0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EAPNENPIION()  [RVA 0x32890BC]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$EAPNENPIION @ RVA 0x32890BC

void Nekki_SF2_GUI_Dialogs_LotteryDialog__EAPNENPIION
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  int32_t JEGMMDPFNIL;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  AdvertisingViewsManager_o *__this_00;
  MethodInfo *in_x3;
  MethodInfo *method_00;
  LPGLKMNHELJ_o *pLVar4;
  RaidConfig_ENBCJNLAHAC_o *pJVar5;
  System_String_o *str0;
  
  if ((DAT_045672f4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1636);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1637);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1638);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1639);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_045672f4 = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1636,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1637,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  pLVar4 = (__this->fields).DKMMBMBMJBO;
  if ((pLVar4 != (LPGLKMNHELJ_o *)0x0) &&
     (pJVar5 = (pLVar4->fields).FIJPJBGCODO, pJVar5 != (RaidConfig_ENBCJNLAHAC_o *)0x0)) {
    str0 = (pJVar5->fields).JIJLBFGKNJK;
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1638,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1639,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(str0,pSVar3,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_LotteryDialog__GJAHDGBOOPO(__this,true,pSVar3,in_x3);
    __this_00 = AdvertisingViewsManager__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (AdvertisingViewsManager_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      JEGMMDPFNIL = AdvertisingViewsManager__LAPHEMPOHMP(__this_00,0xc,1,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_LotteryDialog__AIHMNPJOJMF(__this,JEGMMDPFNIL,JEGMMDPFNIL,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float GetCellViewSize(EnhancedScroller MLOLBLIGDHM, int DHEJIHJMOGL)  [RVA 0x328DDF4]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GetCellViewSize @ RVA 0x328DDF4

float Nekki_SF2_GUI_Dialogs_LotteryDialog__GetCellViewSize
                (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,
                EnhancedUI_EnhancedScroller_EnhancedScroller_o *MLOLBLIGDHM,int32_t DHEJIHJMOGL,
                MethodInfo *method)

{
  return 420.0;
}


// ===== private void BPBPDDAAFAD()  [RVA 0x328DE00]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$BPBPDDAAFAD @ RVA 0x328DE00

void Nekki_SF2_GUI_Dialogs_LotteryDialog__BPBPDDAAFAD
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  MethodInfo *method_00;
  LPGLKMNHELJ_o *pLVar5;
  int32_t local_14;
  
  if ((DAT_045672f5 & 1) == 0) {
    FUN_01bab630(&DPLBMJODBEK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_14560/*"Unsupported lottery type [{0}]"*/);
    DAT_045672f5 = 1;
  }
  (__this->fields).FBODAFDBNLH = (BECIPDJBAOG_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).FBODAFDBNLH,0);
  (__this->fields).IIMLAADGBEE = (UnityEngine_Coroutine_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).IIMLAADGBEE,0);
  pLVar5 = (__this->fields).DKMMBMBMJBO;
  if (pLVar5 != (LPGLKMNHELJ_o *)0x0) {
    iVar1 = (pLVar5->fields).BGHFADDGPAD;
    if (iVar1 == 1) {
      Nekki_SF2_GUI_Dialogs_LotteryDialog__AIAMPBMODDG(__this,method_00);
      return;
    }
    if (iVar1 == 0) {
      Nekki_SF2_GUI_Dialogs_LotteryDialog__LMDGPINLALE(__this,method_00);
      return;
    }
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    pLVar5 = (__this->fields).DKMMBMBMJBO;
    if (pLVar5 != (LPGLKMNHELJ_o *)0x0) {
      local_14 = (pLVar5->fields).BGHFADDGPAD;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(DPLBMJODBEK_TypeInfo,&local_14);
      if (args != (System_Object_array *)0x0) {
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items,pIVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_14560/*"Unsupported lottery type [{0}]"*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BPHEMMPAJGO()  [RVA 0x328DF6C]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$BPHEMMPAJGO @ RVA 0x328DF6C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__BPHEMMPAJGO
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar1;
  LPGLKMNHELJ_o *pLVar2;
  
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
  pNVar1 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (pNVar1 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
    if (*(char *)&(pNVar1->fields)._money == '\0') {
      return;
    }
    Nekki_SF2_GUI_Dialogs_LotteryDialog__DMKPAPKKDMP(__this,true,false,in_x3);
    pLVar2 = (__this->fields).DKMMBMBMJBO;
    if (pLVar2 != (LPGLKMNHELJ_o *)0x0) {
      if ((pLVar2->fields).BGHFADDGPAD != 0) {
        return;
      }
      __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x1f,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KIEKMKFIHFG()  [RVA 0x328A51C]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$KIEKMKFIHFG @ RVA 0x328A51C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_LotteryDialog__KIEKMKFIHFG
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t JLAFGLDIFOC;
  int32_t iVar4;
  Roster_o *pAVar5;
  IGFGDDANEPE_o *pIVar6;
  JHBHHHKEFOO_o *pJVar7;
  System_Predicate_HFNLANEMDFI__o **ppSVar8;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar9;
  MethodInfo *method_00;
  System_Collections_Generic_List_DILGLGMKOFG__o *pSVar10;
  LPGLKMNHELJ_o *pLVar11;
  MFFKCPDBFPG_o *pMVar12;
  DILGLGMKOFG_array *pDVar13;
  System_Collections_Generic_List_OCOEAJMJEOP__o *pSVar14;
  int DHEJIHJMOGL;
  System_String_o *KGLJICLJHEL;
  MCCHIAKPFEL_o *pMVar15;
  System_Collections_Generic_List_HFNLANEMDFI__o *__this_00;
  System_Predicate_HFNLANEMDFI__o *match;
  int iVar16;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045672f6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardCurrency>_Exists__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<RewardCurrency>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_IKDGHDCECPN__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo);
    DAT_045672f6 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar10 = (__this->fields).HPJNLAOAJJE;
  if (pSVar10 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
    uVar1 = (pSVar10->fields)._size;
    method_00 = (MethodInfo *)(ulong)uVar1;
    (pSVar10->fields)._size = 0;
    (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
    if (0 < (int)uVar1) {
      System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,uVar1,(MethodInfo *)0x0);
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
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar5 != (Roster_o *)0x0) {
      JLAFGLDIFOC = Roster__EOEAKGGDBFH(pAVar5,(MethodInfo *)0x0);
      pLVar11 = (__this->fields).DKMMBMBMJBO;
      if (((pLVar11 != (LPGLKMNHELJ_o *)0x0) &&
          (pMVar12 = (pLVar11->fields).FGCJFGHMIOL, pMVar12 != (MFFKCPDBFPG_o *)0x0)) &&
         (pSVar10 = (pMVar12->fields).EEIGOFDOLKN,
         pSVar10 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar10,
                   Method_System_Collections_Generic_List<DILGLGMKOFG>_GetEnumerator__);
        iVar16 = -1;
        DHEJIHJMOGL = -1;
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
LAB_0338a6e0:
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_MoveNext__
                          );
        item = local_80.fields._current;
        if (bVar3) {
          if ((DILGLGMKOFG_o *)local_80.fields._current == (DILGLGMKOFG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          method_00 = (MethodInfo *)0x0;
          bVar3 = BCOICIIDFPD__DNEACMPPKPC
                            ((BCOICIIDFPD_o *)local_80.fields._current,JLAFGLDIFOC,(MethodInfo *)0x0
                            );
          if (bVar3) {
            KGLJICLJHEL = *(System_String_o **)
                           &((DILGLGMKOFG_Fields *)((long)item + 0x10))->MBCNFGBPLEP;
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pIVar6 = NLPJLHOEAOE__JNFIBDBHNOA(KGLJICLJHEL,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<DILGLGMKOFG>_Add__;
            if (pIVar6 == (IGFGDDANEPE_o *)0x0) {
              pSVar10 = (__this->fields).HPJNLAOAJJE;
                    /* try { // try from 0338a734 to 0348a7cf has its CatchHandler @ 0338a734
                       catch() { ... } // from try @ 0338a734 with catch @ 0338a734
                       catch() { ... } // from try @ 0338a7ec with catch @ 0338a734
                       catch() { ... } // from try @ 0338a868 with catch @ 0338a734
                       catch() { ... } // from try @ 0338a890 with catch @ 0338a734
                       catch() { ... } // from try @ 0338a8d0 with catch @ 0338a734 */
              if (pSVar10 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pDVar13 = (pSVar10->fields)._items;
              (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
              if (pDVar13 == (DILGLGMKOFG_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar1 = (pSVar10->fields)._size;
              if (uVar1 < (uint)pDVar13->max_length) {
                (pSVar10->fields)._size = uVar1 + 1;
                pDVar13->m_Items[(int)uVar1] = (DILGLGMKOFG_o *)item;
                thunk_FUN_01c20e04(pDVar13->m_Items + (int)uVar1,item);
              }
              else {
                method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar10,item,
                           (MethodInfo_26E4DAC *)method_00);
              }
              if ((((DILGLGMKOFG_Fields *)((long)item + 0x10))->super)._GDKBFEGNHNP_k__BackingField
                  == false) {
                pMVar15 = (((DILGLGMKOFG_Fields *)((long)item + 0x10))->super).
                          _BLIMDANKDIH_k__BackingField;
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                if (DAT_04565b7d == '\0') {
                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                  DAT_04565b7d = '\x01';
                }
                    /* try { // try from 0338a7d0 to 0348a7d7 has its CatchHandler @ 0338a874 */
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 0338a7e4 to 0348a7eb has its CatchHandler @ 0338a870 */
                if (pAVar5 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                    /* try { // try from 0338a7ec to 0348a863 has its CatchHandler @ 0338a734 */
                iVar4 = Roster__EOEAKGGDBFH(pAVar5,(MethodInfo *)0x0);
                if (pMVar15 == (MCCHIAKPFEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                method_00 = (MethodInfo *)0x0;
                pJVar7 = MCCHIAKPFEL__ALLFNDNBMCO(pMVar15,iVar4,(MethodInfo *)0x0);
                if (pJVar7 == (JHBHHHKEFOO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar14 = (pJVar7->fields).GHAAKPDHIJJ;
                if (pSVar14 == (System_Collections_Generic_List_OCOEAJMJEOP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                if (0 < (pSVar14->fields)._size) {
                  pSVar10 = (__this->fields).HPJNLAOAJJE;
                  if (pSVar10 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  DHEJIHJMOGL = (pSVar10->fields)._size + -1;
                }
                if ((((DILGLGMKOFG_Fields *)((long)item + 0x10))->super).
                    _GDKBFEGNHNP_k__BackingField == false) {
                  pMVar15 = (((DILGLGMKOFG_Fields *)((long)item + 0x10))->super).
                            _BLIMDANKDIH_k__BackingField;
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  if (DAT_04565b7d == '\0') {
                    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    DAT_04565b7d = '\x01';
                  }
                    /* try { // try from 0338a864 to 0348a867 has its CatchHandler @ 0338a86c */
                    /* try { // try from 0338a868 to 0348a88b has its CatchHandler @ 0338a734 */
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338a864 with catch @ 0338a86c
                        */
                    thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338a7e4 with catch @ 0338a870
                        */
                  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338a7d0 with catch @ 0338a874
                        */
                  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                  if (pAVar5 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  iVar4 = Roster__EOEAKGGDBFH(pAVar5,(MethodInfo *)0x0);
                    /* try { // try from 0338a88c to 0348a88f has its CatchHandler @ 0338a8b8 */
                  if (pMVar15 == (MCCHIAKPFEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                    /* try { // try from 0338a890 to 0348a8c7 has its CatchHandler @ 0338a734 */
                  pJVar7 = MCCHIAKPFEL__ALLFNDNBMCO(pMVar15,iVar4,(MethodInfo *)0x0);
                  if (pJVar7 == (JHBHHHKEFOO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  __this_00 = (pJVar7->fields).GMCEHJAIFBJ;
                  if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0338a88c with catch @ 0338a8b8 */
                    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo);
                    /* try { // try from 0338a8c8 to 0348a8cf has its CatchHandler @ 0338a8e4 */
                  }
                    /* try { // try from 0338a8d0 to 0348a8db has its CatchHandler @ 0338a734 */
                  match = Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__75_0
                  ;
                  if (match == (System_Predicate_HFNLANEMDFI__o *)0x0) {
                    /* try { // try from 0338a8dc to 0348a8e3 has its CatchHandler @ 0338a8e4 */
                    if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0)
                    {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0338a8c8 with catch @ 0338a8e4
                       catch(type#2 @ 00000000) { ... } // from try @ 0338a8dc with catch @ 0338a8e4
                        */
                      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo);
                    }
                    match = (System_Predicate_HFNLANEMDFI__o *)
                            thunk_FUN_01bda818(System_Predicate<RewardCurrency>_TypeInfo);
                    System_Predicate<object>___ctor();
                    ppSVar8 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->
                               __9__75_0;
                    *ppSVar8 = match;
                    thunk_FUN_01c20e04(ppSVar8,match);
                  }
                  if (__this_00 == (System_Collections_Generic_List_HFNLANEMDFI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  method_00 = Method_System_Collections_Generic_List<RewardCurrency>_Exists__;
                  bVar3 = System_Collections_Generic_List<object>__Exists
                                    ((System_Collections_Generic_List_object__o *)__this_00,
                                     (System_Predicate_T__o *)match,
                                     (MethodInfo_26E53D8 *)
                                     Method_System_Collections_Generic_List<RewardCurrency>_Exists__);
                  if (bVar3) {
                    pSVar10 = (__this->fields).HPJNLAOAJJE;
                    if (pSVar10 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    iVar16 = (pSVar10->fields)._size + -1;
                  }
                  if ((((DILGLGMKOFG_Fields *)((long)item + 0x10))->super).
                      _GDKBFEGNHNP_k__BackingField == false) goto LAB_0338a6e0;
                }
              }
              if ((((DILGLGMKOFG_Fields *)((long)item + 0x10))->super).field_0x3c == '\0') {
                pSVar10 = (__this->fields).HPJNLAOAJJE;
                if (pSVar10 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                (__this->fields).BECMMEIMOAL = (pSVar10->fields)._size + -1;
              }
            }
          }
          goto LAB_0338a6e0;
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<DILGLGMKOFG>_Dispose__);
        if ((__this->fields).KGJOHFHDLFK == false) {
          Nekki_SF2_GUI_Dialogs_LotteryDialog__PEKFBGKOIPA(__this,false,method_00);
        }
        pEVar9 = (__this->fields).Scroller;
        if (pEVar9 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
          EnhancedUI_EnhancedScroller_EnhancedScroller__ReloadData(pEVar9,0.0,(MethodInfo *)0x0);
          pLVar11 = (__this->fields).DKMMBMBMJBO;
          if (pLVar11 != (LPGLKMNHELJ_o *)0x0) {
            if ((pLVar11->fields).BGHFADDGPAD == 0) {
              if (DHEJIHJMOGL == -1) {
                if (iVar16 == -1) {
                  return;
                }
                pEVar9 = (__this->fields).Scroller;
                DHEJIHJMOGL = iVar16;
              }
              else {
                pEVar9 = (__this->fields).Scroller;
              }
              if (pEVar9 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0)
              goto LAB_0338aa5c;
            }
            else {
              pEVar9 = (__this->fields).Scroller;
              if (pEVar9 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
                DHEJIHJMOGL = 0;
LAB_0338aa5c:
                EnhancedUI_EnhancedScroller_EnhancedScroller__JumpToDataIndex
                          (pEVar9,DHEJIHJMOGL,0.5,0.5,true,0,0.0,(System_Action_o *)0x0,0,false,
                           (MethodInfo *)0x0);
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


// ===== private void DPHGELLABKO(DBMPKPJGIPI ACCIHBHMFPN)  [RVA 0x328E008]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$DPHGELLABKO @ RVA 0x328E008

void Nekki_SF2_GUI_Dialogs_LotteryDialog__DPHGELLABKO
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method
               )

{
                    /* WARNING: Could not recover jumptable at 0x0338e014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
  return;
}


// ===== private void FABPNIKKPMN()  [RVA 0x328E018]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$FABPNIKKPMN @ RVA 0x328E018

void Nekki_SF2_GUI_Dialogs_LotteryDialog__FABPNIKKPMN
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  byte bVar1;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *__this_00;
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *HBHBCBJANIC;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045672f7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo);
    DAT_045672f7 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).Scroller;
  if (__this_00 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  method_00 = (MethodInfo *)0x0;
  HBHBCBJANIC = (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)
                EnhancedUI_EnhancedScroller_EnhancedScroller__GetCellViewAtDataIndex
                          (__this_00,(__this->fields).GLGOLGJBCAK,(MethodInfo *)0x0);
  if (HBHBCBJANIC != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (HBHBCBJANIC->klass->_2).naturalAligment) {
      if ((HBHBCBJANIC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_LotteryDialogCell_TypeInfo) {
        HBHBCBJANIC = (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0;
      }
      goto LAB_0338e098;
    }
  }
  HBHBCBJANIC = (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0;
LAB_0338e098:
  Nekki_SF2_GUI_Dialogs_LotteryDialog__OLLLJOMGDKI(__this,HBHBCBJANIC,method_00);
  return;
}


// ===== private bool HOPIJLFCJLL(DILGLGMKOFG NFIGEAOPJKM)  [RVA 0x328E0AC]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$HOPIJLFCJLL @ RVA 0x328E0AC

bool Nekki_SF2_GUI_Dialogs_LotteryDialog__HOPIJLFCJLL
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,DILGLGMKOFG_o *NFIGEAOPJKM,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar3;
  Il2CppObject *pIVar4;
  BECIPDJBAOG_o *pBVar5;
  System_String_o *a;
  
  if ((DAT_045672f8 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_045672f8 = 1;
  }
  if (((NFIGEAOPJKM != (DILGLGMKOFG_o *)0x0) &&
      (pBVar5 = (__this->fields).FBODAFDBNLH, pBVar5 != (BECIPDJBAOG_o *)0x0)) &&
     (pGVar3 = (pBVar5->fields).LEJBLHJFJHP,
     pGVar3 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    a = (NFIGEAOPJKM->fields).super._COIPKAKHDFP_k__BackingField;
    pIVar4 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,0,
                        Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    if (pIVar4 != (Il2CppObject *)0x0) {
      bVar2 = System_String__op_Equality(a,pIVar4[1].monitor,(MethodInfo *)0x0);
      if (!bVar2) {
        return false;
      }
      pBVar5 = (__this->fields).FBODAFDBNLH;
      if ((pBVar5 != (BECIPDJBAOG_o *)0x0) &&
         (pGVar3 = (pBVar5->fields).LEJBLHJFJHP,
         pGVar3 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
        iVar1 = (NFIGEAOPJKM->fields).super._HFPMLGFDOKC_k__BackingField;
        pIVar4 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,0,
                            Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                           );
        if (pIVar4 != (Il2CppObject *)0x0) {
          return iVar1 == *(int *)&pIVar4[2].klass;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OIJGCNKKINI()  [RVA 0x3287754]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$OIJGCNKKINI @ RVA 0x3287754

void Nekki_SF2_GUI_Dialogs_LotteryDialog__OIJGCNKKINI
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  CocosAnimation_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).WinEffect;
  if (__this_00 != (CocosAnimation_o *)0x0) {
    (__this_00->fields)._NOAJIBNJKPE_k__BackingField = false;
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NGIIKIILLPH(LotteryDialog.JHMFCNIJBKH FJJJGOHDLBH)  [RVA 0x328E170]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$NGIIKIILLPH @ RVA 0x328E170

void Nekki_SF2_GUI_Dialogs_LotteryDialog__NGIIKIILLPH
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,int32_t FJJJGOHDLBH,MethodInfo *method
               )

{
  (__this->fields).OIKLOAGFFGO = FJJJGOHDLBH;
  return;
}


// ===== private void GJAHDGBOOPO(bool FEDMBJEIIGB, string LFKENPEPPAL)  [RVA 0x328AD9C]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GJAHDGBOOPO @ RVA 0x328AD9C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__GJAHDGBOOPO
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,bool FEDMBJEIIGB,
               System_String_o *LFKENPEPPAL,MethodInfo *method)

{
  bool bVar1;
  RaidPaymentService_o *__this_00;
  System_Action_BKKPAKHJDKB__o *BPCGDKENMAE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  LPGLKMNHELJ_o *pLVar2;
  RaidConfig_ENBCJNLAHAC_o *pJVar3;
  
  if ((DAT_045672f9 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_APJCIKLILGP__);
    DAT_045672f9 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(LFKENPEPPAL,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar2 = (__this->fields).DKMMBMBMJBO;
    if ((pLVar2 == (LPGLKMNHELJ_o *)0x0) ||
       (pJVar3 = (pLVar2->fields).FIJPJBGCODO, pJVar3 == (RaidConfig_ENBCJNLAHAC_o *)0x0))
    goto LAB_0338aea0;
    LFKENPEPPAL = (pJVar3->fields).JIJLBFGKNJK;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
  BPCGDKENMAE = (System_Action_BKKPAKHJDKB__o *)
                thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (RaidPaymentService_o *)0x0) {
    if (FEDMBJEIIGB) {
      RaidPaymentService__OCPFALFDBOL(__this_00,LFKENPEPPAL,BPCGDKENMAE,false,(MethodInfo *)0x0);
      method_00 = extraout_x1;
    }
    else {
      RaidPaymentService__CEOGKMPDPPB(__this_00,LFKENPEPPAL,BPCGDKENMAE,false,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
    }
    Nekki_SF2_GUI_Dialogs_LotteryDialog__IKGNIKPBBKK(__this,method_00);
    return;
  }
LAB_0338aea0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IEnumerator get_TryGiveRewardRoutine()  [RVA 0x328E178]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$get_TryGiveRewardRoutine @ RVA 0x328E178

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_LotteryDialog__get_TryGiveRewardRoutine
          (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  return (__this->fields).NJMEPPOGCLN;
}


// ===== private void GJBIHHLINEG()  [RVA 0x328C700]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GJBIHHLINEG @ RVA 0x328C700

void Nekki_SF2_GUI_Dialogs_LotteryDialog__GJBIHHLINEG
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_RectTransform_o *JNPCENEINON;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0338c704 to 0348c70b has its CatchHandler @ 0338c70c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0338c6d0 with catch @ 0338c70c
                       catch(type#2 @ 00000000) { ... } // from try @ 0338c704 with catch @ 0338c70c
                        */
  if ((DAT_045672fa & 1) == 0) {
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_045672fa = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).Bg;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    JNPCENEINON = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
    if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(WideScreenController_TypeInfo);
    }
    WideScreenController__RunCustom(JNPCENEINON,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x328E180]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GKPJMHOFIOO @ RVA 0x328E180

void Nekki_SF2_GUI_Dialogs_LotteryDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  LabelButton_o *pLVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  
  if ((DAT_045672fb & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_BPBPDDAAFAD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_LEPLABNPMEL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_ODLKDPJMNKD__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045672fb = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_LotteryDialog__CHPPPEONOME(__this,method);
  pLVar3 = (__this->fields).BtnSpin;
  if (pLVar3 != (LabelButton_o *)0x0) {
    pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pLVar3->fields).super.super.super.m_OnClick;
    pUVar2 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
      pLVar3 = (__this->fields).BtnSpinCurrency;
      if (pLVar3 != (LabelButton_o *)0x0) {
        pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pLVar3->fields).super.super.super.m_OnClick;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
          pLVar3 = (__this->fields).BtnSpinAD;
          if (pLVar3 != (LabelButton_o *)0x0) {
            bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled
                              ((UnityEngine_Behaviour_o *)pLVar3,(MethodInfo *)0x0);
            method_00 = extraout_x1_00;
            if (!bVar1) {
LAB_0338e2c4:
              Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK(__this,method_00);
              Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH(__this,method_01);
              Nekki_SF2_GUI_Dialogs_LotteryDialog__GIDNPADMKMG(__this,method_02);
              return;
            }
            pLVar3 = (__this->fields).BtnSpinAD;
            if (pLVar3 != (LabelButton_o *)0x0) {
              pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                       (pLVar3->fields).super.super.super.m_OnClick;
              pUVar2 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
                method_00 = extraout_x1_01;
                goto LAB_0338e2c4;
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


// ===== private void DHEBFAKANDB(object IMMNELPBGIF)  [RVA 0x328E2EC]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$DHEBFAKANDB @ RVA 0x328E2EC

void Nekki_SF2_GUI_Dialogs_LotteryDialog__DHEBFAKANDB
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_LotteryDialog__PEKFBGKOIPA(__this,true,method);
  return;
}


// ===== private static int KDBBHOPBFBE(int JAEAINBCJFC)  [RVA 0x328A24C]
// Nekki.SF2.GUI.Dialogs.LotteryDialog$$KDBBHOPBFBE @ RVA 0x328A24C

int32_t Nekki_SF2_GUI_Dialogs_LotteryDialog__KDBBHOPBFBE(int32_t JAEAINBCJFC,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_int__o *__this;
  MethodInfo *extraout_x1;
  GameUtils_LAKDLMLPLND_o *pMVar3;
  
  if ((DAT_045672fc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Item__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_045672fc = 1;
    method = extraout_x1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
  }
  pMVar3 = GameUtils_TypeInfo->static_fields->KCHKHLMEBJM;
  if ((pMVar3 != (GameUtils_LAKDLMLPLND_o *)0x0) &&
     (__this = (pMVar3->fields).IAECGNCFBJK, __this != (System_Collections_Generic_List_int__o *)0x0
     )) {
    if ((0 < JAEAINBCJFC) && (iVar1 = (__this->fields)._size, 0 < iVar1)) {
      if (iVar1 <= JAEAINBCJFC) {
        JAEAINBCJFC = iVar1;
      }
      iVar2 = System_Collections_Generic_List<int>__get_Item
                        (__this,JAEAINBCJFC + -1,
                         Method_System_Collections_Generic_List<int>_get_Item__);
      return iVar2;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

