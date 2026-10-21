// CUDLR.Server$$MAHADHJPLBL @ RVA 0x33BFC40

System_Collections_IEnumerator_o *
CUDLR_Server__MAHADHJPLBL(CUDLR_Server_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567dc0 & 1) == 0) {
    FUN_01bab630(&CUDLR_Server_ECOKHFLDMJF_TypeInfo);
    DAT_04567dc0 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(CUDLR_Server_ECOKHFLDMJF_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

