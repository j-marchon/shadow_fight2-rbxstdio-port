// TypeDefIndex 3477
// Namespace: Nekki.SF2.GUI.Menu
// public class MainMenu : UIModule, HAFLPBGEGCI
// Fields:
//   public const string MENU_BUTTON_DISCIPLE_ON = "MenuButtons.btn_punching_bag";
//   public const string MENU_BUTTON_DISCIPLE_OFF = "MenuButtons.btn_disciple";
//   public const float MIN_ASPECT_FOR_ADV_BUTTON_SCROLL = 1.6125984;
//   private bool CMKBLDOABLB; // 0x26
//   private bool HDPPJJGNCAD; // 0x27
//   private MenuExpPanel _experience; // 0x28
//   private MenuEnergyPanel _energy; // 0x30
//   private MenuMoneyPanel _money; // 0x38
//   public bool TopMenuDefaultInteraction; // 0x40
//   private MenuMaterialsPanel _Materials; // 0x48
//   private Vector2 _MaterialsClosedPosition; // 0x50
//   private Vector2 _MaterialsOpenedPosition; // 0x58
//   private float _MaterialsMoveDuration; // 0x60
//   private MainMenuRaidRatingPanel _raidRating; // 0x68
//   private Button _skipTutorialBtn; // 0x70
//   private Image _newPerksCircle; // 0x78
//   private Image _newPerksEllipse; // 0x80
//   private LabelAlias _newPerksLabel; // 0x88
//   private Image _newItemsCircle; // 0x90
//   private Image _newItemsEllipse; // 0x98
//   private LabelAlias _newItemsLabel; // 0xA0
//   private LabelAlias _menuLabel; // 0xA8
//   private SectionButton btnDojo; // 0xB0
//   private SectionButton btnMap; // 0xB8
//   private SectionButton btnShop; // 0xC0
//   private SectionButton btnProfile; // 0xC8
//   private SectionButton btnSettings; // 0xD0
//   private Toggle btnDojoDisciple; // 0xD8
//   private Image _backgroundPicture; // 0xE0
//   public MenuScroll Scroll; // 0xE8
//   private float _ScrollSpeed; // 0xF0
//   private GameObject _settingsDlgPrefab; // 0xF8
//   private GameObject _menuBlocker; // 0x100
//   private SceneSwitchControls _SceneSwitchControls; // 0x108
//   private GameObject _advButtonWidgetPrefab; // 0x110
//   private GameObject _dojoProgressBarPrefab; // 0x118
//   private GameObject _battlePassProgressBarPrefab; // 0x120
//   private RectTransform _advButtonWidgetPos; // 0x128
//   private RectTransform _dojoProgressBarPos; // 0x130
//   private LayoutElement[] _F2P_Spacers; // 0x138
//   private LerpParams _F2P_SpacerWidthLerpParams; // 0x140
//   private List<MenuAdvertisingButton> ADBHOMPFAPK; // 0x148
//   private ProgressBarDojoPanel KLPEJDHIIGF; // 0x150
//   private ProgressBarDojoBattlePass IPLFMOGNGML; // 0x158
//   private SectionButton KMPNJLCJPMD; // 0x160
//   private Slider MLLHHEDCFJH; // 0x168
//   private List<MainMenu.KCFNDEKJOHK> EKDOIPLJFKO; // 0x170
//   private Transform DMLANFEIJNC; // 0x178
//   private int BIMMDBGIMFN; // 0x180
//   private float MAFKPOLHNNE; // 0x184
//   private bool NMKOOKOKJMP; // 0x188
//   private MenuScroll.OAPJJKKCANC DABNPGGKAML; // 0x18C
//   private bool DDILDPMEOEJ; // 0x190
//   private static MainMenu <JPDNDPEAJAL>k__BackingField; // 0x0

// ===== public Button GetSkipBtn()  [RVA 0x356AC90]
// Nekki.SF2.GUI.Menu.MainMenu$$GetSkipBtn @ RVA 0x356AC90

UnityEngine_UI_Button_o *
Nekki_SF2_GUI_Menu_MainMenu__GetSkipBtn(Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  return (UnityEngine_UI_Button_o *)(__this->fields)._raidRating;
}


// ===== public void UpdateCurrentButton(DBMPKPJGIPI KGBNBLGMCBF)  [RVA 0x356AC98]
// Nekki.SF2.GUI.Menu.MainMenu$$UpdateCurrentButton @ RVA 0x356AC98

void Nekki_SF2_GUI_Menu_MainMenu__UpdateCurrentButton
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,int32_t KGBNBLGMCBF,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *BECCOGAMKJL;
  Nekki_SF2_GUI_LabelAlias_o **ppNVar1;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  BECCOGAMKJL = (Nekki_SF2_GUI_LabelAlias_o *)0x0;
  switch(KGBNBLGMCBF) {
  case 3:
    ppNVar1 = &(__this->fields)._menuLabel;
    break;
  case 4:
    ppNVar1 = (Nekki_SF2_GUI_LabelAlias_o **)&(__this->fields).btnMap;
    break;
  case 5:
    ppNVar1 = (Nekki_SF2_GUI_LabelAlias_o **)&(__this->fields).btnDojo;
    break;
  default:
    goto switchD_0366acc8_caseD_6;
  case 7:
    ppNVar1 = (Nekki_SF2_GUI_LabelAlias_o **)&(__this->fields).btnShop;
  }
  BECCOGAMKJL = *ppNVar1;
switchD_0366acc8_caseD_6:
  Nekki_SF2_GUI_Menu_MainMenu__SetCurrentButton
            (__this,(Nekki_SF2_GUI_Common_SectionButton_o *)BECCOGAMKJL,method);
  return;
}


// ===== public void RestoreParentAndTryShowScroll(GameObject HODGKDNOHLP)  [RVA 0x356AE28]
// Nekki.SF2.GUI.Menu.MainMenu$$RestoreParentAndTryShowScroll @ RVA 0x356AE28

void Nekki_SF2_GUI_Menu_MainMenu__RestoreParentAndTryShowScroll
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,UnityEngine_GameObject_o *HODGKDNOHLP,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  System_Predicate_T__o *match;
  System_String_o *pSVar4;
  System_String_o *str3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  NDPMLPGANCI_o *__this_03;
  ACHLOMELAJE_o *__this_04;
  MethodInfo *method_00;
  System_Collections_Generic_List_MainMenu_KCFNDEKJOHK__o **ppSVar5;
  UnityEngine_UI_Slider_o *__this_05;
  System_Collections_Generic_List_MainMenu_KCFNDEKJOHK__o *parent;
  int32_t local_34;
  
  if ((DAT_04568c27 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_CHHBGJEKBBF_CJDBKPEEJIG__);
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_CHHBGJEKBBF_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<MainMenu_KCFNDEKJOHK>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MainMenu_KCFNDEKJOHK>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_RemoveAll__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<MainMenu_KCFNDEKJOHK>_TypeInfo);
    FUN_01bab630(&StringLiteral_1189/*", deleted count: "*/);
    FUN_01bab630(&StringLiteral_458/*" is not registered in stack"*/);
    FUN_01bab630(&StringLiteral_8792/*"MainMenu::ChangeParentAndHideScroll: inflictor: "*/);
    FUN_01bab630(&StringLiteral_8795/*"MainMenu::RestoreParentAndTryShowScroll: can't to restore, inflictor: "*/);
    DAT_04568c27 = 1;
  }
  pIVar3 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Menu_MainMenu_CHHBGJEKBBF_TypeInfo);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3 = pIVar3 + 1;
    pIVar3->klass = (Il2CppClass *)HODGKDNOHLP;
    thunk_FUN_01c20e04(pIVar3,HODGKDNOHLP);
    if ((__this->fields).super.__IsReleased_k__BackingField != false) {
      return;
    }
    __this_05 = (__this->fields).MLLHHEDCFJH;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<MainMenu_KCFNDEKJOHK>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_05 != (UnityEngine_UI_Slider_o *)0x0) {
      local_34 = System_Collections_Generic_List<object>__RemoveAll
                           ((System_Collections_Generic_List_object__o *)__this_05,match,
                            Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_RemoveAll__
                           );
      if (local_34 != 1) {
        if (local_34 == 0) {
          if (pIVar3->klass != (Il2CppClass *)0x0) {
            pSVar4 = UnityEngine_Object__get_name
                               ((UnityEngine_Object_o *)pIVar3->klass,(MethodInfo *)0x0);
            pSVar4 = System_String__Concat
                               (StringLiteral_8795/*"MainMenu::RestoreParentAndTryShowScroll: can't to restore, inflictor: "*/,pSVar4,StringLiteral_458/*" is not registered in stack"*/,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
            return;
          }
          goto LAB_0366b1ac;
        }
        if (pIVar3->klass == (Il2CppClass *)0x0) goto LAB_0366b1ac;
        pSVar4 = UnityEngine_Object__get_name
                           ((UnityEngine_Object_o *)pIVar3->klass,(MethodInfo *)0x0);
        str3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat
                           (StringLiteral_8792/*"MainMenu::ChangeParentAndHideScroll: inflictor: "*/,pSVar4,StringLiteral_1189/*", deleted count: "*/,str3,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
      }
      bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(__this->fields).MLLHHEDCFJH,
                         Method_DJNBJHPDKDP_OBECCOPBADO<MainMenu_KCFNDEKJOHK>__);
      if (bVar1) {
        ppSVar5 = &(__this->fields).EKDOIPLJFKO;
      }
      else {
        pIVar3 = DJNBJHPDKDP__KIKGKKGDCKK<object>
                           ((System_Collections_Generic_List_T__o *)(__this->fields).MLLHHEDCFJH,
                            Method_DJNBJHPDKDP_KIKGKKGDCKK<MainMenu_KCFNDEKJOHK>__);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0366b1ac;
        ppSVar5 = &pIVar3[1].monitor;
      }
      parent = *ppSVar5;
      __this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent
                  (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
        bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                          ((System_Collections_Generic_List_T__o *)(__this->fields).MLLHHEDCFJH,
                           Method_DJNBJHPDKDP_OBECCOPBADO<MainMenu_KCFNDEKJOHK>__);
        if (!bVar1) {
          return;
        }
        if ((__this->fields).NMKOOKOKJMP == false) {
          return;
        }
        __this_01 = (__this->fields)._backgroundPicture;
        if ((__this_01 != (UnityEngine_UI_Image_o *)0x0) &&
           (__this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_GameObject_o *)0x0)) {
          method_00 = (MethodInfo *)0x0;
          UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
          __this_03 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
          if (__this_03 != (NDPMLPGANCI_o *)0x0) {
            iVar2 = NDPMLPGANCI__FFIOCEOHPEM(__this_03,(MethodInfo *)0x0);
            if (iVar2 != 3) {
              return;
            }
            Nekki_SF2_GUI_Menu_MainMenu__ShowDojoAdvertiseButton(__this,true,method_00);
            Nekki_SF2_GUI_Menu_MainMenu__ShowDojoProgressBar(__this,true,method_00);
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
            __this_04 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (__this_04 != (ACHLOMELAJE_o *)0x0) {
              bVar1 = ACHLOMELAJE__CIJFNGLHOIF(__this_04,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Menu_MainMenu__ShowDojoDiscipleButton(__this,bVar1,method_00);
              return;
            }
          }
        }
      }
    }
  }
LAB_0366b1ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal static CBLABOPKBKD JGGDCNNJLOL(string FCIENBDOEKO, List<CBLABOPKBKD> EDEHNHIHDDH)  [RVA 0x356B620]
// Nekki.SF2.GUI.Menu.MainMenu$$JGGDCNNJLOL @ RVA 0x356B620

CBLABOPKBKD_o *
Nekki_SF2_GUI_Menu_MainMenu__JGGDCNNJLOL
          (System_String_o *FCIENBDOEKO,System_Collections_Generic_List_CBLABOPKBKD__o *EDEHNHIHDDH,
          MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  CBLABOPKBKD_o *pCVar3;
  
  if ((DAT_04568c28 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_EINNIBGMICO_POJANPDHFKJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_EINNIBGMICO_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<CBLABOPKBKD>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<CBLABOPKBKD>__);
    FUN_01bab630(&System_Func<CBLABOPKBKD,_bool>_TypeInfo);
    DAT_04568c28 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Menu_MainMenu_EINNIBGMICO_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)FCIENBDOEKO;
    thunk_FUN_01c20e04(pIVar2,FCIENBDOEKO);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((System_String_o *)pIVar2->klass,(MethodInfo *)0x0);
    if (bVar1) {
      return (CBLABOPKBKD_o *)0x0;
    }
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<CBLABOPKBKD,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    source = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)EDEHNHIHDDH,predicate,
                        Method_System_Linq_Enumerable_Where<CBLABOPKBKD>__);
    pCVar3 = (CBLABOPKBKD_o *)
             System_Linq_Enumerable__FirstOrDefault<object>
                       (source,Method_System_Linq_Enumerable_FirstOrDefault<CBLABOPKBKD>__);
    return pCVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DDEINGLCJHA()  [RVA 0x356B748]
// Nekki.SF2.GUI.Menu.MainMenu$$DDEINGLCJHA @ RVA 0x356B748

void Nekki_SF2_GUI_Menu_MainMenu__DDEINGLCJHA
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Menu_MainMenu__NFCPFGIBGCO(__this,4,in_x2);
  return;
}


// ===== private void KGNGNPNKAID(MenuScroll.OAPJJKKCANC HJEBKCDDBAB)  [RVA 0x356B820]
// Nekki.SF2.GUI.Menu.MainMenu$$KGNGNPNKAID @ RVA 0x356B820

void Nekki_SF2_GUI_Menu_MainMenu__KGNGNPNKAID
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,int32_t HJEBKCDDBAB,MethodInfo *method)

{
  BackKeyManager_o *pBVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)(uint)HJEBKCDDBAB;
  if ((DAT_04568c29 & 1) == 0) {
    FUN_01bab630(&NGKBNOEJLPH_TypeInfo);
    DAT_04568c29 = 1;
    method_00 = extraout_x1;
  }
  if ((__this->fields).MAFKPOLHNNE == (float)HJEBKCDDBAB) {
    return;
  }
  (__this->fields).MAFKPOLHNNE = (float)HJEBKCDDBAB;
  if (HJEBKCDDBAB == 0) {
    Nekki_SF2_GUI_Menu_MainMenu__UpdateScrollMenu(__this,method_00);
    return;
  }
  if (HJEBKCDDBAB == 2) {
    if ((__this->fields).super.field_0x17 != '\0') {
      NGKBNOEJLPH_TypeInfo->static_fields->DBLJKOLFBLN = true;
    }
    pBVar1 = BackKeyManager__get_Instance((MethodInfo *)0x0);
    if (pBVar1 != (BackKeyManager_o *)0x0) {
      BackKeyManager__RemoveBackKeyController(pBVar1,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (HJEBKCDDBAB != 1) {
      return;
    }
    (__this->fields).super.field_0x17 = 1;
    NGKBNOEJLPH_TypeInfo->static_fields->DBLJKOLFBLN = false;
    pBVar1 = BackKeyManager__get_Instance((MethodInfo *)0x0);
    if (pBVar1 != (BackKeyManager_o *)0x0) {
      BackKeyManager__AddBackKeyController(pBVar1,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateMaterials()  [RVA 0x356B938]
// Nekki.SF2.GUI.Menu.MainMenu$$UpdateMaterials @ RVA 0x356B938

void Nekki_SF2_GUI_Menu_MainMenu__UpdateMaterials
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *__this_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = *(Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o **)
               &(__this->fields).TopMenuDefaultInteraction;
  if (__this_00 != (Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *)0x0) {
    Nekki_SF2_GUI_Menu_MenuMaterialsPanel__Refresh(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateEnergyView()  [RVA 0x356B964]
// Nekki.SF2.GUI.Menu.MainMenu$$UpdateEnergyView @ RVA 0x356B964

void Nekki_SF2_GUI_Menu_MainMenu__UpdateEnergyView
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = (__this->fields)._experience;
  if (__this_00 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) {
    Nekki_SF2_GUI_Menu_MenuEnergyPanel__UpdateView
              ((Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnBackKeyClicked(object IMMNELPBGIF)  [RVA 0x356B990]
// Nekki.SF2.GUI.Menu.MainMenu$$OnBackKeyClicked @ RVA 0x356B990

void Nekki_SF2_GUI_Menu_MainMenu__OnBackKeyClicked
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField == false) {
    Nekki_SF2_GUI_Menu_MainMenu__CloseMenu
              (__this,*(float *)&(__this->fields).Scroll,(MethodInfo *)IMMNELPBGIF);
  }
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__RemoveBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FEEIBFFCAAH()  [RVA 0x356B9F8]
// Nekki.SF2.GUI.Menu.MainMenu$$FEEIBFFCAAH @ RVA 0x356B9F8

void Nekki_SF2_GUI_Menu_MainMenu__FEEIBFFCAAH
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  
  __this_00 = (__this->fields)._newPerksLabel;
  if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._newItemsCircle;
    if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._newItemsEllipse;
      if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar1 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void FKOAMAIPLOL(MainMenu CJNHFNHJHPE)  [RVA 0x356BA68]
// Nekki.SF2.GUI.Menu.MainMenu$$FKOAMAIPLOL @ RVA 0x356BA68

void Nekki_SF2_GUI_Menu_MainMenu__FKOAMAIPLOL
               (Nekki_SF2_GUI_Menu_MainMenu_o *CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04568c2a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04568c2a = 1;
  }
  Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields,CJNHFNHJHPE);
  return;
}


// ===== public void ShowDojoDiscipleButton(bool CJNHFNHJHPE)  [RVA 0x356B584]
// Nekki.SF2.GUI.Menu.MainMenu$$ShowDojoDiscipleButton @ RVA 0x356B584

void Nekki_SF2_GUI_Menu_MainMenu__ShowDojoDiscipleButton
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar2;
  
  if ((DAT_04568c2b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c2b = 1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField == false) {
    pNVar2 = (__this->fields).btnSettings;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar2 = (__this->fields).btnSettings;
      if ((pNVar2 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public static bool get_CanShowRaidModeInShopScene()  [RVA 0x356BAC0]
// Nekki.SF2.GUI.Menu.MainMenu$$get_CanShowRaidModeInShopScene @ RVA 0x356BAC0

bool Nekki_SF2_GUI_Menu_MainMenu__get_CanShowRaidModeInShopScene(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if ((DAT_04568c2c & 1) == 0) {
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_04568c2c = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    return (bool)*(undefined1 *)&pIVar1[8].klass;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EFFLCPLIPEI()  [RVA 0x356BB34]
// Nekki.SF2.GUI.Menu.MainMenu$$EFFLCPLIPEI @ RVA 0x356BB34

void Nekki_SF2_GUI_Menu_MainMenu__EFFLCPLIPEI
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  long lVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  int32_t *piVar12;
  ACHLOMELAJE_o *__this_01;
  undefined8 uVar13;
  uint32_t local_34;
  
  if ((DAT_04568c2d & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17774/*"dlgComingSoonText"*/);
    FUN_01bab630(&StringLiteral_18134/*"experienceHint"*/);
    DAT_04568c2d = 1;
    method = extraout_x1;
  }
  local_34 = 0;
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  if (*(char *)&(__this->fields)._money == '\0') {
    return;
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
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_01 == (ACHLOMELAJE_o *)0x0) goto LAB_0366be30;
  uVar3 = ACHLOMELAJE__LFOIBFFCBCL(__this_01,(MethodInfo *)0x0);
  uVar4 = ACHLOMELAJE__KKAOKMLLBGL(__this_01,(MethodInfo *)0x0);
  pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar6 = Method_System_Array_Empty<string>__;
  if (uVar3 == uVar4) {
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
    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0366be30;
    pIVar10 = pIVar5->klass;
    lVar6 = **(long **)(lVar6 + 0xb8);
    uVar1._0_1_ = (pIVar10->_2).rank;
    uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar1;
    uVar13 = StringLiteral_17774/*"dlgComingSoonText"*/;
    if (uVar11 != 0) {
      piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_0366bde4;
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
  }
  else {
    lVar6 = FUN_01bab718(string___TypeInfo,2);
    local_34 = ACHLOMELAJE__LFOIBFFCBCL(__this_01,(MethodInfo *)0x0);
    pSVar8 = System_UInt32__ToString((uint32_t)&local_34,(MethodInfo *)0x0);
    if (lVar6 == 0) goto LAB_0366be30;
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0366be34:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(undefined8 *)(lVar6 + 0x20) = pSVar8;
    thunk_FUN_01c20e04((undefined8 *)(lVar6 + 0x20),pSVar8);
    local_34 = ACHLOMELAJE__KKAOKMLLBGL(__this_01,(MethodInfo *)0x0);
    pSVar8 = System_UInt32__ToString((uint32_t)&local_34,(MethodInfo *)0x0);
    if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_0366be34;
    *(System_String_o **)(lVar6 + 0x28) = pSVar8;
    thunk_FUN_01c20e04();
    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0366be30;
    pIVar10 = pIVar5->klass;
    uVar2._0_1_ = (pIVar10->_2).rank;
    uVar2._1_1_ = (pIVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar2;
    uVar13 = StringLiteral_18134/*"experienceHint"*/;
    if (uVar11 != 0) {
      piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
      do {
        uVar13 = StringLiteral_18134/*"experienceHint"*/;
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_0366bde4;
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
        uVar13 = StringLiteral_18134/*"experienceHint"*/;
      } while (uVar11 != 0);
    }
  }
  pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0366bdf4:
  pSVar8 = (System_String_o *)(*pVVar7->methodPtr)(pIVar5,uVar13,lVar6,pVVar7->method);
  __this_00 = *(Nekki_SF2_GUI_Menu_MenuExpPanel_o **)&(__this->fields).CMKBLDOABLB;
  if (__this_00 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) {
    Nekki_SF2_GUI_Menu_MenuExpPanel__ShowHint(__this_00,pSVar8,(MethodInfo *)0x0);
    return;
  }
LAB_0366be30:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_0366bde4:
  pVVar7 = pIVar10->vtable + (*piVar12 + 0xc);
  goto LAB_0366bdf4;
}


// ===== public void DisableScrollForever()  [RVA 0x356BE38]
// Nekki.SF2.GUI.Menu.MainMenu$$DisableScrollForever @ RVA 0x356BE38

void Nekki_SF2_GUI_Menu_MainMenu__DisableScrollForever
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Image_o *__this_01;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_01 = (__this->fields)._backgroundPicture;
  (__this->fields).NMKOOKOKJMP = false;
  if ((__this_01 != (UnityEngine_UI_Image_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MGMMDJKPOCJ()  [RVA 0x356BE7C]
// Nekki.SF2.GUI.Menu.MainMenu$$MGMMDJKPOCJ @ RVA 0x356BE7C

void Nekki_SF2_GUI_Menu_MainMenu__MGMMDJKPOCJ
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  (__this->fields).super.field_0x17 = 0;
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  JJPNLEPEAFM__JONJOBEJBNO((MethodInfo *)0x0);
  Nekki_SF2_GUI_Menu_MainMenu__CloseMenu(__this,*(float *)&(__this->fields).Scroll,method_00);
  return;
}


// ===== private void OALJMNGIJCK(bool BBLFHGGEMNI)  [RVA 0x356BEBC]
// Nekki.SF2.GUI.Menu.MainMenu$$OALJMNGIJCK @ RVA 0x356BEBC

void Nekki_SF2_GUI_Menu_MainMenu__OALJMNGIJCK
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool BBLFHGGEMNI,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o **ppNVar1;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *method_00;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04568c2e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_BLBMLOBNODO__);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&StringLiteral_8793/*"MainMenu::CloseMaterialsPanel"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568c2e = 1;
  }
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_8793/*"MainMenu::CloseMaterialsPanel"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  __this_00 = *(UnityEngine_Component_o **)&(__this->fields).TopMenuDefaultInteraction;
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    __this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    ppNVar1 = &(__this->fields)._Materials;
    if (BBLFHGGEMNI) {
      endValue.fields.z = 0.0;
      endValue.fields._0_8_ = *ppNVar1;
      t = DG_Tweening_ShortcutExtensions__DOLocalMove
                    (__this_01,endValue,(__this->fields)._MaterialsOpenedPosition.fields.x,false,
                     (MethodInfo *)0x0);
      action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                ((Il2CppObject *)t,action,
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
      return;
    }
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      value.fields.z = 0.0;
      value.fields._0_8_ = *ppNVar1;
      UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Menu_MainMenu__BLBMLOBNODO(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetCurrentButton(SectionButton BECCOGAMKJL)  [RVA 0x356ACF0]
// Nekki.SF2.GUI.Menu.MainMenu$$SetCurrentButton @ RVA 0x356ACF0

void Nekki_SF2_GUI_Menu_MainMenu__SetCurrentButton
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,
               Nekki_SF2_GUI_Common_SectionButton_o *BECCOGAMKJL,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o **ppNVar1;
  bool bVar2;
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *pNVar3;
  
  if ((DAT_04568c2f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c2f = 1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField == false) {
    pNVar3 = (__this->fields).IPLFMOGNGML;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppNVar1 = &(__this->fields).IPLFMOGNGML;
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_UI_Selectable_o *)*ppNVar1 == (UnityEngine_UI_Selectable_o *)0x0)
      goto LAB_0366ae24;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)*ppNVar1,true,(MethodInfo *)0x0);
      if ((UnityEngine_UI_Selectable_o *)*ppNVar1 == (UnityEngine_UI_Selectable_o *)0x0)
      goto LAB_0366ae24;
      UnityEngine_UI_Selectable__set_transition
                ((UnityEngine_UI_Selectable_o *)*ppNVar1,1,(MethodInfo *)0x0);
      LJLLAKHOFFF__JAEOMHIAHJB((UnityEngine_UI_Button_o *)*ppNVar1,0,true,(MethodInfo *)0x0);
    }
    *ppNVar1 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)BECCOGAMKJL;
    thunk_FUN_01c20e04(ppNVar1,BECCOGAMKJL);
    pNVar3 = *ppNVar1;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
    if (bVar2) {
      if ((UnityEngine_UI_Selectable_o *)*ppNVar1 != (UnityEngine_UI_Selectable_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)*ppNVar1,false,(MethodInfo *)0x0);
        if ((UnityEngine_UI_Selectable_o *)*ppNVar1 != (UnityEngine_UI_Selectable_o *)0x0) {
          UnityEngine_UI_Selectable__set_transition
                    ((UnityEngine_UI_Selectable_o *)*ppNVar1,2,(MethodInfo *)0x0);
          LJLLAKHOFFF__JAEOMHIAHJB((UnityEngine_UI_Button_o *)*ppNVar1,2,true,(MethodInfo *)0x0);
          return;
        }
      }
LAB_0366ae24:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void ShowDojoAdvertiseButton(bool CJNHFNHJHPE)  [RVA 0x356B1B8]
// Nekki.SF2.GUI.Menu.MainMenu$$ShowDojoAdvertiseButton @ RVA 0x356B1B8

void Nekki_SF2_GUI_Menu_MainMenu__ShowDojoAdvertiseButton
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_T__o *action;
  System_Collections_Generic_List_object__o *__this_01;
  
  if ((DAT_04568c30 & 1) == 0) {
    FUN_01bab630(&System_Action<MenuAdvertisingButton>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_FNOFOGIMFIN_NPPDNOOJKGO__);
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_FNOFOGIMFIN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuAdvertisingButton>_ForEach__);
    DAT_04568c30 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Menu_MainMenu_FNOFOGIMFIN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(bool *)&__this_00[1].klass = CJNHFNHJHPE;
    if (((__this->fields).super.__IsReleased_k__BackingField == false) &&
       (__this_01 = (System_Collections_Generic_List_object__o *)
                    (__this->fields)._F2P_SpacerWidthLerpParams,
       __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
      action = (System_Action_T__o *)
               thunk_FUN_01bda818(System_Action<MenuAdvertisingButton>_TypeInfo);
      System_Action<object>___ctor();
      System_Collections_Generic_List<object>__ForEach
                (__this_01,action,
                 Method_System_Collections_Generic_List<MenuAdvertisingButton>_ForEach__);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NEDGKDBLFJC()  [RVA 0x356C044]
// Nekki.SF2.GUI.Menu.MainMenu$$NEDGKDBLFJC @ RVA 0x356C044

void Nekki_SF2_GUI_Menu_MainMenu__NEDGKDBLFJC
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Menu_MainMenu__NFCPFGIBGCO(__this,7,in_x2);
  return;
}


// ===== private void OBKDCGCBNHL()  [RVA 0x356C04C]
// Nekki.SF2.GUI.Menu.MainMenu$$OBKDCGCBNHL @ RVA 0x356C04C

void Nekki_SF2_GUI_Menu_MainMenu__OBKDCGCBNHL
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  src_GUI_Scripts_LerpParams_o **ppsVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  int32_t iVar5;
  NDPMLPGANCI_o *__this_00;
  System_Collections_Generic_List_object__o *pSVar6;
  GCPFDLNAFDF_o *pGVar7;
  VirtualInvokeData *pVVar8;
  long lVar9;
  CBLABOPKBKD_o *__this_01;
  UnityEngine_GameObject_o *pUVar10;
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this_02;
  CBLABOPKBKD_o *DLKMEONGJEO;
  MethodInfo *method_00;
  GCPFDLNAFDF_c *pGVar11;
  System_Object_array *pSVar12;
  ulong uVar13;
  int32_t *piVar14;
  System_Collections_Generic_List_CBLABOPKBKD__o *EDEHNHIHDDH;
  int index;
  Nekki_SF2_GUI_Common_SceneSwitchControls_o *original;
  UnityEngine_Transform_o *parent;
  
  if ((DAT_04568c31 & 1) == 0) {
    FUN_01bab630(&Method_DOCLKKFHECI<CBLABOPKBKD>_DOOBINMKNBI__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MenuAdvertisingButton>__);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuAdvertisingButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuAdvertisingButton>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CBLABOPKBKD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CBLABOPKBKD>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<MenuAdvertisingButton>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c31 = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    iVar5 = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
    if ((iVar5 != 3) ||
       ((__this->fields)._F2P_SpacerWidthLerpParams != (src_GUI_Scripts_LerpParams_o *)0x0)) {
      return;
    }
    ppsVar1 = &(__this->fields)._F2P_SpacerWidthLerpParams;
    pSVar6 = (System_Collections_Generic_List_object__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<MenuAdvertisingButton>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (pSVar6,Method_System_Collections_Generic_List<MenuAdvertisingButton>__ctor__);
    *ppsVar1 = (src_GUI_Scripts_LerpParams_o *)pSVar6;
    thunk_FUN_01c20e04(ppsVar1,pSVar6);
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar7 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
    if (pGVar7 != (GCPFDLNAFDF_o *)0x0) {
      pGVar11 = pGVar7->klass;
      uVar2._0_1_ = (pGVar11->_2).rank;
      uVar2._1_1_ = (pGVar11->_2).minimumAlignment;
      uVar13 = (ulong)uVar2;
      if (uVar13 != 0) {
        piVar14 = &((pGVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
            pVVar8 = pGVar11->vtable + *piVar14;
            goto LAB_0366c1d8;
          }
                    /* try { // try from 0366c1b0 to 0376d037 has its CatchHandler @ 0366c1b0
                       catch() { ... } // from try @ 0366c1b0 with catch @ 0366c1b0
                       catch() { ... } // from try @ 03672268 with catch @ 0366c1b0
                       catch() { ... } // from try @ 03672830 with catch @ 0366c1b0
                       catch() { ... } // from try @ 0367291c with catch @ 0366c1b0
                       catch() { ... } // from try @ 03673650 with catch @ 0366c1b0
                       catch() { ... } // from try @ 036736fc with catch @ 0366c1b0
                       catch() { ... } // from try @ 0367377c with catch @ 0366c1b0
                       catch() { ... } // from try @ 03673864 with catch @ 0366c1b0
                       catch() { ... } // from try @ 03673968 with catch @ 0366c1b0 */
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pGVar7,HFHIKPAKJFG_TypeInfo,0);
LAB_0366c1d8:
      lVar9 = (*pVVar8->methodPtr)(pGVar7,pVVar8->method);
      if ((lVar9 != 0) &&
         (EDEHNHIHDDH = *(System_Collections_Generic_List_CBLABOPKBKD__o **)(lVar9 + 0x30),
         EDEHNHIHDDH != (System_Collections_Generic_List_CBLABOPKBKD__o *)0x0)) {
        if ((EDEHNHIHDDH->fields)._size < 1) {
          return;
        }
        index = 0;
        while (__this_01 = (CBLABOPKBKD_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,index
                                      ,
                                      Method_System_Collections_Generic_List<CBLABOPKBKD>_get_Item__
                                     ), __this_01 != (CBLABOPKBKD_o *)0x0) {
          bVar4 = CBLABOPKBKD__FPBFCPPDGNI(__this_01,(MethodInfo *)0x0);
          if ((bVar4) && (bVar4 = CBLABOPKBKD__OBOCLEJEDOC(__this_01,(MethodInfo *)0x0), bVar4)) {
            original = (__this->fields)._SceneSwitchControls;
            parent = (UnityEngine_Transform_o *)(__this->fields)._battlePassProgressBarPrefab;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            method_00 = Method_UnityEngine_Object_Instantiate<GameObject>__;
            pUVar10 = (UnityEngine_GameObject_o *)
                      UnityEngine_Object__Instantiate<object>
                                ((Il2CppObject *)original,parent,
                                 (MethodInfo_1F1EC6C *)
                                 Method_UnityEngine_Object_Instantiate<GameObject>__);
            if (pUVar10 == (UnityEngine_GameObject_o *)0x0) break;
            __this_02 = (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *)
                        UnityEngine_GameObject__GetComponent<object>
                                  (pUVar10,
                                   Method_UnityEngine_GameObject_GetComponent<MenuAdvertisingButton>__
                                  );
            DLKMEONGJEO = Nekki_SF2_GUI_Menu_MainMenu__JGGDCNNJLOL
                                    ((__this_01->fields).ACDDBLNKPCA,EDEHNHIHDDH,method_00);
            if (__this_02 == (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *)0x0) break;
            Nekki_SF2_GUI_Menu_MenuAdvertisingButton__Init
                      (__this_02,__this_01,DLKMEONGJEO,(MethodInfo *)0x0);
            pUVar10 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar10 == (UnityEngine_GameObject_o *)0x0) break;
            UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
            lVar9 = Method_System_Collections_Generic_List<MenuAdvertisingButton>_Add__;
            pSVar6 = (System_Collections_Generic_List_object__o *)*ppsVar1;
            if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) break;
            pSVar12 = (pSVar6->fields)._items;
            (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
            if (pSVar12 == (System_Object_array *)0x0) break;
            uVar3 = (pSVar6->fields)._size;
            if (uVar3 < (uint)pSVar12->max_length) {
              (pSVar6->fields)._size = uVar3 + 1;
              pSVar12->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
              thunk_FUN_01c20e04(pSVar12->m_Items + (int)uVar3,__this_02);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar6,(Il2CppObject *)__this_02,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          index = index + 1;
          if ((EDEHNHIHDDH->fields)._size <= index) {
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateScrollMenu()  [RVA 0x356B910]
// Nekki.SF2.GUI.Menu.MainMenu$$UpdateScrollMenu @ RVA 0x356B910

void Nekki_SF2_GUI_Menu_MainMenu__UpdateScrollMenu
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  Nekki_SF2_GUI_Menu_MainMenu__UpdateNewItems(__this,method);
  Nekki_SF2_GUI_Menu_MainMenu__UpdateNewPerks(__this,method_00);
  return;
}


// ===== private void GOFBJJGMEKC()  [RVA 0x356C82C]
// Nekki.SF2.GUI.Menu.MainMenu$$GOFBJJGMEKC @ RVA 0x356C82C

void Nekki_SF2_GUI_Menu_MainMenu__GOFBJJGMEKC
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Menu_MainMenu__NFCPFGIBGCO(__this,5,in_x2);
  return;
}


// ===== private void JNNKOMCGHGL()  [RVA 0x356C834]
// Nekki.SF2.GUI.Menu.MainMenu$$JNNKOMCGHGL @ RVA 0x356C834

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Menu_MainMenu__JNNKOMCGHGL
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  ACHLOMELAJE_o *__this_00;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  UnityEngine_Events_UnityEvent_bool__o *__this_03;
  undefined8 *puVar4;
  
  if ((DAT_04568c32 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_KBBDLHONPIO__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_AddListener__);
    FUN_01bab630(&StringLiteral_8969/*"MenuButtons.btn_disciple"*/);
    FUN_01bab630(&StringLiteral_8970/*"MenuButtons.btn_punching_bag"*/);
    DAT_04568c32 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).btnSettings;
  if (pNVar3 == (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) goto LAB_0366ca84;
  __this_02 = (Nekki_SF2_GUI_ResolutionImage_o *)
              (pNVar3->fields).super.super.super.super.m_TargetGraphic;
  if (__this_02 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_0366c8f0:
    __this_02 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if ((__this_02->klass->_2).naturalAligment < bVar1) goto LAB_0366c8f0;
    if ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo) {
      __this_02 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
    }
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar2) {
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
    puVar4 = &StringLiteral_8969/*"MenuButtons.btn_disciple"*/;
    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
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
      if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_0366ca84;
      bVar2 = ACHLOMELAJE__KIDFHIOEAAP(__this_00,(MethodInfo *)0x0);
      puVar4 = (undefined8 *)&StringLiteral_8970/*"MenuButtons.btn_punching_bag"*/;
      if (!bVar2) {
        puVar4 = &StringLiteral_8969/*"MenuButtons.btn_disciple"*/;
      }
    }
    if (__this_02 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0366ca84;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              (__this_02,(System_String_o *)*puVar4,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).btnSettings;
  if (pNVar3 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
    __this_03 = *(UnityEngine_Events_UnityEvent_bool__o **)
                 &(pNVar3->fields).super.super._EnableClickAnimation;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<bool>_TypeInfo);
    UnityEngine_Events_UnityAction<bool>___ctor();
    if (__this_03 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
      UnityEngine_Events_UnityEvent<bool>__AddListener
                (__this_03,call,Method_UnityEngine_Events_UnityEvent<bool>_AddListener__);
      pNVar3 = (__this->fields).btnSettings;
      if ((pNVar3 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0366ca84:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetNormalViewMode(bool BBLFHGGEMNI)  [RVA 0x356CA88]
// Nekki.SF2.GUI.Menu.MainMenu$$SetNormalViewMode @ RVA 0x356CA88

void Nekki_SF2_GUI_Menu_MainMenu__SetNormalViewMode
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool BBLFHGGEMNI,MethodInfo *method)

{
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  Nekki_SF2_GUI_Menu_MainMenu__OALJMNGIJCK(__this,BBLFHGGEMNI,method);
  return;
}


// ===== private void BILJLFKOMPC()  [RVA 0x356CA9C]
// Nekki.SF2.GUI.Menu.MainMenu$$BILJLFKOMPC @ RVA 0x356CA9C

void Nekki_SF2_GUI_Menu_MainMenu__BILJLFKOMPC
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MGNPHCAAEIO_StaticFields *pMVar1;
  UnityEngine_Rect_o UVar2;
  
  if ((DAT_04568c33 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568c33 = 1;
  }
  __this_00 = (__this->fields).btnDojoDisciple;
  if ((__this_00 != (UnityEngine_UI_Toggle_o *)0x0) &&
     (__this_01 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar2 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UVar2.fields.m_XMin,UVar2.fields.m_YMin,UVar2.fields.m_Width);
    }
    pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields;
    pMVar1->AFLBMKKOAGE = UVar2.fields.m_Height;
    pMVar1->PPIEHBLJEHP = 20.0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x356CB2C]
// Nekki.SF2.GUI.Menu.MainMenu$$GIENGNEGHPJ @ RVA 0x356CB2C

void Nekki_SF2_GUI_Menu_MainMenu__GIENGNEGHPJ
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this_00;
  System_Action_o *pSVar2;
  Nekki_SF2_GUI_UIInitializable_o *pNVar3;
  UnityEngine_Transform_o *__this_01;
  System_Collections_Generic_List_MainMenu_KCFNDEKJOHK__o *pSVar4;
  MainMenuRaidRatingPanel_o *__this_02;
  UnityEngine_GameObject_o *pUVar5;
  KKLJIDJBFEI_o *__this_03;
  FKDLCJJOGIP_o *__this_04;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_05;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this_06;
  Nekki_SF2_GUI_Menu_MenuExpPanel_o *pNVar6;
  
  if ((DAT_04568c34 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_DGMNFAKGPBG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_EFFLCPLIPEI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_HPHHGGDCCKE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_NFPKGJADONL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_PDEBOICMAJG__);
    DAT_04568c34 = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  if (DAT_04568c6b == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04568c6b = '\x01';
  }
  Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields,__this);
  Nekki_SF2_GUI_Menu_MainMenu__AONFAABDBBK(__this,method_00);
  __this_00 = (__this->fields)._energy;
  if (__this_00 != (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *)0x0) {
    Nekki_SF2_GUI_UIInitializable__Init
              ((Nekki_SF2_GUI_UIInitializable_o *)__this_00,(MethodInfo *)0x0);
    __this_06 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(__this->fields)._energy;
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_06 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
      Nekki_SF2_GUI_Menu_MenuMoneyPanel__add_OnRubyBtnClick(__this_06,pSVar2,(MethodInfo *)0x0);
      pNVar3 = *(Nekki_SF2_GUI_UIInitializable_o **)&(__this->fields).CMKBLDOABLB;
      if (pNVar3 != (Nekki_SF2_GUI_UIInitializable_o *)0x0) {
        Nekki_SF2_GUI_UIInitializable__Init(pNVar3,(MethodInfo *)0x0);
        pNVar6 = *(Nekki_SF2_GUI_Menu_MenuExpPanel_o **)&(__this->fields).CMKBLDOABLB;
        pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar6 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) {
          Nekki_SF2_GUI_Menu_MenuExpPanel__add_OnLevelHintBtnClicked
                    (pNVar6,pSVar2,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Menu_MainMenu__DLJGDLIAODA(__this,method_01);
          pNVar6 = (__this->fields)._experience;
          if (pNVar6 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) {
            Nekki_SF2_GUI_UIInitializable__Init
                      ((Nekki_SF2_GUI_UIInitializable_o *)pNVar6,(MethodInfo *)0x0);
            pNVar6 = (__this->fields)._experience;
            pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pNVar6 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) {
              Nekki_SF2_GUI_Menu_MenuEnergyPanel__add_OnBarClicked
                        ((Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *)pNVar6,pSVar2,(MethodInfo *)0x0);
              pNVar3 = *(Nekki_SF2_GUI_UIInitializable_o **)
                        &(__this->fields).TopMenuDefaultInteraction;
              if (pNVar3 != (Nekki_SF2_GUI_UIInitializable_o *)0x0) {
                Nekki_SF2_GUI_UIInitializable__Init(pNVar3,(MethodInfo *)0x0);
                pNVar3 = *(Nekki_SF2_GUI_UIInitializable_o **)
                          &(__this->fields)._MaterialsMoveDuration;
                if (pNVar3 != (Nekki_SF2_GUI_UIInitializable_o *)0x0) {
                  Nekki_SF2_GUI_UIInitializable__Init(pNVar3,(MethodInfo *)0x0);
                  __this_01 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                    pSVar4 = (System_Collections_Generic_List_MainMenu_KCFNDEKJOHK__o *)
                             UnityEngine_Transform__get_parent(__this_01,(MethodInfo *)0x0);
                    (__this->fields).EKDOIPLJFKO = pSVar4;
                    thunk_FUN_01c20e04(&(__this->fields).EKDOIPLJFKO);
                    Nekki_SF2_GUI_Menu_MainMenu__BILJLFKOMPC(__this,method_02);
                    Nekki_SF2_GUI_Menu_MainMenu__LDCBIKHNKKL(__this,method_03);
                    __this_02 = (__this->fields)._raidRating;
                    if ((__this_02 != (MainMenuRaidRatingPanel_o *)0x0) &&
                       (pUVar5 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
                       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
                      method_08 = (MethodInfo *)0x0;
                      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Menu_MainMenu__JNNKOMCGHGL(__this,method_04);
                      Nekki_SF2_GUI_Menu_MainMenu__OBKDCGCBNHL(__this,method_05);
                      if ((__this->fields).super.__IsReleased_k__BackingField == false) {
                        Nekki_SF2_GUI_Menu_MainMenu__OALJMNGIJCK(__this,false,method_08);
                      }
                      __this_03 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                      System_Action___ctor();
                      if (__this_03 != (KKLJIDJBFEI_o *)0x0) {
                        KKLJIDJBFEI__KGJHOLAEPAI(__this_03,pSVar2,(MethodInfo *)0x0);
                        __this_04 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
                        pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                        System_Action___ctor();
                        if (__this_04 != (FKDLCJJOGIP_o *)0x0) {
                          FKDLCJJOGIP__ALADOEDCONI(__this_04,pSVar2,(MethodInfo *)0x0);
                          Nekki_SF2_GUI_Menu_MainMenu__UpdateMenu(__this,method_06);
                          pUVar5 = (__this->fields)._settingsDlgPrefab;
                          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                            UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
                            bVar1 = Nekki_SF2_GUI_Menu_MainMenu__DNLOKLACJHA(__this_05,method_07);
                            *(bool *)&(__this->fields).BIMMDBGIMFN = bVar1;
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


// ===== public MainMenuRaidRatingPanel GetRaidRating()  [RVA 0x356D5F8]
// Nekki.SF2.GUI.Menu.MainMenu$$GetRaidRating @ RVA 0x356D5F8

MainMenuRaidRatingPanel_o *
Nekki_SF2_GUI_Menu_MainMenu__GetRaidRating(Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  return *(MainMenuRaidRatingPanel_o **)&(__this->fields)._MaterialsMoveDuration;
}


// ===== public void Hide()  [RVA 0x356D600]
// Nekki.SF2.GUI.Menu.MainMenu$$Hide @ RVA 0x356D600

void Nekki_SF2_GUI_Menu_MainMenu__Hide(Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0366d61c to 0376d623 has its CatchHandler @ 03673690 */
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateNewItems()  [RVA 0x356C36C]
// Nekki.SF2.GUI.Menu.MainMenu$$UpdateNewItems @ RVA 0x356C36C

void Nekki_SF2_GUI_Menu_MainMenu__UpdateNewItems
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Image_o *pUVar3;
  DOPEEDABNEK_o *__this_00;
  System_String_o *pSVar4;
  int32_t local_24;
  
  if ((DAT_04568c35 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568c35 = 1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField == false) {
    pNVar1 = (__this->fields)._newPerksLabel;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._newItemsCircle;
      if ((pUVar3 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._newItemsEllipse;
        if ((pUVar3 != (UnityEngine_UI_Image_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
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
          __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
          if (__this_00 != (DOPEEDABNEK_o *)0x0) {
            local_24 = DOPEEDABNEK__JMPINBGBLNI(__this_00,(MethodInfo *)0x0);
            if (local_24 < 1) {
              return;
            }
            if (local_24 < 10) {
              pNVar1 = (__this->fields)._newPerksLabel;
            }
            else {
              pNVar1 = (Nekki_SF2_GUI_LabelAlias_o *)(__this->fields)._newItemsCircle;
            }
            if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
              pUVar3 = (__this->fields)._newItemsEllipse;
              pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                (*(pUVar3->klass->vtable)._75_unknown.methodPtr)
                          (pUVar3,pSVar4,(pUVar3->klass->vtable)._75_unknown.method);
                pUVar3 = (__this->fields)._newItemsEllipse;
                if ((pUVar3 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar2 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
                   pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
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
  return;
}


// ===== private void GKFNLJGEFOE(bool FMFKDAOBPDI)  [RVA 0x356D634]
// Nekki.SF2.GUI.Menu.MainMenu$$GKFNLJGEFOE @ RVA 0x356D634

void Nekki_SF2_GUI_Menu_MainMenu__GKFNLJGEFOE
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool FMFKDAOBPDI,MethodInfo *method)

{
  return;
}


// ===== private void HLMADGFFIND()  [RVA 0x356D638]
// Nekki.SF2.GUI.Menu.MainMenu$$HLMADGFFIND @ RVA 0x356D638

void Nekki_SF2_GUI_Menu_MainMenu__HLMADGFFIND
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(__this->fields)._energy;
  if (__this_00 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
                    /* try { // try from 0366d658 to 0376d663 has its CatchHandler @ 03673810 */
    Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateCurrencyValues(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JGOEDIHMJLB()  [RVA 0x356D664]
// Nekki.SF2.GUI.Menu.MainMenu$$JGOEDIHMJLB @ RVA 0x356D664

void Nekki_SF2_GUI_Menu_MainMenu__JGOEDIHMJLB
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar5;
  
                    /* try { // try from 0366d67c to 0376d687 has its CatchHandler @ 03673800 */
  if ((DAT_04568c36 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_DDEINGLCJHA__);
                    /* try { // try from 0366d694 to 0376d6a3 has its CatchHandler @ 03673814 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_GOFBJJGMEKC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_KKMHIKAOKKH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_MGMMDJKPOCJ__);
                    /* try { // try from 0366d6b0 to 0376d6b7 has its CatchHandler @ 036737a0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_NEDGKDBLFJC__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0366d6c8 to 0376d6cf has its CatchHandler @ 036737f8 */
    FUN_01bab630(&StringLiteral_8964/*"MenuButtons.Settings_active"*/);
                    /* try { // try from 0366d6dc to 0376d6e3 has its CatchHandler @ 036737dc */
    FUN_01bab630(&StringLiteral_8965/*"MenuButtons.Settings_normal"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_04568c36 = 1;
  }
                    /* try { // try from 0366d6f4 to 0376d6fb has its CatchHandler @ 036737c8 */
  pNVar3 = (__this->fields)._menuLabel;
                    /* try { // try from 0366d6fc to 0376d70f has its CatchHandler @ 036737f0 */
  pSVar1 = MEJPIPJPKNP__GDFIHPLOOGM(3,(MethodInfo *)0x0);
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0366d71c to 0376d71f has its CatchHandler @ 036737c4 */
    Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
              ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar3,StringLiteral_14092/*"UI/Atlases/"*/,pSVar1,
               (MethodInfo *)0x0);
    pNVar3 = (__this->fields)._menuLabel;
                    /* try { // try from 0366d730 to 0376d737 has its CatchHandler @ 036737ec */
    pSVar1 = MEJPIPJPKNP__HLKGHMBHAEF(3,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0366d744 to 0376d74b has its CatchHandler @ 036737a4 */
      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar3,StringLiteral_14092/*"UI/Atlases/"*/,pSVar1,
                 (MethodInfo *)0x0);
      pNVar3 = (__this->fields)._menuLabel;
      pSVar1 = MEJPIPJPKNP__NABCOFEDBGM(3,(MethodInfo *)0x0);
                    /* try { // try from 0366d75c to 0376d763 has its CatchHandler @ 036737a8 */
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0366d770 to 0376d777 has its CatchHandler @ 036737b4 */
        Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                  ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar3,StringLiteral_14092/*"UI/Atlases/"*/,pSVar1,
                   (MethodInfo *)0x0);
        pNVar3 = (__this->fields)._menuLabel;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0366d788 to 0376d78f has its CatchHandler @ 036737f4 */
          pUVar4 = *(UnityEngine_Events_UnityEvent_o **)
                    &(pNVar3->fields).super.super.m_DisableFontTextureRebuiltCallback;
                    /* try { // try from 0366d790 to 0376d79f has its CatchHandler @ 036737b0 */
          pUVar2 = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0366d7b0 to 0376d7b7 has its CatchHandler @ 036737e4 */
            UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
            pNVar5 = (__this->fields).btnDojo;
                    /* try { // try from 0366d7c8 to 0376d7cf has its CatchHandler @ 036737ac */
            pSVar1 = MEJPIPJPKNP__GDFIHPLOOGM(5,(MethodInfo *)0x0);
            if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d7dc to 0376d7e3 has its CatchHandler @ 036737bc */
              Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
                        ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,StringLiteral_14092/*"UI/Atlases/"*/,pSVar1,
                         (MethodInfo *)0x0);
              pNVar5 = (__this->fields).btnDojo;
                    /* try { // try from 0366d7f4 to 0376d7fb has its CatchHandler @ 036737b8 */
              pSVar1 = MEJPIPJPKNP__HLKGHMBHAEF(5,(MethodInfo *)0x0);
              if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d7fc to 0376d827 has its CatchHandler @ 036737fc */
                Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                          ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,StringLiteral_14092/*"UI/Atlases/"*/,pSVar1,
                           (MethodInfo *)0x0);
                pNVar5 = (__this->fields).btnDojo;
                pSVar1 = MEJPIPJPKNP__NABCOFEDBGM(5,(MethodInfo *)0x0);
                if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d828 to 0376d84f has its CatchHandler @ 03673804 */
                  Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                            ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,StringLiteral_14092/*"UI/Atlases/"*/,pSVar1,
                             (MethodInfo *)0x0);
                  pNVar5 = (__this->fields).btnDojo;
                  if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                             (pNVar5->fields).super.super.super.m_OnClick;
                    pUVar2 = (UnityEngine_Events_UnityAction_o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0366d85c to 0376d863 has its CatchHandler @ 036737e8 */
                    UnityEngine_Events_UnityAction___ctor();
                    if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0366d874 to 0376d87b has its CatchHandler @ 036737e0 */
                      UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
                      pNVar5 = (__this->fields).btnMap;
                    /* try { // try from 0366d888 to 0376d88f has its CatchHandler @ 036737c0 */
                      pSVar1 = MEJPIPJPKNP__GDFIHPLOOGM(4,(MethodInfo *)0x0);
                      if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d8a0 to 0376d8a7 has its CatchHandler @ 036737d8 */
                        Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
                                  ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,StringLiteral_14092/*"UI/Atlases/"*/,
                                   pSVar1,(MethodInfo *)0x0);
                        pNVar5 = (__this->fields).btnMap;
                    /* try { // try from 0366d8a8 to 0376d8b7 has its CatchHandler @ 036737d4 */
                        pSVar1 = MEJPIPJPKNP__HLKGHMBHAEF(4,(MethodInfo *)0x0);
                        if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d8bc to 0376d8df has its CatchHandler @ 0367380c */
                          Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                    ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,StringLiteral_14092/*"UI/Atlases/"*/,
                                     pSVar1,(MethodInfo *)0x0);
                          pNVar5 = (__this->fields).btnMap;
                          pSVar1 = MEJPIPJPKNP__NABCOFEDBGM(4,(MethodInfo *)0x0);
                          if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d8ec to 0376d8f3 has its CatchHandler @ 0367379c */
                            Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                                      ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,
                                       StringLiteral_14092/*"UI/Atlases/"*/,pSVar1,(MethodInfo *)0x0);
                            pNVar5 = (__this->fields).btnMap;
                            if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d8fc to 0376d903 has its CatchHandler @ 0367378c */
                              pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                                       (pNVar5->fields).super.super.super.m_OnClick;
                              pUVar2 = (UnityEngine_Events_UnityAction_o *)
                                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0366d910 to 0376d917 has its CatchHandler @ 03673798 */
                    /* try { // try from 0366d920 to 0376d927 has its CatchHandler @ 03673794 */
                              UnityEngine_Events_UnityAction___ctor();
                              if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0366d928 to 0376d937 has its CatchHandler @ 03673790 */
                                UnityEngine_Events_UnityEvent__AddListener
                                          (pUVar4,pUVar2,(MethodInfo *)0x0);
                                pNVar5 = (__this->fields).btnShop;
                    /* try { // try from 0366d93c to 0376d95f has its CatchHandler @ 03673808 */
                                pSVar1 = MEJPIPJPKNP__GDFIHPLOOGM(7,(MethodInfo *)0x0);
                                if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                                  Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
                                            ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,
                                             StringLiteral_14092/*"UI/Atlases/"*/,pSVar1,(MethodInfo *)0x0);
                                  pNVar5 = (__this->fields).btnShop;
                                  pSVar1 = MEJPIPJPKNP__HLKGHMBHAEF(7,(MethodInfo *)0x0);
                                  if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                                    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                              ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,
                                               StringLiteral_14092/*"UI/Atlases/"*/,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 0366d988 to 0376d98f has its CatchHandler @ 03673318 */
                                    pNVar5 = (__this->fields).btnShop;
                                    pSVar1 = MEJPIPJPKNP__NABCOFEDBGM(7,(MethodInfo *)0x0);
                                    if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366d9ac to 0376d9b3 has its CatchHandler @ 03673214 */
                                      Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                                                ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,
                                                 StringLiteral_14092/*"UI/Atlases/"*/,pSVar1,(MethodInfo *)0x0);
                                      pNVar5 = (__this->fields).btnShop;
                                      if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                                        pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                                                 (pNVar5->fields).super.super.super.m_OnClick;
                    /* try { // try from 0366d9c4 to 0376d9cb has its CatchHandler @ 03673210 */
                                        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                                                 thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0366d9d8 to 0376d9df has its CatchHandler @ 0367320c */
                                        UnityEngine_Events_UnityAction___ctor();
                                        if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0366d9f0 to 0376d9f7 has its CatchHandler @ 03673208 */
                                          UnityEngine_Events_UnityEvent__AddListener
                                                    (pUVar4,pUVar2,(MethodInfo *)0x0);
                                          pNVar5 = (__this->fields).btnProfile;
                    /* try { // try from 0366d9f8 to 0376da07 has its CatchHandler @ 03673204 */
                                          if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0)
                                          {
                                            Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
                                                      ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,
                                                       StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_8965/*"MenuButtons.Settings_normal"*/,
                                                       (MethodInfo *)0x0);
                                            pNVar5 = (__this->fields).btnProfile;
                    /* try { // try from 0366da18 to 0376da1f has its CatchHandler @ 03673200 */
                                            if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)
                                                          0x0) {
                                              Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                                        ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar5,
                                                         StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_8964/*"MenuButtons.Settings_active"*/,
                                                         (MethodInfo *)0x0);
                                              pNVar5 = (__this->fields).btnProfile;
                    /* try { // try from 0366da38 to 0376da3b has its CatchHandler @ 03672d60 */
                                              if (pNVar5 != (Nekki_SF2_GUI_Common_SectionButton_o *)
                                                            0x0) {
                    /* try { // try from 0366da3c to 0376da77 has its CatchHandler @ 0367339c */
                                                pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                                                         (pNVar5->fields).super.super.super.
                                                         m_OnClick;
                                                pUVar2 = (UnityEngine_Events_UnityAction_o *)
                                                         thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                                                UnityEngine_Events_UnityAction___ctor();
                                                if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0
                                                   ) {
                                                  UnityEngine_Events_UnityEvent__AddListener
                                                            (pUVar4,pUVar2,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0366da84 to 0376da93 has its CatchHandler @ 036731fc */
  FUN_01bab8c8();
}


// ===== public void UpdateMenu()  [RVA 0x356D330]
// Nekki.SF2.GUI.Menu.MainMenu$$UpdateMenu @ RVA 0x356D330

void Nekki_SF2_GUI_Menu_MainMenu__UpdateMenu
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Menu_MenuExpPanel_o *pNVar3;
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this_00;
  int32_t CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  UnityEngine_Component_o *pUVar4;
  UnityEngine_Object_o *pUVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = __this;
  if ((DAT_04568c37 & 1) == 0) {
    auVar6 = FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c37 = 1;
  }
                    /* try { // try from 0366d35c to 0376d387 has its CatchHandler @ 0367330c */
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  bVar1 = Nekki_SF2_GUI_Menu_MainMenu__DNLOKLACJHA(auVar6._0_8_,auVar6._8_8_);
  pUVar4 = *(UnityEngine_Component_o **)&(__this->fields).CMKBLDOABLB;
  *(bool *)&(__this->fields).BIMMDBGIMFN = bVar1;
  if ((pUVar4 != (UnityEngine_Component_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    if (bVar1) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._experience;
      if ((pNVar3 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pUVar5 = *(UnityEngine_Object_o **)&(__this->fields)._MaterialsMoveDuration;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        method_00 = extraout_x1;
        if (bVar1) {
                    /* try { // try from 0366d3f8 to 0376d3fb has its CatchHandler @ 03673788 */
          pUVar4 = *(UnityEngine_Component_o **)&(__this->fields)._MaterialsMoveDuration;
                    /* try { // try from 0366d3fc to 0376d3ff has its CatchHandler @ 036738c4 */
                    /* try { // try from 0366d408 to 0376d40f has its CatchHandler @ 036738c0 */
          if ((pUVar4 == (UnityEngine_Component_o *)0x0) ||
             (pUVar2 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0),
             pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0366d4f8;
          UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
          method_00 = extraout_x1_00;
        }
        Nekki_SF2_GUI_Menu_MainMenu__UpdateRaidRating(__this,method_00);
        __this_00 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(__this->fields)._energy;
        if (__this_00 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
          CJNHFNHJHPE = 2;
LAB_0366d4b8:
                    /* try { // try from 0366d4b8 to 0376d4bf has its CatchHandler @ 036738b0 */
          Nekki_SF2_GUI_Menu_MenuMoneyPanel__set_CurrentViewMode
                    (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Menu_MainMenu__HLMADGFFIND(__this,method_01);
          Nekki_SF2_GUI_Menu_MainMenu__UpdateNewPerks(__this,method_02);
                    /* try { // try from 0366d4d0 to 0376d4d7 has its CatchHandler @ 03673894 */
          Nekki_SF2_GUI_Menu_MainMenu__UpdateNewItems(__this,method_03);
                    /* try { // try from 0366d4d8 to 0376d4eb has its CatchHandler @ 03673880 */
          Nekki_SF2_GUI_Menu_MainMenu__UpdateMaterials(__this,method_04);
          Nekki_SF2_GUI_Menu_MainMenu__UpdateBarEnergy(__this,method_05);
                    /* try { // try from 0366d4f0 to 0376d4ff has its CatchHandler @ 0367387c */
          Nekki_SF2_GUI_Menu_MainMenu__IDMLEMPNLFH(__this,method_06);
          return;
        }
      }
    }
    else {
                    /* try { // try from 0366d434 to 0376d437 has its CatchHandler @ 03673784 */
                    /* try { // try from 0366d438 to 0376d43b has its CatchHandler @ 036738ac */
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._experience;
                    /* try { // try from 0366d444 to 0376d44b has its CatchHandler @ 036738a0 */
      if ((pNVar3 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0366d450 to 0376d453 has its CatchHandler @ 036738bc */
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
                    /* try { // try from 0366d45c to 0376d463 has its CatchHandler @ 0367389c */
        pUVar5 = *(UnityEngine_Object_o **)&(__this->fields)._MaterialsMoveDuration;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
                    /* try { // try from 0366d48c to 0376d493 has its CatchHandler @ 03673890 */
          pUVar4 = *(UnityEngine_Component_o **)&(__this->fields)._MaterialsMoveDuration;
          if ((pUVar4 == (UnityEngine_Component_o *)0x0) ||
             (pUVar2 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0),
             pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0366d4f8;
                    /* try { // try from 0366d4a4 to 0376d4ab has its CatchHandler @ 036738b8 */
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        }
        __this_00 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(__this->fields)._energy;
        if (__this_00 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
          CJNHFNHJHPE = 0;
          goto LAB_0366d4b8;
        }
      }
    }
  }
LAB_0366d4f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PPEKFEEHHGI()  [RVA 0x356DC44]
// Nekki.SF2.GUI.Menu.MainMenu$$PPEKFEEHHGI @ RVA 0x356DC44

void Nekki_SF2_GUI_Menu_MainMenu__PPEKFEEHHGI
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  
  __this_00 = (__this->fields)._skipTutorialBtn;
                    /* try { // try from 0366dc50 to 0376dc57 has its CatchHandler @ 03672e68 */
                    /* try { // try from 0366dc58 to 0376dc67 has its CatchHandler @ 036731f0 */
  if ((__this_00 != (UnityEngine_UI_Button_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._newPerksCircle;
                    /* try { // try from 0366dc70 to 0376dc7f has its CatchHandler @ 03672e64 */
    if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._newPerksEllipse;
                    /* try { // try from 0366dc90 to 0376dc97 has its CatchHandler @ 03672e60 */
      if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar1 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0366dca8 to 0376dcaf has its CatchHandler @ 03672e5c */
        UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PDEBOICMAJG()  [RVA 0x356DCB4]
// Nekki.SF2.GUI.Menu.MainMenu$$PDEBOICMAJG @ RVA 0x356DCB4

void Nekki_SF2_GUI_Menu_MainMenu__PDEBOICMAJG
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0366dcbc to 0376dcc3 has its CatchHandler @ 03672e58 */
  if ((DAT_04568c38 & 1) == 0) {
                    /* try { // try from 0366dcd4 to 0376dcdb has its CatchHandler @ 03672e54 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 0366dcdc to 0376dceb has its CatchHandler @ 03672e50 */
    DAT_04568c38 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
                    /* try { // try from 0366dcfc to 0376dd03 has its CatchHandler @ 03672e4c */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  MGNPHCAAEIO__HMGOIPKIDBB((MethodInfo *)0x0);
                    /* try { // try from 0366dd14 to 0376dd1b has its CatchHandler @ 03672e48 */
  MGNPHCAAEIO__BHMIDFLCAHJ((MethodInfo *)0x0);
  return;
}


// ===== private void IDMLEMPNLFH()  [RVA 0x356DB40]
// Nekki.SF2.GUI.Menu.MainMenu$$IDMLEMPNLFH @ RVA 0x356DB40

void Nekki_SF2_GUI_Menu_MainMenu__IDMLEMPNLFH
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *pNVar3;
  System_Collections_Generic_List_MenuAdvertisingButton__o *pSVar4;
  
                    /* try { // try from 0366db48 to 0376db4f has its CatchHandler @ 03672e94 */
  if ((DAT_04568c39 & 1) == 0) {
                    /* try { // try from 0366db60 to 0376db67 has its CatchHandler @ 03672e90 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0366db68 to 0376db77 has its CatchHandler @ 036731f4 */
    DAT_04568c39 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField == false) {
    pNVar3 = (__this->fields).KLPEJDHIIGF;
                    /* try { // try from 0366db80 to 0376db8f has its CatchHandler @ 03672e8c */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0366dba0 to 0376dba7 has its CatchHandler @ 03672e88 */
    if (bVar1) {
      pNVar3 = (__this->fields).KLPEJDHIIGF;
      if ((pNVar3 == (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0366dc40;
                    /* try { // try from 0366dbb8 to 0376dbbf has its CatchHandler @ 03672e84 */
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
      if (bVar1) {
        __this_00 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)(__this->fields).KLPEJDHIIGF;
        if (__this_00 == (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0) goto LAB_0366dc40;
                    /* try { // try from 0366dbcc to 0376dbd3 has its CatchHandler @ 03672e80 */
        Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__UpdateProgressBar(__this_00,(MethodInfo *)0x0)
        ;
      }
    }
    pSVar4 = (__this->fields).ADBHOMPFAPK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366dbe4 to 0376dbeb has its CatchHandler @ 03672e7c */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0366dbec to 0376dbfb has its CatchHandler @ 03672e78 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pSVar4 = (__this->fields).ADBHOMPFAPK;
                    /* try { // try from 0366dc0c to 0376dc13 has its CatchHandler @ 03672e74 */
      if ((pSVar4 != (System_Collections_Generic_List_MenuAdvertisingButton__o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pNVar3 = (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)(__this->fields).ADBHOMPFAPK;
        if (pNVar3 != (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)0x0) {
                    /* try { // try from 0366dc24 to 0376dc2b has its CatchHandler @ 03672e70 */
          Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__UpdateProgressBar(pNVar3,(MethodInfo *)0x0);
          return;
        }
      }
LAB_0366dc40:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* try { // try from 0366dc38 to 0376dc3f has its CatchHandler @ 03672e6c */
  return;
}


// ===== public void set_IsEnabled(bool CJNHFNHJHPE)  [RVA 0x356DD24]
// Nekki.SF2.GUI.Menu.MainMenu$$set_IsEnabled @ RVA 0x356DD24

void Nekki_SF2_GUI_Menu_MainMenu__set_IsEnabled
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_UI_Image_o *__this_00;
  
                    /* try { // try from 0366dd28 to 0376dd2f has its CatchHandler @ 03672e44 */
  bVar1 = (__this->fields).super.__IsReleased_k__BackingField;
  (__this->fields).super.field_0x16 = CJNHFNHJHPE;
  if (bVar1 == false) {
                    /* try { // try from 0366dd40 to 0376dd47 has its CatchHandler @ 03672e40 */
                    /* try { // try from 0366dd48 to 0376dd57 has its CatchHandler @ 036731ec */
    Util__IHPDCBOFHPA((__this->fields)._settingsDlgPrefab,(bool)(~CJNHFNHJHPE & 1),(MethodInfo *)0x0
                     );
    if ((__this->fields).super.field_0x16 == '\0') {
                    /* try { // try from 0366dd60 to 0376dd6f has its CatchHandler @ 03672e3c */
      __this_00 = (__this->fields)._backgroundPicture;
      if (__this_00 == (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0366dd80 to 0376dd87 has its CatchHandler @ 03672e38 */
        FUN_01bab8c8();
      }
      if (*(char *)((long)&(__this_00->fields).super.super.m_OnDirtyMaterialCallback + 4) != '\0') {
        Nekki_SF2_GUI_Menu_MenuScroll__Collapse
                  ((Nekki_SF2_GUI_Menu_MenuScroll_o *)__this_00,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// ===== public void UpdateDojoDiscipleButton()  [RVA 0x356DD84]
// Nekki.SF2.GUI.Menu.MainMenu$$UpdateDojoDiscipleButton @ RVA 0x356DD84

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Menu_MainMenu__UpdateDojoDiscipleButton
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 0366dd98 to 0376dd9f has its CatchHandler @ 03672e34 */
  if ((DAT_04568c3a & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0366ddac to 0376ddb3 has its CatchHandler @ 03672e30 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
                    /* try { // try from 0366ddc4 to 0376ddcb has its CatchHandler @ 03672e2c */
                    /* try { // try from 0366ddcc to 0376ddf7 has its CatchHandler @ 03673194 */
    FUN_01bab630(&StringLiteral_8969/*"MenuButtons.btn_disciple"*/);
    FUN_01bab630(&StringLiteral_8970/*"MenuButtons.btn_punching_bag"*/);
    DAT_04568c3a = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField == false) {
    pNVar3 = (__this->fields).btnSettings;
                    /* try { // try from 0366ddf8 to 0376ddfb has its CatchHandler @ 036731e8 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366de04 to 0376de13 has its CatchHandler @ 03672e28 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0366de18 to 0376de1f has its CatchHandler @ 036731e4 */
    if (bVar2) {
      pNVar3 = (__this->fields).btnSettings;
      if (pNVar3 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
                    /* try { // try from 0366de2c to 0376de37 has its CatchHandler @ 03672e24 */
        __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)
                    (pNVar3->fields).super.super.super.super.m_TargetGraphic;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
                    /* try { // try from 0366de50 to 0376de5f has its CatchHandler @ 03672e20 */
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
          if ((__this_01->klass->_2).naturalAligment < bVar1) {
            __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
          }
          else {
                    /* try { // try from 0366deb8 to 0376debf has its CatchHandler @ 03673434 */
            if ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo) {
              __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
            }
          }
        }
                    /* try { // try from 0366decc to 0376ded3 has its CatchHandler @ 03673438 */
        puVar4 = &StringLiteral_8969/*"MenuButtons.btn_disciple"*/;
        if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField !=
            (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 0366dedc to 0376dee3 has its CatchHandler @ 0367343c */
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 0366dee4 to 0376def7 has its CatchHandler @ 03673440 */
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
                    /* try { // try from 0366df04 to 0376df07 has its CatchHandler @ 03673444 */
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_0366df58;
                    /* try { // try from 0366df20 to 0376df23 has its CatchHandler @ 03673334 */
                    /* try { // try from 0366df24 to 0376df4b has its CatchHandler @ 0367352c */
          bVar2 = ACHLOMELAJE__KIDFHIOEAAP(__this_00,(MethodInfo *)0x0);
          puVar4 = (undefined8 *)&StringLiteral_8970/*"MenuButtons.btn_punching_bag"*/;
          if (!bVar2) {
            puVar4 = &StringLiteral_8969/*"MenuButtons.btn_disciple"*/;
          }
        }
        if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (__this_01,(System_String_o *)*puVar4,(MethodInfo *)0x0);
          return;
        }
      }
LAB_0366df58:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* try { // try from 0366dea8 to 0376deaf has its CatchHandler @ 03673430 */
  return;
}


// ===== public void Show()  [RVA 0x356DF5C]
// Nekki.SF2.GUI.Menu.MainMenu$$Show @ RVA 0x356DF5C

void Nekki_SF2_GUI_Menu_MainMenu__Show(Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
                    /* try { // try from 0366df68 to 0376df6f has its CatchHandler @ 036731e0 */
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 0366df80 to 0376df87 has its CatchHandler @ 036731dc */
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public SectionButton GetButtonFromScreen(DBMPKPJGIPI KGBNBLGMCBF)  [RVA 0x356DF90]
// Nekki.SF2.GUI.Menu.MainMenu$$GetButtonFromScreen @ RVA 0x356DF90

Nekki_SF2_GUI_Common_SectionButton_o *
Nekki_SF2_GUI_Menu_MainMenu__GetButtonFromScreen
          (Nekki_SF2_GUI_Menu_MainMenu_o *__this,int32_t KGBNBLGMCBF,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar1;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return (Nekki_SF2_GUI_Common_SectionButton_o *)0x0;
  }
  pNVar1 = (Nekki_SF2_GUI_Common_SectionButton_o *)0x0;
                    /* try { // try from 0366dfb0 to 0376dfb7 has its CatchHandler @ 036731d8 */
                    /* try { // try from 0366dfc8 to 0376dfcf has its CatchHandler @ 036731d4 */
  switch(KGBNBLGMCBF) {
  case 3:
                    /* try { // try from 0366dfd0 to 0376dfdf has its CatchHandler @ 036731d0 */
    return (Nekki_SF2_GUI_Common_SectionButton_o *)(__this->fields)._menuLabel;
  case 4:
    return (__this->fields).btnMap;
  case 5:
    return (__this->fields).btnDojo;
  case 7:
    pNVar1 = (__this->fields).btnShop;
  }
  return pNVar1;
}


// ===== public void UpdateNewPerks()  [RVA 0x356C504]
// Nekki.SF2.GUI.Menu.MainMenu$$UpdateNewPerks @ RVA 0x356C504

void Nekki_SF2_GUI_Menu_MainMenu__UpdateNewPerks
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_Image_o *pUVar7;
  NFGLEDADCGL_o *__this_01;
  FEPPOONJCGI_o *__this_02;
  EGMONPGHHDP_o *__this_03;
  System_String_o *pSVar8;
  ACHLOMELAJE_o *pAVar9;
  int local_34;
  
  if ((DAT_04568c3b & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568c3b = 1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = (__this->fields)._skipTutorialBtn;
  if ((__this_00 != (UnityEngine_UI_Button_o *)0x0) &&
     (pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._newPerksCircle;
    if ((pUVar7 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar6 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
       pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._newPerksEllipse;
      if ((pUVar7 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
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
        if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField ==
            (ACHLOMELAJE_o *)0x0) {
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
        pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar9 != (ACHLOMELAJE_o *)0x0) &&
           (__this_01 = (pAVar9->fields).CKJAGLDEMAE, __this_01 != (NFGLEDADCGL_o *)0x0)) {
          iVar1 = NFGLEDADCGL__DBOOGGKPPIP(__this_01,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if ((pAVar9 != (ACHLOMELAJE_o *)0x0) &&
             (__this_02 = (pAVar9->fields).IMJJJJJMMHL, __this_02 != (FEPPOONJCGI_o *)0x0)) {
            iVar2 = FEPPOONJCGI__NIKBIHOFOOD(__this_02,(MethodInfo *)0x0);
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar9 != (ACHLOMELAJE_o *)0x0) {
              iVar3 = ACHLOMELAJE__JNFJHGPHLGC(pAVar9,(MethodInfo *)0x0);
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar9 != (ACHLOMELAJE_o *)0x0) {
                iVar4 = ACHLOMELAJE__DDKLAHEHGBG(pAVar9,(MethodInfo *)0x0);
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
                }
                __this_03 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
                if (__this_03 != (EGMONPGHHDP_o *)0x0) {
                  iVar5 = EGMONPGHHDP__BAOGFDIDOMJ
                                    (__this_03,(JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0,(MethodInfo *)0x0);
                  local_34 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5;
                  if (local_34 < 1) {
                    return;
                  }
                  if (local_34 < 10) {
                    pUVar7 = (UnityEngine_UI_Image_o *)(__this->fields)._skipTutorialBtn;
                  }
                  else {
                    pUVar7 = (__this->fields)._newPerksCircle;
                  }
                  if ((pUVar7 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar6 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
                     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
                    pUVar7 = (__this->fields)._newPerksEllipse;
                    pSVar8 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                    if (pUVar7 != (UnityEngine_UI_Image_o *)0x0) {
                      (*(pUVar7->klass->vtable)._75_unknown.methodPtr)
                                (pUVar7,pSVar8,(pUVar7->klass->vtable)._75_unknown.method);
                      pUVar7 = (__this->fields)._newPerksEllipse;
                      if ((pUVar7 != (UnityEngine_UI_Image_o *)0x0) &&
                         (pUVar6 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
                         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                        UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ChangeParentAndHideScroll(GameObject HODGKDNOHLP, Transform IFFKONPAKOP)  [RVA 0x356DFEC]
// Nekki.SF2.GUI.Menu.MainMenu$$ChangeParentAndHideScroll @ RVA 0x356DFEC

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Menu_MainMenu__ChangeParentAndHideScroll
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,UnityEngine_GameObject_o *HODGKDNOHLP,
               UnityEngine_Transform_o *IFFKONPAKOP,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  System_Predicate_T__o *match;
  System_String_o *pSVar5;
  System_String_o *str3;
  Il2CppObject *__this_00;
  undefined8 *puVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  NDPMLPGANCI_o *__this_02;
  MethodInfo *method_00;
  UnityEngine_Object_Fields UVar8;
  UnityEngine_UI_Slider_o *pUVar9;
  int32_t local_34;
  
                    /* try { // try from 0366dff8 to 0376e033 has its CatchHandler @ 036732ec */
  if ((DAT_04568c3c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_EBKMGAJJNJM_CPAEMHABKFP__);
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_EBKMGAJJNJM_TypeInfo);
                    /* try { // try from 0366e048 to 0376e06f has its CatchHandler @ 03673280 */
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_KCFNDEKJOHK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_RemoveAll__);
    FUN_01bab630(&System_Predicate<MainMenu_KCFNDEKJOHK>_TypeInfo);
                    /* try { // try from 0366e070 to 0376e073 has its CatchHandler @ 03673308 */
    FUN_01bab630(&StringLiteral_8791/*"MainMenu::ChangeParentAndHideScroll: Hasn't deleted previously parented by the same inflictor: "*/);
                    /* try { // try from 0366e084 to 0376e08b has its CatchHandler @ 036731cc */
    FUN_01bab630(&StringLiteral_389/*" deleted count: "*/);
    DAT_04568c3c = 1;
  }
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Menu_MainMenu_EBKMGAJJNJM_TypeInfo);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 0366e0a4 to 0376e0ab has its CatchHandler @ 036735f8 */
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4 = pIVar4 + 1;
    pIVar4->klass = (Il2CppClass *)HODGKDNOHLP;
    thunk_FUN_01c20e04(pIVar4,HODGKDNOHLP);
                    /* try { // try from 0366e0c0 to 0376e0c7 has its CatchHandler @ 036735f0 */
    if ((__this->fields).super.__IsReleased_k__BackingField != false) {
                    /* try { // try from 0366e2dc to 0376e2e3 has its CatchHandler @ 03673518 */
      return;
    }
    pUVar9 = (__this->fields).MLLHHEDCFJH;
                    /* try { // try from 0366e0d0 to 0376e0d7 has its CatchHandler @ 036735e4 */
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<MainMenu_KCFNDEKJOHK>_TypeInfo);
                    /* try { // try from 0366e0e4 to 0376e0eb has its CatchHandler @ 036735dc */
    System_Predicate<object>___ctor();
                    /* try { // try from 0366e0f4 to 0376e0fb has its CatchHandler @ 036735f4 */
    if (pUVar9 != (UnityEngine_UI_Slider_o *)0x0) {
                    /* try { // try from 0366e0fc to 0376e10b has its CatchHandler @ 036735ec */
      local_34 = System_Collections_Generic_List<object>__RemoveAll
                           ((System_Collections_Generic_List_object__o *)pUVar9,match,
                            Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_RemoveAll__
                           );
      if (local_34 != 0) {
                    /* try { // try from 0366e11c to 0376e123 has its CatchHandler @ 036735e0 */
        if (pIVar4->klass == (Il2CppClass *)0x0) goto LAB_0366e2e4;
        pSVar5 = UnityEngine_Object__get_name
                           ((UnityEngine_Object_o *)pIVar4->klass,(MethodInfo *)0x0);
        str3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                    /* try { // try from 0366e138 to 0376e15b has its CatchHandler @ 03673694 */
        pSVar5 = System_String__Concat
                           (StringLiteral_8791/*"MainMenu::ChangeParentAndHideScroll: Hasn't deleted previously parented by the same inflictor: "*/,pSVar5,StringLiteral_389/*" deleted count: "*/,str3,(MethodInfo *)0x0);
                    /* try { // try from 0366e168 to 0376e177 has its CatchHandler @ 036735e8 */
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      }
                    /* try { // try from 0366e190 to 0376e193 has its CatchHandler @ 036733a0 */
                    /* try { // try from 0366e194 to 0376e19b has its CatchHandler @ 03673510 */
      pUVar9 = (__this->fields).MLLHHEDCFJH;
                    /* try { // try from 0366e1a0 to 0376e1ab has its CatchHandler @ 0367351c */
      __this_00 = (Il2CppObject *)
                  thunk_FUN_01bda818(Nekki_SF2_GUI_Menu_MainMenu_KCFNDEKJOHK_TypeInfo);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Il2CppObject *)0x0) {
                    /* try { // try from 0366e1bc to 0376e1c3 has its CatchHandler @ 036733dc */
        __this_00[1].klass = pIVar4->klass;
        thunk_FUN_01c20e04();
        __this_00[1].monitor = IFFKONPAKOP;
        thunk_FUN_01c20e04(&__this_00[1].monitor,IFFKONPAKOP);
        lVar2 = Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_Add__;
                    /* try { // try from 0366e1d4 to 0376e1db has its CatchHandler @ 036733ec */
        if (pUVar9 != (UnityEngine_UI_Slider_o *)0x0) {
          UVar8.m_CachedPtr = (pUVar9->fields).super.super.super.super.super.super.m_CachedPtr;
                    /* try { // try from 0366e1e8 to 0376e1ef has its CatchHandler @ 036733f4 */
          *(int *)((long)&(pUVar9->fields).super.super.super.m_CancellationTokenSource + 4) =
               *(int *)((long)&(pUVar9->fields).super.super.super.m_CancellationTokenSource + 4) + 1
          ;
          if (UVar8.m_CachedPtr != 0) {
            uVar1 = *(uint *)&(pUVar9->fields).super.super.super.m_CancellationTokenSource;
                    /* try { // try from 0366e200 to 0376e207 has its CatchHandler @ 036733e0 */
            if (uVar1 < *(uint *)(UVar8.m_CachedPtr + 0x18)) {
                    /* try { // try from 0366e208 to 0376e21b has its CatchHandler @ 036733f0 */
              *(uint *)&(pUVar9->fields).super.super.super.m_CancellationTokenSource = uVar1 + 1;
              puVar6 = (undefined8 *)(UVar8.m_CachedPtr + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = __this_00;
              thunk_FUN_01c20e04(puVar6,__this_00);
                    /* try { // try from 0366e220 to 0376e22b has its CatchHandler @ 036733e8 */
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pUVar9,__this_00,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
                    /* try { // try from 0366e244 to 0376e247 has its CatchHandler @ 03673284 */
            pUVar7 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0366e248 to 0376e24b has its CatchHandler @ 03673338 */
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent(pUVar7,IFFKONPAKOP,false,(MethodInfo *)0x0);
                    /* try { // try from 0366e264 to 0376e26f has its CatchHandler @ 036735b4 */
              pUVar7 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetAsLastSibling(pUVar7,(MethodInfo *)0x0);
                __this_01 = (__this->fields)._backgroundPicture;
                if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 0366e27c to 0376e28b has its CatchHandler @ 036735d8 */
                  CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                  method_00 = (MethodInfo *)0x0;
                  Util__IHPDCBOFHPA(CMMIJCJOBBF,false,(MethodInfo *)0x0);
                  __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0366e298 to 0376e29f has its CatchHandler @ 0367350c */
                  if (__this_02 != (NDPMLPGANCI_o *)0x0) {
                    iVar3 = NDPMLPGANCI__FFIOCEOHPEM(__this_02,(MethodInfo *)0x0);
                    if (iVar3 != 3) {
                      return;
                    }
                    /* try { // try from 0366e2b0 to 0376e2b7 has its CatchHandler @ 03673520 */
                    Nekki_SF2_GUI_Menu_MainMenu__ShowDojoAdvertiseButton(__this,false,method_00);
                    Nekki_SF2_GUI_Menu_MainMenu__ShowDojoProgressBar(__this,false,method_00);
                    /* try { // try from 0366e2c4 to 0376e2cb has its CatchHandler @ 036734f8 */
                    Nekki_SF2_GUI_Menu_MainMenu__ShowDojoDiscipleButton(__this,false,method_00);
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
LAB_0366e2e4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0366e2e4 to 0376e2f7 has its CatchHandler @ 036734f0 */
  FUN_01bab8c8();
}


// ===== private void NFCPFGIBGCO(DBMPKPJGIPI DFOADJEEDKK)  [RVA 0x356B750]
// Nekki.SF2.GUI.Menu.MainMenu$$NFCPFGIBGCO @ RVA 0x356B750

void Nekki_SF2_GUI_Menu_MainMenu__NFCPFGIBGCO
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,int32_t DFOADJEEDKK,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  CHDGOFBHAFI_o *__this_02;
  
  if ((DAT_04568c3d & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568c3d = 1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  (__this->fields).super.field_0x17 = 1;
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    bVar1 = NDPMLPGANCI__EKPAFDJIAGI
                      (__this_00,DFOADJEEDKK,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true
                       ,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_01 = (__this->fields)._menuLabel;
      if (__this_01 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0366b81c;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)__this_01,true,(MethodInfo *)0x0);
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (__this_02 != (CHDGOFBHAFI_o *)0x0) {
      CHDGOFBHAFI__PNLACGIDHPI(__this_02,0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0366b81c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KBCAFHKPLJD()  [RVA 0x356E2F8]
// Nekki.SF2.GUI.Menu.MainMenu$$KBCAFHKPLJD @ RVA 0x356E2F8

void Nekki_SF2_GUI_Menu_MainMenu__KBCAFHKPLJD
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
                    /* try { // try from 0366e300 to 0376e307 has its CatchHandler @ 036734ec */
  EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
  return;
}


// ===== private void FCAANJBONKL()  [RVA 0x356E304]
// Nekki.SF2.GUI.Menu.MainMenu$$FCAANJBONKL @ RVA 0x356E304

void Nekki_SF2_GUI_Menu_MainMenu__FCAANJBONKL
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0366e318 to 0376e31f has its CatchHandler @ 03673514 */
  if ((DAT_04568c3e & 1) == 0) {
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
                    /* try { // try from 0366e32c to 0376e333 has its CatchHandler @ 036734f4 */
    FUN_01bab630(&StringLiteral_8794/*"MainMenu::OnMaterialsPanelOpened"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 0366e344 to 0376e34b has its CatchHandler @ 03673500 */
    DAT_04568c3e = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0366e358 to 0376e35f has its CatchHandler @ 036734fc */
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo,method);
  }
                    /* try { // try from 0366e370 to 0376e377 has its CatchHandler @ 036734a8 */
                    /* try { // try from 0366e378 to 0376e387 has its CatchHandler @ 036734d0 */
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_8794/*"MainMenu::OnMaterialsPanelOpened"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  return;
}


// ===== public void ShowDojoProgressBar(bool CJNHFNHJHPE)  [RVA 0x356B2AC]
// Nekki.SF2.GUI.Menu.MainMenu$$ShowDojoProgressBar @ RVA 0x356B2AC

void Nekki_SF2_GUI_Menu_MainMenu__ShowDojoProgressBar
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  ACHLOMELAJE_o *__this_00;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar4;
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_Action_MenuAdvertisingButton__o **ppSVar5;
  MethodInfo *method_00;
  System_Collections_Generic_List_object__o *__this_03;
  System_Action_MenuAdvertisingButton__o *action;
  Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *pNVar6;
  System_Collections_Generic_List_MenuAdvertisingButton__o *x;
  
  if ((DAT_04568c3f & 1) == 0) {
    FUN_01bab630(&System_Action<MenuAdvertisingButton>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuAdvertisingButton>_ForEach__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_<>c_FEMDOJINHKN__);
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_16007/*"_RaidTutorialCompleted"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    DAT_04568c3f = 1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 == (ACHLOMELAJE_o *)0x0) {
    return;
  }
  pMVar4 = ACHLOMELAJE__HKIEGNBOFCD(__this_00,StringLiteral_16007/*"_RaidTutorialCompleted"*/,0,(MethodInfo *)0x0);
  if (pMVar4 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
    return;
  }
  bVar1 = System_String__op_Inequality
                    ((pMVar4->fields).JAICMIMBIOA,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar6 = (__this->fields).KLPEJDHIIGF;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_01 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)(__this->fields).KLPEJDHIIGF;
    if (__this_01 == (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0) goto LAB_0366b580;
    bVar1 = Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__get_BattlePassExists
                      (__this_01,(MethodInfo *)0x0);
    if (!bVar1) goto LAB_0366b42c;
    pNVar6 = (__this->fields).KLPEJDHIIGF;
  }
  else {
LAB_0366b42c:
    x = (__this->fields).ADBHOMPFAPK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar6 = (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)(__this->fields).ADBHOMPFAPK;
    if (pNVar6 == (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)0x0) goto LAB_0366b580;
    Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__UpdateRaidItemPack(pNVar6,(MethodInfo *)0x0);
    pNVar6 = (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)(__this->fields).ADBHOMPFAPK;
    if (pNVar6 == (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)0x0) goto LAB_0366b580;
    bVar1 = Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__get_ItemExists(pNVar6,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar6 = (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)(__this->fields).ADBHOMPFAPK;
  }
  if ((pNVar6 != (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)0x0) &&
     (__this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
     __this_02 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Menu_MainMenu__IDMLEMPNLFH(__this,method_00);
    if (CJNHFNHJHPE) {
      iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      if (((float)iVar2 / (float)iVar3 < 1.6125984) &&
         (__this_03 = (System_Collections_Generic_List_object__o *)
                      (__this->fields)._F2P_SpacerWidthLerpParams,
         __this_03 != (System_Collections_Generic_List_object__o *)0x0)) {
        if ((Nekki_SF2_GUI_Menu_MainMenu_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = Nekki_SF2_GUI_Menu_MainMenu_<>c_TypeInfo->static_fields->__9__127_0;
        if (action == (System_Action_MenuAdvertisingButton__o *)0x0) {
          if ((Nekki_SF2_GUI_Menu_MainMenu_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          action = (System_Action_MenuAdvertisingButton__o *)
                   thunk_FUN_01bda818(System_Action<MenuAdvertisingButton>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar5 = &Nekki_SF2_GUI_Menu_MainMenu_<>c_TypeInfo->static_fields->__9__127_0;
          *ppSVar5 = action;
          thunk_FUN_01c20e04(ppSVar5,action);
        }
        System_Collections_Generic_List<object>__ForEach
                  (__this_03,(System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<MenuAdvertisingButton>_ForEach__);
        return;
      }
    }
    return;
  }
LAB_0366b580:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Toggle get_DojoDiscipleButton()  [RVA 0x356E384]
// Nekki.SF2.GUI.Menu.MainMenu$$get_DojoDiscipleButton @ RVA 0x356E384

UnityEngine_UI_Toggle_o *
Nekki_SF2_GUI_Menu_MainMenu__get_DojoDiscipleButton
          (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  return (UnityEngine_UI_Toggle_o *)(__this->fields).btnSettings;
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x356E38C]
// Nekki.SF2.GUI.Menu.MainMenu$$CLNAOMIIBLH @ RVA 0x356E38C

void Nekki_SF2_GUI_Menu_MainMenu__CLNAOMIIBLH
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_o *pSVar1;
  FKDLCJJOGIP_o *__this_01;
  System_Action_bool__o *CJNHFNHJHPE;
  System_Action_MenuScroll_OAPJJKKCANC__o *CJNHFNHJHPE_00;
  Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this_02;
  Nekki_SF2_GUI_UIInitializable_o *pNVar2;
  Nekki_SF2_GUI_ResolutionButton_o *__this_03;
  MethodInfo *extraout_x1;
  MainMenuRaidRatingPanel_o *pMVar3;
  UnityEngine_UI_Image_o *pUVar4;
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this_04;
  Nekki_SF2_GUI_Menu_MenuExpPanel_o *pNVar5;
  
                    /* try { // try from 0366e398 to 0376e39f has its CatchHandler @ 036734bc */
  if ((DAT_04568c40 & 1) == 0) {
                    /* try { // try from 0366e3b0 to 0376e3b7 has its CatchHandler @ 036734d4 */
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
                    /* try { // try from 0366e3c4 to 0376e3cb has its CatchHandler @ 036734c8 */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_DGMNFAKGPBG__);
                    /* try { // try from 0366e3dc to 0376e3e3 has its CatchHandler @ 036734e8 */
                    /* try { // try from 0366e3e4 to 0376e40f has its CatchHandler @ 036735b0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_EFFLCPLIPEI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_GKFNLJGEFOE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_HPHHGGDCCKE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_KBCAFHKPLJD__);
                    /* try { // try from 0366e410 to 0376e437 has its CatchHandler @ 036735d4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_KGNGNPNKAID__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_NFPKGJADONL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_PDEBOICMAJG__);
    DAT_04568c40 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0366e444 to 0376e44b has its CatchHandler @ 036734d8 */
  if (DAT_04568c6b == '\0') {
                    /* try { // try from 0366e45c to 0376e463 has its CatchHandler @ 036734b4 */
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04568c6b = '\x01';
  }
                    /* try { // try from 0366e470 to 0376e477 has its CatchHandler @ 036734dc */
  Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField =
       (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0;
                    /* try { // try from 0366e488 to 0376e48f has its CatchHandler @ 036734ac */
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields,0);
                    /* try { // try from 0366e490 to 0376e49f has its CatchHandler @ 036734e4 */
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0366e4a4 to 0376e4c7 has its CatchHandler @ 036735cc */
  System_Action___ctor();
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__PILMCAFCLMN(__this_00,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 0366e4d4 to 0376e4db has its CatchHandler @ 036734e0 */
    __this_01 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0366e4ec to 0376e4f3 has its CatchHandler @ 036734c4 */
    System_Action___ctor();
                    /* try { // try from 0366e500 to 0376e507 has its CatchHandler @ 036734b8 */
    if (__this_01 != (FKDLCJJOGIP_o *)0x0) {
                    /* try { // try from 0366e518 to 0376e51f has its CatchHandler @ 036734b0 */
                    /* try { // try from 0366e520 to 0376e52f has its CatchHandler @ 036734cc */
      FKDLCJJOGIP__LJAKDBDIGDG(__this_01,pSVar1,(MethodInfo *)0x0);
      Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0366e534 to 0376e557 has its CatchHandler @ 036735d0 */
      pUVar4 = (__this->fields)._backgroundPicture;
      CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 0366e570 to 0376e577 has its CatchHandler @ 03673304 */
        Nekki_SF2_GUI_Menu_MenuScroll__remove_OnChanging
                  ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._backgroundPicture;
        CJNHFNHJHPE_00 =
             (System_Action_MenuScroll_OAPJJKKCANC__o *)
             thunk_FUN_01bda818(System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
        System_Action<Int32Enum>___ctor();
                    /* try { // try from 0366e594 to 0376e59b has its CatchHandler @ 03673190 */
        if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 0366e5ac to 0376e5b3 has its CatchHandler @ 0367318c */
          Nekki_SF2_GUI_Menu_MenuScroll__remove_OnRolling
                    ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar4,CJNHFNHJHPE_00,(MethodInfo *)0x0);
          pUVar4 = (__this->fields)._backgroundPicture;
          pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0366e5c0 to 0376e5c7 has its CatchHandler @ 03673188 */
          System_Action___ctor();
          if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 0366e5d8 to 0376e5df has its CatchHandler @ 03673184 */
                    /* try { // try from 0366e5e0 to 0376e5ef has its CatchHandler @ 03673180 */
            Nekki_SF2_GUI_Menu_MenuScroll__remove_OnTouch
                      ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar4,pSVar1,(MethodInfo *)0x0);
            __this_04 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(__this->fields)._energy;
            pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0366e608 to 0376e643 has its CatchHandler @ 03673228 */
            System_Action___ctor();
            if (__this_04 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
              Nekki_SF2_GUI_Menu_MenuMoneyPanel__remove_OnRubyBtnClick
                        (__this_04,pSVar1,(MethodInfo *)0x0);
              __this_02 = (__this->fields)._energy;
              if (__this_02 != (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *)0x0) {
                Nekki_SF2_GUI_UIInitializable__Free
                          ((Nekki_SF2_GUI_UIInitializable_o *)__this_02,(MethodInfo *)0x0);
                pNVar5 = (__this->fields)._experience;
                pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                System_Action___ctor();
                    /* try { // try from 0366e658 to 0376e663 has its CatchHandler @ 0367317c */
                if (pNVar5 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) {
                    /* try { // try from 0366e668 to 0376e66f has its CatchHandler @ 03673178 */
                  Nekki_SF2_GUI_Menu_MenuEnergyPanel__remove_OnBarClicked
                            ((Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *)pNVar5,pSVar1,(MethodInfo *)0x0
                            );
                  pNVar5 = (__this->fields)._experience;
                  if (pNVar5 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) {
                    Nekki_SF2_GUI_UIInitializable__Free
                              ((Nekki_SF2_GUI_UIInitializable_o *)pNVar5,(MethodInfo *)0x0);
                    /* try { // try from 0366e688 to 0376e68b has its CatchHandler @ 03673328 */
                    pNVar5 = *(Nekki_SF2_GUI_Menu_MenuExpPanel_o **)&(__this->fields).CMKBLDOABLB;
                    /* try { // try from 0366e68c to 0376e68f has its CatchHandler @ 03672d58 */
                    pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0366e6a0 to 0376e6a7 has its CatchHandler @ 03672d5c */
                    System_Action___ctor();
                    if (pNVar5 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) {
                      Nekki_SF2_GUI_Menu_MenuExpPanel__remove_OnLevelHintBtnClicked
                                (pNVar5,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 0366e6b8 to 0376e6bf has its CatchHandler @ 03672d54 */
                      pNVar2 = *(Nekki_SF2_GUI_UIInitializable_o **)&(__this->fields).CMKBLDOABLB;
                      if (pNVar2 != (Nekki_SF2_GUI_UIInitializable_o *)0x0) {
                        Nekki_SF2_GUI_UIInitializable__Free(pNVar2,(MethodInfo *)0x0);
                        pNVar2 = *(Nekki_SF2_GUI_UIInitializable_o **)
                                  &(__this->fields).TopMenuDefaultInteraction;
                    /* try { // try from 0366e6cc to 0376e6d3 has its CatchHandler @ 03672d50 */
                        if (pNVar2 != (Nekki_SF2_GUI_UIInitializable_o *)0x0) {
                          Nekki_SF2_GUI_UIInitializable__Free(pNVar2,(MethodInfo *)0x0);
                          pNVar2 = *(Nekki_SF2_GUI_UIInitializable_o **)
                                    &(__this->fields)._MaterialsMoveDuration;
                          if (pNVar2 != (Nekki_SF2_GUI_UIInitializable_o *)0x0) {
                    /* try { // try from 0366e6e4 to 0376e6eb has its CatchHandler @ 03672d4c */
                            Nekki_SF2_GUI_UIInitializable__Free(pNVar2,(MethodInfo *)0x0);
                            pMVar3 = (__this->fields)._raidRating;
                    /* try { // try from 0366e6ec to 0376e6ff has its CatchHandler @ 03673174 */
                            if ((pMVar3 != (MainMenuRaidRatingPanel_o *)0x0) &&
                               (__this_03 = pMVar3[1].fields._btnTop100,
                               __this_03 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0)) {
                    /* try { // try from 0366e704 to 0376e70f has its CatchHandler @ 03672d48 */
                              UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                        ((UnityEngine_Events_UnityEventBase_o *)__this_03,
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Button GetScrollBtn()  [RVA 0x356E714]
// Nekki.SF2.GUI.Menu.MainMenu$$GetScrollBtn @ RVA 0x356E714

UnityEngine_UI_Button_o *
Nekki_SF2_GUI_Menu_MainMenu__GetScrollBtn(Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  
  pUVar1 = (__this->fields)._backgroundPicture;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 0366e720 to 0376e727 has its CatchHandler @ 03672c08 */
    return (UnityEngine_UI_Button_o *)(pUVar1->fields).super.super.m_RectTransform;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x356E730]
// Nekki.SF2.GUI.Menu.MainMenu$$Update @ RVA 0x356E730

void Nekki_SF2_GUI_Menu_MainMenu__Update(Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  MethodInfo *method_00;
  
                    /* try { // try from 0366e738 to 0376e73f has its CatchHandler @ 03672c04 */
  iVar1 = (__this->fields).BIMMDBGIMFN;
  bVar2 = Nekki_SF2_GUI_Menu_MainMenu__DNLOKLACJHA(__this,method);
                    /* try { // try from 0366e74c to 0376e753 has its CatchHandler @ 03672c00 */
  if ((bool)(char)iVar1 == bVar2) {
    return;
  }
                    /* try { // try from 0366e764 to 0376e76b has its CatchHandler @ 03672bfc */
  Nekki_SF2_GUI_Menu_MainMenu__UpdateMenu(__this,method_00);
  return;
}


// ===== private void HPHHGGDCCKE()  [RVA 0x356E76C]
// Nekki.SF2.GUI.Menu.MainMenu$$HPHHGGDCCKE @ RVA 0x356E76C

void Nekki_SF2_GUI_Menu_MainMenu__HPHHGGDCCKE
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  DOPEEDABNEK_o *pDVar2;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  long lVar3;
  NDPMLPGANCI_o *__this_00;
  FFHKCJAOPLI_o *__this_01;
  UnityEngine_Object_o *x;
  
                    /* try { // try from 0366e76c to 0376e77f has its CatchHandler @ 03672bf8 */
                    /* try { // try from 0366e780 to 0376e78b has its CatchHandler @ 03672bf4 */
  if ((DAT_04568c41 & 1) == 0) {
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0366e79c to 0376e7a3 has its CatchHandler @ 03672b9c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
                    /* try { // try from 0366e7b4 to 0376e7bb has its CatchHandler @ 03672b98 */
    FUN_01bab630(&StringLiteral_4327/*"Chest_Gems"*/);
    DAT_04568c41 = 1;
  }
                    /* try { // try from 0366e7c8 to 0376e7cf has its CatchHandler @ 03672b94 */
                    /* try { // try from 0366e7e0 to 0376e7e7 has its CatchHandler @ 03672b90 */
  if (((__this->fields).super.__IsReleased_k__BackingField != false) ||
     (*(char *)&(__this->fields)._money == '\0')) {
    return;
  }
                    /* try { // try from 0366e7e8 to 0376e7fb has its CatchHandler @ 03672b8c */
  (__this->fields).super.field_0x17 = 1;
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
                    /* try { // try from 0366e7fc to 0376e807 has its CatchHandler @ 03672b88 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
                    /* try { // try from 0366e820 to 0376e823 has its CatchHandler @ 03673328 */
                    /* try { // try from 0366e824 to 0376e827 has its CatchHandler @ 03672c18 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0366e82c to 0376e837 has its CatchHandler @ 03673170 */
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar2 != (DOPEEDABNEK_o *)0x0) {
                    /* try { // try from 0366e850 to 0376e85b has its CatchHandler @ 036731c4 */
    IKKAMAMLIKA = DOPEEDABNEK__GOLEKCCFDAH(pDVar2,(MethodInfo *)0x0);
    if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 0366e868 to 0376e877 has its CatchHandler @ 0367327c */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0366e884 to 0376e88b has its CatchHandler @ 0367316c */
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 0366e89c to 0376e8a3 has its CatchHandler @ 03673168 */
      }
      pDVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if (pDVar2 == (DOPEEDABNEK_o *)0x0) goto LAB_0366e9dc;
                    /* try { // try from 0366e8b0 to 0376e8b7 has its CatchHandler @ 03673164 */
      IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN(pDVar2,StringLiteral_4327/*"Chest_Gems"*/,(MethodInfo *)0x0);
    }
                    /* try { // try from 0366e8c8 to 0376e8cf has its CatchHandler @ 03673160 */
                    /* try { // try from 0366e8d0 to 0376e8df has its CatchHandler @ 0367315c */
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 0366e8f0 to 0376e8f7 has its CatchHandler @ 03673158 */
      lVar3 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
                    /* try { // try from 0366e908 to 0376e90f has its CatchHandler @ 03673154 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 0366e91c to 0376e923 has its CatchHandler @ 03673150 */
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
                    /* try { // try from 0366e934 to 0376e93b has its CatchHandler @ 0367314c */
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 0366e93c to 0376e967 has its CatchHandler @ 036731c0 */
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
          (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
                    /* try { // try from 0366e968 to 0376e98f has its CatchHandler @ 03673300 */
        Nekki_SF2_GUI_Shop_ShopScene__ScrollToItem
                  ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),6,IKKAMAMLIKA,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      __this_01 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
                    /* try { // try from 0366e99c to 0376e9a3 has its CatchHandler @ 03673148 */
      FFHKCJAOPLI___ctor(__this_01,6,IKKAMAMLIKA,(System_String_o *)0x0,(System_String_o *)0x0,
                         (MethodInfo *)0x0);
                    /* try { // try from 0366e9b4 to 0376e9bb has its CatchHandler @ 03673144 */
      if (__this_00 != (NDPMLPGANCI_o *)0x0) {
                    /* try { // try from 0366e9c8 to 0376e9cf has its CatchHandler @ 03673140 */
        NDPMLPGANCI__EKPAFDJIAGI
                  (__this_00,4,(Il2CppObject *)__this_01,(System_Action_object__o *)0x0,true,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0366e9dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BLBMLOBNODO()  [RVA 0x356C010]
// Nekki.SF2.GUI.Menu.MainMenu$$BLBMLOBNODO @ RVA 0x356C010

void Nekki_SF2_GUI_Menu_MainMenu__BLBMLOBNODO
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = *(UnityEngine_Component_o **)&(__this->fields).TopMenuDefaultInteraction;
  if ((__this_00 != (UnityEngine_Component_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool DNLOKLACJHA()  [RVA 0x356D4FC]
// Nekki.SF2.GUI.Menu.MainMenu$$DNLOKLACJHA @ RVA 0x356D4FC

bool Nekki_SF2_GUI_Menu_MainMenu__DNLOKLACJHA
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  long lVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
                    /* try { // try from 0366d510 to 0376d517 has its CatchHandler @ 0367388c */
  if ((DAT_04568c42 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 0366d528 to 0376d52f has its CatchHandler @ 0367386c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
                    /* try { // try from 0366d53c to 0376d543 has its CatchHandler @ 03673888 */
    DAT_04568c42 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0366d54c to 0376d553 has its CatchHandler @ 03673878 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
                    /* try { // try from 0366d554 to 0376d567 has its CatchHandler @ 03673884 */
  method_00 = (MethodInfo *)HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (method_00 != (MethodInfo *)0x0) {
    if (*(char *)((long)&method_00->parameters + 4) == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = Nekki_SF2_GUI_Menu_MainMenu__get_CanShowRaidModeInShopScene(method_00);
                    /* try { // try from 0366d56c to 0376d59b has its CatchHandler @ 03673984 */
      if (!bVar1) {
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
                    /* try { // try from 0366d5cc to 0376d5cf has its CatchHandler @ 03673328 */
                    /* try { // try from 0366d5d0 to 0376d5d3 has its CatchHandler @ 0367331c */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
                    /* try { // try from 0366d5e4 to 0376d5eb has its CatchHandler @ 0367328c */
        bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        return bVar1;
      }
      bVar1 = true;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetForgeViewMode(bool BBLFHGGEMNI)  [RVA 0x356E9E0]
// Nekki.SF2.GUI.Menu.MainMenu$$SetForgeViewMode @ RVA 0x356E9E0

void Nekki_SF2_GUI_Menu_MainMenu__SetForgeViewMode
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool BBLFHGGEMNI,MethodInfo *method)

{
                    /* try { // try from 0366e9e0 to 0376e9e7 has its CatchHandler @ 0367313c */
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
                    /* try { // try from 0366e9e8 to 0376e9f7 has its CatchHandler @ 03673138 */
    return;
  }
  Nekki_SF2_GUI_Menu_MainMenu__NBDCHKLIHEJ(__this,BBLFHGGEMNI,method);
  return;
}


// ===== private void EAIMDNAJODH()  [RVA 0x356EAFC]
// Nekki.SF2.GUI.Menu.MainMenu$$EAIMDNAJODH @ RVA 0x356EAFC

void Nekki_SF2_GUI_Menu_MainMenu__EAIMDNAJODH
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  CHDGOFBHAFI_o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0366eb00 to 0376eb0f has its CatchHandler @ 03673124 */
  if ((DAT_04568c43 & 1) == 0) {
                    /* try { // try from 0366eb14 to 0376eb1f has its CatchHandler @ 03673120 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 0366eb30 to 0376eb37 has its CatchHandler @ 03672d30 */
    DAT_04568c43 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
                    /* try { // try from 0366eb48 to 0376eb4f has its CatchHandler @ 03672d2c */
  (__this->fields).super.field_0x17 = 1;
                    /* try { // try from 0366eb5c to 0376eb63 has its CatchHandler @ 03672d28 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
                    /* try { // try from 0366eb74 to 0376eb7b has its CatchHandler @ 03672d24 */
                    /* try { // try from 0366eb7c to 0376eb8b has its CatchHandler @ 03672d20 */
    CHDGOFBHAFI__PNLACGIDHPI(__this_00,0,(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0366eba4 to 0376eba7 has its CatchHandler @ 03673328 */
                    /* try { // try from 0366eba8 to 0376ebcb has its CatchHandler @ 03673274 */
    MGNPHCAAEIO__FNMMEMACMAM((MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KKMHIKAOKKH()  [RVA 0x356EBB8]
// Nekki.SF2.GUI.Menu.MainMenu$$KKMHIKAOKKH @ RVA 0x356EBB8

void Nekki_SF2_GUI_Menu_MainMenu__KKMHIKAOKKH
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Menu_MainMenu__NFCPFGIBGCO(__this,3,in_x2);
  return;
}


// ===== private void DLJGDLIAODA()  [RVA 0x356CF30]
// Nekki.SF2.GUI.Menu.MainMenu$$DLJGDLIAODA @ RVA 0x356CF30

void Nekki_SF2_GUI_Menu_MainMenu__DLJGDLIAODA
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MenuAdvertisingButton__o **ppSVar1;
  Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o **ppNVar2;
  bool bVar3;
  EGMONPGHHDP_o *__this_00;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar4;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *pNVar5;
  System_Collections_Generic_List_MenuAdvertisingButton__o *pSVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  
  if ((DAT_04568c44 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ProgressBarDojoBattlePass>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ProgressBarDojoPanel>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c44 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
                    /* try { // try from 0366d178 to 0376d1a3 has its CatchHandler @ 036733ac */
    return;
  }
  pSVar6 = (__this->fields).ADBHOMPFAPK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  ppSVar1 = &(__this->fields).ADBHOMPFAPK;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar7 = (__this->fields)._advButtonWidgetPrefab;
    pUVar8 = (__this->fields)._advButtonWidgetPos;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar7 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar7,(UnityEngine_Transform_o *)pUVar8,
                        Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_0366d17c;
    pSVar6 = (System_Collections_Generic_List_MenuAdvertisingButton__o *)
             UnityEngine_GameObject__GetComponent<object>
                       (pUVar7,Method_UnityEngine_GameObject_GetComponent<ProgressBarDojoPanel>__);
    *ppSVar1 = pSVar6;
    thunk_FUN_01c20e04(ppSVar1,pSVar6);
    if ((Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)*ppSVar1 ==
        (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)0x0) goto LAB_0366d17c;
    Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__Init
              ((Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)*ppSVar1,(MethodInfo *)0x0);
  }
                    /* try { // try from 0366d038 to 0376d047 has its CatchHandler @ 03673324 */
  if ((*ppSVar1 != (System_Collections_Generic_List_MenuAdvertisingButton__o *)0x0) &&
     (pUVar7 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*ppSVar1,(MethodInfo *)0x0),
     pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
                    /* try { // try from 0366d054 to 0376d05b has its CatchHandler @ 036732e4 */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0366d06c to 0376d073 has its CatchHandler @ 036732e0 */
    __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
    if (__this_00 != (EGMONPGHHDP_o *)0x0) {
      pJVar4 = EGMONPGHHDP__OKBKFJKEAAG(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0366d080 to 0376d087 has its CatchHandler @ 036732dc */
      if ((pJVar4 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) && ((pJVar4->fields).HKKGMGDDCOD != false)) {
        pNVar5 = (__this->fields).KLPEJDHIIGF;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366d098 to 0376d09f has its CatchHandler @ 036732d8 */
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0366d0a0 to 0376d0af has its CatchHandler @ 036732d4 */
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar3) {
          pUVar7 = (__this->fields)._dojoProgressBarPrefab;
          pUVar8 = (__this->fields)._advButtonWidgetPos;
                    /* try { // try from 0366d0c0 to 0376d0eb has its CatchHandler @ 036733b0 */
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pUVar7 = (UnityEngine_GameObject_o *)
                   UnityEngine_Object__Instantiate<object>
                             ((Il2CppObject *)pUVar7,(UnityEngine_Transform_o *)pUVar8,
                              Method_UnityEngine_Object_Instantiate<GameObject>__);
          if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_0366d17c;
          ppNVar2 = &(__this->fields).KLPEJDHIIGF;
          pNVar5 = (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar7,
                              Method_UnityEngine_GameObject_GetComponent<ProgressBarDojoBattlePass>__
                             );
                    /* try { // try from 0366d0f8 to 0376d107 has its CatchHandler @ 03673320 */
          *ppNVar2 = pNVar5;
          thunk_FUN_01c20e04(ppNVar2,pNVar5);
          if ((Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)*ppNVar2 ==
              (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0) goto LAB_0366d17c;
                    /* try { // try from 0366d114 to 0376d11b has its CatchHandler @ 036732d0 */
          Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__Init
                    ((Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)*ppNVar2,(MethodInfo *)0x0);
        }
      }
      pNVar5 = (__this->fields).KLPEJDHIIGF;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0366d12c to 0376d133 has its CatchHandler @ 036732cc */
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
                    /* try { // try from 0366d140 to 0376d147 has its CatchHandler @ 036732c8 */
      pNVar5 = (__this->fields).KLPEJDHIIGF;
      if ((pNVar5 != (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)0x0) &&
         (pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0366d158 to 0376d15f has its CatchHandler @ 036732c4 */
                    /* try { // try from 0366d160 to 0376d16f has its CatchHandler @ 036732c0 */
        UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0366d17c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AONFAABDBBK()  [RVA 0x356CE4C]
// Nekki.SF2.GUI.Menu.MainMenu$$AONFAABDBBK @ RVA 0x356CE4C

void Nekki_SF2_GUI_Menu_MainMenu__AONFAABDBBK
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  UnityEngine_UI_LayoutElement_array *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_RectTransform_o *pUVar4;
  uint uVar5;
  float fVar6;
  
  iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  __this_00 = (__this->fields)._F2P_Spacers;
  if (__this_00 != (UnityEngine_UI_LayoutElement_array *)0x0) {
    fVar6 = src_GUI_Scripts_LerpParams__GPPKOIAJGGL
                      ((src_GUI_Scripts_LerpParams_o *)__this_00,(float)iVar2 / (float)iVar3,
                       (MethodInfo *)0x0);
    pUVar4 = (__this->fields)._dojoProgressBarPos;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      uVar1 = *(uint *)&pUVar4[1].klass;
      if (0 < (int)uVar1) {
        uVar5 = 0;
        do {
          if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          __this_01 = (&pUVar4[1].monitor)[(int)uVar5];
          if (__this_01 == (UnityEngine_Component_o *)0x0) goto LAB_0366cf2c;
          CMMIJCJOBBF = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
          Util__IHPDCBOFHPA(CMMIJCJOBBF,0.0 < fVar6,(MethodInfo *)0x0);
          if (0.0 < fVar6) {
            (*(code *)__this_01->klass[2]._1.castClass)
                      (fVar6,__this_01,__this_01->klass[2]._1.declaringType);
          }
          uVar1 = *(uint *)&pUVar4[1].klass;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar1);
      }
      return;
    }
  }
LAB_0366cf2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateRaidRating()  [RVA 0x356DA88]
// Nekki.SF2.GUI.Menu.MainMenu$$UpdateRaidRating @ RVA 0x356DA88

void Nekki_SF2_GUI_Menu_MainMenu__UpdateRaidRating
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  MainMenuRaidRatingPanel_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
                    /* try { // try from 0366da98 to 0376da9f has its CatchHandler @ 036731f8 */
  if ((DAT_04568c45 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0366dab0 to 0376dab7 has its CatchHandler @ 03672eb0 */
    DAT_04568c45 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField == false) {
    x = *(UnityEngine_Object_o **)&(__this->fields)._MaterialsMoveDuration;
                    /* try { // try from 0366dac8 to 0376dacf has its CatchHandler @ 03672eac */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
                    /* try { // try from 0366dadc to 0376dae3 has its CatchHandler @ 03672ea8 */
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = *(MainMenuRaidRatingPanel_o **)&(__this->fields)._MaterialsMoveDuration;
      if (__this_00 != (MainMenuRaidRatingPanel_o *)0x0) {
                    /* try { // try from 0366daf4 to 0376dafb has its CatchHandler @ 03672ea4 */
                    /* try { // try from 0366dafc to 0376db0b has its CatchHandler @ 03672ea0 */
        MainMenuRaidRatingPanel__UpdateValues(__this_00,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private void NBDCHKLIHEJ(bool BBLFHGGEMNI)  [RVA 0x356E9F4]
// Nekki.SF2.GUI.Menu.MainMenu$$NBDCHKLIHEJ @ RVA 0x356E9F4

void Nekki_SF2_GUI_Menu_MainMenu__NBDCHKLIHEJ
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool BBLFHGGEMNI,MethodInfo *method)

{
  UnityEngine_Vector2_o *pUVar1;
  UnityEngine_Component_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_02;
  MethodInfo *method_00;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o value;
  
                    /* try { // try from 0366ea0c to 0376ea13 has its CatchHandler @ 03672d44 */
  if ((DAT_04568c46 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_FCAANJBONKL__);
                    /* try { // try from 0366ea24 to 0376ea2b has its CatchHandler @ 03672d40 */
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
                    /* try { // try from 0366ea38 to 0376ea3f has its CatchHandler @ 03672d3c */
    DAT_04568c46 = 1;
  }
  pUVar2 = *(UnityEngine_Component_o **)&(__this->fields).TopMenuDefaultInteraction;
  if ((pUVar2 != (UnityEngine_Component_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject(pUVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0366ea50 to 0376ea57 has its CatchHandler @ 03672d38 */
                    /* try { // try from 0366ea58 to 0376ea67 has its CatchHandler @ 03672d34 */
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pUVar2 = *(UnityEngine_Component_o **)&(__this->fields).TopMenuDefaultInteraction;
    if (pUVar2 != (UnityEngine_Component_o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform(pUVar2,(MethodInfo *)0x0);
      pUVar1 = &(__this->fields)._MaterialsClosedPosition;
      if (BBLFHGGEMNI) {
        endValue.fields.z = 0.0;
        endValue.fields._0_8_ = pUVar1->fields;
                    /* try { // try from 0366ea80 to 0376ea83 has its CatchHandler @ 03673328 */
                    /* try { // try from 0366ea84 to 0376eaa7 has its CatchHandler @ 03673278 */
        t = DG_Tweening_ShortcutExtensions__DOLocalMove
                      (__this_01,endValue,(__this->fields)._MaterialsOpenedPosition.fields.x,false,
                       (MethodInfo *)0x0);
        action = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 0366eab4 to 0376eabb has its CatchHandler @ 03673134 */
        DG_Tweening_TweenCallback___ctor();
                    /* try { // try from 0366eacc to 0376ead3 has its CatchHandler @ 03673130 */
        DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                  ((Il2CppObject *)t,action,
                   Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                  );
        return;
      }
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        value.fields.z = 0.0;
        value.fields._0_8_ = pUVar1->fields;
                    /* try { // try from 0366eae0 to 0376eae7 has its CatchHandler @ 0367312c */
        UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Menu_MainMenu__FCAANJBONKL(__this_02,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0366eaf8 to 0376eaff has its CatchHandler @ 03673128 */
  FUN_01bab8c8();
}


// ===== public void CloseMenu(float PNEIGGOFIOA = 0)  [RVA 0x356B9CC]
// Nekki.SF2.GUI.Menu.MainMenu$$CloseMenu @ RVA 0x356B9CC

void Nekki_SF2_GUI_Menu_MainMenu__CloseMenu
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,float PNEIGGOFIOA,MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = (__this->fields)._backgroundPicture;
  if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
    Nekki_SF2_GUI_Menu_MenuScroll__Collapse
              ((Nekki_SF2_GUI_Menu_MenuScroll_o *)__this_00,PNEIGGOFIOA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateBarEnergy()  [RVA 0x356DB14]
// Nekki.SF2.GUI.Menu.MainMenu$$UpdateBarEnergy @ RVA 0x356DB14

void Nekki_SF2_GUI_Menu_MainMenu__UpdateBarEnergy
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this_00;
  
                    /* try { // try from 0366db1c to 0376db23 has its CatchHandler @ 03672e9c */
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = (__this->fields)._experience;
  if (__this_00 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) {
                    /* try { // try from 0366db34 to 0376db3b has its CatchHandler @ 03672e98 */
    Nekki_SF2_GUI_Menu_MenuEnergyPanel__UpdateBar
              ((Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LDCBIKHNKKL()  [RVA 0x356D180]
// Nekki.SF2.GUI.Menu.MainMenu$$LDCBIKHNKKL @ RVA 0x356D180

void Nekki_SF2_GUI_Menu_MainMenu__LDCBIKHNKKL
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  int32_t KGBNBLGMCBF;
  UnityEngine_UI_Image_o *pUVar1;
  System_Action_bool__o *CJNHFNHJHPE;
  System_Action_MenuScroll_OAPJJKKCANC__o *CJNHFNHJHPE_00;
  System_Action_o *CJNHFNHJHPE_01;
  NDPMLPGANCI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_04568c47 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
                    /* try { // try from 0366d1b0 to 0376d1b7 has its CatchHandler @ 036732bc */
    FUN_01bab630(&System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 0366d1c8 to 0376d1cf has its CatchHandler @ 036732b8 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_GKFNLJGEFOE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_KBCAFHKPLJD__);
                    /* try { // try from 0366d1dc to 0376d1e3 has its CatchHandler @ 036732b4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_KGNGNPNKAID__);
    DAT_04568c47 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Menu_MainMenu__JGOEDIHMJLB(__this,method);
                    /* try { // try from 0366d1f4 to 0376d1fb has its CatchHandler @ 036732b0 */
  Nekki_SF2_GUI_Menu_MainMenu__PPEKFEEHHGI(__this,method_00);
                    /* try { // try from 0366d1fc to 0376d20b has its CatchHandler @ 036732ac */
  Nekki_SF2_GUI_Menu_MainMenu__FEEIBFFCAAH(__this,method_01);
  pUVar1 = (__this->fields)._backgroundPicture;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    Nekki_SF2_GUI_Menu_MenuScroll__Init
              ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar1,1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._backgroundPicture;
    if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 0366d224 to 0376d25f has its CatchHandler @ 0367333c */
      *(undefined2 *)((long)&(pUVar1->fields).super.super.m_OnDirtyMaterialCallback + 6) = 0x101;
      CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      Nekki_SF2_GUI_Menu_MenuScroll__add_OnChanging
                ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._backgroundPicture;
                    /* try { // try from 0366d27c to 0376d287 has its CatchHandler @ 036732a8 */
      CJNHFNHJHPE_00 =
           (System_Action_MenuScroll_OAPJJKKCANC__o *)
           thunk_FUN_01bda818(System_Action<MenuScroll_OAPJJKKCANC>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 0366d298 to 0376d29f has its CatchHandler @ 036732a4 */
                    /* try { // try from 0366d2b0 to 0376d2b7 has its CatchHandler @ 036732a0 */
        Nekki_SF2_GUI_Menu_MenuScroll__add_OnRolling
                  ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._backgroundPicture;
        CJNHFNHJHPE_01 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0366d2c4 to 0376d2cb has its CatchHandler @ 0367329c */
        System_Action___ctor();
        if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 0366d2dc to 0376d2e3 has its CatchHandler @ 03673298 */
                    /* try { // try from 0366d2e4 to 0376d2f3 has its CatchHandler @ 03673294 */
          method_02 = (MethodInfo *)0x0;
          Nekki_SF2_GUI_Menu_MenuScroll__add_OnTouch
                    ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar1,CJNHFNHJHPE_01,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._backgroundPicture;
          if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
            Nekki_SF2_GUI_Menu_MenuScroll__Collapse
                      ((Nekki_SF2_GUI_Menu_MenuScroll_o *)pUVar1,0.0,(MethodInfo *)0x0);
            __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
            if (__this_00 != (NDPMLPGANCI_o *)0x0) {
                    /* try { // try from 0366d30c to 0376d347 has its CatchHandler @ 03673310 */
              KGBNBLGMCBF = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Menu_MainMenu__UpdateCurrentButton(__this,KGBNBLGMCBF,method_02);
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


// ===== public static MainMenu get_Instance()  [RVA 0x356EBC0]
// Nekki.SF2.GUI.Menu.MainMenu$$get_Instance @ RVA 0x356EBC0

Nekki_SF2_GUI_Menu_MainMenu_o * Nekki_SF2_GUI_Menu_MainMenu__get_Instance(MethodInfo *method)

{
  if ((DAT_04568c48 & 1) == 0) {
                    /* try { // try from 0366ebdc to 0376ebe3 has its CatchHandler @ 03672d1c */
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04568c48 = 1;
  }
                    /* try { // try from 0366ebf4 to 0376ebfb has its CatchHandler @ 03672d18 */
  return Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
}


// ===== private void DGMNFAKGPBG()  [RVA 0x356EC08]
// Nekki.SF2.GUI.Menu.MainMenu$$DGMNFAKGPBG @ RVA 0x356EC08

void Nekki_SF2_GUI_Menu_MainMenu__DGMNFAKGPBG
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0366ec08 to 0376ec0f has its CatchHandler @ 03672d14 */
  if ((DAT_04568c49 & 1) == 0) {
                    /* try { // try from 0366ec20 to 0376ec27 has its CatchHandler @ 03672d10 */
                    /* try { // try from 0366ec28 to 0376ec3b has its CatchHandler @ 03672d0c */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568c49 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
                    /* try { // try from 0366ec44 to 0376ec4b has its CatchHandler @ 03672d08 */
    return;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366ec5c to 0376ec63 has its CatchHandler @ 03673110 */
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  MGNPHCAAEIO__HMGOIPKIDBB((MethodInfo *)0x0);
                    /* try { // try from 0366ec70 to 0376ec77 has its CatchHandler @ 0367311c */
  MGNPHCAAEIO__BHMIDFLCAHJ((MethodInfo *)0x0);
  return;
}


// ===== public bool get_IsEnabled()  [RVA 0x356EC78]
// Nekki.SF2.GUI.Menu.MainMenu$$get_IsEnabled @ RVA 0x356EC78

bool Nekki_SF2_GUI_Menu_MainMenu__get_IsEnabled
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  return (bool)(__this->fields).super.field_0x16;
}


// ===== public MenuMoneyPanel get_Money()  [RVA 0x356EC80]
// Nekki.SF2.GUI.Menu.MainMenu$$get_Money @ RVA 0x356EC80

Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *
Nekki_SF2_GUI_Menu_MainMenu__get_Money(Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  return (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(__this->fields)._energy;
}


// ===== private void KBBDLHONPIO(bool AIJPKOCFDJP)  [RVA 0x356EC88]
// Nekki.SF2.GUI.Menu.MainMenu$$KBBDLHONPIO @ RVA 0x356EC88

void Nekki_SF2_GUI_Menu_MainMenu__KBBDLHONPIO
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool AIJPKOCFDJP,MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *__this_00;
  NDPMLPGANCI_o *__this_01;
  CHDGOFBHAFI_o *__this_02;
  ulong uVar2;
  ulong extraout_x1;
  ulong extraout_x1_00;
  MethodInfo *method_00;
  ACHLOMELAJE_o *__this_03;
  
                    /* try { // try from 0366ec88 to 0376ec8f has its CatchHandler @ 03673118 */
  uVar2 = (ulong)AIJPKOCFDJP;
                    /* try { // try from 0366ec9c to 0376eca3 has its CatchHandler @ 03673114 */
  if ((DAT_04568c4a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo,uVar2);
                    /* try { // try from 0366ecb4 to 0376ecbb has its CatchHandler @ 0367310c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0366ecbc to 0376eccf has its CatchHandler @ 03673108 */
    DAT_04568c4a = 1;
    uVar2 = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
                    /* try { // try from 0366ecdc to 0376ecdf has its CatchHandler @ 03673104 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366ecf0 to 0376ecf7 has its CatchHandler @ 03673270 */
    thunk_FUN_01ba7564();
    uVar2 = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 0366ed04 to 0376ed0b has its CatchHandler @ 03673100 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo,uVar2);
    DAT_04565b7d = '\x01';
  }
                    /* try { // try from 0366ed1c to 0376ed23 has its CatchHandler @ 036730fc */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 0366ed30 to 0376ed37 has its CatchHandler @ 036730f8 */
    __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 0366ed48 to 0376ed4f has its CatchHandler @ 036730f4 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0366ed50 to 0376ed5f has its CatchHandler @ 036730f0 */
      DAT_04565b7d = '\x01';
    }
  }
  else {
    __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 0366ed78 to 0376edb3 has its CatchHandler @ 03673224 */
    bVar1 = ACHLOMELAJE__KIDFHIOEAAP(__this_00,(MethodInfo *)0x0);
    if (__this_03 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__HDOJACGLHIN(__this_03,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
      Nekki_SF2_GUI_Menu_MainMenu__UpdateDojoDiscipleButton(__this,method_00);
      EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
      __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_01 != (NDPMLPGANCI_o *)0x0) {
                    /* try { // try from 0366edc8 to 0376edd3 has its CatchHandler @ 036730ec */
        NDPMLPGANCI__EKPAFDJIAGI
                  (__this_01,3,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,
                   (MethodInfo *)0x0);
                    /* try { // try from 0366edd8 to 0376eddf has its CatchHandler @ 036730e8 */
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
        if (__this_02 != (CHDGOFBHAFI_o *)0x0) {
                    /* try { // try from 0366edfc to 0376ee03 has its CatchHandler @ 03672d04 */
          CHDGOFBHAFI__PNLACGIDHPI(__this_02,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateRubySale()  [RVA 0x356EE0C]
// Nekki.SF2.GUI.Menu.MainMenu$$UpdateRubySale @ RVA 0x356EE0C

void Nekki_SF2_GUI_Menu_MainMenu__UpdateRubySale
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this_00;
  
                    /* try { // try from 0366ee14 to 0376ee1b has its CatchHandler @ 03672d00 */
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(__this->fields)._energy;
  if (__this_00 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
                    /* try { // try from 0366ee28 to 0376ee2f has its CatchHandler @ 03672cfc */
    Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateRubySale(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x356EE38]
// Nekki.SF2.GUI.Menu.MainMenu$$.ctor @ RVA 0x356EE38

void Nekki_SF2_GUI_Menu_MainMenu___ctor(Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Slider_o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0366ee40 to 0376ee47 has its CatchHandler @ 03672cf8 */
                    /* try { // try from 0366ee48 to 0376ee5b has its CatchHandler @ 036730e4 */
                    /* try { // try from 0366ee60 to 0376ee6b has its CatchHandler @ 03672cf4 */
  if ((DAT_04568c4b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_TypeInfo);
                    /* try { // try from 0366ee84 to 0376ee87 has its CatchHandler @ 03673328 */
                    /* try { // try from 0366ee88 to 0376ee8b has its CatchHandler @ 03672bec */
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568c4b = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0366ee9c to 0376eea3 has its CatchHandler @ 03672bf0 */
  *(undefined2 *)&(__this->fields).super.field_0x16 = 0x101;
  *(undefined1 *)&(__this->fields)._money = 1;
  (__this->fields)._MaterialsOpenedPosition.fields.x = 0.5;
                    /* try { // try from 0366eeb4 to 0376eebb has its CatchHandler @ 03672be8 */
  *(undefined4 *)&(__this->fields).Scroll = 0x3e800000;
  __this_00 = (UnityEngine_UI_Slider_o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_TypeInfo,
                                 method);
                    /* try { // try from 0366eec8 to 0376eecf has its CatchHandler @ 03672be4 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>__ctor__);
  (__this->fields).MLLHHEDCFJH = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).MLLHHEDCFJH,__this_00);
  (__this->fields).MAFKPOLHNNE = 1.4013e-45;
                    /* try { // try from 0366eee0 to 0376eee7 has its CatchHandler @ 03672be0 */
  (__this->fields).NMKOOKOKJMP = true;
                    /* try { // try from 0366eee8 to 0376eefb has its CatchHandler @ 03672bdc */
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0366eefc to 0376ef07 has its CatchHandler @ 03672bd8 */
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void NFPKGJADONL()  [RVA 0x356EF0C]
// Nekki.SF2.GUI.Menu.MainMenu$$NFPKGJADONL @ RVA 0x356EF0C

void Nekki_SF2_GUI_Menu_MainMenu__NFPKGJADONL
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar2;
  
                    /* try { // try from 0366ef20 to 0376ef23 has its CatchHandler @ 03673328 */
  if ((DAT_04568c4c & 1) == 0) {
                    /* try { // try from 0366ef24 to 0376ef27 has its CatchHandler @ 03672b80 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568c4c = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0366ef38 to 0376ef3f has its CatchHandler @ 03672b84 */
  if (*(char *)&(__this->fields)._money != '\0') {
                    /* try { // try from 0366ef50 to 0376ef57 has its CatchHandler @ 03672b7c */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 0366ef64 to 0376ef6b has its CatchHandler @ 03672b78 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
      method = extraout_x1_01;
    }
                    /* try { // try from 0366ef7c to 0376ef83 has its CatchHandler @ 03672b74 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366ef84 to 0376ef97 has its CatchHandler @ 03672b70 */
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 == (ACHLOMELAJE_o *)0x0) {
LAB_0366efdc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0366ef98 to 0376efa3 has its CatchHandler @ 03672b6c */
    if ((pAVar2->fields).MMOJIJHAJJL == false) {
      __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_0366efdc;
      bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                        (__this_00,0x16,(MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 0366efbc to 0376efbf has its CatchHandler @ 03673328 */
                    /* try { // try from 0366efc0 to 0376efc3 has its CatchHandler @ 03672b08 */
        EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* try { // try from 0366efd4 to 0376efdb has its CatchHandler @ 03672b24 */
  return;
}

