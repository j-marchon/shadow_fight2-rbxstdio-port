// JJPNLEPEAFM$$OCOOMCMIGJL @ RVA 0x35345EC

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__OCOOMCMIGJL(Il2CppObject *HBHPFKJMGCK,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  UnityEngine_Object_o *exists;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  undefined8 uVar3;
  UnityEngine_Object_c *pUVar4;
  
  if ((DAT_04568a7d & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<CreateClanRaidDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a7d = 1;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (GCIFMNHADDF_o *)0x0) {
    exists = (UnityEngine_Object_o *)
             GCIFMNHADDF__BFJGHKKGOJC<object>
                       (__this,Method_GCIFMNHADDF_BFJGHKKGOJC<CreateClanRaidDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if (bVar1) {
      if (exists == (UnityEngine_Object_o *)0x0) goto LAB_036346b8;
      pUVar4 = exists->klass;
      uVar3._0_4_ = pUVar4[1]._2.static_fields_size;
      uVar3._4_4_ = pUVar4[1]._2.thread_static_fields_size;
      (**(code **)&pUVar4[1]._2.element_size)(exists,uVar3);
    }
    pNVar2 = GCIFMNHADDF__ACDDKABEBAP(0xf0,HBHPFKJMGCK,(MethodInfo *)0x0);
    KFCFGKEHPNK__EECLBEHBHFI(4,(MethodInfo *)0x0);
    return pNVar2;
  }
LAB_036346b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

