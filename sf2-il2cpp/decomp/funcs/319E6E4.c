// KOKJOMBFNCD$$.cctor @ RVA 0x319E6E4

void KOKJOMBFNCD___cctor(MethodInfo *method)

{
  UnityEngine_Application_LogCallback_o *value;
  MethodInfo *method_00;
  KCCMMLBMGMO_o *pKVar1;
  KCCMMLBMGMO_o **ppKVar2;
  
  if ((DAT_04566ace & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_KOKJOMBFNCD_EKLNCAHPGMC__);
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_LogCallback_TypeInfo);
    DAT_04566ace = 1;
  }
  KOKJOMBFNCD_TypeInfo->static_fields->_JAIDNCGGKNI_k__BackingField = true;
  value = (UnityEngine_Application_LogCallback_o *)
          thunk_FUN_01bda818(UnityEngine_Application_LogCallback_TypeInfo);
  UnityEngine_Application_LogCallback___ctor();
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Application__add_logMessageReceived(value,(MethodInfo *)0x0);
  pKVar1 = KOKJOMBFNCD__EEKJHMDPNLJ(method_00);
  ppKVar2 = &KOKJOMBFNCD_TypeInfo->static_fields->OGNPGJGNGNF;
  *ppKVar2 = pKVar1;
  thunk_FUN_01c20e04(ppKVar2,pKVar1);
  return;
}

