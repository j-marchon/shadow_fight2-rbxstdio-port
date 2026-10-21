// KJFLIAMBKEB$$BKCFPHNEONL @ RVA 0x331EFC8

void KJFLIAMBKEB__BKCFPHNEONL(int32_t GKDGJHMEKBI,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  bool bVar3;
  Nekki_SF2_GUI_Scenes_LoaderScreen_c *pNVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_GameObject_array *pUVar6;
  UnityEngine_Object_o *pUVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar8;
  Nekki_SF2_GUI_Scenes_LoaderScreen_o *pNVar9;
  uint uVar10;
  UnityEngine_SceneManagement_Scene_Fields local_58 [2];
  
  if ((DAT_04567835 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<Camera>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<DebugUI>__);
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    DAT_04567835 = 1;
    method = extraout_x1;
  }
  local_58[0].m_Handle = 0;
  if (GKDGJHMEKBI != 2) {
    if (DAT_04565e5a == '\0') {
      FUN_01bab630(&KJFLIAMBKEB_TypeInfo,method);
      DAT_04565e5a = '\x01';
      method = extraout_x1_00;
    }
    iVar1 = KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB;
    if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_01;
    }
    if (DAT_045678db == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
      DAT_045678db = '\x01';
      method = extraout_x1_02;
    }
    if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_03;
    }
    pNVar4 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo;
    Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->BGDMCNDAIDC = iVar1;
    if (DAT_045678dc == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
      DAT_045678dc = '\x01';
      pNVar4 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo;
      method = extraout_x1_04;
    }
    if ((pNVar4->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pNVar4 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo;
      method = extraout_x1_05;
    }
    pNVar4->static_fields->BJFGHDKLEKH = GKDGJHMEKBI;
  }
  if (DAT_04565b84 == '\0') {
                    /* try { // try from 0341f11c to 0351f1af has its CatchHandler @ 0341f11c
                       catch() { ... } // from try @ 0341f11c with catch @ 0341f11c
                       catch() { ... } // from try @ 0341f1b8 with catch @ 0341f11c
                       catch() { ... } // from try @ 0341f200 with catch @ 0341f11c
                       catch() { ... } // from try @ 0341f224 with catch @ 0341f11c
                       catch() { ... } // from try @ 0341f25c with catch @ 0341f11c */
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar8 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar8 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if (pNVar8 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_0341f39c;
    pUVar5 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar5,false,(MethodInfo *)0x0);
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0341f1b0 to 0351f1b7 has its CatchHandler @ 0341f208 */
                    /* try { // try from 0341f1b8 to 0351f1fb has its CatchHandler @ 0341f11c */
  if (DAT_045624ed == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_045624ed = '\x01';
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar9 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
                    /* try { // try from 0341f1fc to 0351f1ff has its CatchHandler @ 0341f204 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0341f200 to 0351f21f has its CatchHandler @ 0341f11c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0341f1fc with catch @ 0341f204
                        */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0341f1b0 with catch @ 0341f208
                        */
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0341f220 to 0351f223 has its CatchHandler @ 0341f24c */
                    /* try { // try from 0341f224 to 0351f253 has its CatchHandler @ 0341f11c */
  if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  }
  if (!bVar3) {
    UnityEngine_SceneManagement_SceneManager__LoadSceneAsync(0,(MethodInfo *)0x0);
    return;
  }
  local_58[0].m_Handle =
       (int32_t)UnityEngine_SceneManagement_SceneManager__GetActiveScene((MethodInfo *)0x0);
  pUVar6 = UnityEngine_SceneManagement_Scene__GetRootGameObjects
                     ((UnityEngine_SceneManagement_Scene_Fields)(int32_t)local_58,(MethodInfo *)0x0)
  ;
  if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
    uVar2 = (uint)pUVar6->max_length;
                    /* catch() { ... } // from try @ 0341f220 with catch @ 0341f24c */
                    /* try { // try from 0341f254 to 0351f25b has its CatchHandler @ 0341f270 */
    if (0 < (int)uVar2) {
                    /* try { // try from 0341f25c to 0351f267 has its CatchHandler @ 0341f11c */
                    /* try { // try from 0341f268 to 0351f26f has its CatchHandler @ 0341f270 */
      uVar10 = 0;
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0341f254 with catch @ 0341f270
                       catch(type#2 @ 00000000) { ... } // from try @ 0341f268 with catch @ 0341f270
                        */
        if (uVar2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pUVar5 = pUVar6->m_Items[(int)uVar10];
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_0341f39c;
        pUVar7 = (UnityEngine_Object_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (pUVar5,Method_UnityEngine_GameObject_GetComponent<Camera>__);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          (pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar3) {
          pUVar7 = (UnityEngine_Object_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar5,Method_UnityEngine_GameObject_GetComponent<DebugUI>__);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            (pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar3) {
            Util__JODGPLBHHIA(pUVar5,false,(MethodInfo *)0x0);
          }
        }
        uVar2 = (uint)pUVar6->max_length;
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar2);
    }
    if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045624ed == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
      DAT_045624ed = '\x01';
    }
    if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar9 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField
    ;
    if (pNVar9 != (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)0x0) {
      Nekki_SF2_GUI_Scenes_LoaderScreen__Load(pNVar9,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0341f39c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

