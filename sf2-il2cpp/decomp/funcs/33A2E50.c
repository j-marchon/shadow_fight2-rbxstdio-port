// HCIAFAIBMAL$$IOEHKDBENCJ @ RVA 0x33A2E50

double HCIAFAIBMAL__IOEHKDBENCJ(System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Il2CppMethodPointer local_28;
  
  if ((DAT_04567cc8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    FUN_01bab630(&StringLiteral_13787);
    DAT_04567cc8 = 1;
    method = extraout_x1;
  }
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  local_28 = (Il2CppMethodPointer)HCIAFAIBMAL__NJGHLMLNGFD(KKJPPDNKGAI,method);
  pSVar1 = System_Double__ToString((double)local_28,(MethodInfo *)&stack0xffffffffffffffd8);
  pSVar1 = System_String__Concat(StringLiteral_13787,pSVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return (double)local_28;
}

