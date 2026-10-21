// CPNHNIKFGFB$$DIGPCFKCCBK @ RVA 0x3079520

void CPNHNIKFGFB__DIGPCFKCCBK(CPNHNIKFGFB_o *__this,int32_t CEOLOKFCKIG,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *arg0;
  System_String_o *message;
  int32_t local_24;
  
  if ((DAT_04565fc7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_7789);
    DAT_04565fc7 = 1;
  }
  bVar1 = CPNHNIKFGFB__KNNDANLJOEB(__this,CEOLOKFCKIG,method);
  if (bVar1) {
    CPNHNIKFGFB__BENGKDEEPGK(__this,CEOLOKFCKIG,method);
    return;
  }
  local_24 = CEOLOKFCKIG;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  message = System_String__Format(StringLiteral_7789,arg0,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}

