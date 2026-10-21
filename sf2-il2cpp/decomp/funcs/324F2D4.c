// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$PlayVideo @ RVA 0x324F2D4

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__PlayVideo
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,System_String_o *MAFHEJCDJLH,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Object_o *pUVar3;
  System_String_o *pSVar4;
  System_Action_o *EBIHGBKNHMF;
  UnityEngine_Video_VideoClip_o *pUVar5;
  VideoPlayerController_o *pVVar6;
  
  if ((DAT_04567119 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_LGJMONMLEFH__);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567119 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0334f508;
  if (*(char *)&pIVar2[2].klass == '\0') {
    return;
  }
  if (DAT_04566bb5 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo);
    DAT_04566bb5 = '\x01';
  }
  pVVar6 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pVVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  VideoPlayerController__Create((MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._intro;
  if (pUVar3 == (UnityEngine_Object_o *)0x0) goto LAB_0334f508;
  pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(MAFHEJCDJLH,pSVar4,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar5 = (__this->fields)._intro;
LAB_0334f464:
    (__this->fields).CPAKIIJDJMK = pUVar5;
    thunk_FUN_01c20e04();
  }
  else {
    pUVar3 = (UnityEngine_Object_o *)(__this->fields)._gates;
    if (pUVar3 == (UnityEngine_Object_o *)0x0) goto LAB_0334f508;
    pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(MAFHEJCDJLH,pSVar4,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar5 = (__this->fields)._gates;
      goto LAB_0334f464;
    }
    pUVar3 = (UnityEngine_Object_o *)(__this->fields)._titan;
    if (pUVar3 == (UnityEngine_Object_o *)0x0) goto LAB_0334f508;
    pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(MAFHEJCDJLH,pSVar4,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar5 = (__this->fields)._titan;
      goto LAB_0334f464;
    }
  }
  if (DAT_04566bb5 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo);
    DAT_04566bb5 = '\x01';
  }
  pVVar6 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
  pSVar4 = System_String__Format
                     ((__this->fields)._videoPath,(Il2CppObject *)MAFHEJCDJLH,(MethodInfo *)0x0);
  pUVar5 = (__this->fields).CPAKIIJDJMK;
  EBIHGBKNHMF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pVVar6 != (VideoPlayerController_o *)0x0) {
    VideoPlayerController__Play(pVVar6,pSVar4,pUVar5,EBIHGBKNHMF,(MethodInfo *)0x0);
    return;
  }
LAB_0334f508:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

