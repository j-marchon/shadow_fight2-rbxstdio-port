// LHOMEBJDFLD$$LNHHOGGMMMK @ RVA 0x3023030

int64_t LHOMEBJDFLD__LNHHOGGMMMK(MethodInfo *method)

{
  int64_t iVar1;
  System_DateTime_o d1;
  double dVar2;
  System_TimeSpan_Fields local_28;
  System_DateTime_o local_18;
  
  if ((DAT_04565c72 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04565c72 = 1;
  }
  local_18.fields._dateData = (System_DateTime_Fields)0;
  local_28._ticks = 0;
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  System_DateTime___ctor((System_DateTime_o)&local_18,0x7b2,1,1,0,0,0,1,(MethodInfo *)0x0);
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  local_28._ticks = (int64_t)System_DateTime__op_Subtraction(d1,local_18,(MethodInfo *)0x0);
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
  }
  dVar2 = System_TimeSpan__get_TotalMilliseconds((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
  iVar1 = -0x8000000000000000;
  if (dVar2 != INFINITY) {
    iVar1 = (long)dVar2;
  }
  return iVar1;
}

