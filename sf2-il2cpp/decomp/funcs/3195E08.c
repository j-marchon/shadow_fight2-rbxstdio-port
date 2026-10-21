// CMEBCBKGFFL$$GEIPHOGLKAG @ RVA 0x3195E08

UnityEngine_AudioClip_o * CMEBCBKGFFL__GEIPHOGLKAG(System_String_o *JAFADHFFBPK,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_AudioClip_o *pUVar3;
  UnityEngine_Networking_UnityWebRequest_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04566a70 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<AudioClip>__);
    FUN_01bab630(&StringLiteral_18247);
    DAT_04566a70 = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (MGENAMAJALB_TypeInfo->static_fields->ACGDPPPMKBM != false) {
    pSVar2 = CMEBCBKGFFL__BPMILMCCBEI(JAFADHFFBPK,method);
    pSVar2 = CMEBCBKGFFL__OLJOOCGKALN(pSVar2,method_00);
    pUVar3 = (UnityEngine_AudioClip_o *)
             UnityEngine_ResourcesAndBundles__Load<object>
                       (pSVar2,Method_UnityEngine_ResourcesAndBundles_Load<AudioClip>__);
    return pUVar3;
  }
  pSVar2 = System_String__Format(StringLiteral_18247,(Il2CppObject *)JAFADHFFBPK,(MethodInfo *)0x0);
  __this = UnityEngine_Networking_UnityWebRequest__Get(pSVar2,(MethodInfo *)0x0);
  if (__this == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UnityEngine_Networking_UnityWebRequest__SendWebRequest(__this,(MethodInfo *)0x0);
  do {
    bVar1 = UnityEngine_Networking_UnityWebRequest__get_isDone(__this,(MethodInfo *)0x0);
    if (bVar1) break;
    pSVar2 = UnityEngine_Networking_UnityWebRequest__get_error(__this,(MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  } while (bVar1);
  pSVar2 = UnityEngine_Networking_UnityWebRequest__get_error(__this,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = UnityEngine_Networking_DownloadHandlerAudioClip__GetContent(__this,(MethodInfo *)0x0);
    return pUVar3;
  }
  return (UnityEngine_AudioClip_o *)0x0;
}

