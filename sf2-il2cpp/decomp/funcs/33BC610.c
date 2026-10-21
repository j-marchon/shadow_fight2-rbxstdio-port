// KHFOHGKPBFN$$BFCCEGGDJEF @ RVA 0x33BC610

void KHFOHGKPBFN__BFCCEGGDJEF(KHFOHGKPBFN_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  bool_conflict bVar1;
  TapjoyUnity_TJPlacement_o *__this_00;
  System_Action_MPAKDCNMLEG__o *pSVar2;
  
  bVar1 = (__this->fields).BIMDPCEEHJD;
  (__this->fields).super.JBNGADJBDHB = BKFOLMBMFNP;
  if ((bVar1 != false) &&
     (__this_00 = (__this->fields).ONHDDHPECEL, __this_00 != (TapjoyUnity_TJPlacement_o *)0x0)) {
    TapjoyUnity_TJPlacement__ShowContent(__this_00,(MethodInfo *)0x0);
    return;
  }
  pSVar2 = (__this->fields).super.NBEAOEDKFLO;
  if (pSVar2 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034bc650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,BKFOLMBMFNP,
               (pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

