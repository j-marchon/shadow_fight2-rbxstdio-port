// BHNHMJNIAII.DCFNFMICOBD$$.ctor @ RVA 0x34B8F08

void BHNHMJNIAII_DCFNFMICOBD___ctor
               (BHNHMJNIAII_DCFNFMICOBD_o *__this,Il2CppObject *LPDENCPICOM,intptr_t IHJHOFMNAOA,
               MethodInfo *method)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  intptr_t iVar4;
  code *pcVar5;
  Il2CppObject *pIVar6;
  
  iVar4 = *(intptr_t *)(IHJHOFMNAOA + 8);
  (__this->fields).super.super.method = IHJHOFMNAOA;
  (__this->fields).super.super.method_ptr = iVar4;
  (__this->fields).super.super.m_target = LPDENCPICOM;
  thunk_FUN_01c20e04();
  cVar1 = *(char *)(IHJHOFMNAOA + 0x52);
  (__this->fields).super.super.method_code = (intptr_t)__this;
  uVar2 = FUN_01bab730(IHJHOFMNAOA);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\0') {
      if (LPDENCPICOM == (Il2CppObject *)0x0) {
        uVar3 = thunk_FUN_01be8674(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar3,0);
      }
      goto LAB_035b8f64;
    }
    pcVar5 = FUN_01b49600;
  }
  else {
    if (cVar1 != '\x01') {
LAB_035b8f64:
      pIVar6 = (__this->fields).super.super.m_target;
      (__this->fields).super.super.invoke_impl = (__this->fields).super.super.method_ptr;
      (__this->fields).super.super.method_code = (intptr_t)pIVar6;
      goto LAB_035b8f84;
    }
    pcVar5 = FUN_01b49620;
  }
  (__this->fields).super.super.invoke_impl = (intptr_t)pcVar5;
LAB_035b8f84:
  (__this->fields).super.super.extra_arg = (intptr_t)FUN_01b495b0;
  return;
}

