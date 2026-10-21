// MatchingDialog$$OMECKMHLPPP @ RVA 0x342D49C

void MatchingDialog__OMECKMHLPPP
               (MatchingDialog_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (bVar1) {
    if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField != false) {
      return;
    }
    MatchingDialog__DAKEBOMPALG(__this,method_00);
    EDFDANKEBGF__KDKLIPFALGJ((MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0352d4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
    return;
  }
  MatchingDialog__DAPAJLBAJPJ(__this,method_00);
  return;
}

