// CMEBCBKGFFL$$OCMBGOIHFOD @ RVA 0x3195F30

UnityEngine_Video_VideoClip_o *
CMEBCBKGFFL__OCMBGOIHFOD(System_String_o *JAFADHFFBPK,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Video_VideoClip_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04566a71 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<VideoClip>__);
    FUN_01bab630(&StringLiteral_1492);
    DAT_04566a71 = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar1 = MGENAMAJALB__FEEOPEBHPJI((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1492,JAFADHFFBPK,(MethodInfo *)0x0);
  pSVar1 = CMEBCBKGFFL__BPMILMCCBEI(pSVar1,method_00);
  pSVar1 = CMEBCBKGFFL__OLJOOCGKALN(pSVar1,method_01);
  pUVar2 = (UnityEngine_Video_VideoClip_o *)
           UnityEngine_ResourcesAndBundles__Load<object>
                     (pSVar1,Method_UnityEngine_ResourcesAndBundles_Load<VideoClip>__);
  return pUVar2;
}

