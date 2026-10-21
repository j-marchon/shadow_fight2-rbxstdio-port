// Nekki.SF2.GUI.Scenes.GameLoaderScene.IEFKAMNCJDI$$MoveNext @ RVA 0x31D2B44

bool Nekki_SF2_GUI_Scenes_GameLoaderScene_IEFKAMNCJDI__MoveNext
               (Nekki_SF2_GUI_Scenes_GameLoaderScene_IEFKAMNCJDI_o *__this,MethodInfo *method)

{
  UnityEngine_SceneManagement_Scene_o scene;
  int32_t iVar1;
  IGFJINHNIBB_o *pIVar2;
  DODIFOIEPLP_o *__this_00;
  CAAFKDMIFLE_o *__this_01;
  CELDGLHBCAM_o *pCVar3;
  PPJFCELDBGE_o *__this_02;
  BDJDLHKNBGH_o *__this_03;
  Nekki_SF2_GUI_Scenes_GameLoaderScene_c *method_00;
  UnityEngine_AsyncOperation_o *pUVar4;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar5;
  bool bVar6;
  int iVar7;
  UnityEngine_GameObject_o *GPPDAEOOLLN;
  System_String_o *HIOKLIFNNNC;
  Nekki_SF2_GUI_Scenes_GameLoaderScene_o *pNVar8;
  UnityEngine_SceneManagement_Scene_o local_38 [2];
  
  if ((DAT_04566cbc & 1) == 0) {
    FUN_01bab630(&ADACCFIHMAK_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&BDJDLHKNBGH_TypeInfo);
    FUN_01bab630(&CAAFKDMIFLE_TypeInfo);
    FUN_01bab630(&DODIFOIEPLP_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo);
    FUN_01bab630(&HAGMCGMIKNH_TypeInfo);
    FUN_01bab630(&KEBCLNKBDNO_TypeInfo);
    FUN_01bab630(&PPJFCELDBGE_TypeInfo);
                    /* try { // try from 032d2bd0 to 033d2f23 has its CatchHandler @ 032d2bd0
                       catch() { ... } // from try @ 032d2bd0 with catch @ 032d2bd0
                       catch() { ... } // from try @ 032d3b8c with catch @ 032d2bd0
                       catch() { ... } // from try @ 032d3cc8 with catch @ 032d2bd0
                       catch() { ... } // from try @ 032d3f0c with catch @ 032d2bd0
                       catch() { ... } // from try @ 032d3fdc with catch @ 032d2bd0
                       catch() { ... } // from try @ 032d4198 with catch @ 032d2bd0
                       catch() { ... } // from try @ 032d41ec with catch @ 032d2bd0
                       catch() { ... } // from try @ 032d4210 with catch @ 032d2bd0
                       catch() { ... } // from try @ 032d425c with catch @ 032d2bd0 */
    FUN_01bab630(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    DAT_04566cbc = 1;
    method = extraout_x1;
  }
  local_38[0].fields.m_Handle = (UnityEngine_SceneManagement_Scene_Fields)0;
  switch((__this->fields).__1__state) {
  case 0:
    ppIVar5 = &(__this->fields).__2__current;
    *ppIVar5 = (Il2CppObject *)0x0;
    (__this->fields).__1__state = -1;
    thunk_FUN_01c20e04(ppIVar5,0);
    bVar6 = true;
    (__this->fields).__1__state = 1;
    break;
  case 1:
    (__this->fields).__1__state = -1;
    if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_SceneManagement_SceneManager_TypeInfo,method);
    }
    iVar7 = UnityEngine_SceneManagement_SceneManager__get_sceneCount((MethodInfo *)0x0);
    while( true ) {
      iVar7 = iVar7 + -1;
      (__this->fields)._i_5__2 = iVar7;
      if (iVar7 < 0) break;
      if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_38[0] = UnityEngine_SceneManagement_SceneManager__GetSceneAt(iVar7,(MethodInfo *)0x0);
      iVar1 = UnityEngine_SceneManagement_Scene__get_buildIndex
                        ((UnityEngine_SceneManagement_Scene_Fields)(int32_t)local_38,
                         (MethodInfo *)0x0);
      scene.fields.m_Handle = local_38[0].fields.m_Handle;
      if (iVar1 != 0) {
        if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 032d2f24 to 033d2f2b has its CatchHandler @ 032d41f0 */
        pUVar4 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync(scene,(MethodInfo *)0x0)
        ;
        ppIVar5 = &(__this->fields).__2__current;
        *ppIVar5 = (Il2CppObject *)pUVar4;
        thunk_FUN_01c20e04(ppIVar5,pUVar4);
        (__this->fields).__1__state = 2;
        return true;
                    /* try { // try from 032d2f44 to 033d2f47 has its CatchHandler @ 032d4164 */
      }
LAB_032d2ea0:
      iVar7 = (__this->fields)._i_5__2;
    }
    method_00 = Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo;
    if ((Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (Nekki_SF2_GUI_Scenes_GameLoaderScene_c *)thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_Scenes_GameLoaderScene__HJLLJGIBCNC((MethodInfo *)method_00);
    if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar6 = true;
    pUVar4 = UnityEngine_SceneManagement_SceneManager__LoadSceneAsync(1,1,(MethodInfo *)0x0);
    ppIVar5 = &(__this->fields).__2__current;
    *ppIVar5 = (Il2CppObject *)pUVar4;
    thunk_FUN_01c20e04(ppIVar5,pUVar4);
    (__this->fields).__1__state = 3;
    break;
  case 2:
    (__this->fields).__1__state = -1;
    goto LAB_032d2ea0;
  case 3:
    pNVar8 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pNVar8 == (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *)0x0) ||
       (pIVar2 = (pNVar8->fields).ECJIJIFLMBK, pIVar2 == (IGFJINHNIBB_o *)0x0)) {
LAB_032d2e6c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    IGFJINHNIBB__DGLJCGNHLIG(pIVar2,(MethodInfo *)0x0);
    pIVar2 = (pNVar8->fields).ECJIJIFLMBK;
    if (pIVar2 == (IGFJINHNIBB_o *)0x0) goto LAB_032d2e6c;
    (pIVar2->fields)._OBENPAJAMCP_k__BackingField = (pNVar8->fields)._supportButton;
    thunk_FUN_01c20e04();
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Application__get_platform((MethodInfo *)0x0);
    UnityEngine_Application__get_platform((MethodInfo *)0x0);
    pIVar2 = (pNVar8->fields).ECJIJIFLMBK;
    __this_00 = (DODIFOIEPLP_o *)thunk_FUN_01bda818(DODIFOIEPLP_TypeInfo);
    DODIFOIEPLP___ctor(__this_00,(MethodInfo *)0x0);
    if (pIVar2 == (IGFJINHNIBB_o *)0x0) goto LAB_032d2e6c;
    IGFJINHNIBB__DABBOPGIBBB(pIVar2,(CELDGLHBCAM_o *)__this_00,(MethodInfo *)0x0);
    pIVar2 = (pNVar8->fields).ECJIJIFLMBK;
    GPPDAEOOLLN = (pNVar8->fields).logo;
    if ((Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    HIOKLIFNNNC = Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->static_fields->ILJEEJCKIHM;
    __this_01 = (CAAFKDMIFLE_o *)thunk_FUN_01bda818(CAAFKDMIFLE_TypeInfo);
    CAAFKDMIFLE___ctor(__this_01,GPPDAEOOLLN,HIOKLIFNNNC,(MethodInfo *)0x0);
    if (pIVar2 == (IGFJINHNIBB_o *)0x0) goto LAB_032d2e6c;
    IGFJINHNIBB__DABBOPGIBBB(pIVar2,(CELDGLHBCAM_o *)__this_01,(MethodInfo *)0x0);
    pIVar2 = (pNVar8->fields).ECJIJIFLMBK;
    pCVar3 = (CELDGLHBCAM_o *)thunk_FUN_01bda818(HAGMCGMIKNH_TypeInfo);
    CELDGLHBCAM___ctor(pCVar3,(MethodInfo *)0x0);
    if (pIVar2 == (IGFJINHNIBB_o *)0x0) goto LAB_032d2e6c;
    IGFJINHNIBB__DABBOPGIBBB(pIVar2,pCVar3,(MethodInfo *)0x0);
    pIVar2 = (pNVar8->fields).ECJIJIFLMBK;
    __this_02 = (PPJFCELDBGE_o *)thunk_FUN_01bda818(PPJFCELDBGE_TypeInfo);
    PPJFCELDBGE___ctor(__this_02,(MethodInfo *)0x0);
    if (pIVar2 == (IGFJINHNIBB_o *)0x0) goto LAB_032d2e6c;
    IGFJINHNIBB__DABBOPGIBBB(pIVar2,(CELDGLHBCAM_o *)__this_02,(MethodInfo *)0x0);
    pIVar2 = (pNVar8->fields).ECJIJIFLMBK;
    __this_03 = (BDJDLHKNBGH_o *)thunk_FUN_01bda818(BDJDLHKNBGH_TypeInfo);
    BDJDLHKNBGH___ctor(__this_03,(MethodInfo *)0x0);
    if (pIVar2 == (IGFJINHNIBB_o *)0x0) goto LAB_032d2e6c;
    IGFJINHNIBB__DABBOPGIBBB(pIVar2,(CELDGLHBCAM_o *)__this_03,(MethodInfo *)0x0);
    pIVar2 = (pNVar8->fields).ECJIJIFLMBK;
    pCVar3 = (CELDGLHBCAM_o *)thunk_FUN_01bda818(ADACCFIHMAK_TypeInfo);
    ADACCFIHMAK___ctor((ADACCFIHMAK_o *)pCVar3,(MethodInfo *)0x0);
    if (pIVar2 == (IGFJINHNIBB_o *)0x0) goto LAB_032d2e6c;
    IGFJINHNIBB__DABBOPGIBBB(pIVar2,pCVar3,(MethodInfo *)0x0);
    pIVar2 = (pNVar8->fields).ECJIJIFLMBK;
    pCVar3 = (CELDGLHBCAM_o *)thunk_FUN_01bda818(KEBCLNKBDNO_TypeInfo);
    KEBCLNKBDNO___ctor((KEBCLNKBDNO_o *)pCVar3,(MethodInfo *)0x0);
    if (pIVar2 == (IGFJINHNIBB_o *)0x0) goto LAB_032d2e6c;
    IGFJINHNIBB__DABBOPGIBBB(pIVar2,pCVar3,(MethodInfo *)0x0);
  default:
    bVar6 = false;
  }
                    /* try { // try from 032d2f54 to 033d2f77 has its CatchHandler @ 032d4160 */
  return bVar6;
}

