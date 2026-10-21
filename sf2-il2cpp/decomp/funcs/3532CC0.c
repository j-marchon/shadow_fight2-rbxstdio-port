// JJPNLEPEAFM$$HOILBJHCLJG @ RVA 0x3532CC0

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__HOILBJHCLJG(MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  UnityEngine_Object_o *exists;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  undefined8 uVar3;
  UnityEngine_Object_c *pUVar4;
  
  if ((DAT_04568a6a & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<CreateClanDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a6a = 1;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (GCIFMNHADDF_o *)0x0) {
    exists = (UnityEngine_Object_o *)
             GCIFMNHADDF__BFJGHKKGOJC<object>
                       (__this,Method_GCIFMNHADDF_BFJGHKKGOJC<CreateClanDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if (bVar1) {
      if (exists == (UnityEngine_Object_o *)0x0) goto LAB_03632d68;
      pUVar4 = exists->klass;
      uVar3._0_4_ = pUVar4[1]._2.static_fields_size;
      uVar3._4_4_ = pUVar4[1]._2.thread_static_fields_size;
      (**(code **)&pUVar4[1]._2.element_size)(exists,uVar3);
    }
    pNVar2 = GCIFMNHADDF__ACDDKABEBAP(0x14,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    return pNVar2;
  }
LAB_03632d68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

