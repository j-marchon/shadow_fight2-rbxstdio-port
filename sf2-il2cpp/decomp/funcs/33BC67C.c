// KHFOHGKPBFN$$NEPFHCEJIOI @ RVA 0x33BC67C

void KHFOHGKPBFN__NEPFHCEJIOI
               (KHFOHGKPBFN_o *__this,TapjoyUnity_TJPlacement_o *APCOBBHIFAF,
               System_String_o *GPJHCIPBFOG,MethodInfo *method)

{
  bool bVar1;
  System_Action_MPAKDCNMLEG__o *pSVar2;
  
  if (APCOBBHIFAF != (TapjoyUnity_TJPlacement_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((APCOBBHIFAF->fields)._placementName,
                       (__this->fields).super._DGPEEKHPKHO_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pSVar2 = (__this->fields).super.HABJODEHCNL;
    (__this->fields).BIMDPCEEHJD = false;
    if (pSVar2 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034bc6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
                 (pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

