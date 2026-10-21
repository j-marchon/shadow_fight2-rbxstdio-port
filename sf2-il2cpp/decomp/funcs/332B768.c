// HPPHKOJNEPB$$NDLLCPOBDGE @ RVA 0x332B768

void HPPHKOJNEPB__NDLLCPOBDGE(HPPHKOJNEPB_o *__this,System_Action_o *CPECAEHDDDB,MethodInfo *method)

{
  if (CPECAEHDDDB != (System_Action_o *)0x0) {
    (*(code *)(CPECAEHDDDB->fields).super.super.invoke_impl)
              ((CPECAEHDDDB->fields).super.super.method_code,
               (CPECAEHDDDB->fields).super.super.method);
    (__this->fields)._NBJMEKEPNBD_k__BackingField = true;
                    /* WARNING: Could not recover jumptable at 0x0342b79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._7_JCPHPODEADJ.methodPtr)
              (__this,(__this->klass->vtable)._7_JCPHPODEADJ.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

