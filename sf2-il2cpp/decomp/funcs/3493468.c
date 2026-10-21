// FLBBKMOHIOG$$JCLBGAPJIFP @ RVA 0x3493468

PGICCMFLDPI_o * FLBBKMOHIOG__JCLBGAPJIFP(FLBBKMOHIOG_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  PGICCMFLDPI_o *__this_00;
  MethodInfo *extraout_x1;
  double dVar2;
  System_DateTime_Fields local_38;
  System_TimeSpan_Fields local_30;
  System_DateTime_Fields local_28;
  
  if ((DAT_0456843b & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_0456843b = 1;
    method = extraout_x1;
  }
  local_30._ticks = 0;
  __this_00 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo,method);
  PGICCMFLDPI___ctor(__this_00,(MethodInfo *)0x0);
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_28._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
  local_38._dateData = 0;
  System_DateTime___ctor((System_DateTime_o)&local_38,0x7b2,1,1,(MethodInfo *)0x0);
  local_30._ticks =
       (int64_t)System_DateTime__Subtract
                          ((System_DateTime_o)&local_28,(System_DateTime_o)local_38._dateData,
                           (MethodInfo *)0x0);
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
  }
  dVar2 = System_TimeSpan__get_TotalMilliseconds((System_TimeSpan_o)&local_30,(MethodInfo *)0x0);
  if (__this_00 != (PGICCMFLDPI_o *)0x0) {
    iVar1 = -0x8000000000000000;
    if (dVar2 != INFINITY) {
      iVar1 = (long)dVar2;
    }
    (__this_00->fields).GDKPGIBMFPA = iVar1;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

