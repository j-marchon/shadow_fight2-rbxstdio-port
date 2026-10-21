// PBHDPJBLDLG$$MHNONHHOHGN @ RVA 0x348F370

System_Collections_IEnumerator_o *
PBHDPJBLDLG__MHNONHHOHGN(PBHDPJBLDLG_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568406 & 1) == 0) {
    FUN_01bab630(&PBHDPJBLDLG_LIBPCCPNJOK_TypeInfo);
    DAT_04568406 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(PBHDPJBLDLG_LIBPCCPNJOK_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

