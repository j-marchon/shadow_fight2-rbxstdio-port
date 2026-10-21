// LJFLEGDMCMI$$MAHFCKJGBPP @ RVA 0x3322EFC

void LJFLEGDMCMI__MAHFCKJGBPP(LJFLEGDMCMI_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  undefined8 uVar3;
  UnityEngine_Object_o *x;
  System_Action_o *EBIHGBKNHMF;
  VideoPlayerController_o *pVVar4;
  
  if ((DAT_0456785e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_LJFLEGDMCMI_JLDEKOIIPDE__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_22364);
    DAT_0456785e = 1;
  }
  (__this->fields).NAIPDDOMBPA = false;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if (DAT_04566bb5 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo);
    DAT_04566bb5 = '\x01';
  }
  pVVar4 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pVVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
LAB_03422fd4:
    if ((__this->fields).NAIPDDOMBPA == false) {
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    }
    (__this->fields).NAIPDDOMBPA = true;
    return;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MGENAMAJALB__JKLFLNNFEMP((MethodInfo *)0x0);
  pSVar2 = System_String__Format
                     (StringLiteral_22364,(Il2CppObject *)pSVar2,
                      (Il2CppObject *)(__this->fields).BOKLALEEJBB,(MethodInfo *)0x0);
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    VideoPlayerController__Create((MethodInfo *)0x0);
    if (DAT_04566bb5 == '\0') {
      FUN_01bab630(&VideoPlayerController_TypeInfo);
      DAT_04566bb5 = '\x01';
    }
    pVVar4 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
    uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pVVar4 != (VideoPlayerController_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034230d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pVVar4->klass->vtable)._7_Play.methodPtr)
                (pVVar4,pSVar2,uVar3,(pVVar4->klass->vtable)._7_Play.method);
      return;
    }
  }
  else {
    x = (UnityEngine_Object_o *)
        CMEBCBKGFFL__OCMBGOIHFOD((__this->fields).BOKLALEEJBB,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) goto LAB_03422fd4;
    VideoPlayerController__Create((MethodInfo *)0x0);
    if (DAT_04566bb5 == '\0') {
      FUN_01bab630(&VideoPlayerController_TypeInfo);
      DAT_04566bb5 = '\x01';
    }
    pSVar2 = (__this->fields).BOKLALEEJBB;
    pVVar4 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
    EBIHGBKNHMF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pVVar4 != (VideoPlayerController_o *)0x0) {
      VideoPlayerController__Play
                (pVVar4,pSVar2,(UnityEngine_Video_VideoClip_o *)x,EBIHGBKNHMF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

