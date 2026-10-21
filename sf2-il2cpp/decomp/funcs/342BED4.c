// POEIJGLGEED$$EDIGBEDHJED @ RVA 0x342BED4

int32_t POEIJGLGEED__EDIGBEDHJED(MethodInfo *method)

{
  int32_t iVar1;
  
  if ((DAT_0456813c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_0456813c = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = UnityEngine_Application__get_installMode((MethodInfo *)0x0);
  return iVar1;
}

