// BackKeyManager$$Update @ RVA 0x31AC26C

void BackKeyManager__Update(BackKeyManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  VideoPlayerController_o *pVVar3;
  
  if ((DAT_04566b4c & 1) == 0) {
    FUN_01bab630(&EnterScreen_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b4c = 1;
    method = extraout_x1;
  }
  if (DAT_04566bb5 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo,method);
    DAT_04566bb5 = '\x01';
  }
  pVVar3 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pVVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04566bb5 == '\0') {
      FUN_01bab630(&VideoPlayerController_TypeInfo);
      DAT_04566bb5 = '\x01';
    }
    pVVar3 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
    if (pVVar3 == (VideoPlayerController_o *)0x0) goto LAB_032ac3ac;
    if ((pVVar3->fields)._LFALNJINAPO_k__BackingField != false) {
      return;
    }
  }
  pNVar2 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    if (((pNVar2->fields).DBNNMLAONOF == false) &&
       (bVar1 = Nekki_SF2_GUI_Dialogs_DownloadingScreen__Exists((MethodInfo *)0x0), !bVar1)) {
      if ((EnterScreen_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = EnterScreen__ExistsAnyEnterScreen((MethodInfo *)0x0);
      if ((!bVar1) &&
         (bVar1 = BackKeyManager__JCKPPNGMDLB((BackKeyManager_o *)0x0,method_00), bVar1)) {
        BackKeyManager__OnBackKeyClicked(__this,method_01);
        return;
      }
    }
    return;
  }
LAB_032ac3ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

