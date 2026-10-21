// AJMOIOIBPGP$$HFHBIDELOIC @ RVA 0x3275F54

bool AJMOIOIBPGP__HFHBIDELOIC(AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_00;
  System_Nullable_ObscuredLong__Fields local_a0;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_04567249 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    FUN_01bab630(&StringLiteral_3623);
    FUN_01bab630(&StringLiteral_3624);
    DAT_04567249 = 1;
  }
  if (NLFMDIGKNGP != (OPNMPAJKDMI_o *)0x0) {
    pSVar2 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat(StringLiteral_3623,pSVar2,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = (Nekki_SF2_GUI_Common_PaymentUI_o *)
                Nekki_SF2_GUI_UIModule__GetModule<object>
                          (Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_3624,(MethodInfo *)0x0);
    }
    else {
      local_50 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      if (__this_00 == (Nekki_SF2_GUI_Common_PaymentUI_o *)0x0) goto LAB_033760cc;
      local_a0.value.fields.currentCryptoKey = 0;
      local_a0.hasValue = false;
      local_a0._1_7_ = 0;
      local_a0.value.fields.fakeValue = 0;
      local_a0.value.fields.hiddenValue = 0;
      local_a0.value.fields.fakeValueActive = false;
      local_a0.value.fields.inited = false;
      local_a0.value.fields._26_6_ = 0;
      Nekki_SF2_GUI_Common_PaymentUI__MakePurchase
                (__this_00,(NLFMDIGKNGP->fields)._BODPEKDENEG_k__BackingField,
                 (System_Nullable_ObscuredLong__o *)&local_a0,(MethodInfo *)0x0);
    }
    return (bool)(~bVar1 & 1);
  }
LAB_033760cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

