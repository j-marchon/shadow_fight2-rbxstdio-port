// PNCLBBMPHKB$$CPKALHFIAPN @ RVA 0x3565F8C

void PNCLBBMPHKB__CPKALHFIAPN(System_String_o *FEPLAGOGJNL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568bf7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&PNCLBBMPHKB_TypeInfo);
    DAT_04568bf7 = 1;
    method = extraout_x1;
  }
  if ((PNCLBBMPHKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNCLBBMPHKB_TypeInfo,method);
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           PNCLBBMPHKB_TypeInfo->static_fields->JNHCNDDALMK;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Add
                      (__this,(Il2CppObject *)FEPLAGOGJNL,
                       Method_System_Collections_Generic_HashSet<string>_Add__);
    if (bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log((Il2CppObject *)FEPLAGOGJNL,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

