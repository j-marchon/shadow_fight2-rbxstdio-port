// JJPNLEPEAFM$$JHMPDKFFLPN @ RVA 0x35341D4

void JJPNLEPEAFM__JHMPDKFFLPN
               (int32_t CPECAEHDDDB,int32_t CJNHFNHJHPE,int64_t FMAMNKBINOG,
               System_Action_object__o *IELDNEAAPBE,int64_t OHLGEMOFODG,System_String_o *LFKENPEPPAL
               ,bool AJJPMOMMIGJ,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  UnityEngine_Object_o *x;
  System_String_o *message;
  KIDHEMFNDEK_o *__this_00;
  
  if ((DAT_04568a7b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<TradeDialog>__);
    FUN_01bab630(&KIDHEMFNDEK_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_StackTraceUtility_TypeInfo);
    FUN_01bab630(&StringLiteral_13933);
    DAT_04568a7b = 1;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this == (GCIFMNHADDF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  x = (UnityEngine_Object_o *)
      GCIFMNHADDF__BFJGHKKGOJC<object>(__this,Method_GCIFMNHADDF_BFJGHKKGOJC<TradeDialog>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_13933,(MethodInfo *)0x0);
    if ((UnityEngine_StackTraceUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    message = UnityEngine_StackTraceUtility__ExtractStackTrace((MethodInfo *)0x0);
    UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0363434c to 03734373 has its CatchHandler @ 03634504 */
    MGNPHCAAEIO__EBPPLEEDNPD(false,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (KIDHEMFNDEK_o *)thunk_FUN_01bda818(KIDHEMFNDEK_TypeInfo);
                    /* try { // try from 03634384 to 03734393 has its CatchHandler @ 0363450c */
  KIDHEMFNDEK___ctor(__this_00,CPECAEHDDDB,CJNHFNHJHPE,FMAMNKBINOG,IELDNEAAPBE,OHLGEMOFODG,
                     LFKENPEPPAL,AJJPMOMMIGJ,(MethodInfo *)0x0);
                    /* try { // try from 036343a0 to 037343a7 has its CatchHandler @ 03634500 */
  GCIFMNHADDF__ACDDKABEBAP(0x15e,(Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}

