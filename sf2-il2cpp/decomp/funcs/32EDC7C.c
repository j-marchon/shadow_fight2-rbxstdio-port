// HBHNJNHNFHP$$BFCCEGGDJEF @ RVA 0x32EDC7C

void HBHNJNHNFHP__BFCCEGGDJEF(HBHNJNHNFHP_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  ulong uVar1;
  HBHNJNHNFHP_c *pHVar2;
  System_Action_MPAKDCNMLEG__o *pSVar3;
  
  pHVar2 = __this->klass;
  (__this->fields).super.JBNGADJBDHB = BKFOLMBMFNP;
  uVar1 = (*(pHVar2->vtable)._6_BPHNBPHFDLM.methodPtr)
                    (__this,(pHVar2->vtable)._6_BPHNBPHFDLM.method);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x033edca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._11_DDBOCELCFAL.methodPtr)
              (__this,(__this->klass->vtable)._11_DDBOCELCFAL.method);
    return;
  }
  pSVar3 = (__this->fields).super.NBEAOEDKFLO;
  if (pSVar3 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033edcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
               (pSVar3->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

