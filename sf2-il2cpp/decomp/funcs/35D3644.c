// GGLDGAAPKCF$$NADBOGJANBC @ RVA 0x35D3644

bool GGLDGAAPKCF__NADBOGJANBC(GGLDGAAPKCF_o *__this,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this_00;
  UnityEngine_Object_o *x;
  
  if ((DAT_04568feb & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidSeasonFinishDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568feb = 1;
  }
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    x = (UnityEngine_Object_o *)
        GCIFMNHADDF__BFJGHKKGOJC<object>
                  (__this_00,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidSeasonFinishDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

