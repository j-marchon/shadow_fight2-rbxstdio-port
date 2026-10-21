// PCKJEMMFMKL$$JEODHPCHCKE @ RVA 0x3112FF4

SimpleJSON_JSONNode_o *
PCKJEMMFMKL__JEODHPCHCKE(PCKJEMMFMKL_o *__this,System_String_o *IMMNELPBGIF,MethodInfo *method)

{
  System_String_o *aJSON;
  SimpleJSON_JSONNode_o *pSVar1;
  
  if ((DAT_04566593 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566593 = 1;
  }
  aJSON = PCOEHCPGBBG__HIPDPNHLHAC(IMMNELPBGIF,(MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = SimpleJSON_JSONNode__Parse(aJSON,(MethodInfo *)0x0);
  return pSVar1;
}

