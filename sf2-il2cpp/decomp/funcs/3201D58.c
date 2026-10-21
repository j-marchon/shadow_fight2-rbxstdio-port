// NLPJLHOEAOE$$HNGHAMGFMCI @ RVA 0x3201D58

bool NLPJLHOEAOE__HNGHAMGFMCI(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_PaymentUI_o *__this;
  long lVar2;
  ulong uVar3;
  MethodInfo *extraout_x1;
  System_Nullable_ObscuredLong__Fields local_80;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((DAT_04566e4b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    FUN_01bab630(&StringLiteral_10193);
    DAT_04566e4b = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  __this = (Nekki_SF2_GUI_Common_PaymentUI_o *)
           Nekki_SF2_GUI_UIModule__GetModule<object>
                     (Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    local_30 = 0;
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    if (__this == (Nekki_SF2_GUI_Common_PaymentUI_o *)0x0) goto LAB_03301ecc;
    local_80.value.fields.currentCryptoKey = 0;
    local_80.hasValue = false;
    local_80._1_7_ = 0;
    local_80.value.fields.fakeValue = 0;
    local_80.value.fields.hiddenValue = 0;
    local_80.value.fields.fakeValueActive = false;
    local_80.value.fields.inited = false;
    local_80.value.fields._26_6_ = 0;
    Nekki_SF2_GUI_Common_PaymentUI__MakePurchase
              (__this,IKKAMAMLIKA,(System_Nullable_ObscuredLong__o *)&local_80,(MethodInfo *)0x0);
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10193,(MethodInfo *)0x0);
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    lVar2 = (*(IKKAMAMLIKA->klass->vtable)._6_PDECHBMCBDB.methodPtr)
                      (IKKAMAMLIKA,0,(IKKAMAMLIKA->klass->vtable)._6_PDECHBMCBDB.method);
    uVar3 = (*(IKKAMAMLIKA->klass->vtable)._4_OIEONLNFHKC.methodPtr)
                      (IKKAMAMLIKA,(IKKAMAMLIKA->klass->vtable)._4_OIEONLNFHKC.method);
    if ((lVar2 != 0) && ((uVar3 & 1) != 0)) {
      PCOEHCPGBBG__BDLEIEHBFAD(*(System_String_o **)(lVar2 + 0x10),(MethodInfo *)0x0);
    }
    return true;
  }
LAB_03301ecc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

