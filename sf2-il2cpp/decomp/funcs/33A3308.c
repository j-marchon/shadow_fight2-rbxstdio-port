// HCIAFAIBMAL$$KGBLJKOFFIF @ RVA 0x33A3308

void HCIAFAIBMAL__KGBLJKOFFIF(MethodInfo *method)

{
  int64_t iVar1;
  
  if ((DAT_04567ccb & 1) == 0) {
    FUN_01bab630(&System_GC_TypeInfo);
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
                    /* try { // try from 034a3340 to 035a3353 has its CatchHandler @ 034a35fc */
    DAT_04567ccb = 1;
  }
  if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034a3360 to 035a3373 has its CatchHandler @ 034a35f8 */
  System_GC__Collect((MethodInfo *)0x0);
  iVar1 = System_GC__GetTotalMemory(true,(MethodInfo *)0x0);
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034a3380 to 035a338b has its CatchHandler @ 034a3540 */
    thunk_FUN_01ba7564(HCIAFAIBMAL_TypeInfo);
  }
  HCIAFAIBMAL_TypeInfo->static_fields->KIHALELCOMO = iVar1;
  return;
}

