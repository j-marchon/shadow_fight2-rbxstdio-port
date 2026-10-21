// JMDPBFOCHHP.EJICJNOEGGE$$LLDDCNHNPIA @ RVA 0x2FFB71C

bool JMDPBFOCHHP_EJICJNOEGGE__LLDDCNHNPIA
               (JMDPBFOCHHP_EJICJNOEGGE_o *__this,System_String_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if ((DAT_04565ad9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    DAT_04565ad9 = 1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).LIBINPPOOGI;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this_00,(Il2CppObject *)IKKAMAMLIKA,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    return (bool)(~bVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

