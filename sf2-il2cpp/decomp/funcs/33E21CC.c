// VideoPlayerController$$Create @ RVA 0x33E21CC

VideoPlayerController_o * VideoPlayerController__Create(MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *original;
  UnityEngine_Object_o *__this;
  VideoPlayerController_o *pVVar2;
  
                    /* try { // try from 034e21e0 to 035e21e7 has its CatchHandler @ 034e2440 */
  if ((DAT_04567eab & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<VideoPlayerController>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 034e2208 to 035e221f has its CatchHandler @ 034e244c */
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_15612);
    FUN_01bab630(&StringLiteral_10418);
    DAT_04567eab = 1;
  }
                    /* try { // try from 034e223c to 035e223f has its CatchHandler @ 034e2438 */
                    /* try { // try from 034e2240 to 035e23bb has its CatchHandler @ 034e1934 */
  if (DAT_04566bb5 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo);
    DAT_04566bb5 = '\x01';
  }
  pVVar2 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pVVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04566bb5 == '\0') {
      FUN_01bab630(&VideoPlayerController_TypeInfo);
      DAT_04566bb5 = '\x01';
    }
    return VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
  }
  original = UnityEngine_Resources__Load<object>
                       (StringLiteral_10418,Method_UnityEngine_Resources_Load<GameObject>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  __this = (UnityEngine_Object_o *)
           UnityEngine_Object__Instantiate<object>
                     (original,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (__this != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this,StringLiteral_15612,(MethodInfo *)0x0);
    pVVar2 = (VideoPlayerController_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)__this,
                        Method_UnityEngine_GameObject_GetComponent<VideoPlayerController>__);
    return pVVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

