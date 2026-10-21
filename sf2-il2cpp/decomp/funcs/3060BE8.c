// ACHLOMELAJE$$KPJMMLLDPFO @ RVA 0x3060BE8

void ACHLOMELAJE__KPJMMLLDPFO(ACHLOMELAJE_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  System_Action_o *pSVar2;
  
  if ((DAT_04565ec4 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5622);
    FUN_01bab630(&StringLiteral_9830);
    FUN_01bab630(&StringLiteral_9795);
    DAT_04565ec4 = 1;
  }
  (__this->fields).IOHEOKOOJFA = CJNHFNHJHPE;
  puVar1 = &StringLiteral_9830;
  if (!CJNHFNHJHPE) {
    puVar1 = &StringLiteral_9795;
  }
  KIHIPAJGNBF__MLDEHFFGJDP
            ((KIHIPAJGNBF_o *)__this,StringLiteral_5622,(System_String_o *)*puVar1,(MethodInfo *)0x0
            );
  pSVar2 = (__this->fields).IIDMBPKLJME;
  if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03160c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    return;
  }
  return;
}

