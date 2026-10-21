// DOJKMMDFBCJ.EAMEJLKAHFI$$.ctor @ RVA 0x3504CD0

void DOJKMMDFBCJ_EAMEJLKAHFI___ctor
               (DOJKMMDFBCJ_EAMEJLKAHFI_o *__this,Il2CppObject *LPDENCPICOM,intptr_t IHJHOFMNAOA,
               MethodInfo *method)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  intptr_t iVar5;
  code *pcVar6;
  Il2CppObject *pIVar7;
  
  iVar5 = *(intptr_t *)(IHJHOFMNAOA + 8);
  (__this->fields).super.super.method = IHJHOFMNAOA;
  (__this->fields).super.super.method_ptr = iVar5;
  (__this->fields).super.super.m_target = LPDENCPICOM;
  thunk_FUN_01c20e04();
  cVar1 = *(char *)(IHJHOFMNAOA + 0x52);
  (__this->fields).super.super.method_code = (intptr_t)__this;
  uVar2 = FUN_01bab730(IHJHOFMNAOA);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\0') {
      if (LPDENCPICOM == (Il2CppObject *)0x0) {
        uVar4 = thunk_FUN_01be8674(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      goto LAB_03604d2c;
    }
    if ((__this->fields).super.super.method_is_virtual == false) {
      pcVar6 = FUN_01b497f0;
    }
    else {
      uVar2 = thunk_FUN_01bf510c(IHJHOFMNAOA);
      uVar3 = FUN_01babcbc(IHJHOFMNAOA);
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          pcVar6 = FUN_01b49820;
        }
        else {
          pcVar6 = FUN_01b4984c;
        }
      }
      else if ((uVar3 & 1) == 0) {
        pcVar6 = FUN_01b498d0;
      }
      else {
        pcVar6 = FUN_01b4990c;
      }
    }
  }
  else {
    if (cVar1 != '\x01') {
LAB_03604d2c:
      pIVar7 = (__this->fields).super.super.m_target;
      (__this->fields).super.super.invoke_impl = (__this->fields).super.super.method_ptr;
      (__this->fields).super.super.method_code = (intptr_t)pIVar7;
      goto LAB_03604da4;
    }
    pcVar6 = FUN_01b49810;
  }
  (__this->fields).super.super.invoke_impl = (intptr_t)pcVar6;
LAB_03604da4:
  (__this->fields).super.super.extra_arg = (intptr_t)FUN_01b497a8;
  return;
}

