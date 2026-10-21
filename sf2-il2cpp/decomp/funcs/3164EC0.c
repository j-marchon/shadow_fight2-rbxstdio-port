// GALHNMPIEHA$$HOPNFIPNLHB @ RVA 0x3164EC0

void GALHNMPIEHA__HOPNFIPNLHB(GALHNMPIEHA_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if ((-1 < CJNHFNHJHPE) && ((__this->fields)._BADKBIBHMEJ_k__BackingField != CJNHFNHJHPE)) {
    (__this->fields)._BADKBIBHMEJ_k__BackingField = CJNHFNHJHPE;
    GALHNMPIEHA__JLEKFKKNFPB(CJNHFNHJHPE,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
    pSVar1 = (__this->fields).NGKIIKLBJLE;
    if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03264f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

