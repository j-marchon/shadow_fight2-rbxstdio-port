// ONEDJCACCGM$$DKCJNFMABGO @ RVA 0x31DDC50

int32_t ONEDJCACCGM__DKCJNFMABGO(MethodInfo *method)

{
  int32_t iVar1;
  double dVar2;
  System_DateTime_Fields local_30;
  System_TimeSpan_Fields local_28;
  System_DateTime_Fields local_18;
  
  if ((DAT_04566d32 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04566d32 = 1;
  }
  local_28._ticks = 0;
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_18._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
  local_30._dateData = 0;
  System_DateTime___ctor((System_DateTime_o)&local_30,0x7b2,1,1,(MethodInfo *)0x0);
  local_28._ticks =
       (int64_t)System_DateTime__Subtract
                          ((System_DateTime_o)&local_18,(System_DateTime_o)local_30._dateData,
                           (MethodInfo *)0x0);
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
  }
  dVar2 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
  iVar1 = -0x80000000;
  if (dVar2 != INFINITY) {
    iVar1 = (int)dVar2;
  }
  return iVar1;
}

