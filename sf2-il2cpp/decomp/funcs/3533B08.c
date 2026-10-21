// JJPNLEPEAFM$$DAKAIKCCOKD @ RVA 0x3533B08

void JJPNLEPEAFM__DAKAIKCCOKD(MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  UnityEngine_Object_o *x;
  undefined8 uVar2;
  UnityEngine_Object_c *pUVar3;
  
  if ((DAT_04568a75 & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a75 = 1;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (GCIFMNHADDF_o *)0x0) {
    x = (UnityEngine_Object_o *)
        GCIFMNHADDF__BFJGHKKGOJC<object>
                  (__this,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      pUVar3 = x->klass;
      uVar2._0_4_ = pUVar3[1]._2.static_fields_size;
      uVar2._4_4_ = pUVar3[1]._2.thread_static_fields_size;
                    /* WARNING: Could not recover jumptable at 0x03633ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)&pUVar3[1]._2.element_size)(x,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

