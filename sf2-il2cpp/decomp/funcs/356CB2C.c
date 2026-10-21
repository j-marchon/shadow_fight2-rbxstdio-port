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

