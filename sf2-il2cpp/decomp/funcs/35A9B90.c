// CAAFKDMIFLE$$IELLEFEFFJD @ RVA 0x35A9B90

void CAAFKDMIFLE__IELLEFEFFJD(CAAFKDMIFLE_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Action_o *EBIHGBKNHMF;
  MethodInfo *method_00;
  System_String_o *CKBGIKEFOMH;
  VideoPlayerController_o *__this_00;
  
                    /* catch() { ... } // from try @ 036a9b70 with catch @ 036a9b90 */
                    /* catch() { ... } // from try @ 036a9884 with catch @ 036a9b94 */
                    /* catch() { ... } // from try @ 036a9804 with catch @ 036a9b98 */
                    /* catch() { ... } // from try @ 036a9820 with catch @ 036a9b9c */
                    /* catch() { ... } // from try @ 036a9b64 with catch @ 036a9ba0 */
                    /* catch() { ... } // from try @ 036a9768 with catch @ 036a9bac */
                    /* catch() { ... } // from try @ 036a9b50 with catch @ 036a9bb0 */
  if ((DAT_04568e3d & 1) == 0) {
                    /* catch() { ... } // from try @ 036a978c with catch @ 036a9bb4 */
                    /* catch() { ... } // from try @ 036a9b4c with catch @ 036a9bb8 */
                    /* catch() { ... } // from try @ 036a975c with catch @ 036a9bbc */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 036a9780 with catch @ 036a9bc0 */
                    /* catch() { ... } // from try @ 036a9728 with catch @ 036a9bc4 */
                    /* catch() { ... } // from try @ 036a9744 with catch @ 036a9bc8 */
    FUN_01bab630(&Method_CAAFKDMIFLE_JLDEKOIIPDE__);
                    /* catch() { ... } // from try @ 036a96ec with catch @ 036a9bcc */
                    /* catch() { ... } // from try @ 036a9704 with catch @ 036a9bd0 */
                    /* catch() { ... } // from try @ 036a9b44 with catch @ 036a9bd4 */
    FUN_01bab630(&CAAFKDMIFLE_TypeInfo);
                    /* catch() { ... } // from try @ 036a9b40 with catch @ 036a9bd8 */
                    /* catch() { ... } // from try @ 036a96fc with catch @ 036a9bdc */
                    /* catch() { ... } // from try @ 036a9714 with catch @ 036a9be0 */
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                    /* catch() { ... } // from try @ 036a9680 with catch @ 036a9be4 */
                    /* catch() { ... } // from try @ 036a9624 with catch @ 036a9be8 */
                    /* catch() { ... } // from try @ 036a9b38 with catch @ 036a9bec */
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_04568e3d = 1;
  }
                    /* try { // try from 036a9c04 to 037a9c07 has its CatchHandler @ 036a9c18 */
  CELDGLHBCAM__IELLEFEFFJD((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 036a9c04 with catch @ 036a9c18 */
    thunk_FUN_01ba7564();
  }
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
                    /* try { // try from 036a9c28 to 037a9c8f has its CatchHandler @ 036a9ca4 */
    if ((*(char *)&pIVar1[2].klass == '\0') ||
       (CAAFKDMIFLE_TypeInfo->static_fields->PLEKIANGCLH != false)) {
      CAAFKDMIFLE__JLDEKOIIPDE(__this,method_00);
      return;
    }
    CAAFKDMIFLE_TypeInfo->static_fields->PLEKIANGCLH = true;
    VideoPlayerController__Create((MethodInfo *)0x0);
    if (DAT_04566bb5 == '\0') {
      FUN_01bab630(&VideoPlayerController_TypeInfo);
      DAT_04566bb5 = '\x01';
    }
                    /* try { // try from 036a9c90 to 037a9c9b has its CatchHandler @ 036a92a0 */
    CKBGIKEFOMH = (__this->fields).MFJHEKFPMJH;
                    /* try { // try from 036a9c9c to 037a9ca3 has its CatchHandler @ 036a9ca4 */
                    /* catch() { ... } // from try @ 036a9c28 with catch @ 036a9ca4
                       catch() { ... } // from try @ 036a9c9c with catch @ 036a9ca4 */
    __this_00 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
    EBIHGBKNHMF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_00 != (VideoPlayerController_o *)0x0) {
      VideoPlayerController__Play
                (__this_00,CKBGIKEFOMH,(UnityEngine_Video_VideoClip_o *)0x0,EBIHGBKNHMF,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

