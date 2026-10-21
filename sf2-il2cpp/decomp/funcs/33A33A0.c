// HCIAFAIBMAL$$OKBBEOLOPKL @ RVA 0x33A33A0

void HCIAFAIBMAL__OKBBEOLOPKL(System_String_o *IDABBGFDAPE,MethodInfo *method)

{
  System_String_o *arg0;
  int64_t iVar1;
  Il2CppObject *arg1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  float local_34;
  
  if ((DAT_04567ccf & 1) == 0) {
                    /* try { // try from 034a33c8 to 035a33ef has its CatchHandler @ 034a360c */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_GC_TypeInfo);
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_2088);
    FUN_01bab630(&StringLiteral_1121);
    FUN_01bab630(&StringLiteral_8948);
    FUN_01bab630(&StringLiteral_981);
    DAT_04567ccf = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034a3438 to 035a345f has its CatchHandler @ 034a3600 */
  if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_GC_TypeInfo,method);
  }
  System_GC__Collect((MethodInfo *)0x0);
  pSVar2 = StringLiteral_8948;
  arg0 = StringLiteral_2088;
  if (IDABBGFDAPE != (System_String_o *)0x0) {
    arg0 = System_String__Concat(StringLiteral_981,IDABBGFDAPE,StringLiteral_1121,(MethodInfo *)0x0)
    ;
                    /* try { // try from 034a3480 to 035a3487 has its CatchHandler @ 034a3538 */
  }
  if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = System_GC__GetTotalMemory(true,(MethodInfo *)0x0);
  if ((HCIAFAIBMAL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HCIAFAIBMAL_TypeInfo);
  }
  local_34 = (float)(iVar1 - HCIAFAIBMAL_TypeInfo->static_fields->KIHALELCOMO) * 9.536743e-07;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_34);
  pSVar2 = System_String__Format(pSVar2,(Il2CppObject *)arg0,arg1,(MethodInfo *)0x0);
                    /* try { // try from 034a3520 to 035a3523 has its CatchHandler @ 034a3540 */
                    /* try { // try from 034a3524 to 035a352b has its CatchHandler @ 034a3600 */
                    /* try { // try from 034a352c to 035a3533 has its CatchHandler @ 034a360c */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034a3534 to 035a3537 has its CatchHandler @ 034a353c */
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* catch() { ... } // from try @ 034a3480 with catch @ 034a3538
                       try { // try from 034a3538 to 035a355f has its CatchHandler @ 034a32b4 */
                    /* catch() { ... } // from try @ 034a3534 with catch @ 034a353c */
                    /* catch() { ... } // from try @ 034a3380 with catch @ 034a3540
                       catch() { ... } // from try @ 034a3520 with catch @ 034a3540 */
  UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  return;
}

