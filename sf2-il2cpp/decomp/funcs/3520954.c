// HIJLPKACNPD.FADKADAEDJM$$KGGNIOMMILG @ RVA 0x3520954

void HIJLPKACNPD_FADKADAEDJM__KGGNIOMMILG
               (HIJLPKACNPD_FADKADAEDJM_o *__this,bool result,System_String_o *reason,
               MethodInfo *method)

{
  undefined8 *puVar1;
  System_String_o *JLNPKGGFFDD;
  System_Action_bool__o *pSVar2;
  HIJLPKACNPD_o *ODHBNGEGFCJ;
  
  if ((DAT_045689ba & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_11645);
    FUN_01bab630(&StringLiteral_6146);
    FUN_01bab630(&StringLiteral_11320);
    DAT_045689ba = 1;
  }
  ODHBNGEGFCJ = (__this->fields).__4__this;
  if (reason == (System_String_o *)0x0) {
    reason = string_TypeInfo->static_fields->Empty;
  }
  puVar1 = &StringLiteral_11645;
  if (!result) {
    puVar1 = &StringLiteral_6146;
  }
  JLNPKGGFFDD = System_String__Concat
                          (StringLiteral_11320,reason,StringLiteral_167,(System_String_o *)*puVar1,
                           (MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)ODHBNGEGFCJ,JLNPKGGFFDD,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).callback;
  if (pSVar2 != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03620a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,result,(pSVar2->fields).super.super.method);
    return;
  }
  return;
}

