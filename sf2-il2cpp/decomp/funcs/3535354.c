// JJPNLEPEAFM$$PIAIOODGOCG @ RVA 0x3535354

bool JJPNLEPEAFM__PIAIOODGOCG(MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  UnityEngine_Object_o *exists;
  
  if ((DAT_04568a82 & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a82 = 1;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (GCIFMNHADDF_o *)0x0) {
    exists = (UnityEngine_Object_o *)
             GCIFMNHADDF__BFJGHKKGOJC<object>
                       (__this,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

