// TypeDefIndex 3300
// Namespace: 
// [CompilerGenerated]
// private sealed class HIJLPKACNPD.FADKADAEDJM
// Fields:
//   public HIJLPKACNPD <>4__this; // 0x10
//   public Action<bool> callback; // 0x18

// ===== internal void FKFNJGDMLNG(bool success)  [RVA 0x3520A60]
// HIJLPKACNPD.FADKADAEDJM$$FKFNJGDMLNG @ RVA 0x3520A60

void HIJLPKACNPD_FADKADAEDJM__FKFNJGDMLNG
               (HIJLPKACNPD_FADKADAEDJM_o *__this,bool success,MethodInfo *method)

{
  MethodInfo *in_x3;
  
  if ((DAT_045689b8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_20563/*"result of retrying email scope"*/);
    DAT_045689b8 = 1;
  }
  HIJLPKACNPD_FADKADAEDJM__KGGNIOMMILG(__this,success,StringLiteral_20563/*"result of retrying email scope"*/,in_x3);
  return;
}


// ===== public void .ctor()  [RVA 0x352094C]
// HIJLPKACNPD.FADKADAEDJM$$.ctor @ RVA 0x352094C

void HIJLPKACNPD_FADKADAEDJM___ctor(HIJLPKACNPD_FADKADAEDJM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void CGEIBLPLJGH(object result)  [RVA 0x3520AB8]
// HIJLPKACNPD.FADKADAEDJM$$CGEIBLPLJGH @ RVA 0x3520AB8

void HIJLPKACNPD_FADKADAEDJM__CGEIBLPLJGH
               (HIJLPKACNPD_FADKADAEDJM_o *__this,Il2CppObject *result,MethodInfo *method)

{
  int *piVar1;
  System_Action_bool__o *BLMFLPJJMPF;
  MethodInfo *in_x3;
  HIJLPKACNPD_o *pHVar2;
  EINKKMIHCHI_o *__this_00;
  
  if ((DAT_045689b9 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_HIJLPKACNPD_FADKADAEDJM_FKFNJGDMLNG__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_21874/*"user canceled"*/);
    DAT_045689b9 = 1;
  }
  if (result != (Il2CppObject *)0x0) {
    if ((result->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(result);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if (*piVar1 != 1) {
      HIJLPKACNPD_FADKADAEDJM__KGGNIOMMILG(__this,false,StringLiteral_21874/*"user canceled"*/,in_x3);
      return;
    }
    pHVar2 = (__this->fields).__4__this;
    if (pHVar2 != (HIJLPKACNPD_o *)0x0) {
      __this_00 = (pHVar2->fields).KAKIHIMNDAE;
      BLMFLPJJMPF = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      if (__this_00 != (EINKKMIHCHI_o *)0x0) {
        EINKKMIHCHI__OGCCDLFHKLC(__this_00,BLMFLPJJMPF,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void KGGNIOMMILG(bool result, string reason)  [RVA 0x3520954]
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
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_11645/*"SUCCESS"*/);
    FUN_01bab630(&StringLiteral_6146/*"FAILED"*/);
    FUN_01bab630(&StringLiteral_11320/*"Resolve email scope finished: "*/);
    DAT_045689ba = 1;
  }
  ODHBNGEGFCJ = (__this->fields).__4__this;
  if (reason == (System_String_o *)0x0) {
    reason = string_TypeInfo->static_fields->Empty;
  }
  puVar1 = &StringLiteral_11645/*"SUCCESS"*/;
  if (!result) {
    puVar1 = &StringLiteral_6146/*"FAILED"*/;
  }
  JLNPKGGFFDD = System_String__Concat
                          (StringLiteral_11320/*"Resolve email scope finished: "*/,reason,StringLiteral_167/*" "*/,(System_String_o *)*puVar1,
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

