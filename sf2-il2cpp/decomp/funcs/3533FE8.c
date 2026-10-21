// JJPNLEPEAFM$$ONJPOCDFDGK @ RVA 0x3533FE8

void JJPNLEPEAFM__ONJPOCDFDGK(GOLIJCLCCBA_o *BHHMMBFKGGN,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  UnityEngine_Object_o *exists;
  undefined8 uVar2;
  UnityEngine_Object_c *pUVar3;
  
  if ((DAT_04568a78 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<WebViewDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_13934);
    DAT_04568a78 = 1;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (GCIFMNHADDF_o *)0x0) {
    exists = (UnityEngine_Object_o *)
             GCIFMNHADDF__BFJGHKKGOJC<object>
                       (__this,Method_GCIFMNHADDF_BFJGHKKGOJC<WebViewDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_13934,(MethodInfo *)0x0);
      if (exists == (UnityEngine_Object_o *)0x0) goto LAB_036340e0;
      pUVar3 = exists->klass;
      uVar2._0_4_ = pUVar3[1]._2.static_fields_size;
      uVar2._4_4_ = pUVar3[1]._2.thread_static_fields_size;
      (**(code **)&pUVar3[1]._2.element_size)(exists,uVar2);
    }
    GCIFMNHADDF__ACDDKABEBAP(0x186,(Il2CppObject *)BHHMMBFKGGN,(MethodInfo *)0x0);
    return;
  }
LAB_036340e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

