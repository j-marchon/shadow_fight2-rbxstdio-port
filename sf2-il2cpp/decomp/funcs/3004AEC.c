// BLEFKMLPAGC$$GIMAJOGGBHM @ RVA 0x3004AEC

void BLEFKMLPAGC__GIMAJOGGBHM(BLEFKMLPAGC_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if ((DAT_04565b41 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5422);
    DAT_04565b41 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).BIFPFOCAPFD;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03104b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}

