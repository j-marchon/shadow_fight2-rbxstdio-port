// IMAPABEJECG$$EMBIGPDBNKJ @ RVA 0x35C15C0

bool IMAPABEJECG__EMBIGPDBNKJ(MethodInfo *method)

{
  int32_t iVar1;
  
  if ((DAT_04568f2f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_04568f2f = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  return iVar1 == 0xb;
}

