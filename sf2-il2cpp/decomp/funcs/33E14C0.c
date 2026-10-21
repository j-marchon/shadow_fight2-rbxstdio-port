// HDBNGIBFEBA$$.ctor @ RVA 0x33E14C0

void HDBNGIBFEBA___ctor(HDBNGIBFEBA_o *__this,HDBNGIBFEBA_o *IBKIPBJJCPG,MethodInfo *method)

{
  HEFOANCOHDC_o **ppHVar1;
  
  (__this->fields).BEMCNJHEADJ = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (HDBNGIBFEBA_o *)0x0) {
    (__this->fields).GBBHFPBFOPI = (IBKIPBJJCPG->fields).GBBHFPBFOPI;
    (__this->fields).BEMCNJHEADJ = (IBKIPBJJCPG->fields).BEMCNJHEADJ;
    ppHVar1 = &(__this->fields)._MEFGNAIILBJ_k__BackingField;
    *ppHVar1 = (IBKIPBJJCPG->fields)._MEFGNAIILBJ_k__BackingField;
    thunk_FUN_01c20e04(ppHVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

