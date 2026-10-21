// CUDLR.Server$$OnDisable @ RVA 0x33C0194

void CUDLR_Server__OnDisable(CUDLR_Server_o *__this,MethodInfo *method)

{
  UnityEngine_Application_LogCallback_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567dc5 & 1) == 0) {
    FUN_01bab630(&Method_CFEANGJDHEE_OLCAINJPFNH__);
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_LogCallback_TypeInfo);
    DAT_04567dc5 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (UnityEngine_Application_LogCallback_o *)
                thunk_FUN_01bda818(UnityEngine_Application_LogCallback_TypeInfo,method);
  UnityEngine_Application_LogCallback___ctor();
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  KOKJOMBFNCD__BIGBBPBIECF(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

