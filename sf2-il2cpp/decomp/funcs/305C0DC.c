// ACHLOMELAJE$$CCHJLOEBOAI @ RVA 0x305C0DC

void ACHLOMELAJE__CCHJLOEBOAI
               (ACHLOMELAJE_o *__this,UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_Color__o *pSVar2;
  
  if ((DAT_04565e93 & 1) == 0) {
    FUN_01bab630(&StringLiteral_644);
    FUN_01bab630(&StringLiteral_8829);
    DAT_04565e93 = 1;
  }
  (__this->fields).OAFCNHEOKBM.fields.r = CJNHFNHJHPE.fields.r;
  (__this->fields).OAFCNHEOKBM.fields.g = CJNHFNHJHPE.fields.g;
  (__this->fields).OAFCNHEOKBM.fields.b = CJNHFNHJHPE.fields.b;
  (__this->fields).OAFCNHEOKBM.fields.a = CJNHFNHJHPE.fields.a;
  pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGBA(CJNHFNHJHPE,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_644,pSVar1,(MethodInfo *)0x0);
  KIHIPAJGNBF__MLDEHFFGJDP((KIHIPAJGNBF_o *)__this,StringLiteral_8829,pSVar1,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).NICMCKIBIAC;
  if (pSVar2 != (System_Action_Color__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0315c1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((__this->fields).OAFCNHEOKBM.fields.r,(__this->fields).OAFCNHEOKBM.fields.g,
               (__this->fields).OAFCNHEOKBM.fields.b,(__this->fields).OAFCNHEOKBM.fields.a,
               (pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    return;
  }
  return;
}

