// HCIAFAIBMAL$$GHPDCPMLHFJ @ RVA 0x33A322C

double HCIAFAIBMAL__GHPDCPMLHFJ(MethodInfo *method)

{
  System_DateTime_o d1;
  double dVar1;
  System_TimeSpan_Fields local_28;
  
  if ((DAT_04567ccd & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04567ccd = 1;
  }
  local_28._ticks = 0;
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034a32b4 to 035a333f has its CatchHandler @ 034a32b4
                       catch() { ... } // from try @ 034a32b4 with catch @ 034a32b4
                       catch() { ... } // from try @ 034a3488 with catch @ 034a32b4
                       catch() { ... } // from try @ 034a3538 with catch @ 034a32b4
                       catch() { ... } // from try @ 034a35e8 with catch @ 034a32b4
                       catch() { ... } // from try @ 034a3690 with catch @ 034a32b4
                       catch() { ... } // from try @ 034a3730 with catch @ 034a32b4 */
    thunk_FUN_01ba7564(HCIAFAIBMAL_TypeInfo);
  }
  local_28._ticks =
       (int64_t)System_DateTime__op_Subtraction
                          (d1,(System_DateTime_o)
                              (HCIAFAIBMAL_TypeInfo->static_fields->JCKCKDLGKIG).fields._dateData,
                           (MethodInfo *)0x0);
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
  }
  dVar1 = System_TimeSpan__get_TotalMilliseconds((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
  return dVar1;
}

