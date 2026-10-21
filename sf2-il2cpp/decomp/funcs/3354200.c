// PFOMHOLCODE.DIPFPAJCOCN$$NKEALFOJGNC @ RVA 0x3354200

void PFOMHOLCODE_DIPFPAJCOCN__NKEALFOJGNC(PFOMHOLCODE_DIPFPAJCOCN_o *__this,MethodInfo *method)

{
  System_Action_int__o *pSVar1;
  
  pSVar1 = (__this->fields).p_callBack;
  if (pSVar1 != (System_Action_int__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03454218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,0,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}

