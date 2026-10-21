// LBMBHDPPOOH$$ABOANDEGADO @ RVA 0x3238648

System_Collections_IEnumerator_o *
LBMBHDPPOOH__ABOANDEGADO(LBMBHDPPOOH_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567039 & 1) == 0) {
    FUN_01bab630(&LBMBHDPPOOH_PDGEBHKHMLI_TypeInfo);
    DAT_04567039 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(LBMBHDPPOOH_PDGEBHKHMLI_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

