// HCIAFAIBMAL$$CPEFDADDBKD @ RVA 0x33A3030

double HCIAFAIBMAL__CPEFDADDBKD
                 (System_String_o *HONFNFNIBOB,System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *message;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  double dVar1;
  double local_38;
  
  method_00 = (MethodInfo *)KKJPPDNKGAI;
  if ((DAT_04567ccc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    FUN_01bab630(&StringLiteral_13784);
    DAT_04567ccc = 1;
    method_00 = extraout_x1;
  }
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  dVar1 = HCIAFAIBMAL__NJGHLMLNGFD(KKJPPDNKGAI,method_00);
  local_38 = dVar1;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_38);
  message = System_String__Format
                      (StringLiteral_13784,(Il2CppObject *)HONFNFNIBOB,arg1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return dVar1;
}

