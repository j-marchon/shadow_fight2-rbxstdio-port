// FBAABPGMPCC.MAJLIEBBIJM$$EOMHBOCLDAD @ RVA 0x31AD624

void FBAABPGMPCC_MAJLIEBBIJM__EOMHBOCLDAD
               (FBAABPGMPCC_MAJLIEBBIJM_o *__this,KHODJHFHCDE_o *result,MethodInfo *method)

{
  System_Action_KHODJHFHCDE__o *pSVar1;
  
  pSVar1 = (__this->fields).callback;
  if (pSVar1 != (System_Action_KHODJHFHCDE__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032ad638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,result,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}

